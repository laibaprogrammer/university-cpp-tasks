#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	float principal,rate,time,simpleinterest;
	cout<<"Enter principal amount:";
	cin>>principal;
	cout<<"Enter rate of interest (in %):";
	cin>>rate;
	cout<<"Enter time period (in years):";
	cin>>time;
	simpleinterest=(principal*rate*time)/100;
	cout<<"\n=================="<<endl;
	cout<<"    SIMPLE INTEREST CALCULATOR   "<<endl;
	cout<<"===================="<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"principaL amount: $"<<principal<<endl;
	cout<<"rate:"<<rate<<"%"<<endl;
	cout<<"time period:"<<time<< "year(s)"<<endl;
	cout<<"------------------"<<endl;
	cout<<"simple interest : $"<<simpleinterest<<endl;
	cout<<"==================="<<endl;
	return 0;
	
	
	
}
