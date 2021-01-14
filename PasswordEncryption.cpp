#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;

int main()
{
	string pass;
	char enc[20];
	int temp[20];
	int key[20];
	
	cout<<"\nEnter password";
	cin>>pass;
	
	for(int i=0;i<pass.size();i++)
	{
		key[i]=rand()%10;		
	}
	
	for(int i=0;i<pass.size();i++)
	{
		temp[i]=pass[i]+key[i];
		enc[i]=(char)temp[i];
		
	}
	
	cout<<"\nEncrypted Password:";
	for(int i=0;i<pass.size();i++)
	{
		cout<<enc[i];
	}
	return 0;
}
