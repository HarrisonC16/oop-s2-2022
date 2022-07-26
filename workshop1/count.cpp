#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else

extern int count(int[], int);
int main(){
int array [4] = {2,4,6,8};
std::cout << "Even numbers are: " << count(array, 4) << std::endl;
    return 0;
}