#include <iostream>
using namespace std;
int main() {
	int L,R;
	char ch;
	ah:
	cout<<"enter the left number :";
	cin>>L;
	cout<<"enter the arithmatic opeartion :";
		cin>>ch;
	cout<<"enter the right number :";
		cin>>R;

switch (ch) {
	case '+':cout<<L<<"+"<<R<<"="<<L+R;
	break;
	case '-':cout<<L<<"-"<<R<<"="<<L-R;
		break;
	case '*':cout<<L<<"*"<<R<<"="<<L*R;
		break;
	case '/':cout<<L<<"/"<<R<<"="<<L/R;
		break;
	case '%':cout<<L<<"%"<<R<<"="<<L%R;
		break;
	default: cout<<"you enterd awrong arithmatic operation ";
		break;
}
cout<<endl;
goto ah;






return 0;
}




//enter the left number :4
//enter the arithmatic opeartion :+
//enter the right number :6
//4+6=10
//enter the left number :2
//enter the arithmatic opeartion :/
//enter the right number :2
//2/2=1
//enter the left number :3
//enter the arithmatic opeartion :*
//enter the right number :2
//3*2=6





