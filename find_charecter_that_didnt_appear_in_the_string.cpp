#include <iostream>
#include <string>
using namespace std;
int main() {
string str;
cout<<"enter the string: ";
getline(cin,str);

int k,co=0;
for (k = 0; str[k]; ++k);
int j;
for (char i = 'A'; i <='Z'; ++i) {
	for (j = 0; j < k; ++j) {
		co=0;
		if (i==str[j])
			co++;
							}
	if (co==0)
		cout<<"the charecter : "<<i<<" didnt appear"<<endl;

}

cout<<"---smallleters-----";
for (char i = 'a'; i <='z'; ++i) {
	co=0;
	for (j = 0; j < k; ++j) {
		if (i==str[j])
			co++;
							}
	if (co==0)
		cout<<"the charecter : "<<i<<" didnt appear"<<endl;

}







return 0;
}

/* enter the string: HelLO woRLD Pro
the charecter : A didnt appear
the charecter : B didnt appear
the charecter : C didnt appear
the charecter : D didnt appear
the charecter : E didnt appear
the charecter : F didnt appear
the charecter : G didnt appear
the charecter : H didnt appear
the charecter : I didnt appear
the charecter : J didnt appear
the charecter : K didnt appear
the charecter : L didnt appear
the charecter : M didnt appear
the charecter : N didnt appear
the charecter : O didnt appear
the charecter : P didnt appear
the charecter : Q didnt appear
the charecter : R didnt appear
the charecter : S didnt appear
the charecter : T didnt appear
the charecter : U didnt appear
the charecter : V didnt appear
the charecter : W didnt appear
the charecter : X didnt appear
the charecter : Y didnt appear
the charecter : Z didnt appear




		---smallleters-----
the charecter : a didnt appear
the charecter : b didnt appear
the charecter : c didnt appear
the charecter : d didnt appear
the charecter : f didnt appear
the charecter : g didnt appear
the charecter : h didnt appear
the charecter : i didnt appear
the charecter : j didnt appear
the charecter : k didnt appear
the charecter : m didnt appear
the charecter : n didnt appear
the charecter : p didnt appear
the charecter : q didnt appear
the charecter : s didnt appear
the charecter : t didnt appear
the charecter : u didnt appear
the charecter : v didnt appear
the charecter : x didnt appear
the charecter : y didnt appear
the charecter : z didnt appear
 */




