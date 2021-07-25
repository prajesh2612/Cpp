#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel
{
    public://access modifier
    string name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublicVideoTitles;
};

int main()
{
    YoutubeChannel ytchannel;//creating an object
    ytchannel.name="Prajesh Channel";
    ytchannel.OwnerName="Prajesh Raj Singh";
    ytchannel.SubscribersCount=34;
    ytchannel.PublicVideoTitles={"First Video","Second Video","Third Video"};

    cout<<"Name of the Youtube channel: "<<ytchannel.name<<endl;
    cout<<"Name of the Owner of the youtube channel: "<<ytchannel.OwnerName<<endl;
    cout<<"Number of Subscribers of the youtube channel: "<<ytchannel.SubscribersCount<<endl;
    cout<<"Video Titles:"<<endl;
    for(string VideoName: ytchannel.PublicVideoTitles)
    {
        cout<<VideoName<<endl;
    }

    system("pause>0");
    
}