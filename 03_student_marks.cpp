#include <iostream>
#include <string>
using namespace std;
int main () {
	string studentname;
	float subject1,subject2,subject3;
	cout<<"Enter your name:";
	cin>>studentname;
	cout<<"Enter marks of subject 1 :";
	cin>>subject1;
	cout<<"Enter marks of subject 2:";
	cin>>subject2;
	cout<<"Enter marks of subject 3:";
	cin>>subject3;
	
	cout<<"\n---studentmarksreport---"<<endl;
	cout<<"Name:"<<studentname<<endl;
	cout<<"Subject 1:"<<subject1<<endl;
	cout<<"Subject 2:"<<subject2<<endl;
	cout<<"Subject 3:"<<subject3<<endl;
	return 0;
	
}
