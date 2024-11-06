#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> bre(string &inp)
{
    vector<string> ans;
    istringstream iss(inp);
    string word;
    while (iss >> word) {
        ans.push_back(word);
    }
    return ans;
}

int main()
{
    map<string, string> wordToDigit = {
    {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"},
    {"four", "4"}, {"five", "5"}, {"six", "6"}, {"seven", "7"},
    {"eight", "8"}, {"nine", "9"}
    };

    string inp;
    getline(cin,inp);
    vector<string> letters=bre(inp);
    string output="";
    bool d=false,t=false;
    // five one zero six triple eight nine six four
    for(auto x : letters ) cout<<x <<"\n";
    for(int i =0;i<=letters.size();)
    {
        if(letters[i]=="double") d=true;
        else if (letters[i]=="triple") t=true;
        else
        {
            output+=wordToDigit[letters[i]];
            i++;
        }
        if(d)
        {
            output+=wordToDigit[letters[i+1]]+wordToDigit[letters[i+1]];
            i+=2;
        }
        if(t)
        {
            output+=wordToDigit[letters[i+1]]+wordToDigit[letters[i+1]]+wordToDigit[letters[i+1]];
            i+=3;
        }
        
    }
    // cout<<output;
    

    return 0;
}
