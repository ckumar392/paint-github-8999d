#include<iostream>
#include<vector>
#include<map>
using namespace std;
//string ke har word ke 1st element ko dusre strint me dalna hai

int main()
{
    string pattern="a ball chan cat dog egg";
    cout<<pattern<<endl;
    string t="";
    t.push_back(pattern[0]);
    bool flag=false;
    for(int i=0; i<pattern.length(); i++)
    {
        if(flag) t.push_back(pattern[i]);
        if(isspace(pattern[i]))
        {
            flag=true;
            continue;
        }

        else
        {
            flag =false;
        }

    }
    cout<<"\t"<<t<<endl;
    return 0;
}








// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int s1,s2,i=0,j=0,count=0;
//         for(s1=0;s1<haystack.length();s1++)
//         {
//             for(s2=0;s2<needle.length();s2++)
//             {
//                 if(haystack[i]==haystack[j])
//                 {
//                     i++;
//                     j++;
//                     count++;
//                 }
//                 else{
//                     j=0;
//                     i=i+1;
                    
//                 }
//             }
//         }
//     }
// };