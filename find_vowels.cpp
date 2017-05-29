#include <iostream>
#include <string>
using namespace std;
int main() {
string str;
cout<<"enter the string";
getline(cin,str);
int k;
for (k = 0; str[k]; ++k);


int co=0;
for (int i = 0; i < k; ++i) {
	if (str[i]=='a'||str[i]=='o'||str[i]=='e'||str[i]=='i'||str[i]=='u')
		co++;
	if (str[i]=='A'||str[i]=='O'||str[i]=='E'||str[i]=='I'||str[i]=='U')
		co++;

}
cout<<"the no of vowels in string is : "<<co<<endl;
return 0;
}

/* ---the input is---
enter the string: hello world are you pro

 ---the output is---
the no of vowels in string is : 8  */





