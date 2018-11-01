using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SaveHandler : MonoBehaviour {

    private GameNumbers numbers;
    private MilestoneUnlocks milestone;
    
    void Start()
    {
        if (!SaveExists())
            CreateBaseSave();

        milestone = gameObject.GetComponent<MilestoneUnlocks>();
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

        numbers.PrestigeCurrency = new GameNumbers.BigNumber(
            double.Parse(PlayerPrefs.GetString("PrestigeMantissa")),
            int.Parse(PlayerPrefs.GetString("PrestigeExponent")));

        milestone.mileStonesAchieved[3] = bool.Parse(PlayerPrefs.GetString("Prestige Unlocked"));

        milestone.MileStoneCheck();
        milestone.MileStoneRefresh(); //MileStoneRefresh redoes all of the unlocks, 
        //because milestoneachieved[x] keeps track but doesn't actually handle unlocks
    }

    public void Save()
    {
        PlayerPrefs.SetString("MoneyMantissa", Convert.ToString(numbers.Coins.Mantissa));
        PlayerPrefs.SetString("MoneyExponent", Convert.ToString(numbers.Coins.Exponent));
        PlayerPrefs.SetString("Investments", Convert.ToString(numbers.AutoClickers));
        PlayerPrefs.SetString("InvestmentUpgrades", Convert.ToString(numbers.AutoClickerUpgradeLevel));
        PlayerPrefs.SetString("PrinterUpgrades", Convert.ToString(numbers.PrinterUpgradeLevel));
        PlayerPrefs.SetString("Prestige Unlocked", Convert.ToString(milestone.mileStonesAchieved[3]));
        PlayerPrefs.SetString("PrestigeMantissa", Convert.ToString(numbers.PrestigeCurrency.Mantissa));
        PlayerPrefs.SetString("PrestigeExponent", Convert.ToString(numbers.PrestigeCurrency.Exponent));
    }

    void CreateBaseSave()
    {
        PlayerPrefs.SetString("MoneyMantissa", "0");
        PlayerPrefs.SetString("MoneyExponent", "0");
        PlayerPrefs.SetString("Investments", "0");
        PlayerPrefs.SetString("InvestmentUpgrades", "1");
        PlayerPrefs.SetString("PrinterUpgrades", "1");
        PlayerPrefs.SetString("Save", "Exists");
        PlayerPrefs.SetString("Prestige Unlocked", "False");
        PlayerPrefs.SetString("PrestigeMantissa", "0");
        PlayerPrefs.SetString("PrestigeExponent", "0");
    }
    bool SaveExists()
    {
        return PlayerPrefs.HasKey("Save");
    }
	
}
