#include <iostream>
using namespace std;

int sumXd(int array[], int arraysize);
double averageXd(int array[], int arraysize);
int largestXd(int array[], int arraysize);
int smallestXd(int array[], int arraysize);
void reverseXd(int array[], int arraysize);
int evensXd(int array[], int arraysize);
int oddsXd(int array[], int arraysize);
int searchXd(int array[], int arraysize, int target);
void replaceXd(int array[], int arraysize, int initialVal, int newVal);
void AscendingXd(int array[], int arraysize);
void DecendingXd(int array[], int arraysize);
void sortedXd(int array[], int arraysize);
void duplicatesXd(int array[], int arraysize);
void leftXd(int array[], int arraysize);
void rightXd(int array[], int arraysize);
void mergeXd(int array[], int array1[], int mergedArray[], int arraysize);


int main(){

    int arraysize = 10;
    int array[arraysize] = {1,3,6,3,1,3,6,8,3,3};
    int array2[arraysize] = {3,7,3,7,2,1,9,0,7,4};
    int mergedArray[] = {};
    int target = 8;
    int initalVal = 3;
    int newVal = 0;


    
    //cout << "Sum: " << sumXd(array, arraysize);
    //cout << "Average: " << averageXd(array, arraysize);
    //cout << "Largest: " << largestXd(array, arraysize);
    //cout << "Smallest: " << smallestXd(array, arraysize);
    //reverseXd(array, arraysize);
    //cout << "Evens: " << evensXd(array, arraysize); 
    //cout << " Odds: " << oddsXd(array, arraysize);
    //cout << "Index: " << searchXd(array, arraysize, target);
    //replaceXd(array, arraysize, initalVal, newVal);
    //AscendingXd(array, arraysize);
    //DecendingXd(array, arraysize);
    //sortedXd(array, arraysize);
    //duplicatesXd(array, arraysize); //*****************errors*************  */
    //leftXd(array, arraysize);
    //rightXd(array, arraysize);
    //mergeXd(array, array2, mergedArray, arraysize);


    return 0;
}

int sumXd(int array[], int arraysize){

    int sum = 0;

    for(int i = 0; i < arraysize; i++){
        sum += array[i];
    }

    return sum;
}

double averageXd(int array[], int arraysize){

    double sum = 0;
    double average = 0.0;

    for(int i = 0; i < arraysize; i++){
        sum += array[i];
    }

    average = sum/arraysize;

    return average;
}

int largestXd(int array[], int arraysize){

    int largest = array[0];

    for(int i = 1; i < arraysize; i++){
        if(array[i] >largest){
            largest = array[i];
        }
    }

    return largest;
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

void reverseXd(int array[], int arraysize){

    int temp[arraysize] = {0};

    for(int i = 0; i < arraysize; i++){
        temp[i] = array[arraysize - 1 - i];
    }
    

    cout << "Reversed: ";
    for(int i = 0; i < arraysize; i++){
        cout << temp[i] << " ";
    }
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

int oddsXd(int array[], int arraysize){

    int oddsCount = 0;

    for(int i = 0; i < arraysize; i++){
        if(array[i] % 2 == 1){
            oddsCount++;
        }
    }

    return oddsCount;

}

int searchXd(int array[], int arraysize, int target) {
    
    
    for (int i = 0; i < arraysize; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1; 
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

void sortedXd(int array[], int arraysize){
    
    bool sorted = true;

    for(int i = 0; i < arraysize - 1; i++){
        if(array[i] >= array[i + 1]){
            sorted = false;
            break;
        }
    }
    
    if(!sorted){
        cout << "Not Sorted";
    }else{
        cout << "Sorted";
    }
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

void leftXd(int array[], int arraysize){

    int last = array[0];

    for(int i = 0 ; i < arraysize; i++){
        array[i] = array[i + 1];
    }

    array[arraysize - 1] = last;

    for(int i = 0; i < arraysize; i++){
        cout << array[i] << " ";
    }
}

void rightXd(int array[], int arraysize){

    int last = array[arraysize - 1];

    for(int i = 1 ; i < arraysize; i++){
        array[arraysize - i] = array[arraysize - 1 - i];
    }

    array[0] = last;

    for(int i = 0; i < arraysize; i++){
        cout << array[i] << " ";
    }
}

void mergeXd(int array[], int array2[], int mergedArray[], int arraysize){
    
    int arraysize2 = 0;

    for(int i = 0; i < arraysize; i++){
        mergedArray[i] = array[i];
        arraysize2++;
    }

    for(int i = 0; i < arraysize; i++){
        mergedArray[arraysize2] = array2[i];
        arraysize2++;
    }

    for(int i = 0 ; i < arraysize2; i++){
        cout << mergedArray[i] << " ";
    }
}

