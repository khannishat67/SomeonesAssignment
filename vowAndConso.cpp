#include <iostream>
#include <string>
using namespace std;

class Lines{
    public:
    static int numOfVowels(string str);
    static int numOfConsonants(string str);
};

int Lines::numOfVowels(string str){
    int len = str.length();
    int i,ctr=0;
    for(i=0;i<len;i++){
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
            ctr++;
    }
    return ctr;
}
int Lines::numOfConsonants(string str){
    int numV = numOfVowels(str);
    int len = str.length();
    int i,splctr=0;
    for(i=0;i<len;i++){
        if(str[i]==' '||str[i]=='.'||str[i]=='!'||str[i]=='\"'||str[i]=='\''||str[i]=='?'||str[i]==',')
        splctr++;
    }
    return len-numV-splctr;
}

int main(void){
    string str;
    cout<<"Enter  a string::";
    cin>>str;
    cout<<"Number of Vowels:: "<<Lines::numOfConsonants(str);
    cout<<"Number of Consonants:: "<<Lines::numOfConsonants(str);
}
