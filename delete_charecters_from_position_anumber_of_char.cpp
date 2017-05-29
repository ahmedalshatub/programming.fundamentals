#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1;
	   cout<<"enter the first sentence\n";
	       getline(cin,s1);
	       int pos1,n;
	    cout<<"enter the position:\t";
	    cin>>pos1;
	    cout<<"enter the number of erase charcters:\t";
	    cin>>n;
	    int j=pos1,i=pos1+n;

	    for(;i<s1.length();i++){
	    	s1[j]=s1[i];
	    	j++;

	    }
	    s1[j]='\0';


	cout<<s1;


return 0;
}

/* enter the first sentence
hello world
enter the position:	7
enter the number of erase charcters:	8
hello w
 */




