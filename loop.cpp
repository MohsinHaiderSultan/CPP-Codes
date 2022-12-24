#include <iostream>

using namespace std;

int main(){
	for(int a=0; a<5; a++){
		for(int b = a; b>0; b--){
			cout<< "*" ;
		}
		cout<< endl;
	}
	return 0;
}
