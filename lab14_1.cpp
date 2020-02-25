#include <iostream>
using namespace std;


int main(){
	int a=5;
	char b='A';
	char &c=b;
	int *x=&a;
	char *y=&b;
	int **z=&x;
	cout <<a<<" "<<b<<" "<<c<<""<<x<<" "<<y;
	cout <<&a<<" "<<&b<<" "<<&c<<""<<&x<<" "<<&y;

	

	

	
	
	
	return 0;
}
