#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1;
cout<<"enter the first sentence\n";
getline(cin,s1);
   for (int i = 0; i<s1.length() ; ++i) {
        s1[i]=0;
    }
   s1[0]='\0';

    cout<<"it  has been empty";
cout<<"\t"<<s1;







return 0;
}

/* enter the first sentence
hello world
it  has been empty
 */




