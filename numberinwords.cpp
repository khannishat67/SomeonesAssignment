#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:: ";
    cin >> n;
    string str="";
    while(n>0){
        int tmp = n%10;
        n = n/10;
        string val;
        switch(tmp){
            case 0:
                val = "Zero";
                break;
            case 1:
                val="One";
                break;
                case 2:
                val="Two";
                break;
                case 3:
                val="Three";
                break;
                case 4:
                val="Four";
                break;
                case 5:
                val="Five";
                break;
                case 6:
                val="Six";
                break;
                case 7:
                val="Seven";
                break;
                case 8:
                val="Eight";
                break;
                case 9:
                val="Nine";
                break;
                
        }
        str = val+" "+str;
    }
    cout<<str;
    return 0;
}
