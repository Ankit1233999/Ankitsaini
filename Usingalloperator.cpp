#include <iostream>
using namespace std;
int main(){
int a = 1, b = 0;

int result = (a ^ b || !a &&b);
cout << "result:" << result;
return 0;
}
#include <iostream>
using namespace std;
int main(){
    int a =5, b=6;
    int result = (a && b ||  !a^b);
    cout << "result:" << result;
    return 0;

}
#include <iostream>
using namespace std;
int factorial (int i){

}
#include <iostream>
using namespace std;
//creating class 
class Student{
    public:
    // data member
    string name;
    int age;
    // Member function
    void dispaly(){
        cout << "Name:" << name << endl;
        cout << "Age;" << age << endl;

    }
};
   int main(){
    // student object 
    Student s1;
    // assigning values
    s1.name = "Ankit";
    s1.age = 21;
    // calling function 
    s1.dispaly();
    return 0;
   }
   #include <iostream>
   using namespace std;
   // design a class named student 
   Class student{
    private:
    // private data  members 
    int id;
    string name;
    float marks;
     
    public:
    // default constructor
    Student(){
        id = 0;
        name = "not given";
        marks = 0.0;
        
        cout << "Default Constructor called" << endl; 
    }

      // parameter constructor
       Student(int id, string name, float marks){
         // using the pointers 
         this->id = id;
         this->name = name;
         this->marks = marks;
         cout << "Paremeterized Constructor called " << endl;

       } 
       // now using the copy constructors

       Student(Student &s) {
         id = s.id;
         name = s.name;
         marks = s.marks; 

         cout << "Called the copy constructors" << endl; 
       }

         // dispaly function 
          void display(){
            cout <<"\n Student Details" << endl;
            cout <<"ID  :  "<< id << endl;
            cout << "Name :" << name << endl;
            cout << "Marks :" << marks << endl;
        } 

       };
       // main function 
       int main() {
        // object using default constructor

         Student s1;

         // object using 
         Student s2(110, " Ankit", 90.2);
         Studentn s3 = s2;

         s1.display();
         s2.display();
         s3.display();
         return 0;
       }
      

    

   
