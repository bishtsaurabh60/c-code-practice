// given a string print all subsets of it 
#include<iostream>
using namespace std;

// this solution is not optimised
void sets(string s, string cur="", int i=0){

    if(i == s.length()){

        cout<<cur<<" ";
        return;
    }
    return sets(s, cur, i+1), sets(s, cur+s[i],i+1);
}

int main(){

    string sub = "abc";
    string cur = "";
    int i = 0;
    sets(sub);
    return 0;
}
