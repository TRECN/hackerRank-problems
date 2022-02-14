#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {

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
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    cout<<result;
    return 0;
}
