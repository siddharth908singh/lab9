//include the libraies
#include<iostream>
using namespace std;
//main function
int main()
{	//declare char string and pointer
	char name[22]={'S','i','d','d','h','a','r','t','h',' ','k','u','m','a','r',' ','s','i','n','g','h'}; 
	char *p;
	cout<<"Printing the array elements using normal index method."<<endl;
	for(int i=0;name[i]!='\0';)
	//final element of the character array is always \0
	{cout<<""<<name[i];
	i++;}
	cout<<endl;
	cout<<"Printing array elements using pointer method"<<endl;
	p=name;
	for(int i=0;*p!='\0';i++)//final element of the character array is always \0
	{	cout<<""<<*p;
		p++;
		}cout<<endl;
	return 0;
} 
