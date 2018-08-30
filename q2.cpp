# include <iostream>
using namespace std;
int main(){
	//declaring variables
	int a,b,c;
	//asking and taking input
	cout<<"Input your number"<<endl;
	cin>>a>>b>>c;
	//applying condition if a is maximum
	if(a>b && a>c)
	{
		cout<<a<<" is maximum."<<endl;	
	}
	//conditiont if b or c is maximun
	else{
		if(b>c)
		{
		cout<<b<<" is maximum."<<endl;
		}		
		else
		{
		cout<<c<<" is maximum."<<endl;
		}
	}

}
