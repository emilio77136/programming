//Remove Duplicates: Write a function that removes duplicate values from an array.


#include <iostream>
using namespace std;

void duplicatesXd(int array[], int arraysize);



int main(){

    int arraysize = 10;
    int array[arraysize] = {1,2,2,6,6,9,1,7,2,7};

    duplicatesXd(array, arraysize);


    return 0;
}


void duplicatesXd(int array[], int arraysize){

    bool dupe;
    int temp[] = {};

    for(int i = 0; i < arraysize; i++){\
        dupe = false;
        for(int j = 0 ; j < i; j++){
            if(array[i] == array[j]){
                dupe = true;
                
            }
        }
    }





    
    for(int i = 0; i < arraysize; i++){
        cout << array[i] << " ";
    }
}
