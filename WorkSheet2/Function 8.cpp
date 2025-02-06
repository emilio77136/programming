//Search for an Element: Write a function that searches for a given element 
//and returns its index (or -1 if not found).

#include <iostream>
using namespace std;

int searchXd(int array[], int arraysize, int target);

int main(){

int arraysize = 5;
int array[arraysize] = {23,43,76,22,5};
int target = 22;

int r = searchXd(array, arraysize, target);
cout << r;




    return 0;
}

int searchXd(int array[], int arraysize, int target){

    int index = 0;

    for(int i = 0; i < arraysize; i++){
        if(array[i] == target){
            return i;
            break;
        }else{
            return -1;
        }
    }

    

}
