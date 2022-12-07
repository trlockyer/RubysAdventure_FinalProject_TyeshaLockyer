using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ammo : MonoBehaviour
{
    public GameObject GameOverMenu;
    bool gameOverState = false;
    public int ammo { get { return currentAmmo; } }
    public static int currentAmmo;

    void OnTriggerEnter2D(Collider2D other)
    {
        RubyController controller = other.GetComponent<RubyController>();

        if (controller != null)
        {
            controller.AmmoUp();
            Destroy(gameObject);
        }

        if (currentAmmo == 0)
        {
            GameOverMenu.SetActive(true);
            gameOverState = true;
        }
    }

}
