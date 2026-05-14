#include<iostream>
using namespace std;
    void towerofHanoi(int n, char source, char auxiliary,char destination){
        if (n==1){
            cout << " move disk 1 from " 
            << source <<" to " 
            << destination << endl;
            return;  
        }
        
        towerofHanoi(n-1,source ,destination, auxiliary);
        cout << " Move disk "  << n << "from"  << source  << " to" << destination << endl;
        towerofHanoi( n-1, auxiliary ,source , destination);
    } 
    int  main(){
        int n = 4;
        towerofHanoi(n , 'A', 'B', 'C');
           return 0;

    }

