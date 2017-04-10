#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--){
		
		int C=0,H=0,O=0,N=0;
		string  str;
		cin >> str;
		int len=str.length();
		for(int i=0;i<len;i++) 
		{	
			int ret=1;
			if(isdigit(str[i]))
				continue;
			int k=i+1;
			if(k<len&&isdigit(str[k]))
			{
				if(k+1<len&&isdigit(str[k+1]))
				{
					ret = (str[k]-48)*10+(str[k+1]-48);
				}
				else
					ret = (str[k]-48);	
			}
			switch(str[i]){
				case 'C': C+=ret;break;
				case 'H': H+=ret;break;
				case 'O': O+=ret;break;
				case 'N': N+=ret;break;
			}	
		}
		double sum;
		sum=C*12.01+H*1.008+O*16.00+N*14.01;
		printf("%.3f\n",sum);	
	}	
}
