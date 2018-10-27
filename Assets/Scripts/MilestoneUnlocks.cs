using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MilestoneUnlocks : MonoBehaviour {

    // Public Data Class
    public GameData data;
    public GameNumbers numbers;

    // Milestones Data
    private int[] mileStoneExponents;
    private double[] mileStonesNumbers;
    public bool[] mileStonesAchieved;

    // Title Text
    private Text TitleText;

    // Unlock 1:
    private GameObject AutoClickPurchaseButton;
    private GameObject Bank;
    private GameObject IncomeSecondObject;

    // Unlock 2:
    private GameObject AutoClickUpgradeButton;

    // Unlock 3:
    private GameObject PrinterUpgradeButton;

    // Unlock 4:
    private GameObject PrestigeMenu;

    void Start()
    {
        data = gameObject.GetComponent<GameData>();
        numbers = gameObject.GetComponent<GameNumbers>();

        mileStonesNumbers = data.mileStones;
        mileStoneExponents = data.mileStoneExponents;
        mileStonesAchieved = data.mileStonesAchieved;

        AutoClickPurchaseButton = data.AutoClickPurchaseButton;
        Bank = data.bank;
        IncomeSecondObject = data.IncomeSecondObject;

        AutoClickUpgradeButton = data.AutoClickUpgradeButton;

        PrinterUpgradeButton = data.PrinterUpgradeButton;

        PrestigeMenu = data.MenuButton2;

        TitleText = data.Title.GetComponent<Text>();

        
    }

    #region Unlocks
    void UnlockOne()
    {
        AutoClickPurchaseButton.SetActive(true);
        Bank.SetActive(true);
        IncomeSecondObject.SetActive(true);
        TitleText.text = "An Investor With A Money Machine";
    }
    void UnlockTwo()
    {
        AutoClickUpgradeButton.SetActive(true);
        TitleText.text = "A Finance Scholar With A Money Machine";
    }
    void UnlockThree()
    {
        PrinterUpgradeButton.SetActive(true);
        TitleText.text = "A Finance Scholar With A Powerful Money Machine";
    }
    void UnlockFour()
    {
        PrestigeMenu.SetActive(true);
        TitleText.text = "An Excessively Rich Man With A Money Machine";
    }

    public void MileStoneCheck()
    {
        for (int i = 0; i < mileStonesNumbers.Length; i++)
        {
            if (mileStonesAchieved[i])
            {
                continue;
            }
            if (numbers.Coins > new GameNumbers.BigNumber(mileStonesNumbers[i], mileStoneExponents[i]))
            {
                mileStonesAchieved[i] = true;
                MileStoneReward(i + 1);
            }
        }
    }

    void MileStoneReward(int id)
    {
        switch (id)
        {
            case 1:
                UnlockOne();
                break;
            case 2:
                UnlockTwo();
                break;
            case 3:
                UnlockThree();
                break;
            case 4:
                UnlockFour();
                break;
            default:
                Debug.Log("Milestone Incorrect!");
                break;
        }
    }

    #endregion

}
