#include<iostream>
using namespace std;
int main(){ // this code run with the user input user give the input 
   int size;
   cout << " Enter the size of array:";
   cin >> size;
   int arr[size];

   cout<<"Enter array element:";
   for(int i = 0; i< size ; i++){
    cin >> arr[i];
   }
    int target;
    cout <<"Enter element to search:";
    cin >>target;
    bool found = false;

    for(int i = 0; i < size; i++){
    if(arr[i] == target){
        cout <<"Element found at index:"<<i;
        found = true;
        break;
    }
} 
if (found == false){
    cout << "Element not found";
    
}
return 0;
}  



#include<iostream>
using namespace std;// this code is without user input 

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    int target = 40;

    bool found = false;

    for(int i = 0; i < size; i++) {

        if(arr[i] == target) {
            cout << "Element found at index: " << i;
            found = true;
            break;
        }
    }

    if(found == false) {
        cout << "Element not found";
    }

    return 0;
}