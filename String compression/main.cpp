#include <iostream>

using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <string>
int main()
{
    string s="aabccccaaaabbb";
    int aux=0;
    char s2=s[0];
    for(int i=0;i<s.length();i++){
        if(s[i]==s2)aux++;
        else{
            cout<<s2<<aux;;
            s2=s[i];
            aux=0;
        }
    }
    return 0;
}
