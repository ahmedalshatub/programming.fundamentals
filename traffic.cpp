#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;


	     ah:
		 cout<<"enter the color of traffic"<<endl;
		  cin>>str;

	      switch (str=="red") {
			case 1:cout<<"stop"<<endl;
			break;
			case 0:switch (str=="yellow") {
			case 1:cout<<"wait"<<endl;
			break;
			case 0:switch (str=="green") {
						case 1:cout<<"go"<<endl;
						break;
						case 0:cout<<"you entered awrong color "<<endl;}}
			        	break;

		}

goto ah;






return 0;
}






