#include <iostream>
#include <string>
#include<cstring>
using namespace std;
int main() {
string str;
cout<<"enter the string";
getline(cin,str);
char ch;
cout<<"enter the charecter to find :";
cin>>ch;
int k;
for (k = 0; str[k]; ++k);


int co=0;
for (int i = 0; i < k; ++i) {
	if (str[i]==ch)
		co++;
}
cout<<"the charecter "<<ch<<" appear : "<<co<<" times"<<endl;

return 0;
}

/* ---the input is---
 enter the stringhello world iam programmer
enter the charecter to find : o

 ---the output is---
the charecter o appear : 3 times  */



