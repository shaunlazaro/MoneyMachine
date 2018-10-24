using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MilestoneUnlocks : MonoBehaviour {

    // Public Data Class
    public GameData data;
    public GameNumbers numbers;

    // Milestones Data
    private long[] mileStones;
    private bool[] mileStonesAchieved;

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

    void Start()
    {
        data = gameObject.GetComponent<GameData>();
        numbers = gameObject.GetComponent<GameNumbers>();

        mileStones = data.mileStones;
        mileStonesAchieved = data.mileStonesAchieved;

        AutoClickPurchaseButton = data.AutoClickPurchaseButton;
        Bank = data.bank;
        IncomeSecondObject = data.IncomeSecondObject;

        AutoClickUpgradeButton = data.AutoClickUpgradeButton;

        PrinterUpgradeButton = data.PrinterUpgradeButton;

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
    public void MileStoneCheck()
    {
        for (int i = 0; i < mileStones.Length; i++)
        {
            if (mileStonesAchieved[i])
            {
                continue;
            }
            if (numbers.Coins > mileStones[i])
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
            default:
                Debug.Log("Milestone Incorrect!");
                break;
        }
    }

    #endregion

}
