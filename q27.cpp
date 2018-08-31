# include <iostream>
using namespace std;
int main()
	{
	int a, sum =0 ,i;// variable
	//asking and taking input
	cout<<"Enter a number upto which you need the sum ."<<endl;
	cin>>a;
	//loop
	 //   <initialisation><condition><increase operation>
	for(i =1;i<=a;++i)
		{		
		sum += i;//statement
	}
	cout<<"Sum of all natural numbrers upto "<<a<<" is "<<sum<<endl;
	return 0;

}
