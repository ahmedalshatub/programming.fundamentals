#include <iostream>
#include <string>
using namespace std;
void EmptyFunction(string s1);
void AtFunction(string s1);

int main() {
string s1;
cout<<"enter the first sentence\n";
getline(cin,s1);
int i;
//size of string function
for ( i = 0;s1[i]!='\0'; ++i) ;
    cout<<i<<endl;
//or we can use this:
for (i = 0; s1[i]; ++i) ;

//at
	AtFunction(s1);
   


//empty function
	EmptyFunction(s1);







return 0;
}


void AtFunction(const string& s1) {
	////////////////////////////////////////
	//at
	int index;
	cout << "please enter the index\t";
	cin >> index;
	cout << s1[index] << endl;
}


void EmptyFunction(string s1) {
	int i;
	bool flag = 0;
	for (i = 0; s1[i] != '\0'; ++i) {
		flag = 1;
	}
	cout << "if 0 then it is empty" << flag;
}
