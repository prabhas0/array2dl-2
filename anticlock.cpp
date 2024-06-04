#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<" enter a rows and column";
	cin>>n;
	int arr[n][n];
	cout<<"enter the elements are";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<endl;
	//transposing the matrix
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
	//printing
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	//anticlockwise rotation
	//outer loop column
	for(int c=0;c<n;c++){
		//c indicates to column because column fixed ha
		int i=0;
		// i indicate to rows
		int j=n-1;
		//j indicates to rows 
		while(i<j){
			swap(arr[i][c],arr[j][c]);
			i++;
			j--;

		}
	}
	//printing
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}

		
	
	}
