using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour {

    // Public Data Class
    public GameData data;
    public GameNumbers numbers;

    // Popup Text:
    private GameObject FadeText;

    // Text Objects
    private Text CounterText;
    private Text AutoPurchaseText;
    private Text AutoClickQuantityText;
    private Text AutoClickUpgradeText;
    private Text AutoClickUpgradeQuantityText;
    private Text PrinterUpgradeCostText;
    private Text PrinterUpgradeQuantityText;
    private Text IncomeSecondText;

    // Object Popping:
    private GameObject printer;
    private GameObject bank;

    void Start()
    {
        data = gameObject.GetComponent<GameData>();
        numbers = gameObject.GetComponent<GameNumbers>();

        FadeText = data.FadeText;
        CounterText = data.CounterObject.GetComponent<Text>();
        AutoPurchaseText = data.AutoClickPurchaseText.GetComponent<Text>();
        AutoClickQuantityText = data.AutoClickQuantity.GetComponent<Text>();
        AutoClickUpgradeText = data.AutoClickUpgradeTextObject.GetComponent<Text>();
        AutoClickUpgradeQuantityText = data.AutoClickUpgradeQuantityTextObject.GetComponent<Text>();
        PrinterUpgradeCostText = data.PrinterUpgradeCostObject.GetComponent<Text>();
        PrinterUpgradeQuantityText = data.PrinterUpgradeQuantityTextObject.GetComponent<Text>();
        IncomeSecondText = data.IncomeSecondObject.GetComponent<Text>();
        printer = data.printer;
        bank = data.bank;
    }

    #region UI
    public void UpdateUI()
    {
        CounterText.text = "X " + numbers.Coins;
        AutoPurchaseText.text = "Cost: " + numbers.AutoClickerCost();
        AutoClickQuantityText.text = "Investments: " + numbers.AutoClickers;
        AutoClickUpgradeText.text = "Cost: " + numbers.AutoClickerUpgradeCost();
        AutoClickUpgradeQuantityText.text = "Inv. Upgrades: " + numbers.AutoClickerUpgradeLevel;
        PrinterUpgradeCostText.text = "Cost: " + numbers.PrinterUpgradeCost();
        PrinterUpgradeQuantityText.text = "Printer Upgrades: " + numbers.PrinterUpgradeLevel;
        IncomeSecondText.text = "Income: " + (long)numbers.tickFactor *
            (long)((float)numbers.AutoClickers * Math.Pow((float)1.5, (float)numbers.AutoClickerUpgradeLevel))
            + "/ Tick";
    }

    public void PopUpNumbers(Color popUpColor, string popUpText, GameObject popUpLocation)
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
    public void PopUpNumbers(Color popUpColor, string popUpText, GameObject popUpLocation, Vector3 scale)
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

    public void UIDisplayMessage(string message)
    {
        Debug.Log("UI Placeholder: " + message);
    }
    public void PrinterEnlarge()
    {
        printer.GetComponent<RectTransform>().localScale = new Vector3(1.1f, 1.1f, 1.1f);
    }
    public void PrinterShrink()
    {
        printer.GetComponent<RectTransform>().localScale = new Vector3(1, 1, 1);
    }
    public void BankEnlarge()
    {
        bank.GetComponent<RectTransform>().localScale = new Vector3(1.1f, 1.1f, 1.1f);
    }
    public void BankShrink()
    {
        bank.GetComponent<RectTransform>().localScale = new Vector3(1f, 1f, 1f);
    }
    #endregion


}
