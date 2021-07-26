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
    int ContentQuality;

    public:
    YoutubeChannel(string n,string OName)
    {
        name=n;
        OwnerName=OName;
        SubscribersCount=0;
        ContentQuality=0;
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

    void checkAnalytics()
    {
        if(ContentQuality<5)
        {
            cout<<name<<" has a bad Quality content"<<endl;
        }
        else
        {
            cout<<name<<" has a good Quality content"<<endl;
        }
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
        ContentQuality++;
    } 

};

class SingersYoutubeChannel: public YoutubeChannel //class <derived-class>: public <base-class>
{
    public:
    SingersYoutubeChannel(string name, string OName):YoutubeChannel(name,OName)
    {
        
    }
    void Practise()
    {
        cout<<OwnerName<<" is taking singing classes, learning new songs, learning how to dance....."<<endl;
        ContentQuality++;
    } 
};

int main()
{
    CookingYoutubeChannel cookingYtChannel("Prajesh Kitchen","Prajesh Raj Singh");
    cookingYtChannel.Practise();

    SingersYoutubeChannel singersYtChannel("HemantSings","Hemant");
    singersYtChannel.Practise();
    singersYtChannel.Practise();
    singersYtChannel.Practise();
    singersYtChannel.Practise();
    singersYtChannel.Practise();

    //pointer of type base class can point the objects of the derived class
    YoutubeChannel *yt1=&cookingYtChannel;//yt1 pointer of type YoutubeChannel is pointing the object 'cookingYtChannel' of CookingYoutubeChannel derived class
    YoutubeChannel *yt2=&singersYtChannel;//yt2 pointer of type YoutubeChannel is pointing the object 'singersYtChannel' of SingersYoutubeChannel derived class

    yt1->checkAnalytics();//pointers used to invoke method
    yt2->checkAnalytics();



    system("pause>0");    
}