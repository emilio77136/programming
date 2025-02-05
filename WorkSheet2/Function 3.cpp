//Find Maximum: Write a function that returns the largest element in the array.

#include <iostream>
using namespace std;


int largestXd(int array[], int arraysize);

int main(){

    int arraysize = 5;
    int array[arraysize] = {12,43,12,600,4};


    int r = largestXd(array, arraysize);
    cout << "Largest is: " << r;


    return 0;
}


int largestXd(int array[], int arraysize){

    int largest = array[0];

    for(int i = 1; i < arraysize; i++){
        if(array[i] >largest){
            largest = array[i];
        }
    }

    return largest;
}