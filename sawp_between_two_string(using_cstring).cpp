#include <iostream>
#include <string>
#include<cstring>
using namespace std;
int main() {
char str[100];
char str2[100];
cin.getline(str,100);
cin.getline(str2,100);
int l1,l2;
for (l1 = 0; str[l1]; ++l1) ;
for (l2 = 0; str2[l2]; ++l2) ;
char temp[l2];
int i;
for(i=0;i<l2;i++)
	temp[i]=str2[i];

for(i=0;i<l1;i++)
	str2[i]=str[i];
str2[i]='\0';


for(i=0;i<l2;i++)
	str[i]=temp[i];
str[i]='\0';


cout<<str<<"       "<<str2;










    return 0;
}
