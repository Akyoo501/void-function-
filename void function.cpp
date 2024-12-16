#include <iostream>
using namespace std;

void divide(int x, int y);

int main(){
	divide(4,2);
	return 0;
}

void divide(int x, int y){
	int z=x/y;
	cout<<"Result is: "<<z;
}
