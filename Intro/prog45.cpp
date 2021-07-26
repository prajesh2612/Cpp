#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel
{
    private://access modifier
    string name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublicVideoTitles;

    public:
    YoutubeChannel(string n,string OName)
    {
        name=n;
        OwnerName=OName;
        SubscribersCount=0;
    }

    //getter and setter
    string getName()
    {
        return name;;
    }

    string getOwnerName()
    {
        return OwnerName;
    }

    void setName(string n)
    {
        name=n;
    }

    void setOwnerName(string Oname)
    {
        OwnerName=Oname;
    }

    //subscribers count
    void Subscribe()
    {
        SubscribersCount++;
    }

    void Unsubscribe()
    {
        if (SubscribersCount>0)
        {
            SubscribersCount--;
        }
    }

    //videos title
    void PublishVideo(string title)
    {
        PublicVideoTitles.push_back(title);
    }

    //Displaying info
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
    ytchannel.setName("Prajesh Channel");
    ytchannel.setOwnerName("Prajesh Raj Singh");
    ytchannel.PublishVideo("First video");
    ytchannel.PublishVideo("Second video");
    ytchannel.PublishVideo("Third video");
    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.Unsubscribe();
    ytchannel.GetInfo();      

    system("pause>0");    
}