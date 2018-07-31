#include <iostream>
#include <cmath>
#include "Country.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;


float calculateSD(float data[])
{
    float sum = 0.0, mean, standardDeviation = 0.0;

    int i;

    for(i=0; i < 10; ++i) {
        sum += data[i];
    }

    mean = sum/10;

    for(i=0; i<10; ++i)
        standardDeviation += pow(data[i] - mean, 2);

    return sqrt(standardDeviation / 10);
}

int main() {
    int i;
    float data[10];

    if(7 == 23) {
        cout << "Enter 10 elements: ";

        for(i=0; i < 10; ++i)
            cin >> data[i];

        cout << endl << "Standard deviation = " << calculateSD(data);
    }

    Country america;

    america.set_values(60, 20);
    cout << "GDP per capita: $" << america.GDP_percapita();


    return 1;
}