/*******************************************************
Nom           : Cvoiture.cpp
Role          : Déclaration des méthodes
Auteur        : MAHINC Mathias
Version       : V1.0 du 05/11/2026
Licence       : GPL
IDE           : Visual Studio Code
OS            : Linux
Compilation   : g++ -Wall -pedantic -std=c++11 -c Cvoiture.cpp
********************************************************/

#include "Cvoiture.h"
#include <iostream>

using namespace std;

// Constructeur avec parametres
Cvoiture::Cvoiture(string c, string ma, string mo, int p)
{
    carburant = c;
    marque = ma;
    modele = mo;
    puissance = p;
    vitesse = 0;
}

// Accelerer la voiture
void Cvoiture::accelerer(int v)
{
    vitesse = vitesse + v;
}

// Afficher les informations de la voiture
void Cvoiture::afficher()
{
    cout << "Marque : " << marque << endl;
    cout << "Modele : " << modele << endl;
    cout << "Carburant : " << carburant << endl;
    cout << "Puissance : " << puissance << endl;
    cout << "Vitesse : " << vitesse << endl;
}

// Arreter la voiture
void Cvoiture::arreter()
{
    vitesse = 0;
}

// Demarrer la voiture
void Cvoiture::demarrer()
{
    cout << "La voiture demarre" << endl;
}

// Ralentir la voiture
void Cvoiture::ralentir(int v)
{
    vitesse = vitesse - v;
}

// Afficher les 4 roues de la voiture
void Cvoiture::afficherRoues()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Roue " << i + 1 << " :" << endl;
        Roues[i].afficher();
    }
}