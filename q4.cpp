# include <iostream>
using namespace std;
int main(){
	//declaring variables
	int a;
	//asking and taking output
	cout<<"Input any number"<<endl;
	cin>>a;
	//applying condition for divisibility by 5
        if(a%5==0)
		{
         	if(a%11==0)
			{
			cout<<a<<" is divisible by both 5 and 11 ."<<endl;
		}
		//applying condition for divisiblity by 11
		else
			{
			cout<<a<<" is divisible by 5 but not by 11."<<endl;
		}
	}
	//applying condition for divisibility by 11
	else
	       {
		if(a%11==0)
			{
			cout<<a<<" is divisible by 11 not by 5."<<endl;
		}
		else
			{
			cout<<a<<" is neither divisible by 5 nor by 11."<<endl;
		}
	}
    	return 0;
}
