#include<iostream> 
using namespace std;
int main()
{
	

	int n;
	cin >> n;
	while(n--)
	{
		int a[10]={0};
		int lim;
		cin>>lim;
		for(int i=1;i<=lim;i++)
		{
			int k=i;
			int j;
			while(k)
			{
			    j=k%10;
				a[j]++;
				k/=10;
			}
		}
		for(int i=0;i<9;i++)
		{
			cout<<a[i]<<" ";
		}
		cout << a[9];
		cout << endl;
	}
	return 0;
	
}
