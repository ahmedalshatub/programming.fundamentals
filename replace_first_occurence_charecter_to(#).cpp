#include <iostream>
#include<string>
using namespace std;
int main() {
string str;
getline(cin,str);
int k;
for (k = 0; str[k]; ++k);
char ch;
cout<<"enter the charecter to replace : ";
cin>>ch;
for (int i = 0; i < k; ++i) {
	if (str[i]==ch) {
		str[i]='#';
		break;
	}
}
cout<<str;
return 0;
}



