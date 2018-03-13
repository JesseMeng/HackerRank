#include <bits/stdc++.h>
#include <sstream>
using namespace std;

string timeConversion(string s) {
    // Complete this function
    if(s == "12:00:00AM"){
        return  "00:00:00";
    }else if (s == "12:00:00PM"){
        return "12:00:00";
    }else if(s[8]=='P'&&s[9]=='M'){
        if(s[0]=='1' && s[1]=='2'){
            return s.substr(0,8);
        }
        if(s[0]=='0'){
            int c = (s[1]-'0'+12);
            ostringstream os;
            os << c<<s.substr(2,6);
            return  os.str();
        }else{
            int c = (s[1]+22-'0');
                ostringstream os;
            os<<c<<s.substr(2,6);
            return  os.str();
        }
    }else{
        if(s[0]=='1' && s[1]=='2'){
            ostringstream os;
            os << "00"<<s.substr(2,6);
            return os.str();
        }
        return s.substr(0,8);
    }
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}