//Soln by Colton-Pekar
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include <string>
using namespace std;

class Solution {
public:
	int myAtoi(string s) {
        int temp = 0;
		int i = 0;
        int n = s.length();
        
        //skip the white spaces
        while (s[i] == ' ' && i<n)
            i++;
        
        // positive integers need not have a sign, but negative integerrs do
        int sign = s[i] == '-'?-1:1;
        // if positive or neg inc index
        if (s[i] == '+'||s[i] == '-'){
            i++;
        }
        // set default value of result num as 0
        int num = 0;
        while (i<n && isdigit(s[i])){
            if(num>(INT_MAX-(s[i]-'0'))/10){
                return sign==-1?INT_MIN:INT_MAX;
            }
            //NO OVERFLOW
            int temp = s[i] - '0';
            num = num*10 + (s[i]-'0');
            i++;
        }
        return sign*num;
	}
};