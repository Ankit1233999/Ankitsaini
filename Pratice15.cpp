#include <iostream>
using namespace std;
int main(){
    string name;// string ki beach ka space print kara na ho to ham get line  ka use kar ta ha 
     cin>> name;
    getline(cin,name); 
    
    
    cout <<name;
    //intput : "john doe" -> only print 
    //"John" 
    return 0;
} // use the get line  to print the space in the giving the of the out put of the name  using of getline functionan 
