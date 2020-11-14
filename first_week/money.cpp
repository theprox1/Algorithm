#include <iostream>
#include <vector>
using namespace std;
int main(){
	int W,c=0;
	cin>>W;
	int arr[3] = {10,5,1};
	for(int i=0;i<3;i++){
		while(W>=arr[i]){
			W=W-arr[i];
			c++;
		}
	}
	cout<<c<<endl;
}