// Program 02
/*

0 1
0 1 2
0 1 2 3
0 1 2 3 4
0 1 2 3 4 5

*/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i, j;
	for(i = 1 ; i <= 5 ; i++){
		for (j = 0 ; j <= i  ; j++){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
