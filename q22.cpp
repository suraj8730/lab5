# include <iostream>
using namespace std;
int main()
	{
	int a,n;
	//asking and taking input
	cout<<"Enter a number upto which you need all natural numbers"<<endl;
	cin>>n;
	//loop
	a=0;//assigning value
	while(a<n)
		{
		++a;
 		cout<<"all natural numbers from 1 to "<<n<<" are "<<a<<endl;
               
        }
	return 0;
}
