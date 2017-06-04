#include <iostream>
using namespace std;
int main() {
string str;
getline(cin,str);
int k,n;
cout<<"enter the number of charecter to delete";
cin>>n;
for (k = 0; str[k]; ++k);
int j=n,i=0;
for (; str[j]; ++j,i++) {
	str[i]=str[j];
}
str[i]='\0';
cout<<" after delete :"<<n<<" of charecters : ";

cout<<str;

return 0;
}
