#include <iostream>

extern int sum_diagonal(int array[4][4]);

int main(){

int array[4][4] = {{1,2,3,4},{1,2,3,4}, {1,2,3,4},{1,2,3,4}};

std::cout << "the sum of the diagonal is: " << sum_diagonal(array) << std::endl;
    return 0; 
}