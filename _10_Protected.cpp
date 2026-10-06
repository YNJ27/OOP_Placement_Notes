#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
    int marks;

    protected:
    int RollNo;
    
    public:
    string name;
};

class StudentLogin: public Student{
    void getRollNo(){
        cout<<RollNo<<"\n";    //See we can access RollNo(protected) here
    }

    void getMarks(){
        // cout<<marks<<"\n";  //We can't access marks(private) here
    }
};

int main(){
    Student S1;

    //We can't access both RollNo(protected) as well as marks(private) here
    // cout<<S1.RollNo<<"\n";
    // cout<<S1.marks<<"\n";
}