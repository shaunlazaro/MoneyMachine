using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SaveHandler : MonoBehaviour {

    private GameNumbers numbers;
    
    void Start()
    {

        if (!SaveExists())
            CreateBaseSave();

        
        numbers = gameObject.GetComponent<GameNumbers>();
        TransferData();
    }
    
    void TransferData()
    {
        numbers.Coins = new GameNumbers.BigNumber(
            double.Parse(PlayerPrefs.GetString("MoneyMantissa")),
            int.Parse(PlayerPrefs.GetString("MoneyExponent")));
        numbers.AutoClickers = long.Parse(PlayerPrefs.GetString("Investments"));
        numbers.AutoClickerUpgradeLevel =long.Parse( PlayerPrefs.GetString("InvestmentUpgrades"));
        numbers.PrinterUpgradeLevel= long.Parse(PlayerPrefs.GetString("PrinterUpgrades"));

        gameObject.GetComponent<MilestoneUnlocks>().MileStoneCheck();
    }

    public void Save()
    {
        PlayerPrefs.SetString("MoneyMantissa", Convert.ToString(numbers.Coins.Mantissa));
        PlayerPrefs.SetString("MoneyExponent", Convert.ToString(numbers.Coins.Exponent));
        PlayerPrefs.SetString("Investments", Convert.ToString(numbers.AutoClickers));
        PlayerPrefs.SetString("InvestmentUpgrades", Convert.ToString(numbers.AutoClickerUpgradeLevel));
        PlayerPrefs.SetString("PrinterUpgrades", Convert.ToString(numbers.PrinterUpgradeLevel));
    }

    void CreateBaseSave()
    {
        PlayerPrefs.SetString("MoneyMantissa", "0");
        PlayerPrefs.SetString("MoneyExponent", "0");
        PlayerPrefs.SetString("Investments", "0");
        PlayerPrefs.SetString("InvestmentUpgrades", "1");
        PlayerPrefs.SetString("PrinterUpgrades", "1");
        PlayerPrefs.SetString("Save", "Exists");
    }
    bool SaveExists()
    {
        return PlayerPrefs.HasKey("Save");
    }
	
}
