#include <iostream>
using namespace std;
void doubleIt(int&n){
    n= n*2;
// using the & this .
} 
int main(){
    int x=5;
    doubleIt(x);
    cout << x << endl;
    return 0;
}