//Average of Elements: Modify the previous function to return the average instead.


#include <iostream>
using namespace std;

int averageXd(int array[], int arraysize);

int main(){

int arraysize = 5;
int array[arraysize] = {1,2,3,4,5};

    int r = averageXd(array, arraysize);
    cout << "Average is: " << r;

    return 0;
}

int averageXd(int array[], int arraysize){

    int sum = 0;
    int average = 0;

    for(int i = 0; i < arraysize; i++){
        sum += array[i];
    }

    average = sum/arraysize;

    return average;
}
