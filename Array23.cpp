/*#include<iostream>
using namespace std;
int main(){ 
int a[50], n,pos, element;
cout << "enter the value of element";
cin>>n;
cout <<"enter  array element :\n";
cin>>pos; 

for(int i=n; i>=pos; i--)
{
    a[i]=a[i-1];
}
 a[pos-1]=element;
 n++;
 cout<<"Array afterinsertion\n";
 for(int i=0; i<n; i++){
    cout <<a[i]<<" ";  
 }
 return 0;
}
*/


#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int k;
    int j=0;
    cout<<"enter the position";
    cin>>k;
    int arr2[7];
    for(int i=k;i<=7;i++){
        arr2[j]=arr2[i];
        j++
    }
    for(int i = 0; i < 7; i++) {
        cout << arr2[i] << " ";
    }
    

}



    