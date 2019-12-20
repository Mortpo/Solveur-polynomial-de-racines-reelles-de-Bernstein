#ifndef BERNSTEIN_H
#define BERNSTEIN_H

#include "Matrice.h"
#include "Fonction.h"
#include "Interval.h"

class Bernstein
{
private:
    Matrice m_invm;
    Matrice m_castelG;
    Matrice m_castelD;
    Matrice m_coeff;
    std::vector<double> m_racine;
    Interval m_origin;
    void rootfinder(Matrice &controlpoint, Interval interval, double precision); //recurence!!//quick sort algo

public:
    void root(double precision);
    void showracine();

    /*Bernstein(double a, double b, double c, double d, double e, double f); //deg 5
    Bernstein(double a, double b, double c, double d, double e);           //deg 4
    Bernstein(double a, double b, double c, double d);                     //deg 3*/
    Bernstein(double a, double b, double c); //deg 2
};

#endif