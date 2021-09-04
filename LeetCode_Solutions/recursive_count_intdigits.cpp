//Soln by Colton-Pekar
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int intsize(int y){
        int count = 0;
        if (y != 0){
            y /= 10;
            count = intsize(y);        
            count++;
        }
        else{
            return count;
        }
    return count;    
}

int main(){
    int x = 0;
    cout << "please input a value that you want to know how many digits are in it ";
    cin >> x;
    int count = intsize(x);
    cout << count;
    return 0;
}
