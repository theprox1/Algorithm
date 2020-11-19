#include <iostream>
using namespace std;
int gcd(int a,int b){
	int c;
	if(b==0){
		return a;
	}
	else{
		c = a%b;
		gcd(b,c);
	}
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
}
