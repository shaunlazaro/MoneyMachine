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
        numbers.Coins = long.Parse(PlayerPrefs.GetString("Money"));
        numbers.AutoClickers = long.Parse(PlayerPrefs.GetString("Investments"));
        numbers.AutoClickerUpgradeLevel =long.Parse( PlayerPrefs.GetString("InvestmentUpgrades"));
        numbers.PrinterUpgradeLevel= long.Parse(PlayerPrefs.GetString("PrinterUpgrades"));
    }

    void Save()
    {
        PlayerPrefs.SetString("Money", Convert.ToString(numbers.Coins));
        PlayerPrefs.SetString("Investments", Convert.ToString(numbers.AutoClickers));
        PlayerPrefs.SetString("InvestmentUpgrades", Convert.ToString(numbers.AutoClickerUpgradeLevel));
        PlayerPrefs.SetString("PrinterUpgrades", Convert.ToString(numbers.PrinterUpgradeLevel));
    }

    void CreateBaseSave()
    {
        PlayerPrefs.SetString("Money", "0");
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
