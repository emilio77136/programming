//Reverse an Array: Write a function that reverses the order of elements in the array.

#include <iostream>
using namespace std;


void reverseXd(int array[], int arraysize);

int main(){

    int arraysize = 5;
    int array[arraysize] = {1,2,3,4,5};

    reverseXd(array, arraysize);


    return 0;
}

void reverseXd(int array[], int arraysize){

    int temp[arraysize] = {0};

    for(int i = 0; i < arraysize; i++){
        temp[i] = array[arraysize - 1 - i];
    }
    

    cout << "Reversed: ";
    for(int i = 0; i < arraysize; i++){
        cout << temp[i] << " ";
    }
}

