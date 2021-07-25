#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel
{
    public://access modifier
    string name;
    string OwnerName;
    int SubscribersCount=0;
    list<string> PublicVideoTitles;

    YoutubeChannel(string n,string OName)
    {
        name=n;
        OwnerName=OName;
    }
};

int main()
{
    YoutubeChannel ytchannel("Prajesh Channel","Prajesh Raj Singh");//creating an object and invoking the constructor
    ytchannel.PublicVideoTitles.push_back("First video");
    ytchannel.PublicVideoTitles.push_back("Second video");
    ytchannel.PublicVideoTitles.push_back("Third video");

    YoutubeChannel ytchannel2("Chad Aditya","Aditya");//creating 2nd object
    ytchannel2.PublicVideoTitles.push_back("First song");
    ytchannel2.PublicVideoTitles.push_back("Second song");
    ytchannel2.PublicVideoTitles.push_back("Third song");
    ytchannel2.PublicVideoTitles.push_back("Fourth song");

    //About 1st object
    cout<<"Name of the Youtube channel: "<<ytchannel.name<<endl;
    cout<<"Name of the Owner of the youtube channel: "<<ytchannel.OwnerName<<endl;
    cout<<"Number of Subscribers of the youtube channel: "<<ytchannel.SubscribersCount<<endl;
    cout<<"Video Titles:"<<endl;
    for(string VideoName: ytchannel.PublicVideoTitles)
    {
        cout<<VideoName<<endl;
    }

    //About 2nd object
    cout<<"Name of the Youtube channel: "<<ytchannel2.name<<endl;
    cout<<"Name of the Owner of the youtube channel: "<<ytchannel2.OwnerName<<endl;
    cout<<"Number of Subscribers of the youtube channel: "<<ytchannel2.SubscribersCount<<endl;
    cout<<"Video Titles:"<<endl;
    for(string VideoName: ytchannel2.PublicVideoTitles)
    {
        cout<<VideoName<<endl;
    }    

    //as we can see that for displaying the data of the two objects, we have perform the print operation two times. This is also a tedious job to do. hence, we'll use the concept of Class methods.

    system("pause>0");    
}