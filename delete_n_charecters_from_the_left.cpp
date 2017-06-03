#include <iostream>
using namespace std;
int main() {
string str;
getline(cin,str);
int k,n;
cout<<"enter the number of charecter to delete";
cin>>n;
for (k = 0; str[k]; ++k);
int i,j=0;
for (; str[n]; ++n) {
	str[j]=str[n];
	j++;
}
str[j]='\0';
cout<<str;
return 0;
}
