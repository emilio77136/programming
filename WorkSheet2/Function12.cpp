//Check if Sorted: Write a function that checks if an array is sorted in ascending order. 
//HINT: is there an element bigger than its successor?

#include <iostream>
using namespace std;

void sortedXd(int array[], int arraysize);


int main(){

    int arraysize = 5;
    int array[] = {1,2,3,4,5};

    sortedXd(array, arraysize);

    return 0;
}

void sortedXd(int array[], int arraysize){
    
    bool sorted;

    for(int i = 0; i < arraysize; i++){
        if(array[i] > array[i + 1]){
            sorted = true;
        }else{
        sorted = false;
        break;
      }
    }
    
    if(sorted){
        cout << "Sorted";
    }else{
        cout << "Not Sorted";
    }
}