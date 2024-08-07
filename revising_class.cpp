#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    float marks;
student(string n,int r,float m){
    name = n;
    roll= r;
    marks = m;
}
};
int main(){
    student s("Aashi",4,58.5);
    //s.name="aashi";
    //s.marks=58.5;
    //s.roll=4;
    cout<<s.name;
}

