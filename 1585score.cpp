#include<iostream> 
#include <string>
using namespace std; 
int main()  
{  
	int n;
	cin>>n;
	while(n--)
	{
		string str;
		cin>>str;
		int ret=0;
		int sum=0;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='O'){
				ret++;
				sum+=ret;
				
			}
			else
				ret=0;
		}
		cout << sum <<endl;
	}
	return 0;
    
   
}  
