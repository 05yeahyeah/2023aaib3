// week05-4.cpp
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{ //Strp06: keyborad keys string
	string s = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c; // Step01: Input
	while( scanf("%c",&c) == 1 ){
		c = tolower(c); //Step03: tolower(c)
		if(c==' ' || c=='\n') cout << c; // Step02: Output
		else{
			int i = s.find(c); // Step04: find()
			cout << s[i-2]; // Step05:Output s[i-2]
		}
	}
}