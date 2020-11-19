#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> arr;
	int n;
	cin>>n;
	arr.insert(arr.begin(),0);
	arr.insert(arr.begin() + 1,1);
	for(int i=2;i<n+1;i++){
		arr.insert(arr.begin() + i,arr[i-1]+arr[i-2]);
	}
	cout<<arr[n];
	return 0;
}
