//Find Minimum: Write a function that returns the smallest element in the array
                                                                                               
#include <iostream>
using namespace std;

int smallestXd(int array[], int arraysize);

int main(){

    int arraysize = 5;
    int array[arraysize] = {12,43,1,600,4};


    int r = smallestXd(array, arraysize);
    cout << "Smallest is: " << r;


    return 0;
}


int smallestXd(int array[], int arraysize){

    int smallest = array[0];

    for(int i = 1; i < arraysize; i++){
        if(array[i] < smallest){
            smallest = array[i];
        }
    }

    return smallest;
}