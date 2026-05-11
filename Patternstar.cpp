#include <iostream>
using namespace std;    
int main()
{
    cout <<"enter number:" ;
    int N, row, col;
    cin>>N;
    for (row =1;  row <=N; row++)
    {
        for (col =1;col<=row;col++);
        {3
            cout << "*";
        }
        cout << "\n";
    }
}