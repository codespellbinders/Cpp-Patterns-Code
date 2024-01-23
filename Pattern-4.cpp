// Program 05
/*
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i, j, k;
	for(i = 1 ; i <= 5 ; i++){
		for (j = 1 ; j <= 5  ; j++){
			cout<<(i*j)<<" ";
		}
			cout<<"\n";

		}
	return 0;
}
