#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel
{
    private://access modifier
    string name;
    int SubscribersCount;
    list<string> PublicVideoTitles;

    protected://only accessible in derived classes
    string OwnerName;

    public:
    YoutubeChannel(string n,string OName)
    {
        name=n;
        OwnerName=OName;
        SubscribersCount=0;
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

class CookingYoutubeChannel: public YoutubeChannel //class <derived-class>: public <base-class>
{
    public:
    CookingYoutubeChannel(string name, string OName):YoutubeChannel(name,OName)
    {
        
    }
    void Practise()
    {
        cout<<OwnerName<<" is practising cooking, learning new recipe, experimenting with spices....."<<endl;
    } 

};

int main()
{
    CookingYoutubeChannel cookingYtChannel("Prajesh Kitchen","Prajesh Raj Singh");
    cookingYtChannel.PublishVideo("Apple Pie");
    cookingYtChannel.PublishVideo("Chocolate Cake");
    cookingYtChannel.Subscribe();
    cookingYtChannel.Subscribe();
    cookingYtChannel.GetInfo();
    cookingYtChannel.Practise();

    CookingYoutubeChannel cookingYtChannel2("Aditya Kitchen","Aditya");
    cookingYtChannel2.Practise();

    system("pause>0");    
}