//array in searching.
//     linner search = O(n)

#include <iostream>
using namespace std;

int linner_search(int array[], int n, int key){
	for( int i=0; i<n; i++){
		if (array[i]==key){
			return i;
		}
	}
	return -1;
}

	int main (){	
	int n;a
	cin>>n;
	cout << "Enter the No of array"<< endl;
	int array[n];
	for (int i=0;i<n+1;i++){
		cin>>array[i];
	}
	cout << "Enter the search number"<< endl;
	int key;
	cin>>key;
	cout<< linner_search(array, n, key)<< endl;
	return 0;
}
