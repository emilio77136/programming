//Search for an Element: Write a function that searches for a given element 
//and returns its index (or -1 if not found).

#include <iostream>
using namespace std;

void searchXd(int array[], int arraysize, int target);

int main(){

int arraysize = 5;
int array[arraysize] = {23,43,76,22,5};
int target = 22;

searchXd(array, arraysize, target);





    return 0;
}

void searchXd(int array[], int arraysize, int target){

    bool found;
    int index = 0;

    for(int i = 0; i < arraysize; i++){
        if(array[i] == target){
            index = i;
            found = true;
            break;
        }else{
            found = false;
        }
    }

    if(found){
        cout << "Index of " << target << " is: " << index;
    }else{
        cout << -1;
    }

}
