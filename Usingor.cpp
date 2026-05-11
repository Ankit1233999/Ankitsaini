#include <iostream>
using namespace std; 
int main(){
int arr[]= {1,3,5,3,1};
int n = 5;

int result = 0; 

for( int i=0; i<n;  i++){
    result = result ^ arr[i];

}
cout <<"Unique:" <<result;
return 0;
}