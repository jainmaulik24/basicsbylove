// iostream is a header file which has code of fn we  use, so we include iostream
//many namespaces are there, so use std wala, if not specify by std::
// int main   starting pt
// cout<<
// cin>>
// \ n gives us extra line, and cursor transfer to next line... use endl, \n always inside '' or ""
// ; statement khatm, nothing left in this line, go to next

/*
int a =5;            bool b=1;                char ch= 'a';             int size= sizeof(a);
type of data- int
variable name- a
memory kitni- 4byte
soo, 4byte reserved, and usme 5 is stored which is 00..(33zeros)..00101


variable name,  1abc W  abc1 R  _abc R  a_b R    only _ special char allowed

*/






//char are mapped w ASCII table, so, a is 97, lets say, so 97 to binary, and store it in 1byte or 8bits.
/*suppose veryy big 32 digit number, how we decide if its integer, or maybe 4 characters? 
 datatypes, if int, then int, if char, then char*/



 /*how -5 is stored?
1) write it normally, so 00000101
2) take 1s compliment, so flip everything, 11111010
3)take 2s compliment, so add one, 11111011
this is how -5 is stored!

how to check?  -5+5=0;  if we add, 100000000, hence, by overflow, only 0 left!
so if u have 111111011, take its 1s compliment, and add 1, so youll get 5, and since it start with 1, -5*/

//unsigned int tells to ignore 1 as negative, so instead, a hugeee number positive one is taken like 2^31+...



#include<iostream>
using namespace std;
int main(){

    cout<<"namaste duniya!"<<endl;


    int a=123;
    cout<<a<<endl;

    char c='x';
    cout<<c<<'\n';
//char 'ab' not aloowed, only single character
    bool b=0;
    cout<<b<<"\n";

    bool bl=true;
    cout<<bl<<endl;

    float f=6.999;
    cout<<f<<endl;
//"f" not bcoz, itll print literally f not 6.999

    int size= sizeof(c);
    cout<<size<<'\n';  //1
//-------------------------------------------------------------------------typecasting

int u= '9';
cout<<u<<endl;  //57


char chh= 98;
cout<<chh<<'\n'; //b


int uu= 'a';
cout<<uu<<endl; //97

char ch1=123456;
cout<<ch1<<endl;
//@ comes bcoz, last bits of whole number--> 64 --> @, so lst 8 it considers and rest chops off, overflow

int v=4/5;
cout<<v<<endl;  //0

int v1=4.0/5;
cout<<v1<<endl;  //0

float v2=4/5;
cout<<v2<<endl;  //0

float v3=4.0/5;
cout<<v3<<endl;  //0.8

int p=4;
int o=5;
bool check= (p==o);
bool checkalso= (p<=o);
cout<<check<<endl<<checkalso<<endl;  //0 enter 1


int q=67;
cout<<!q<<endl; //0



}

