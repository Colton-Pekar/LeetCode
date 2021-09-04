//Soln by Colton-Pekar
#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include <iterator>
#include <map>
#include<vector>
  
using namespace std;

class Solution {
public:
    vector <string> letterCombinations(string digits) {
        
    if (digits == "") {return{};}
        map <char, vector <char>> letters = {
        {'2', {"a","b","c"}}, {'3', {"d", "e","f"}}, {'4', {"g","h","i"}}, {'5', {"j","k","l"}},
        {'6', {"m","n","o"}}, {'7', {"p","q","r","s"}}, {'8', {"t","u","v"}}, {'9', {"w","x","y","z"}}
        }
        
    for (int i = 0; i<digits.length(); i++){
        vector <string>combinations += letters[digits[i]];
    return combinations;
    }
    }
};

    vector <string> letterCombinations(string digits) {
        
    if (digits == "") {return{};}
        map <char, vector <char>> letters = {
        {'2', {"a","b","c"}}, {'3', {"d", "e","f"}}, {'4', {"g","h","i"}}, {'5', {"j","k","l"}},
        {'6', {"m","n","o"}}, {'7', {"p","q","r","s"}}, {'8', {"t","u","v"}}, {'9', {"w","x","y","z"}}
        }
        
    for (int i = 0; i<digits.length(); i++){
        vector <string>combinations += letters[digits[i]];
    return combinations;
    }
    }

int main() {
    string mynumber = "53939933872";
   vector<string> answer = letterCombinations(mynumber);

    cout << answer;
}