#include <iostream>
using namespace std;
int main() { int n=4;
string PlayerName[n]{"david beckham","gianluigi buffon","gabriel batistuta","zinedine zidane"};
	float x[n]={1.83,1.91,1.85,1.85};
int j,i;
bool flag=false;
char ch;
ah	:
cout<<"enter the first letters of player name";
	cin>>ch;
	for ( i = 0; i <n; ++i) {
	if (PlayerName[i][0]==ch) {
				for (j = i+1; j < n; ++j)
					if (PlayerName[j][0]==ch)
						goto ah;
		flag=true;
		break;}
	}
if (flag) {
	cout<<"player name : "<<PlayerName[i]<<" player height : "<<x[i]<<"m";
} else {
	cout<<"wrong charecter";
}





	return 0;
}
