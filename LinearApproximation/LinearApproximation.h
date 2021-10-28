#pragma once
#include <iostream>
#include<iomanip>
#include<string>
#include<ctime>
#include<vector>
#include<chrono>

using namespace std;

class LinearApproximation {
private:
    vector<double> xAr;
    vector<double> yAr;
    double k;
    double b;

    double sumMulXY; // sum of x*y
    double sumX;    // sum of x 
    double sumY;    // sum of y
    double sumPowX; //sum of squares x
    double powSumX; // square of sum x

public:
    LinearApproximation(const int& size);

    void setK(const double& k) {
        this->k = k;
    }
    void setB(const double& b) {
        this->b = b;
    }
    void setSumMulXY(const double& sumMulXY) {
        this->sumMulXY = sumMulXY;
    }
    void setSumX(const double& sumX) {
        this->sumX = sumX;
    }
    void setSumY(const double& sumY) {
        this->sumY = sumY;
    }
    void setSumPowX(const double& sumPowX) {
        this->sumPowX = sumPowX;
    }
    void setPowSumX(const double& powSumX) {
        this->powSumX = powSumX;
    }

    double getSumMulXY() {
        return sumMulXY;
    }
    double getSumX() {
        return sumX;
    }
    double getSumPowX() {
        return sumPowX;
    }
    double getPowSumX() {
        return powSumX;
    }
    double getSumY() {
        return sumY;
    }
    double getK() {
        return k;
    }
    double getB() {
        return b;
    }

    void computeSumMulXY(const int& size);
    void computeSumX(const int& size);
    void computeSumY(const int& size);
    void computeSumPowX(const int& size);
    void computePowSumX(const int& size);

    void findOutCoeffitients(int& size);
    void getArrayofPoints(const int& size);
    void getIntermediateSums(const int& size);

};
