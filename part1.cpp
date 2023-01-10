#include <iostream>
using namespace std;

int main(){

//    int array[5]={10,20,30,40,50};
//    
//    cout << array[3] << endl;
//    cout << "I am hear." << endl;
//	for(int i=0;i<5;i++){
//		cout << array[i] << endl;		
//	}
////	
	
	int n,i;
	cin>>n;
	int array[n];
	
	for ( i=0; i<=n ; i++ ){
		cin >> array[i];
	}
	
	cout << " In below code is running" << endl;
	
	
	for ( i=0; i<=n ; i++ ){
		cout << array[i] << endl ;
	}
	
	
	
	
	
	return 0;
}




