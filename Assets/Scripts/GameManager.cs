using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour {

    public GameObject Title;
    private Text TitleText;//

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

    public GameObject AutoClickUpgradeButton;
    public GameObject AutoClickUpgradeTextObject;
    private Text AutoClickUpgradeText;
    public GameObject AutoClickUpgradeQuantityTextObject;
    private Text AutoClickUpgradeQuantityText;
    public long autoClickerUpgradeLevel = 1;


    public GameObject PrinterUpgradeButton;
    public GameObject PrinterUpgradeCostObject;
    private Text PrinterUpgradeCostText;
    public GameObject PrinterUpgradeQuantityTextObject;
    private Text PrinterUpgradeQuantityText;
    public long printerUpgradeLevel = 1;


    public GameObject IncomeSecondObject;
    private Text IncomeSecondText;

    /*

    #region ClicksAndEvents
    public void CoinClick()
    {
        coins+=CoinClickValue();
        PopUpNumbers(Color.yellow, Convert.ToString(CoinClickValue()),
            printerPopUpLocation, new Vector3(1.2f,1.2f,1.2f));
        UpdateUI();
        MileStoneCheck();
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

    public IEnumerator AutoClickerCycle()
    {
        while (true)
        {
            coins += PassiveIncomePerTick();
            UpdateUI();
            Debug.Log("Cycle!");
            if (autoClickers > 0)
            {
                PopUpNumbers(Color.green,
                    Convert.ToString(PassiveIncomePerTick()),
                    bankPopUpLocation, new Vector3(1.4f, 1.4f, 1.4f));
                BankEnlarge();
                yield return new WaitForSeconds(tickSpeed / 5);
                BankShrink();
                yield return new WaitForSeconds(4 * (tickSpeed / 5));
            }
            else
                yield return new WaitForSeconds(tickSpeed);
        }
    }
    #endregion

  
     */
}