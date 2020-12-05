#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	int random1, random2, random3;
	
	srand(3);
	
	random1=rand();
	random3=time();
	
	cout<<random1<<endl;
	cout<<random2<<endl;
	cout<<random3<<endl;
} 
