//Sum of Elements: Write a function that takes an array and its size,
//then returns the sum of its elements.


#include <iostream>
using namespace std;

int sumXd(int array[], int arraysize);

int main(){


int arraysize = 5;
int array[arraysize] = {1,2,3,4,5};

int r = sumXd(array, arraysize);
cout << "Sum: " << r;

    return 0;
}

int sumXd(int array[], int arraysize){

    int sum = 0;

    for(int i = 0; i < arraysize; i++){
        sum += array[i];
    }

    return sum;
}