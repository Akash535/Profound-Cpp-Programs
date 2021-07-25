#include<iostream>
using namespace std;
int main(){
	double a,b,c;
	cout<<"\nenter the three no :\n";
	cin>>a>>b>>c;
	
	if(a==b && b==c)
		cout<<"\nAll three nos are equal and largest no is "<<a;
	else if(a>b && a>c){
		cout<<"\nlargest no is :"<<a;
		cout<<"\nAll three nos are not equal: "<<a<<" "<<b<<" "<<c;
	}
	else if(c<b){
		cout<<"\nlargest no is : "<<b;
		cout<<"\nAll three nos are not equal: "<<a<<" "<<b<<" "<<c;
	}
	// else if(a!=b && a==c)
	// 	cout<<"\nAll three nos are not equal: "<<a<<" "<<b<<" "<<c;
	else{
		cout<<"\nlargest no is :"<<c;
		cout<<"\nAll three nos are not equal:"<<a<<" "<<b<<" "<<c;
	}
}