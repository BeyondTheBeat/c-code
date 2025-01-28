#include<iostream>
using namespace std;

int main()
{
string name, surname, gender, course;
int id;
for(int i=1; i<=5; i++) {
    cout<<"Enter Your Student ID" << endl;
    cin >> id;
    cout<<"Enter Your Name " << endl;
    cin >> name ;
    cout<<"Enter Your Surname " << endl;
    cin >> surname ;
    cout<<"Enter Your Gender " << endl;
    cin >> gender;
    cout<<"Enter Your Course " << endl;
    cin >> course ;} 
    return 0;
}