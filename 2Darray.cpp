#include<iostream>
using namespace std;
int main() {
// Declaring a 2D array with 3 rows and 4 columns
int array [3][4] ={
{1,2,3,4} , 
{5,6,7,8} , 
{9,10,11,12}
};

//Accessin the specific elements in 2D array
cout<<"Element at [0][2] : "<<array[0][2]<< endl;
cout<<"Element at [1][3] : "<<array[1][3]<< endl;

// Traversing the entire 2D array
   for(int i=0;i<3;i++) {       //Loop through rows
 for(int j=0;j<4;j++){            // Loop through columns
      cout<<array[i][j] << " "  ; // printing each element                        
 }
 cout<<endl;
   }
    return 0;
}