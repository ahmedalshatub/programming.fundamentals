#include <iostream>
#include <string>
using namespace std;
int main() {
string s;
//index
cout<<"-----------------------the index----------------"<<endl;
s="hello world";
cout<<"s.at(2):"<<s.at(2)<<endl;
cout<<"s.at(30):"<<"it while be wrong because the size of string is short than 30"<<endl;
cout<<s<<endl;


//append
cout<<"-----------------------the append----------------"<<endl;
s.append(5,'!');
cout<<"s.append(n,char) where n is num of copies for char n=5 char=!: "<<s<<endl;
s="hello world";
s.append(" programmer");
cout<<"s.append( \"programmer\"):"<<s<<endl;
string s2="my name is";
s.append(s2);
cout<<"s.append(s2):"<<s<<endl;
cout<<"where s2 is string and it value is \"my name is\" "<<endl<<endl;


//clear
cout<<"-----------------------the clear----------------"<<endl;
s="hello world";
s.clear();
cout<<"s.clear():it while delete the string so if we print the string it while never print any thing"<<s<<endl;


//empty
cout<<"-----------------------the empty----------------"<<endl;
cout<<"and if we use s.empty():it while return true::"<<s.empty()<<endl;
s="hello world";
cout<<"if we give a value for s and check if it empty or not"<<endl;
cout<<"s.empty():it while return false::"<<s.empty()<<endl;
s="hello world";
s2="my name is";
cout<<endl<<endl;
//compare
cout<<"-----------------------the compare----------------"<<endl;
cout<<"s= "<<s<<"\t s2= "<<s2<<endl;
cout<<"the compare between s and s2 while return the different between them"<<endl;
cout<<"s.compare(s2): "<<s.compare(s2)<<endl;


//erase
cout<<"-----------------------the erase----------------"<<endl;
s="hello world";
cout<<"s.erase() with out parameters  while delete all the charecters in the string so when\n we check it with empty it will return 1"<<endl;
s.erase();
cout<<endl;
cout<<"s.empty"<<s.empty()<<endl;
cout<<endl;
s="hello world";
s.erase(3,2);
cout<<"s.erase(3,2) will delete the charecter of index 3 to the index 3+2:"<<endl;
cout<<s;
cout<<endl;

s="hello world";
cout<<"s.erase(20,2) will show an erorr because the size of string is shor than 20"<<endl;
cout<<endl;



s="hello world";
s.erase(3);
cout<<"s.erase(3) will delete the charecter of index 3 to the end of string: ";
cout<<s;
cout<<endl;
//find
cout<<"-----------------------the find----------------"<<endl;
s="hello world";

cout<<"s.find(\"llo\") will search for the string (llo) from the index 0 to the \0 "<<endl;
cout<<"if it find the string llo then it will return the index of charecter (l)";
cout<<"also we can give the index of first ocurence of string to a variable"<<endl;
cout<<"s.find(\"llo\"): "<<s.find("llo");
cout<<endl;
cout<<endl;


cout<<"if we Replace llo with a string that is not in the (s) so the output will be rubbish  "<<endl;
cout<<"like s.find(\"the\"): "<<s.find("the");
cout<<endl;

cout<<"s.find(\"wo\",4): it will search on wo in the string (s) from index 4 to the \0 and if it exist\n it will return the pos of first ouxarence"<<endl;
cout<<"s.find(\"wo\",4):"<<s.find("wo",4);
cout<<endl;
cout<<"note when it search the index 4 will included in space of search";
cout<<endl;
cout<<"also we can Replace wo with a a string variable  ";
cout<<endl;
cout<<endl;

//length
cout<<"-----------------------the length----------------"<<endl;
cout<<"s.length() will return the length of string: s.length(): "<<s.length()<<endl<<"also s.size: "<<s.size();
cout<<endl;

//swap
cout<<"-----------------------the swap----------------"<<endl;
s="hello world";
s2="my name is";
cout<<endl<<endl;

cout<<"s= "<<s<<"\t s2= "<<s2<<endl;
s.swap(s2);
cout<<"s.swap(s2): it will swap between s and s2 :";
cout<<"s= "<<s<<"  || s2= "<<s2<<endl;


//insert
cout<<"-----------------------the insert----------------"<<endl;
s="hello world";
s2="my name is";
cout<<endl<<endl;
cout<<"s.insert(3,5,'!'): it will add char=! in the string (s) from position pos=3, n=5 times";
cout<<endl;
s.insert(3,5,'!');
cout<<s;
cout<<endl;


s="hello world";
cout<<"s.insert(12,5,'!') it will be an erorr because the size of string is short than 12";
cout<<endl;



s="hello world";
cout<<"s.insert(2,\"pr\") it will insert pr in the pos 2 and push the supplement of (s) to the left  ";
cout<<endl;
s.insert(2,"pr");
cout<<s;
cout<<endl;

//replace
cout<<"-----------------------the replace----------------"<<endl;
s="hello world";
cout<<"s.replace(3,4,\" my\") it will delte  all the charecters from 3 to 3+4 and insert ' my' from 3 to 3+4";
cout<<endl;
s.replace(3,4," my");
cout<<s;
cout<<endl;
cout<<endl;
//substr
cout<<"-----------------------the substr----------------"<<endl;
s="hello world";
string s3=s.substr(2,5);
cout<<"s3=s.substr(2,5) s3 will equl string from 2 to 2+5 from (s) ";
cout<<"s= "<<s<<"|  s3= "<<s3;
    return 0;
}

