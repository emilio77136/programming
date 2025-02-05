//Sort in Ascending Order: Implement a function to sort an array in ascending order. 
//HINT: Research Bubble sort


#include <iostream>
using namespace std;

void AscendingXd(int array[], int arraysize);

int main(){

int arraysize = 5;
int array[arraysize] = {3,1,5,2,4};

    AscendingXd(array, arraysize);

    return 0;
}

void AscendingXd(int array[], int arraysize){

    int temp = 0;
    for(int i = 0; i < arraysize - 1; i++){
        for(int j = 0; j < arraysize - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < arraysize; i++){
        cout << array[i] << " ";
    }

}