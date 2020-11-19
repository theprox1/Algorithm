#include <iostream>
using namespace std;
long long gcd(long long a,long long b){
	long c;
	if(b==0){
		return a;
	}
	else{
		c = a%b;
		gcd(b,c);
	}
}

int main(){
	long long a,b;
	cin>>a>>b;
	if(gcd(a,b)==1){
		cout<<a*b;
	}
	else{
		cout<<a/gcd(a,b)*b;
	}
}
