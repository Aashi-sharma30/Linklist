#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    float marks;
student(string name,int roll,float marks){
    this->name = name;
    this->roll= roll;
    this->marks = marks;
}
};
int main(){
    student s("Aashi",4,58.5);
    cout<<s.name;
}