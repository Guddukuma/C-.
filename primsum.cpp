//#include<iostream>
//#include<climits>
////#include<algorithm>
//using namespace std;
//bool pairsum(int arr[], int n, int k){
//	int sum=0;	
//	for (int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			sum=arr[j]+arr[i];
//			if(sum==k){
//				cout<<"Array index whene true sum of pair element = "<<i<<", "<<j<<endl;
//				return true;
//			}
//		}
//	}
//	return false;
//}
//int main(){
//	int n;
//	cin>>n;
//	int arr[n];
//	for (int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	int k,len;
//	cin>>k;
//	cout<<"size of Given array = "<<sizeof(arr)<<endl;
//	cout<<pairsum(arr,8,k)<<endl;
//	return 0;	
//}




#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int k){
	int l=0;
	int j=n-1;
	while(l<j){
		if(arr[l]+arr[j]==k){
			cout<<l<<" "<<j<<endl;
			return true;
		}
		else if(arr[l]+arr[j]>k){
			j--;
		}
		else
			l++;
	}
	return false;
}

int main(){
	
	int arr[]={9,18,19,24,27,54,86};
	int k=37;


	cout<<pairsum(arr,7,k)<<endl;
	
	return 0;
}
