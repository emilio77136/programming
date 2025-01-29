#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(int array[], int arraysize);
void calculateSum(int array[], int arraysize);
void findLargestNumber(int array[], int arraysize);
void countEvenNumbers(int array[], int arraysize);
void calculateAverage(int array[], int arraysize);
void findTarget(int array[], int arraysize, int target);
void resetOddNumbers(int array[], int arraysize);
void countOccurence(int array[], int arraysize, int target);
void copyArray(int array[], int arraysize);
void sortArray(int array[], int arraysize);
void insertElement(int array[], int arraysize);
void deleteElement(int array[], int arraysize);
int numberOfEven(int array[], int aarraysize);


int main() {
    int arraysize = 5;
    int array[arraysize] = {0};
    int target = 2;

    for (int i = 0; i < arraysize; i++) {
        cout << "Enter a number: ";
        cin >> array[i];
    }

    for (int i = 0; i < arraysize; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    cout << "enter target: ";
    cin >> target;
    cout << "Target is: " << target << endl;



    
    
    //reverseArray(array, arraysize);
    //calculateSum(array, arraysize);
    //findLargestNumber(array, arraysize);
    //countEvenNumbers(array, arraysize);
    
    //resetOddNumbers(array, arraysize);
    //countOccurence(array, arraysize, target);
    //copyArray(array, arraysize);
    //sortArray(array, arraysize);
    //insertElement(array, arraysize);
    //deleteElement(array, arraysize);
    int r = numberOfEven(array, arraysize);
    cout << "Even count : " << r << endl; 
    
    calculateAverage(array, arraysize);
    
    findTarget(array, arraysize, target);

    cout << "hi";
    cout << "hello";

    return 0;
}

int numberOfEven(int array[], int arraysize){
    int evencount = 0;
    
    for(int i = 0; i < arraysize; i++){
        if(array[i] % 2 == 0){
            evencount++;
        }
    }
    
    return evencount;
}












void reverseArray(int array[], int arraysize) {
    for (int i = 1 ; i < arraysize + 1; i++) {
        cout << array[arraysize - i] << " ";
    }
    cout << endl;
}

void calculateSum(int array[], int arraysize) {
    int sum = 0;
    for (int i = 0; i < arraysize; i++) {
        sum += array[i];
    }
    
    cout << "Sum: " << sum << endl;
}

void findLargestNumber(int array[], int arraysize) {
    int largestnum = array[0];
    for (int i = 1; i < arraysize; i++) {
        if (array[i] > largestnum) {
            largestnum = array[i];
        }
    }
    cout << "Largest Number: " << largestnum << endl;
}

void countEvenNumbers(int array[], int arraysize) {
    int evencount = 0;
    for (int i = 0; i < arraysize; i++) {
        if (array[i] % 2 == 0) {
            evencount++;
        }
    }
    cout << "Even number count: " << evencount << endl;
}

void calculateAverage(int array[], int arraysize) {
    int sum = 0;
    int avg = 0;
    
    for(int i = 0; i < arraysize; i++){
        sum += array[i];
    }
    
    avg = sum/5;
    
    cout << "Average: " << avg << endl;
}

void findTarget(int array[], int arraysize, int target) {
    bool found = false;
    for (int i = 0; i < arraysize; i++) {
        if (array[i] == target) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Found target " << endl;
    } else {
        cout << "Target not found" << endl;
    }
}

void resetOddNumbers(int array[], int arraysize) {
    
    int tempArray[arraysize] = {};
    
    for (int i = 0; i < arraysize; i++) {
        tempArray[i] = array[i];
    }
    
    for (int i = 0; i < arraysize; i++) {
        if (tempArray[i] % 2 == 1) {
            tempArray[i] = 0;
        }
    }
    
    cout << "Replace Negative: ";
    
    for(int i = 0; i < arraysize; i++){
        cout << tempArray[i] << " ";
    }
    
    cout << endl;
}


void countOccurence(int array[], int arraysize, int target){
   int count = 0;
   
   for(int i = 0; i < arraysize; i++){
       if(array[i] == target){
           count++;
       }
   }
   
   cout << "Target Occurence: " << count << endl;
}


void copyArray(int array[], int arraysize){
    int array2[arraysize] = {}; 
    
    for(int i = 0; i < arraysize; i++){
        array2[i] = array[i];
    }
    
    cout << "Copied to Array2: ";
    
    for(int i = 0; i < arraysize; i++){
        cout << array2[i] << " ";
    }
    
    cout << endl;
}


void sortArray(int array[], int arraysize){
    
    
    
    int tempArray[arraysize] = {};
    
    for(int i = 0; i < arraysize; i++){
        tempArray[i] = array[i];
    }
    
    sort(tempArray, tempArray + 5);
    
    for(int i = 0; i < arraysize; i++){
        cout << tempArray[i] << " ";
    }
    
    cout << endl;
    
}


void insertElement(int array[], int arraysize){
    
    
    int number;
    int index;
    
    cout << "enter number: ";
    cin >> number;
    cout << "enter index: ";
    cin >> index;
    
    array[index] = number;
    
    cout << "Array after inserting element: ";
    for(int i = 0; i < arraysize; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}


void deleteElement(int array[], int arraysize){
    
    int index;
    cout << "Enter index to delete element: ";
    cin >> index;
    

    array[index] = 0;
    
    cout << "After deletion: ";
    for(int i = 0; i < arraysize; i++){
        cout << array[i] << " ";
    }
}   


//hellog







