//Replace Element: Write a function that replaces all occurrences of a given value 
//with another value.

#include <iostream>
using namespace std;

void replaceXd(int array[], int arraysize, int initialVal, int newVal);

int main(){

int arraysize = 10;
int array[arraysize] = {1,2,4,2,6,8,2,5,0,2};
int initialVal= 2;
int newVal = 9;

    replaceXd(array, arraysize, initialVal, newVal);

    return 0;
}

void replaceXd(int array[], int arraysize, int initialVal, int newVal){

    for(int i = 0; i < arraysize; i++){
        if(array[i] == initialVal){
            array[i] = newVal;
        }
    }


    for(int i = 0; i < arraysize; i++){
        cout << array[i] << " ";
    }
}