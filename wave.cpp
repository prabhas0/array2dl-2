#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<" enter a rows and column";
	cin>>n;
	int arr[n][n];
	cout<<"enter the elements are"<<endl<<" ";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<endl;
	//column wise print
	for(int j=0;j<n;j++){
		if(j%2==0){//bootom to top
			for(int i=n-1;i>=0;i--){
				cout<<arr[i][j]<<" ";
			}
		}
		else{//top to bottom
			for(int i=0;i<n;i++){
				cout<<arr[i][j]<<" ";
			}
		}
	}
			
}	

			
	
	


