//Q Print the subsets of the String 
// input: "abc"
// output : [abc,ab,ac,a,bc,b,c,'']

#include<iostream>
         using namespace std;

void subSeq(string seq,string up){
    if(up.empty()){
       cout<<seq<<endl;
       return;
    }

   char ch = up[0];
   // taking the elements
   subSeq(seq+ch,up.substr(1));

   // ignore the elements
   subSeq(seq,up.substr(1));
}

int main(){
   string s = "abc";
   subSeq("",s);
return 0;
}