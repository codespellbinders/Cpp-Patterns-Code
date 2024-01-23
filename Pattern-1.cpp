// Program 01
/*

    *
  * * *
* * * * *
  * * *
    *

*/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i, j;
	int n = 5;
	int x = n / 2 + 1;
	
	
	for(i = 1 ; i <= n ; i++){
		for (j = 1 ; j <= n  ; j++){
			if (j >= x && j <= n - x + 1){
			cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
	if (i <= n / 2)
		x--;
	else
		x++;
		cout<<endl;	
	}
	
	return 0;
}
