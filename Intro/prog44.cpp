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

    YoutubeChannel(string n,string OName)
    {
        name=n;
        OwnerName=OName;
        SubscribersCount=0;
    }

    void GetInfo()
    {
        cout<<"Name of the Youtube channel: "<<name<<endl;
        cout<<"Name of the Owner of the youtube channel: "<<OwnerName<<endl;
        cout<<"Number of Subscribers of the youtube channel: "<<SubscribersCount<<endl;
        cout<<"Video Titles:"<<endl;
        for(string VideoName: PublicVideoTitles)
        {
            cout<<VideoName<<endl;
        }
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
    ytchannel.GetInfo();

    //About 2nd object
    ytchannel2.GetInfo();       

    system("pause>0");    
}