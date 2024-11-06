#include<iostream>
#include <regex>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    // cout<<length(s);
    return 0;
    cout<<s<<endl;
    const regex p1("[chandan]");
    cout<<regex_search(s, p1)<<endl;
    regex r("chandan[a-zA-Z]+"); 
    smatch m;
    regex_search(s, m, r);
    for (auto x : m)
        cout << x << " ";
// regex_search() – This function is used to search for a pattern matching the regular expression 
// regex_replace() This function is used to replace the pattern matching to the regular expression with a string.


    // const regex p2("[a-z]");
    // cout<<regex_search()
    // cout<<regex_replace(s, p1, "")<<endl;

    
    // cout<<regex_replace(s, p2, "")<<endl;
    return 0;
}