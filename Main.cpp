/*******************************************************
Nom           : Main.cpp
Role          : Programme principal de test de la classe CVoiture et CRoue
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

int main()
{
    // Creation de deux voitures
    Cvoiture voiture1("Essence", "Peugeot", "3008", 110);
    Cvoiture voiture2("Diesel", "Renault", "Clio", 90);

    // Afficher les informations de la voiture 1
    cout << "Informations voiture 1 :" << endl;
    voiture1.afficher();

    // Tester les operations de la voiture 1
    voiture1.demarrer();
    voiture1.accelerer(50);
    voiture1.ralentir(20);
    voiture1.arreter();

    cout << endl;

    // Afficher les informations de la voiture 2
    cout << "Informations voiture 2 :" << endl;
    voiture2.afficher();

    cout << endl;

    // Afficher les 4 roues de la voiture 1
    cout << "Les roues de la voiture 1 :" << endl;
    voiture1.afficherRoues();

    cout << endl;

    // Afficher les 4 roues de la voiture 2
    cout << "Les roues de la voiture 2 :" << endl;
    voiture2.afficherRoues();

    cout << endl;

    // Tester les operations sur une roue independante
    cout << "Test des operations sur une roue :" << endl;

    CRoue roue1(18, "Continental", 2.5);

    roue1.afficher();

    cout << endl;

    roue1.degonfler();
    roue1.afficher();

    cout << endl;

    roue1.gonfler();
    roue1.afficher();

    cout << endl;

    roue1.crever();
    roue1.afficher();

    return 0;
}