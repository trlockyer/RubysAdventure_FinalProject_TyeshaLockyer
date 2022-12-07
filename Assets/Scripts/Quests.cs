﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Quests : MonoBehaviour
{
    AudioSource questAudio;
    public AudioClip questAudioClip;
    GameObject[] botQuestBots;
    int botQuest_BotsLeft;
    public GameObject botCounter;
    public GameObject dialogBox;
    float timerDisplay;

    // Start is called before the first frame update
    void Start()
    {
        botQuestBots = GameObject.FindGameObjectsWithTag("Bots");
        botQuest_BotsLeft = botQuestBots.Length;
        questAudio = GetComponent<AudioSource>();
        questAudio.Play();
        UpdateBotCounter();
    }

    public void QuestOneShot(AudioClip clip)
    {
        questAudio.PlayOneShot(clip);
    }

    public void BotFixed()
    {
        botQuest_BotsLeft--;
        UpdateBotCounter();

        if (botQuest_BotsLeft == 0)
        {
            //Ring quest noise and show quest badge
            QuestOneShot(questAudioClip);
            UpdateBotCounter("Quest Complete");
            dialogBox.SetActive(true);
        }
    }

    void UpdateBotCounter()
    {
        botCounter.GetComponent<TMPro.TextMeshProUGUI>().text = botQuest_BotsLeft.ToString();
    }

    void UpdateBotCounter(string s)
    {
        botCounter.GetComponent<TMPro.TextMeshProUGUI>().text = s;
    }

    public void DisplayDialog()
    {
        botQuest_BotsLeft--;
        dialogBox.SetActive(false);

        botCounter.GetComponent<TMPro.TextMeshProUGUI>().text = botQuest_BotsLeft.ToString();
        
        if (botQuest_BotsLeft >= 0)
        {
            dialogBox.SetActive(false);
        }

        if (botQuest_BotsLeft == 0)
        {
            dialogBox.SetActive(true);
        }
    }
    
    
}