#include "LinearApproximation.h"
#include "Timer.h"


int main() {
    int size;
    cout << "Enter size of points array: ";
    cin >> size;
    vector<int> xNumerator(size);
    vector<int> xDenominator(size);
    vector<int> yNumerator(size);
    vector<int> yDenominator(size);

    inputArrays(xNumerator, xDenominator, yNumerator, yDenominator);

    Timer t;
    //LinearApproximation line(size);Конструктор з 1 вектором для x та y
    LinearApproximation line(xNumerator, xDenominator, yNumerator, yDenominator); //Конструктор з 4 вектором для x та y (чисельник та знаменник)
    line.getArrayofPoints(size);
    line.getIntermediateSums(size);
    line.findOutCoeffitients(size);

    cout << "Time taken: " << t.elapsed() << " sec\n";
    return 0;
}



