#include <iostream>
#include <string>
using namespace std;
int main() {
string str;
cout<<"enter the string: ";
getline(cin,str);
char ch;
cout<<"enter the charecter to find :";
cin>>ch;
int k;
for (k = 0; str[k]; ++k);



for(int i = 0; i < k; ++i) {
	if (str[i]==ch){
		cout<<"the charecter appear for the first in the location : "<<i;
		break;
	}

}










return 0;
}

/* enter the string: hello world
enter the charecter to find :w
the charecter appear for the first in the location : 6
 */




