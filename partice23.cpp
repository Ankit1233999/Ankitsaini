/*#include <iosatream>
using namespace std;
class Students{
    private:
    int marks;
    public:
    voidsetmarks(int m){
        marks=m;    
    }
    voiddisplay(){
        cout <<"Marks"<< marks;

    }

};
int main(){
    students;
    s.setMarks(90);
    s.display;
}*/

#include <iostream>
using namespace std;
class Tast{
    int x;
    public:
    Test(int a){
        x= a;

    }
    Test(const Test&t){
        x =t.x;

    }
};