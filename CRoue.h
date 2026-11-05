/*******************************************************
Nom           : CRoue.h
Role          : Création Classe Roue
Auteur        : MAHINC Mathias
Version       : V1.0 du 04/11/2026
Licence       : GPL
IDE           : Visual Studio Code
OS            : Linux
Compilation   : g++ -Wall -pedantic -std=c++11 -c CRoue.cpp
********************************************************/

#ifndef ROUE_H
#define ROUE_H

#include <string>

class CRoue
{
private:
    int dimension;
    std::string marque;
    float pression;

public:
    CRoue();
    CRoue(int d, std::string ma, float p);
    ~CRoue();

    void afficher();
    void crever();
    void degonfler();
    void gonfler();
};

#endif