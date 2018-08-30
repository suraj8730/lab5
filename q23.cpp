# include <iostream>
using namespace std;
int main()
	{
	//declaring variables 
	int a,n;
	//asking and taking input
	cout<<"Enter  a numer from which you need all natural numers till 0."<<endl;
	cin>>n;
	//loop
	a=1;
	while(n>a)
		{
		--n;
 		cout<<"all natural numbers from "<<n<<" to 0 are "<<n<<endl;
	}
	return 0;
}
