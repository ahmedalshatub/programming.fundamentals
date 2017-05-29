#include <iostream>
#include<string>
using namespace std;
int main() {
string str;
getline(cin,str);
int k;
for (k = 0; str[k]; ++k);
string str2;
int i,j=0;
for (i = 0; i < k; ++i) {
	if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){
		str2[j]=str[i];
	j++;}

}
str[j]='\0';
for (i = 0; str2[i]!='\0'; ++i)
	str[i]=str2[i];
str[i]='\0';
cout<<str;
return 0;
}



