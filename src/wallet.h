#pragma once

#include <string>
#include <iostream>

class Portefeuille
{
public:
    Portefeuille(std::string couleur, std::string marque, float poids = 0.0)
        : couleur(std::move(couleur)), marque(std::move(marque)), poids(poids) {}

    float getMoney() const
    {
        return pocketBalance;
    }

    void addMoney(int amount)
    {
        if (amount >= 0)
        {
            pocketBalance += amount;
        }
    }

    bool checkMoney(int amount) const
    {
        return pocketBalance >= amount;
    }

    void addCard()
    {
        porteCarte++;
    }

    void lost()
    {
        porteCarte = 0;
        poids = 0.0;
        pocketBalance = 0;
        std::cout << "Pocket lost\n";
    }

private:
    std::string couleur;
    std::string marque;
    float       poids{0.0};
    int         porteCarte{0};
    float       pocketBalance{0.0};
};