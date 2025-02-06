//Rotate Left: Write a function that rotates the array elements one position to the left.

#include <iostream>
using namespace std;

void leftXd(int array[], int arraysize);


int main(){

    int arraysize = 5;
    int array[] = {1,2,3,4,5};

    leftXd(array, arraysize);


    return 0;
}


void leftXd(int array[], int arraysize){

    int last = array[0];

    for(int i = 0 ; i < arraysize; i++){
        array[i] = array[i + 1];
    }

    array[arraysize - 1] = last;

    for(int i = 0; i < arraysize; i++){
        cout << array[i] << " ";
    }
}