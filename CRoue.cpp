/*******************************************************
Nom           : CRoue.cpp
Role          : Déclaration des méthodes
Auteur        : MAHINC Mathias
Version       : V1.0 du 04/11/2026
Licence       : GPL
IDE           : Visual Studio Code
OS            : Linux
Compilation   : g++ -Wall -pedantic -std=c++11 -c CRoue.cpp
********************************************************/

#include "CRoue.h"
#include <iostream>

using namespace std;

// Constructeur par defaut
CRoue::CRoue()
{
    dimension = 17;
    marque = "Michelin";
    pression = 2.0;
}

// Constructeur avec parametres
CRoue::CRoue(int d, string ma, float p)
{
    dimension = d;
    marque = ma;
    pression = p;
}

// Destructeur
CRoue::~CRoue()
{
    cout << "Destruction de la roue" << endl;
}

// Afficher les informations
void CRoue::afficher()
{
    cout << dimension << " pouces" << endl;
    cout << marque << endl;
    cout << pression << " bars" << endl;
}

// Crever la roue
void CRoue::crever()
{
    pression = 0;
}

// Degonfler la roue
void CRoue::degonfler()
{
    pression = pression - 0.5;

    if (pression < 0)
    {
        pression = 0;
    }
}

// Gonfler la roue
void CRoue::gonfler()
{
    pression = pression + 0.5;
}