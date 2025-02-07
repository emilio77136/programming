//Rotate Right: Modify the previous function to rotate the array one position to the right.

#include <iostream>
using namespace std;

void rightXd(int array[], int arraysize);


int main(){

    int arraysize = 5;
    int array[] = {1,2,3,4,5};

    rightXd(array, arraysize);


    return 0;
}


void rightXd(int array[], int arraysize){

    int last = array[arraysize - 1];

    for(int i = 1 ; i < arraysize; i++){
        array[arraysize - i] = array[arraysize - 1 - i];
    }

    array[0] = last;

    for(int i = 0; i < arraysize; i++){
        cout << array[i] << " ";
    }
}