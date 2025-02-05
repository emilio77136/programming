//Count Even Numbers: Write a function that returns the count of even numbers in the array.

#include <iostream>
using namespace std;

int evensXd(int array[], int arraysize);

int main(){

    int arraysize = 10;
    int array[arraysize] = {1,2,3,4,5,6,7,8,9,10};

    int r = evensXd(array, arraysize);
    cout << "Even count: " << r;

    return 0;
}


int evensXd(int array[], int arraysize){

    int evenCount = 0;

    for(int i = 0; i < arraysize; i++){
        if(array[i] % 2 == 0){
            evenCount++;
        }
    }

    return evenCount;

}