#include<iostream>
using namespace std;
#define max 10
int main()
{
	int number [max]={1,2,3,4,5,6,7,8,9,10};
	int index;
//	cout.set(ios::right);
	for(index=0;index<max;index++)
	{
		cout<<endl<<"the elements of array index "<<(index +1)<<" is "<<number[index];
	}
	return 0;
}
