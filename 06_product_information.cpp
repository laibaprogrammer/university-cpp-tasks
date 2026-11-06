#include <iostream>
#include <string>
using namespace std;
int main() {
	string productname;
	float price;
	int quantity;
	float totalcost;
	cout<<"Enter product name:";
	cin>>productname;
	cout<<"Enter product price per unit:";
	cin>>price;
	cout<<"Enter quantity:";
	cin>>quantity;
	totalcost= price * quantity;
	cout<<"\n---product bill---"<<endl;
	cout<<"product:"<<productname<<endl;
	cout<<"price:"<<price<<endl;
	cout<<"quantity:"<<quantity<<endl;
	cout<<"total cost:"<<totalcost<<endl;
	return 0;
	
	
	
	
	
	
}
