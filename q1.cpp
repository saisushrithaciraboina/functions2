#include<iostream>
using namespace std;
int isperfect(int);
int main()
{
	int num,res;
	cin>>num;
	res = isperfect(num);
	if(res==1)
	cout<<endl<<num<<"is a perfect number";
	else
	cout<<endl<<num<<"is not a perfect number";
	cout<<endl;
	return 0;
}
int isperfect(int n)
{
	int i, s=0;
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		s=s+i;
	}
	if(n==s)
	return 1;
	else
	return 0;
}
