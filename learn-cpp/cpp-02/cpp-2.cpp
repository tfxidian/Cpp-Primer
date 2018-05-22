#include<iostream>
using namespace std;

int main()
{
	char s[6]= {'a','b','c','d','e','\0'};
	char s1[] = "abcde";
	cout<<s<<" "<< "and" <<" "<<s1<<endl;
	int a[8] = {1,2,3,4,5,6,7,8};
	for(int i=0;i<8;i++)
	{
		cout<<a[i]<<endl;
	}
	system("pause");
}

