#include <iostream>
using namespace std;

int main(){
    // 5: Largest Element: Find and print the largest element in the 2D array.

   int arr[3][3] = {1,2,3,4,5,6,7,8,9};
   
   int maxVal = arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>maxVal){
                maxVal = arr[i][j];
            }
        }
    }
      cout << "Largest number is: " << maxVal << endl;
}