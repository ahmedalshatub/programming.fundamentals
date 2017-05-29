#include <iostream>
#include <string>
using namespace std;
int main() {
string str;
cout<<"enter the string";
getline(cin,str);
int k;
for (k = 0; str[k]; ++k);


int i,j;
char t;
for (i = 0; i < k; ++i) {
	t=str[k-1];
	for (j = k-1; j >i; --j) {
		str[j]=str[j-1];
	}
	str[i]=t;
}
cout<<str<<endl;










return 0;
}

/* ---the input is---
enter the string: hello world

 ---the output is---
dlrow olleh */





