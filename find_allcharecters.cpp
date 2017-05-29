#include <iostream>
#include <string>
#include<cstring>
using namespace std;
int main() {
string str;
cout<<"enter the string";
getline(cin,str);
int k;
for (k = 0; str[k]; ++k);
int j,co;
char i;
for (i = 'A'; i <='Z'; i++) {
			co=0;
			for (j = 0; j < k; ++j) {
				if (str[j]==i)
					co++;}
	cout<<"the : "<<i<<" appear : "<<co<<" times."<<endl;
							}




return 0;
}

/* ---the input is---
 enter the stringHELLO wORLD IT IS c++


 ----the output is---
the : A appear : 0 times.
the : B appear : 0 times.
the : C appear : 0 times.
the : D appear : 1 times.
the : E appear : 1 times.
the : F appear : 0 times.
the : G appear : 0 times.
the : H appear : 1 times.
the : I appear : 2 times.
the : J appear : 0 times.
the : K appear : 0 times.
the : L appear : 3 times.
the : M appear : 0 times.
the : N appear : 0 times.
the : O appear : 2 times.
the : P appear : 0 times.
the : Q appear : 0 times.
the : R appear : 1 times.
the : S appear : 1 times.
the : T appear : 1 times.
the : U appear : 0 times.
the : V appear : 0 times.
the : W appear : 0 times.
the : X appear : 0 times.
the : Y appear : 0 times.
the : Z appear : 0 times.
  */



