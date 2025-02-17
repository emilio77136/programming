#include <iostream>
using namespace std;

double sumElements(double array[][3], int rows, int cols);
double avgElements(double array[][3], int rows, int cols);
double findMax(double array[][3], int rows, int cols);
double findMin(double array[][3], int rows, int cols);
int countEven(int array1[][3], int rows, int cols);
int countOdd(int array1[][3], int rows, int cols);



int main(){

    const int rows = 3;
    const int cols = 3;
    double array[rows][cols] = {
        {1.2,1,1},
        {1,1.7,9},
        {0.4,1,1.4}
        
    };

    int array1[rows][cols] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    //cout << sumElements(array, rows, cols);
    //cout << endl;
    //cout << avgElements(array, rows, cols);
    //cout << endl;
    //cout << findMax(array, rows, cols);
    //cout << endl;
    //cout << findMin(array, rows, cols);
    //cout << endl;
    //cout << countEven(array1, rows, cols);
    cout << countOdd(array1, rows, cols);

    return 0;
}

double sumElements(double array[][3], int rows, int cols){

    double sum = 0;

        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++){
                sum+= array[row][col];
            }
        }
        

    return sum;
}

double avgElements(double array[][3], int rows, int cols){

    double sum = 0;
    double avg = 0;
    int elementCount = 0;

        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++){
                sum+= array[row][col];
                elementCount++;
            }
        }
        
    avg = sum / elementCount;

    return avg;

}

double findMax(double array[][3], int rows, int cols){

    double largest = array[0][0];

        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++){
                if(array[row][col] > largest){
                    largest = array[row][col];
                }
            }
        }
    return largest;
}

double findMin(double array[][3], int rows, int cols){

    double smallest = array[0][0];

        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++){
                if(array[row][col] < smallest){
                    smallest = array[row][col];
                }
            }
        }
    return smallest;
}

int countEven(int array1[][3], int rows, int cols){

    int evenCount = 0;

        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++){
                if(array1[row][col] % 2 == 0){
                    evenCount++;
                }
            }
        }

    return evenCount;
}

int countOdd(int array1[][3], int rows, int cols){

    int oddCount = 0;

        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++){
                if(array1[row][col] % 2 == 1){
                    oddCount++;
                }
            }
        }

    return oddCount;
}