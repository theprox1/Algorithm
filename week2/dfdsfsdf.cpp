#include <iostream>
#include <vector>
//#include <sstream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long arr[n],last_digit;
	arr[0] = 0;
	arr[1] = 1;
	for(int i=2;i<n+1;i++){
		arr[i] = arr[i-1]%10 + arr[i-2]%10;
	}
//	last_digit = arr[n]/pow(10,48);
	cout<<arr[n]%10<<endl;
	
//	cout<<last_digit;
	return 0;
}
