#include "LinearApproximation.h"
#include "Timer.h"


int main() {
    
    int size;
    cout << "Enter size of points array: ";
    cin >> size;

    Timer t;
    LinearApproximation line(size);

    line.getArrayofPoints(size);
    line.getIntermediateSums(size);
    line.findOutCoeffitients(size);

    cout << "Time taken: " << t.elapsed() << " sec\n";
    return 0;
}



