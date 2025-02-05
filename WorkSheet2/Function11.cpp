//Sort in Descending Order: Modify the previous function to sort in descending order.
#include <iostream>
using namespace std;

void DecendingXd(int array[], int arraysize);

int main(){

int arraysize = 5;
int array[arraysize] = {3,1,5,2,4};

    DecendingXd(array, arraysize);

    return 0;
}

void DecendingXd(int array[], int arraysize){

    int temp = 0;
    for(int i = 0; i < arraysize - 1; i++){
        for(int j = 0; j < arraysize - 1; j++){
            if(array[j] < array[j + 1]){
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