// Program 06
/*
*****
 ****
  ***
   **
    *
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i, j, k;
	for(i = 5 ; i >= 1 ; i--){
		for (j = 5-1 ; j >= i  ; j--){
			cout<<" ";
		}
		for (k=1 ; k<=i ; k++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	return 0;
}
