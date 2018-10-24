using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameNumbers : MonoBehaviour {

    private long coins = 0;
    public long Coins
    {
        get { return coins; }
        set { coins = value;}
    }


    private long printerUpgradeLevel = 1;
    public long PrinterUpgradeLevel
    {
        get { return printerUpgradeLevel; }
        set { printerUpgradeLevel = value; }
    }

    private long autoClickerUpgradeLevel = 1;
    public long AutoClickerUpgradeLevel
    {
        get { return autoClickerUpgradeLevel; }
        set { autoClickerUpgradeLevel = value; }
    }

    private long autoClickers = 0;
    public long AutoClickers
    {
        get { return autoClickers; }
        set { autoClickers = value; }
    }

    // Change in editor, usually at 4
    public long tickFactor;

    void IncreaseCoins(long coinIncrease)
    {
        coins += coinIncrease;
    }


    #region Numbers
    public long CoinClickValue()
    {
        return (long)Math.Pow(8f, (float)printerUpgradeLevel - 1f);
    }
    public long PrinterUpgradeCost()
    {
        return (long)50 * (long)Math.Pow(10f, (float)printerUpgradeLevel);
    }
    public long AutoClickerUpgradeCost()
    {
        return (long)(100.0 * Math.Pow((float)2.8, (float)autoClickerUpgradeLevel));
    }
    public long AutoClickerCost()
    {
        return (long)(100 * Mathf.Pow((float)2, (float)autoClickers / (float)2));
    }
    public long PassiveIncomePerTick()
    {
        return (long)tickFactor * (long)((float)autoClickers *
            Math.Pow((float)1.5, (float)autoClickerUpgradeLevel));
    }
    #endregion

}
