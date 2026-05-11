#include <iostream>
using namespace std; 
string checkevenodd(int n){
    if (n & 1)
        return "odd";
    
    else 
        return "even";

    } 
    int main(){  
        int n;
        cout <<"enter the number to check even or odd:";
        cin>>n; 

        cout << " print the number:" checkevenodd(n);

        return 0;
    
    }