//the output will be 

//s.at(2):l
//s.at(30):it while be wrong because the size of string is short than 30
//hello world
//-----------------------the append----------------
//s.append(n,char) where n is num of copies for char n=5 char=!: hello world!!!!!
//s.append( "programmer"):hello world programmer
//s.append(s2):hello world programmermy name is
//where s2 is string and it value is "my name is" 
//
//-----------------------the clear----------------
//s.clear():it while delete the string so if we print the string it while never print any thing
//-----------------------the empty----------------
//and if we use s.empty():it while return true::1
//if we give a value for s and check if it empty or not
//s.empty():it while return false::0
//
//
//-----------------------the compare----------------
//s= hello world	 s2= my name is
//the compare between s and s2 while return the different between them
//s.compare(s2): -5
//-----------------------the erase----------------
//s.erase() with out parameters  while delete all the charecters in the string so when
// we check it with empty it will return 1
//
//s.empty1
//
//s.erase(3,2) will delete the charecter of index 3 to the index 3+2:
//hel world
//s.erase(20,2) will show an erorr because the size of string is shor than 20
//
//s.erase(3) will delete the charecter of index 3 to the end of string: hel
//-----------------------the find----------------
//s.find("llo") will search for the string (llo) from the index 0 to the 
//if it find the string llo then it will return the index of charecter (l)also we can give the index of first ocurence of string to a variable
//s.find("llo"): 2
//
//if we Replace llo with a string that is not in the (s) so the output will be rubbish  
//like s.find("the"): 18446744073709551615
//s.find("wo",4): it will search on wo in the string (s) from index 4 to the 
//s.find("wo",4):6
//note when it search the index 4 will included in space of search
//also we can Replace wo with a a string variable  
//
//-----------------------the length----------------
//s.length() will return the length of string: s.length(): 11
//also s.size: 11
//-----------------------the swap----------------
//
//
//s= hello world	 s2= my name is
//s.swap(s2): it will swap between s and s2 :s= my name is  || s2= hello world
//-----------------------the insert----------------
//
//
//s.insert(3,5,'!'): it will add char=! in the string (s) from position pos=3, n=5 times
//hel!!!!!lo world
//s.insert(12,5,'!') it will be an erorr because the size of string is short than 12
//s.insert(2,"pr") it will insert pr in the pos 2 and push the supplement of (s) to the left  
//heprllo world
//-----------------------the replace----------------
//s.replace(3,4," my") it will delte  all the charecters from 3 to 3+4 and insert ' my' from 3 to 3+4
//hel myorld
//
//-----------------------the substr----------------
//s3=s.substr(2,5) s3 will equl string from 2 to 2+5 from (s) s= hello world| s3= llo w
