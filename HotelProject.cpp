#include <iostream>

using namespace std;

class Booking
{
    public:
        int id;
        string from;
        string to;
        int guest_no;
    
    void setBooking(int id,string from,string to,int guest_no){

        this-> id = id;
        this-> from = from;
        this-> to = to;
        this-> guest_no = guest_no;
    }

    void getBooking(){

        cout<<"Booking ID : "<<id<<endl;
        cout<<"Data from : "<<from<<"  To  "<<to<<endl;
        cout<<"Guest number : "<<guest_no<<endl;

    }
};

class Room : public Booking
{
    public:
        int id;
        string room_type;

    void setRoom(int id,string room_type){

        this-> id = id;
        this-> room_type = room_type;

    }

    void getRoom(){

        cout<<"Room ID : "<<id<<endl;
        cout<<"Room Type : "<<room_type<<endl;

    }

};

class Guest : public Booking
{
    public:
        string name;
        string surname;
        int age;

    void setGuest(string name,string surname,int age){

        this-> name = name;
        this-> surname = surname;
        this-> age = age; 
    }
    void getGuest(){

        cout<<"Guest name : "<<name<<endl;
        cout<<"Surname : "<<surname<<endl;
        cout<<"Age : "<<age<<endl;

    }
};

class Payment : public Booking
{
    public: 
        int amount;
        string CardNumber;

    void setPayment(int amount,string CardNumber){
    
        this-> amount = amount;
        this-> CardNumber = CardNumber;
        
    }

    void getPayment(){
        cout<<"Amount : "<<amount<<endl;
        cout<<"Card Number : "<<CardNumber;

    }
};

int main()
{
    
    Guest guest;
    Room room;
    Payment payment;

    int a;
    string b;
    string c;
    int d;
    int e;
    string f;

    int g;
    string h;
    string i;
    int j;
    string k;
    string l;
    int n;


    int m;
    string o;
    string p;
    int q;
    int r;
    string s;



    cout<<"enter your id: ";
    cin>>a;

    cout<<endl<<"enter time from : ";
    cin>>b;

    cout<<endl<<"enetr time to : ";
    cin>>c;

    cout<<endl<<"enter geust_no : ";
    cin>>d;

    cout<<endl<<"enter room id : ";
    cin>>e;

    cout<<endl<<"enter room type : ";
    cin>>f;

    cout<<endl<<"enter guest id : ";
    cin>>g;

    cout<<endl<<"enter guest time from : ";
    cin>>h;

    cout<<endl<<"enter guest time to : ";
    cin>>i;

    cout<<endl<<"enter guest guest_no : ";
    cin>>j;

    cout<<endl<<"enter guest name : ";
    cin>>k;

    cout<<endl<<"enter guest surname : ";
    cin>>l;

    cout<<endl<<"enter guest age : ";
    cin>>n;

    cout<<endl<<"enter id for payment : ";
    cin>>m;

    cout<<endl<<"enter time from for payment : ";
    cin>>o;

    cout<<endl<<"enter time to for payment : ";
    cin>>p;

    cout<<endl<<"enter guest_no for payment : ";
    cin>>q;

    cout<<endl<<"enter amount : ";
    cin>>r;

    cout<<endl<<"enter card number : ";
    cin>>s;

    cout<<endl<<"-----------------------------------------------------------------";
    cout<<endl;





    room.setBooking(a,b,c,d);
    room.setRoom(e,f);
    room.getBooking();
    room.getRoom();
    
    cout<<endl;

    guest.setBooking(g,h,i,j);
    guest.setGuest(k,l,n);
    guest.getBooking();
    guest.getGuest();
    
    cout<<endl;

    payment.setBooking(m,o,p,q);
    payment.setPayment(r,s);
    payment.getBooking();
    payment.getPayment();

    cout<<endl;

    return 0;

}
