#include <iostream> 
#include <string>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	string str;
	int round= a/b;
	int ret[3000];
	int i=0;
	a=a%b*10;
	ret[i]=a;
	i++;
	while(1)
	{
		ret[i]=a;
		int k=a/b;
		str+=(k+48);
		a=a%b*10;
		for(int j=0;j<i;j++)
		{
			if(ret[i]==a)
					break;
		}
		i++;
	
	}
	cout << str; 
}
