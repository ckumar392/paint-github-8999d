#include<iostream>
using namespace std;

class songs{
    //following are  the data members
    //by default all the data members are private and can be accesed only inside the class
    //to make it accessible throughout the code
    //objects of the are accessed
    public:
    string name;
    int duration;
    string singer;
    float rating;
};

int main(){
    //cout<<"Running";
    //normal declaration
    songs sng;
    sng.name="Aaj Ki Raat";
    sng.duration=3;
    sng.singer="A R Rehman";
    sng.rating=4.5;
    printf("\n%s\n",sng.name.c_str()); 
    cout<<sng.name<<endl;
    printf("%d\n",sng.duration);
    //array of objects using array of data type songs
    //this program will illustrate how to work with class and objects and we can be working with the 
    //program as we are comfortable with the class and objects. I am writing all this because i have to 

    songs a[3];
    for(int i=0;i<3;i++){
        cout<<"What is the name of the song"<<endl;cin >> ws ;
        getline(cin, a[i].name);
        cout<<"What is the duration of the song?"<<endl;
        cin>>a[i].duration;
        cout<<"By whom was it sung?"<<endl;
        cin >> ws;
        getline(cin, a[i].singer);
        cout<<"What is the rating of the song?"<<endl;
        cin>>a[i].rating;
    }
    printf("\n%s\n",sng.name.c_str());
    return 0;
}