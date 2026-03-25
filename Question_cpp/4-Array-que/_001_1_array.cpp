// Array
#include <iostream>
using namespace std;
int main(){
    //array declaration
    int [] array1; //error: size of array must be specified
    int array2[]; //error: size of array must be specified
    int array3[5]; //valid: size of array is specified
    //array initialization
    int array4[5] = {1, 2, 3, 4, 5}; //valid: array is initialized with values
    int array5[5] = {1, 2}; //valid: remaining elements are initialized to 0
    int array6[5] = {0}; //valid: all elements are initialized to 0
    int array7[5] = {1, 2, 3, 4, 5, 6}; //error: too many initializers for array of size 5
    int array8[] = new int[5]; //valid: dynamic array declaration and initialization
    int array9[] = new int[5]{1, 2, 3, 4, 5}; //valid: dynamic array declaration and initialization with values
}
    