#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	while(n--) 
	{
		
		string  s1;
		cin >> s1;
		int len = s1.length();
		for(int i=1;i<=len;i++)
		{
			if(len%i==0)
			{	
				int k;
				for(k=1;k<=len;k++)
				{
					if(s1[k]!=s1[k%i])
						break;	
				}
				if(k==len){
					printf("%d ",i);
					break;
				}
				
			}
		}
		if (n>0) printf(" ");
	}
	return 0;
}
