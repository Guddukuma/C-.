//  find the max and min number in array.

# include <iostream>
#include<climits>
using namespace std;

int main(){
	
	int n , i, array[n];
	
	cin>> n;
	
	for ( i=0; i<=n ; i++ ){
			cin >> array[i];
		}
		
	int maxNo= INT_MIN;
	int minNo=INT_MAX;
	
	for ( i=0; i<n; i++){
		maxNo=max(maxNo,array[i]);
	    minNo=min(minNo,array[i]);
		
	}
	cout<<"max no is : " << maxNo << endl <<" min no is : "<<minNo << endl; 
	return 0;
}
