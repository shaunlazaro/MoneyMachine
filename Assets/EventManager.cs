using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventManager : MonoBehaviour {

    UIManager ui;
    GameNumbers numbers;
    GameData data;
    MilestoneUnlocks unlocks;

    void Start()
    {
        ui = gameObject.GetComponent<UIManager>();
        numbers = gameObject.GetComponent<GameNumbers>();
        data = gameObject.GetComponent<GameData>();
        unlocks = gameObject.GetComponent<MilestoneUnlocks>();

        StartCoroutine(AutoClickerCycle());
    }

    #region ClicksAndEvents
    public void CoinClick()
    {
        numbers.Coins += numbers.CoinClickValue();
        ui.PopUpNumbers(Color.yellow, Convert.ToString(numbers.CoinClickValue()),
            data.printerPopUpLocation, new Vector3(1.2f, 1.2f, 1.2f));
        ui.UpdateUI();
        unlocks.MileStoneCheck();
    }

    public void AttemptInvestmentPurchase()
    {
        if (numbers.Coins >= numbers.AutoClickerCost())
        {
            numbers.Coins -= numbers.AutoClickerCost();
            numbers.AutoClickers++;
            ui.UpdateUI();
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
            numbers.Coins -= numbers.AutoClickerUpgradeCost();
            numbers.AutoClickerUpgradeLevel++;
            ui.UpdateUI();
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
            numbers.Coins -= numbers.PrinterUpgradeCost();
            numbers.PrinterUpgradeLevel++;
            ui.UpdateUI();
        }
        else
        {
            ui.UIDisplayMessage("Not enough money for printer upgrade!");
        }
    }

    public IEnumerator AutoClickerCycle()
    {
        yield return new WaitForSeconds(4);
        while (true)
        {
            numbers.Coins += numbers.PassiveIncomePerTick();
            ui.UpdateUI();
            Debug.Log("Cycle!");
            if (numbers.AutoClickers > 0)
            {
                ui.PopUpNumbers(Color.green,
                    Convert.ToString(numbers.PassiveIncomePerTick()),
                    data.bankPopUpLocation, new Vector3(1.4f, 1.4f, 1.4f));
                ui.BankEnlarge();
                yield return new WaitForSeconds(data.tickSpeed / 5);
                ui.BankShrink();
                yield return new WaitForSeconds(4 * (data.tickSpeed / 5));
            }
            else
                yield return new WaitForSeconds(data.tickSpeed);
        }
    }
    #endregion
}
