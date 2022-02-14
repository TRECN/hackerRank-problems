#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    string h,noon;
    h=s.substr(0,2);
    int hour=stoi(h);
    noon=s.substr(8,10);
    if(noon=="AM"&&hour==12)
        h="00";
    if(noon=="PM"&&hour!=12){
        hour+=12;
        h="";
        h=to_string(hour);
    }
    string time=h+s.substr(2,6);
    return time;
}

int main()
{

}
