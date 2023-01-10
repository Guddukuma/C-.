#include <bits\stdc++.h>
using namespace std;

int main()
{
	
	int n,s;
	cin>>n>>s;  // 6 , 24
	
	int arr[n];
	for(int i=0;i<n; i++ ){
		cin>>arr[i];         // {5 6 7 9 8 4}
	}
	
	int i=0,j=0,st=-1,en=-1,sum=0;
	
	while(j<n && sum+arr[j]<s){     // 0 < 6 && 0+5 < 24    true
		sum+=arr[j];				// 1 < 6 &&	5+6 < 24	true
		j++;						// 2 < 6 && 11+7 < 24	False
	}
	if(sum==s){						// 28==24             	False
		cout<<i+1<<" "<<j<<endl;
		return 0;
	}
	while(j<n){						// 2 < 6
		sum+=arr[j];
		while(sum>s){				// 28 > 24			True
			sum-=arr[i];			//28-5 > 24			false
			i++;
			
		}
		if(sum==s){
			st=i+1;
			en=j+1;
			break;
		}
		j++;
	}
	cout<< st<< " " << en << endl;
	return 0;
}
