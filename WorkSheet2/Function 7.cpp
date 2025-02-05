//Count Odd Numbers: Modify the previous function to count odd numbers.

#include <iostream>
using namespace std;

int oddsXd(int array[], int arraysize);

int main(){

    int arraysize = 10;
    int array[arraysize] = {1,2,3,4,5,6,7,8,9,10};

    int r = oddsXd(array, arraysize);
    cout << "Odd count: " << r;

    return 0;
}


int oddsXd(int array[], int arraysize){

    int oddsCount = 0;

    for(int i = 0; i < arraysize; i++){
        if(array[i] % 2 == 1){
            oddsCount++;
        }
    }

    return oddsCount;

}