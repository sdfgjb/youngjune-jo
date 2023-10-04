#include <iostream>
#include <vector>

class Polynomial;

class PolynomialTerm{
friend class Polynomial;

private:
    int power;
    float coeffcient;

};

class Polynomial{
private:
    PolynomialTerm *terms;
    int capacity; // size of PolynomialTem
    int size; // size of Terms
public:
    Polynomial(int c, int s):capacity(c), size(s)
    {
        PolynomialTerm* terms = new PolynomialTerm[capacity];
    }
    void setCoef(float value, int power);
    float getCoef(int power);
    int getDegree();
};

