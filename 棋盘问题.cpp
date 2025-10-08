#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,m,z=0,c;
	cin>>n>>m;
	int min;
	if(n<m){
		min=n;
	}else{
		min=m;
	}
	for(int i=0;i<min;i++){
		z+=(n-i)*(m-i);
	}
	c=(n*m*(n+1)*(m+1))/4-z;
	cout<<z<<" "<<c<<endl;
		
	return 0;
}
