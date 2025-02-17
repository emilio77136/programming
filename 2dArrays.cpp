#include <iostream>
using namespace std;

double sumElements(double array[][3], int rows, int cols);
double avgElements(double array[][3], int rows, int cols);



int main(){

    const int rows = 3;
    const int cols = 3;
    double array[rows][cols] = {
        {1.2,1,1},
        {1,1,1},
        {1,1,1.4}
        
    };


    cout << sumElements(array, rows, cols);

    cout << endl;

    cout << avgElements(array, rows, cols);
   

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


