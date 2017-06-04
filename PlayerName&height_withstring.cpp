#include <iostream>
using namespace std;
int main() {
	int n=4;
	string PlayerName[2][n]{{"david beckham","gianluigi buffon","gabriel batistuta","zinedine zidane"}
	,{"1.83m","1.91m","1.85m","1.85m"}};
	int j,i;
	bool flag=false;
	char ch;
	ah	:
	cout<<"enter the first letters of player name";
	cin>>ch;
	for ( i = 0; i <n; ++i) {
		switch(PlayerName[0][i][0]==ch){
			case 1:                 for (j = i+1; j < n; ++j){
									switch(PlayerName[0][j][0]==ch){
									case 1:goto ah; break;}}
							flag=true;
							break;
		}
		if (flag)
			break;
		}
	if (flag)
		cout<<"player name : "<<PlayerName[0][i]<<" player height : "<<PlayerName[1][i]<<"m";
	 else
		cout<<"wrong charecter";

return 0;
}
