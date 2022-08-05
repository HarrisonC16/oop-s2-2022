#include <iostream>

using namespace std;

int is_identity(int arr[10][10]){
int sum = 0; 
bool diagonal = true;
bool outers = true;

     for (int i = 0; i<10; i++) {
        for (int j = 0; j<10; j++) {
            if (i == j ) {
                if (arr[i][j]!=1) {
                    diagonal=false;
                }
            }
            else {
                if (arr[i][j]!=0) {
                    outers=false;
                }
            } 
             
          
        }
    }
if(diagonal == true && outers == true){
    printf("is an identity");

}
else{
    printf("not an identity");
} 
return 0;
}