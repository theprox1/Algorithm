#include <iostream>
#include <vector>
using namespace std;

long long TwoWayProduct(vector<int> arr,int n){
	long long max_pos=-1,secondmax=-1;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[max_pos]){
			max_pos = i;
		}
	}
	for(int i=0;i<n;i++){
		if((i!=max_pos) && (arr[i] > secondmax)){
			secondmax = arr[i];
		}
	}
	return(arr[max_pos]*secondmax);
}
int main(){
	
	// int c;
	// while(c!=10){
		
	// 	int n = rand()%10+2;
	// 	cout<<n<<endl;
		
	// 	for(int i=0;i<n;++i){
	// 		arr.push_back(rand()%100);
	// 	}
	// 	for(int i=0;i<n;++i){
	// 		cout<<arr[i]<<" ";
	// 	}
	// 	cout<<"\n";
		
	vector<int> arr;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int input;
		cin>>input;
		arr.push_back(input);
	}
	cout<<TwoWayProduct(arr,n)<<endl;
	return 0;
}