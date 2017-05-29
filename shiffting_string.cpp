#include <iostream>
#include <string>
using namespace std;
int main() {
string str;
cout<<"enter the string";
getline(cin,str);
int k;
for (k = 0; str[k]; ++k);
int i,j,n;
char t;
cout<<"enter the no of shiffting : ";
cin>>n;
for (i = 0; i < n; ++i) {
	t=str[k-1];
	for (j = k-1; j >i; --j) {
		str[j]=str[j-1];
	}
	str[i]=t;
}
cout<<str<<endl;










return 0;
}

/* enter the string: hello world
enter the no of shiffting : 3
dlrhello wo
 */




