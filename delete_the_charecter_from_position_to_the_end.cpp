#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1;
    cout<<"enter the first sentence\n";
    getline(cin,s1);
    int pos;
    cout<<"enter the position:\t";
    cin>>pos;
    for (int i = pos; i<s1.length() ; ++i) {
           s1[i]=0;
       }
      s1[pos]='\0';

       cout<<"it  has been erase";
cout<<"\t"<<s1;




return 0;
}

/* enter the first sentence
hello world
enter the position:	4
it  has been erase	hell
 */




