#include <iostream>
using namespace std;
int main(){     
    int row;
    cout <<"enter numberof rows:";
    cin>>row;
    for(int i=1;i<=row;i++){
        //print shapes 
        for(int j =1;j<=row-i;j++){
            cout <<" ";
        }// print stars
        for(int k=1;k<=i;k++){
            cout <<"*";
        }
        cout << "\n";  
        

    } 
    return 0;
}// solve left angle triangle patter using the for loo and we use the space to print the left angle triangle pattern and we use the star to print the left angle triangle pattern and we use the new line to print the next line of the left angle triangle pattern and we use the return 0 to end the program. 
// do left angle and right angle and inverted 

