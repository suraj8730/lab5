# include <iostream>
using namespace std;
int main(){
	//declaring variable
	int a;
	//asking and taking input 
	cout<<"type any number."<<endl;
        cin>>a;
	//applying condition for positive number
        if(a>0){
		cout<<a<<" is a positive number."<<endl;
	}
	//applying condition for negative number
	else{
		if(a<0)
		{	
		  	cout<<a<<" is a negative number."<<endl;
                }
		else
		{
			cout<<a<<" is zero."<<endl;
		}
	}
	return 0;
	
}
