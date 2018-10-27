using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameNumbers : MonoBehaviour {

    private BigNumber coins = new BigNumber(1,0);
    public BigNumber Coins
    {
        get { return coins; }
        set { coins = value; }
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

    // Arrays store the cost of upgrade x+1 at element x;
    private List<BigNumber> printerUpgradeCosts;
    private List<BigNumber> autoClickerUpgradeCosts;
    private List<BigNumber> autoClickerCosts;

    // Array stores the total modifier at upgrade x
    private List<BigNumber> printerUpgradeModifiers;
    private List<BigNumber> autoClickerUpgradeModifiers;

    void Awake()
    {
        printerUpgradeCosts = new List<BigNumber>();
        autoClickerUpgradeCosts = new List<BigNumber>();
        autoClickerCosts = new List<BigNumber>();
        printerUpgradeModifiers = new List<BigNumber>();
        autoClickerUpgradeModifiers = new List<BigNumber>();

        printerUpgradeCosts.Add(new BigNumber(500, 0));
        printerUpgradeModifiers.Add(new BigNumber(1, 0));

        autoClickerUpgradeCosts.Add( new BigNumber(280/2.8,0));
        autoClickerUpgradeModifiers.Add(new BigNumber(1, 0));

        autoClickerCosts.Add(new BigNumber(50, 0));
        for(int i = 1; i < 1000; i++)
        {
            UpdateLists(i);
        }
    }

    // Contains all of the formulas!
    public void UpdateLists(int i)
    {
        printerUpgradeCosts.Add(printerUpgradeCosts[i - 1] * new BigNumber(10,0));
        autoClickerUpgradeCosts.Add(autoClickerUpgradeCosts[i - 1] * new BigNumber(2.5,0));
        autoClickerCosts.Add(autoClickerCosts[i - 1] * new BigNumber(1.5,0));

        printerUpgradeModifiers.Add(printerUpgradeModifiers[i - 1] * new BigNumber(5, 0));
        autoClickerUpgradeModifiers.Add(autoClickerUpgradeModifiers[i - 1] * new BigNumber(1.5, 0));
    }
  

    public void IncreaseCoins(BigNumber coinIncrease)
    {
        coins += coinIncrease;
    }

    #region Numbers
    public BigNumber CoinClickValue()
    {
        return printerUpgradeModifiers[(int)printerUpgradeLevel-1];
    }
    public BigNumber PrinterUpgradeCost()
    {
        return printerUpgradeCosts[(int)printerUpgradeLevel-1];
    }
    public BigNumber AutoClickerUpgradeCost()
    {
        return autoClickerUpgradeCosts[(int)autoClickerUpgradeLevel];
    }
    public BigNumber AutoClickerCost()
    {
        return autoClickerCosts[(int)autoClickers];
    }
    public BigNumber PassiveIncomePerTick()
    {
        return new BigNumber(gameObject.GetComponent<GameData>().tickFactor,0) 
            * new BigNumber(autoClickers,0) 
            * autoClickerUpgradeModifiers[(int)autoClickerUpgradeLevel-1];
    }

    #endregion

    public struct BigNumber
    {
        public double Mantissa;
        public int Exponent;
        public BigNumber(double m, int e)
        {
            Mantissa = m;
            Exponent = e;
        }

        public static BigNumber operator +(BigNumber n1, BigNumber n2)
        {
            int exp_diff = n2.Exponent - n1.Exponent;
            double scaled_mantissa = n2.Mantissa * Math.Pow(10, exp_diff);
            n1.Mantissa += scaled_mantissa;
            n1.Calculate();
            return n1;
        }

        public static BigNumber operator -(BigNumber n1, BigNumber n2)
        {
            int exp_diff = n2.Exponent - n1.Exponent;
            double scaled_mantissa = n2.Mantissa * Math.Pow(10, exp_diff);
            n1.Mantissa -= scaled_mantissa;
            n1.Calculate();
            return n1;
        }

        public static BigNumber operator *(BigNumber n1, BigNumber n2)
        {
            int new_diff = n2.Exponent + n1.Exponent;
            double new_mantissa = n2.Mantissa * n1.Mantissa;
            while (new_mantissa >= 10)
            {
                new_mantissa /= 10;
                new_diff++;
            }
            n1.Mantissa = new_mantissa;
            n1.Exponent = new_diff;
            return n1;
        }

        public static BigNumber operator /(BigNumber n1, BigNumber n2)
        {
            int new_diff = n1.Exponent - n2.Exponent;
            double new_mantissa = n1.Mantissa / n2.Mantissa;
            while (new_mantissa < 1)
            {
                new_mantissa *= 10;
                new_diff--;
            }
            n1.Mantissa = new_mantissa;
            n1.Exponent = new_diff;
            return n1;
        }

        public static bool operator >(BigNumber n1, BigNumber n2)
        {
            n1.Calculate();
            n2.Calculate();
            if (n1.Exponent == n2.Exponent)
            {
                return (n1.Mantissa > n2.Mantissa);
            }
            else
            {
                return n1.Exponent > n2.Exponent;
            }
        }
        public static bool operator <(BigNumber n1, BigNumber n2)
        {
            n1.Calculate();
            n2.Calculate();
            if (n1.Exponent == n2.Exponent)
            {
                return (n1.Mantissa < n2.Mantissa);
            }
            else
            {
                return n1.Exponent < n2.Exponent;
            }
        }
        public static bool operator ==(BigNumber n1, BigNumber n2)
        {
            n1.Calculate();
            n2.Calculate();
            return (n1.Mantissa == n2.Mantissa && n1.Exponent == n2.Exponent);
        }
        public static bool operator !=(BigNumber n1, BigNumber n2)
        {
            n1.Calculate();
            n2.Calculate();
            return !(n1.Mantissa == n2.Mantissa && n1.Exponent == n2.Exponent);
        }

        public static bool operator >=(BigNumber n1, BigNumber n2)
        {
            n1.Calculate();
            n2.Calculate();
            return (n1 > n2 || n1 == n2);
        }
        public static bool operator <=(BigNumber n1, BigNumber n2)
        {
            n1.Calculate();
            n2.Calculate();
            return (n1 < n2 || n1 == n2);
        }
        public static bool operator >(BigNumber n1, long n2)
        {
            return n1 > new BigNumber(n2,0);
        }
        public static bool operator <(BigNumber n1, long n2)
        {
            return n1 < new BigNumber(n2,0);
        }

        public override int GetHashCode()
        {
            return 0;
        }
        public override bool Equals(object obj)
        {
            return base.Equals(obj);
        }

        public void Calculate()
        {
            if (Mantissa >= 10.0 || Mantissa < 1.0)
            {
                int diff = (int)Math.Floor(Math.Log10(Mantissa));
                Mantissa /= Math.Pow(10, diff);
                Exponent += diff;
            }
        }

        public override string ToString()
        {
            this.Calculate();
            if (Exponent < 6)
                return ((long)(Mantissa * Math.Pow(10, Exponent))).ToString();
//          else if (Exponent > 15)
//              return Mantissa.ToString("0.000") + "e" + Exponent.ToString();
            else
                return WordFormat();
        }
        public string WordFormat()
        {
            string ending = "????";
            switch(Exponent - Exponent%3)
            {
                case 6:
                    ending = "Million";
                    break;
                case 9:
                    ending = "Billion";
                    break;
                case 12:
                    ending = "Trillion";
                    break;
                case 15:
                    ending = "Quadrillion";
                    break;
                case 18:
                    ending = "Quintillion";
                    break;
                case 21:
                    ending = "Sextillion";
                    break;
                case 24:
                    ending = "Septillion";
                    break;
                case 27:
                    ending = "Octillion";
                    break;
                case 30:
                    ending = "Nonillion";
                    break;
                case 33:
                    ending = "Decillion";
                    break;
                case 36:
                    ending = "Undecillion";
                    break;
                case 39:
                    ending = "Duodecillion";
                    break;
                case 42:
                    ending = "Tredecillion";
                    break;
                case 45:
                    ending = "Quattordecillion";
                    break;
                case 48:
                    ending = "Quindecillion";
                    break;
                default:
                    Debug.Log("Invalid exponent!");
                    break;
            }

            return (Mantissa * Math.Pow(10, Exponent % 3)).ToString("C"+(2-Exponent%3)) + 
                " " + ending;
        }
    }
}