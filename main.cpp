#include <iostream>

using namespace std;

int main()
{
    string sounds, each;
    cout<<"enter the name of the animal - "<<endl;
    cin>>sounds;
    each = sounds;
    string result = " ";
    for (int i=0; i<each.length(); i++){
        if (each [i].equal("roar"){
            result+="lion";
        } else if (each[i].equal("bark")){
            result+="dog";
        }else if (each[i].equal("hiss")){
            result+="snake";
        }

    }
    cout<<result<<endl;
    return 0;
}
