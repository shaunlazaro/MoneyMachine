using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InstructionText : MonoBehaviour {

    public GameObject ToolTip;
    private Text ToolTipText;

    private string printer, upgradePrinter, bank, 
        investment, investmentUpgrade, blank;

    void Start()
    {
        ToolTipText = ToolTip.GetComponent<Text>();
        printer= "Printer:\n" +
            "Prints money when you swipe it.";
        upgradePrinter = "Upgrade Printer: \n" +
            "Makes your printer give you more money per swipe.\nShortcut: Shift + E";
        bank = "Bank:\n" +
            "The bank spits out money if you have investments.";
        investment = "Investments:\n" +
            "Invest money to get some passive income." +
            "\nShortcut: Shift + Q";
        investmentUpgrade = "Study Investments:\n" +
            "Allows you to get 50% more money from your investments." +
            "\nShortcut: Shift + W";
        blank = "Hover your mouse for more instructions!";
    }

    public void UpdateText(string newText)
    {
        switch(newText)
        {
            case "printer":
                ToolTipText.text = printer;
                break;
            case "upgradePrinter":
                ToolTipText.text = upgradePrinter;
                break;
            case "bank":
                ToolTipText.text = bank;
                break;
            case "investment":
                ToolTipText.text = investment;
                break;
            case "investmentUpgrade":
                ToolTipText.text = investmentUpgrade;
                break;
            case "blank":
                ToolTipText.text = blank;
                break;
            default:
                Debug.Log("Invalid Input UpdateText\n"+newText);
                break;
        }
    }

    public void HideText()
    {
        UpdateText("blank");
    }
}
