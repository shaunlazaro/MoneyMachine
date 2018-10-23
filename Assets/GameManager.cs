using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour {

    public GameObject Title;
    private Text TitleText;

    public GameObject printer;
    public GameObject printerPopUpLocation;
    public GameObject bank;
    public GameObject bankPopUpLocation;
    public GameObject FadeText;

    public long coins;
    public GameObject ClickButton;
    public GameObject CounterObject;
    private Text CounterText;
    public float tickSpeed;
    public float tickFactor; //Multiplies tick worth, used to keep game balanced but change tick speed.
    private float tickMultiplier; // Not used yet, probably will be used to create upgrades.

    public long[] mileStones;
    public bool[] mileStonesAchieved;


    public GameObject AutoClickPurchaseButton;
    public GameObject AutoClickPurchaseText;
    private Text AutoPurchaseText;
    public GameObject AutoClickQuantity;
    private Text AutoClickQuantityText;
    public long autoClickers = 0;

    //y = 100(a^(hx))
    // a - 2
    // h - 0.5
    // x - autoclickers
    public long AutoClickerCost()
    {
        return (long)(100 * Mathf.Pow((float)2,(float)autoClickers/(float)2));
    }

    public GameObject AutoClickUpgradeButton;
    public GameObject AutoClickUpgradeTextObject;
    private Text AutoClickUpgradeText;
    public GameObject AutoClickUpgradeQuantityTextObject;
    private Text AutoClickUpgradeQuantityText;
    public long autoClickerUpgradeLevel = 1;

    // y = 100*3^x
    // x = upgradeLevel
    public long AutoClickerUpgradeCost()
    {
        return (long)(100.0 * Math.Pow((float) 2.8, (float) autoClickerUpgradeLevel));
    }

    public GameObject PrinterUpgradeButton;
    public GameObject PrinterUpgradeCostObject;
    private Text PrinterUpgradeCostText;
    public GameObject PrinterUpgradeQuantityTextObject;
    private Text PrinterUpgradeQuantityText;
    public long printerUpgradeLevel = 1;

    // y= 100*10^x
    public long PrinterUpgradeCost()
    {
        return 50* (long)Math.Pow(10f, (float)printerUpgradeLevel);
    }

    public GameObject IncomeSecondObject;
    private Text IncomeSecondText;

    void Start()
    {
        TitleText = Title.GetComponent<Text>();
        CounterText = CounterObject.GetComponent<Text>();
        AutoPurchaseText = AutoClickPurchaseText.GetComponent<Text>();
        AutoClickQuantityText = AutoClickQuantity.GetComponent<Text>();
        AutoClickUpgradeText = AutoClickUpgradeTextObject.GetComponent<Text>();
        AutoClickUpgradeQuantityText = AutoClickUpgradeQuantityTextObject.GetComponent<Text>();
        PrinterUpgradeCostText = PrinterUpgradeCostObject.GetComponent<Text>();
        PrinterUpgradeQuantityText = PrinterUpgradeQuantityTextObject.GetComponent<Text>();
        IncomeSecondText = IncomeSecondObject.GetComponent<Text>();
        StartCoroutine(AutoClickerCycle());
    }
   
    #region ButtonClicks
    public void CoinClick()
    {
        coins+=CoinClickValue();
        PopUpNumbers(Color.yellow, Convert.ToString(CoinClickValue()),
            printerPopUpLocation, new Vector3(1.2f,1.2f,1.2f));
        UpdateUI();
        MileStoneCheck();
    }
    public long CoinClickValue()
    {
        return (long)Math.Pow(8f, (float)printerUpgradeLevel-1f);
    }
    public void PrinterEnlarge()
    {
        printer.GetComponent<RectTransform>().localScale = new Vector3(1.1f, 1.1f, 1.1f);
    }
    public void PrinterShrink()
    {
        printer.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
    }

    public void AttemptPurchase()
    {
        if(coins >= AutoClickerCost())
        {
            coins -= AutoClickerCost();
            autoClickers++;
            UpdateUI();
        }
        else
        {
            UIDisplayMessage("Not enough money for investment!");
        }
    }

    public void AttemptUpgrade()
    {
        if(coins >= AutoClickerUpgradeCost())
        {
            coins -= AutoClickerUpgradeCost();
            autoClickerUpgradeLevel++;
            UpdateUI();
        }
        else
        {
            UIDisplayMessage("Not enough money for upgrade!");
        }
    }

    public void AttemptClickUpgrade()
    {
        if(coins >= PrinterUpgradeCost())
        {
            coins -= PrinterUpgradeCost();
            printerUpgradeLevel++;
            UpdateUI();
        }
        else
        {
            UIDisplayMessage("Not enough money for printer upgrade!");
        }
    }
    #endregion

    public IEnumerator AutoClickerCycle()
    {
        while (true) {
            coins += PassiveIncomePerTick();
            UpdateUI();
            Debug.Log("Cycle!");
            if (autoClickers > 0)
            {
                bank.GetComponent<RectTransform>().localScale = new Vector3(1.1f, 1.1f, 1.1f);
                PopUpNumbers(Color.green,
                    Convert.ToString(PassiveIncomePerTick()),
                    bankPopUpLocation, new Vector3(1.4f, 1.4f, 1.4f));
                yield return new WaitForSeconds(tickSpeed / 5);
                bank.GetComponent<RectTransform>().localScale = new Vector3(1f, 1f, 1f);
                yield return new WaitForSeconds(4 * (tickSpeed / 5));
            }
            else
                yield return new WaitForSeconds(tickSpeed);
        }
    }
    public long PassiveIncomePerTick()
    {
        return (long)tickFactor * (long)((float)autoClickers * 
            Math.Pow((float)1.5, (float)autoClickerUpgradeLevel));
    }
    
    // TODO ALL
    /*
     * Unlock 1: AutoTicker
     * Unlock 2: Click Upgrades
     * Unlock 3: Victory?
     */
    #region Unlocks
    void UnlockOne()
    {
        AutoClickPurchaseButton.SetActive(true);
        bank.SetActive(true);
        IncomeSecondObject.SetActive(true);
        TitleText.text = "An Investor With A Money Machine";
    }
    void UnlockTwo()
    {
        AutoClickUpgradeButton.SetActive(true);
        TitleText.text = "A Finance Scholar With A Money Machine";
    }
    void UnlockThree()
    {
        PrinterUpgradeButton.SetActive(true);
        TitleText.text = "A Finance Scholar With A Powerful Money Machine";
    }
    void MileStoneCheck()
    {
        for (int i = 0; i < mileStones.Length; i++)
        {
            if (mileStonesAchieved[i])
            {
                continue;
            }
            if (coins > mileStones[i])
            {
                mileStonesAchieved[i] = true;
                MileStoneReward(i + 1);
            }
        }
    }

    void MileStoneReward(int id)
    {
        switch (id)
        {
            case 1:
                UnlockOne();
                break;
            case 2:
                UnlockTwo();
                break;
            case 3:
                UnlockThree();
                break;
            default:
                Debug.Log("Milestone Incorrect!");
                break;
        }
    }

    #endregion

    //TODO:
    // - Add Autoclicker info to UpdateUI
    // - Add a pop-up display system (currently using 
    #region UI
    void UpdateUI()
    {
        CounterText.text = "X " + coins;
        AutoPurchaseText.text = "Cost: " + AutoClickerCost();
        AutoClickQuantityText.text = "Investments: " + autoClickers;
        AutoClickUpgradeText.text = "Cost: " + AutoClickerUpgradeCost();
        AutoClickUpgradeQuantityText.text = "Inv. Upgrades: " + autoClickerUpgradeLevel;
        PrinterUpgradeCostText.text = "Cost: " + PrinterUpgradeCost();
        PrinterUpgradeQuantityText.text = "Printer Upgrades: " + printerUpgradeLevel;
        IncomeSecondText.text = "Income: " + (long) tickFactor *
            (long)((float)autoClickers * Math.Pow((float)1.5, (float)autoClickerUpgradeLevel))
            + "/ Tick";
    }

    void PopUpNumbers(Color popUpColor, string popUpText, GameObject popUpLocation)
    {
        GameObject tempPopUp = Instantiate(FadeText) as GameObject;
        RectTransform tempRect = tempPopUp.GetComponent<RectTransform>();
        Text tempText = tempPopUp.GetComponent<Text>();
        tempText.text = popUpText;
        tempText.color = popUpColor;
        tempPopUp.transform.SetParent(popUpLocation.transform);
        tempRect.anchoredPosition = Vector3.zero;

        tempPopUp.GetComponent<Animator>().SetTrigger("PopIn");
        Destroy(tempPopUp.gameObject, 2f);
    }
    void PopUpNumbers(Color popUpColor, string popUpText, GameObject popUpLocation, Vector3 scale)
    {
        GameObject tempPopUp = Instantiate(FadeText) as GameObject;
        RectTransform tempRect = tempPopUp.GetComponent<RectTransform>();
        Text tempText = tempPopUp.GetComponent<Text>();
        tempText.text = popUpText;
        tempText.color = popUpColor;
        tempPopUp.transform.SetParent(popUpLocation.transform);
        tempRect.anchoredPosition = Vector3.zero;
        tempRect.localScale = scale;
        tempPopUp.GetComponent<Animator>().SetTrigger("PopIn");
        Destroy(tempPopUp.gameObject, 2f);
    }

    void UIDisplayMessage(string message)
    {
        Debug.Log("UI Placeholder: " + message);
    }
    void VictoryPlaceholder()
    {
        CounterText.text = "Victory!";
        ClickButton.SetActive(false);
    }
    #endregion
}
/*
 * Potential Upgrades:
 * Investments
 *  Unlock different types of buildings
 *  Trade investments for upgrades?
 *  Increase investment efficiency based on amount of total clicks?
 * Clicker
 *  Increase amount of printers
 *  Some kind of multipliers
 * Special
 *  Production increase from money saved up proportional to income/tick?
 *  Bonus for not clicking
 *  Bonus for not purchasing an investment
 * 
 * Measurable Statistics:
 * Swipes (all time)
 * Swipes (this prestige)
 * Number of printer upgrades
 * Number of printer prestige assignments?
 * Investments
 * Investment Upgrades
 * Amount of prestiges
 * Money made (all time)
 * Money made (this prestige)
 * Achievements!!!!!!!!!!
 * Investment Ticks (all time)
 * Investment Ticks (this prestige)
 * Time passed (all time)
 * Time passed (this run)
 * Offline time (all time)
 * Offline time (this run)
 * Amount of money currently
 * Amount of money spent
 * Power of click
 * Power of investment
 */