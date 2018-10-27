using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class GameData : MonoBehaviour {

    public GameObject Title;

    public GameObject printerParent;
    public GameObject printerChild;
    public GameObject printerPopUpLocation;
    public GameObject bank;
    public GameObject bankPopUpLocation;
    public GameObject FadeText;

    // Clicks?
    public GameObject ClickButton;
    public GameObject CounterObject;
    public float tickSpeed;
    public float tickFactor; //Multiplies tick worth, used to keep game balanced but change tick speed.

    // Milestones for unlocks
    public double[] mileStones;
    public int[] mileStoneExponents;
    public bool[] mileStonesAchieved;

    // Buttons
    public GameObject AutoClickPurchaseButton;
    public GameObject AutoClickUpgradeButton;
    public GameObject PrinterUpgradeButton;

    //UI Update Info
    public GameObject AutoClickPurchaseText;
    public GameObject AutoClickQuantity;
    public GameObject AutoClickUpgradeTextObject;
    public GameObject AutoClickUpgradeQuantityTextObject;
    public GameObject PrinterUpgradeCostObject;
    public GameObject PrinterUpgradeQuantityTextObject;
    public GameObject IncomeSecondObject;

    public GameObject MenuButton1;
    public GameObject MenuButton2;

    public GameObject Menu1;
    public GameObject Menu2;
    public GameObject Menu3;
}
