//    SUBARRAYS. 

//   Given an array a[] of size n. Outpute of each sum of subarray of the given array.



#include <iostream>
using namespace std;
 
int main(){
	
	cout<< "Enter array size : ";
	int n;
	cin >>n;
	
	cout<< "Enter array : ";
	int array[n];
	for(int i=0;i<n;i++){	
		cin>>array[i];	
	}
	cout << "sum of subarray : ";
	
	int curr=0;
	for (int i=0;i<n;i++){
		curr=0;
		for(int j=i;j<n;j++){
			curr+=array[j];
			cout<<curr<< " ";
		}
		cout << " , ";
	}
	
	 
}
