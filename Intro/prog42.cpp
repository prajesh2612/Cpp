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

    //2nd object of YoutubeChannel class
    YoutubeChannel ytchannel2;//creating an object
    ytchannel2.name="Chad Aditya";
    ytchannel2.OwnerName="Aditya";
    ytchannel2.SubscribersCount=45;
    ytchannel2.PublicVideoTitles={"First Song","Second Song","Third Song","Fourth Song","Fifth Song"};

    cout<<"Name of the Youtube channel: "<<ytchannel2.name<<endl;
    cout<<"Name of the Owner of the youtube channel: "<<ytchannel2.OwnerName<<endl;
    cout<<"Number of Subscribers of the youtube channel: "<<ytchannel2.SubscribersCount<<endl;
    cout<<"Video Titles:"<<endl;
    for(string VideoName: ytchannel2.PublicVideoTitles)
    {
        cout<<VideoName<<endl;
    }

    /*Similarly we can form 'n' number of such objects. Sinc, it's a bit tedious job hence we use the concept of constructors*/

    system("pause>0");
    
}