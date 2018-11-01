using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EventManager : MonoBehaviour {

    UIManager ui;
    GameNumbers numbers;
    GameData data;
    MilestoneUnlocks unlocks;

    private GameNumbers.BigNumber negative = new GameNumbers.BigNumber(-1,0);

    void Start()
    {
        ui = gameObject.GetComponent<UIManager>();
        numbers = gameObject.GetComponent<GameNumbers>();
        data = gameObject.GetComponent<GameData>();
        unlocks = gameObject.GetComponent<MilestoneUnlocks>();

        StartCoroutine(AutoClickerCycle());
    }

    void Save()
    {
        gameObject.GetComponent<SaveHandler>().Save();
    }

    #region ClicksAndEvents
    public void CoinClick()
    {
        numbers.IncreaseCoins(numbers.CoinClickValue());
        ui.PopUpNumbers(Color.yellow, "+"+Convert.ToString(numbers.CoinClickValue()),
            data.printerPopUpLocation, new Vector3(1.2f, 1.2f, 1.2f));
        ui.UpdateUI();
        unlocks.MileStoneCheck();
    }

    public void AttemptInvestmentPurchase()
    {
        if (numbers.Coins >= numbers.AutoClickerCost())
        {
            numbers.IncreaseCoins(negative * numbers.AutoClickerCost());
            numbers.AutoClickers++;
            ui.UpdateUI();
            Save();
        }
        else
        {
            ui.UIDisplayMessage("Not enough money for investment!");
        }
    }

    public void AttemptInvestmentUpgrade()
    {
        if (numbers.Coins >= numbers.AutoClickerUpgradeCost())
        {
            numbers.IncreaseCoins( negative * numbers.AutoClickerUpgradeCost());
            numbers.AutoClickerUpgradeLevel++;
            ui.UpdateUI();
            Save();
        }
        else
        {
            ui.UIDisplayMessage("Not enough money for upgrade!");
        }
    }

    public void AttemptClickUpgrade()
    {
        if (numbers.Coins >= numbers.PrinterUpgradeCost())
        {
            numbers.IncreaseCoins( negative * numbers.PrinterUpgradeCost());
            numbers.PrinterUpgradeLevel++;
            ui.UpdateUI();
            Save();
        }
        else
        {
            ui.UIDisplayMessage("Not enough money for printer upgrade!");
        }
    }

    public void AttemptPrestige()
    {
        //TODO: Warning Window
        if (numbers.GetPrestigeCurrencyAmount() <= numbers.PrestigeCurrency)
            Debug.Log("Prestige Failed! You wouldn't profit");
        else
            Prestige();
    }

    private void Prestige()
    {
        // 1: Reset buildings/coins
        // 2: Add prestige currency
        // 3: Save
        // 4: Reset GameState (UISwitch(1), hide shit)

        // Add Prestige Currency
        numbers.PrestigeCurrency = numbers.GetPrestigeCurrencyAmount();
        // Reset Numbers
        numbers.PrestigeWipe();
        // Save new state
        Save();
        // Restart Game
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public IEnumerator AutoClickerCycle()
    {
        yield return new WaitForSeconds(1);
        ui.UpdateUI();
        while (true)
        {
            if (numbers.AutoClickers > 0)
            {
                numbers.IncreaseCoins(numbers.PassiveIncomePerTick());
                ui.UpdateUI();

                if (!data.Menu2.activeSelf)
                {
                    Debug.Log("Cycle!");

                    ui.PopUpNumbers(Color.green,
                        Convert.ToString(numbers.PassiveIncomePerTick()),
                        data.bankPopUpLocation, new Vector3(1.3f, 1.3f, 1.3f));
                    ui.BankEnlarge();
                    yield return new WaitForSeconds(data.tickSpeed / 5);
                    ui.BankShrink();
                    yield return new WaitForSeconds(4 * (data.tickSpeed / 5));
                }
                else
                    yield return new WaitForSeconds(data.tickSpeed);
            }
            else
                yield return new WaitForSeconds(data.tickSpeed);
        }
    }

    public void MenuA()
    {
        ui.UISwitch(1);
    }
    public void MenuB()
    {
        ui.UISwitch(2);
    }
    #endregion

    // Keyboard Shortcuts
    void Update()
    {
        if(Input.GetKey("left shift"))
        {
            if(Input.GetKeyDown("q") && unlocks.mileStonesAchieved[0])
            {
                AttemptInvestmentPurchase();
            }
            else if (Input.GetKeyDown("w") && unlocks.mileStonesAchieved[1])
            {
                AttemptInvestmentUpgrade();
            }
            else if (Input.GetKeyDown("e") && unlocks.mileStonesAchieved[2])
            {
                AttemptClickUpgrade();
            }
        }
        // Dev Functions:
        if (Input.GetKey("p") && Input.GetKey("o") && Input.GetKey("i") && Input.GetKeyDown("space"))
        {
            numbers.Coins = new GameNumbers.BigNumber(numbers.Coins.Mantissa, numbers.Coins.Exponent + 1);
        }
        if (Input.GetKey("j") && Input.GetKey("k") && Input.GetKey("l") && Input.GetKeyDown("space"))
            PlayerPrefs.DeleteAll();
    }
}
