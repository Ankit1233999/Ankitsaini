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
}
// in this code we print the right angle triangle pattern using the for loop and we use the space to print the right angle triangle pattern and we use the star to print the right angle triangle pattern and we use the new line to print the next line of the right angle triangle pattern and we use the return 0 to end the program.