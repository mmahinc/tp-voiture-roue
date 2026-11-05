/*******************************************************
Nom           : Cvoiture.h
Role          : Création Classe voiture
Auteur        : MAHINC Mathias
Version       : V1.0 du 05/11/2026
Licence       : GPL
IDE           : Visual Studio Code
OS            : Linux
Compilation   : g++ -Wall -pedantic -std=c++11 -c Cvoiture.cpp
********************************************************/

#ifndef VOITURE_H
#define VOITURE_H

#include <string>
#include "Cvoiture.h"
#include "CRoue.h"

class Cvoiture
{
private:
    std::string carburant;  // Type de carburant
    std::string marque;     // Marque de la voiture
    std::string modele;     // Modele de la voiture
    int puissance;          // Puissance de la voiture
    int vitesse;            // Vitesse de la voiture

    CRoue Roues[4];         // Tableau contenant les 4 roues

public:
    // Constructeur avec parametres
    Cvoiture(std::string c, std::string ma, std::string mo, int p);

    // Methodes de la voiture
    void accelerer(int v);
    void afficher();
    void arreter();
    void demarrer();
    void ralentir(int v);

    // Methode pour afficher les 4 roues
    void afficherRoues();
};

#endif