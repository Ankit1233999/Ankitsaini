#include <iostream>
using namespace  std;
class Employee {
    protected:
    int empID;
    string name;
    
    private:
    double salary;
     
    public:
    Employee(int id, string n, double s){
        empID =id;
        name = n;
        salary =s;

    }
     double getSalary(){
        return salary;
     }
 virtual void display(){
    cout << "employee name: " << name <<endl;
    cout << "employee ID: " << empID <<endl;
     cout << "employee salary: " << name <<endl; 
 }
};



 class Manager : public Employee{
    private:
    string department;
    
    public:
    Manager(int id, string n, double s, string dept)
    :Employee(id ,n, s){
        department = dept;
    } 
    void display() override{
        cout << "Manager Id: " << empID << endl;
        cout << "Manager Name: " << name << endl;
        cout << "Departemnt: " << department << endl;
        

    }
 };
 int main(){
    Manager m1(101, "Ankit", 75000, "IT");
    m1.display();
    m1.getSalary();
    return 0;

 }
