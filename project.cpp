#include<iostream>
#include<string>
using namespace std;

class Air {
    public:
    string name, phone, address, dob, dest, dept;
    string status = "Reserved";
    
    
    void reserve_ticket() {
cin.ignore();
        cout<<"\nEnter your Name: ";
        getline(cin, name);
        cout<<"\nEnter your DOB (dd/mm/yyyy): ";
        getline(cin, dob);
        cout<<"\nEnter your phone number: ";
        getline(cin, phone);
        cout<<"\nEnter your address: ";
        getline(cin, address);
        cout<<"\nEnter your Destination: ";
        getline(cin, dest);
        cout<<"\nEnter your Departure: ";
        getline(cin, dept);
    }
    void display() {
        cout<<"\n\nYour ticket details: "<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"DOB: "<<dob<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Departure: "<<dept<<endl;
        cout<<"Destination: "<<dest<<endl;
        cout<<"Status: "<<status<<endl;
        cout<<"------------------------------------"<<endl;
    }
    void cancel_ticket() {
        
        status = "Cancelled";
    }


} t1[20];
void print_banner() {
    cout<<R"(                                                                |                                                         )"<<endl;
    cout<<R"(                                                      --====|====--                                                       )"<<endl;
    cout<<R"(                                                            |                                                             )"<<endl;
    cout<<R"(                                                                                                                          )"<<endl;
    cout<<R"(                                                        .-"""""-.                                                         )"<<endl;
    cout<<R"(                                                      .'_________'.                                                       )"<<endl;
    cout<<R"(                                                     /_/_|__|__|_\_\                                                      )"<<endl;
    cout<<R"(                                                    ;'-._       _.-';                                                     )"<<endl;
    cout<<R"(                               ,--------------------|    `-. .-'    |--------------------,                                )"<<endl;
    cout<<R"(                                ``""--..__    ___   ;       '       ;   ___    __..--""``                                 )"<<endl;
    cout<<R"(                                          `"-// \\.._\             /_..// \\-"`                                           )"<<endl;
    cout<<R"(                                             \\_//    '._       _.'    \\_//                                              )"<<endl;
    cout<<R"(                                              `"`        ``---``        `"`                                               )"<<endl;
    cout<<R"(            _         _______  _        _          _      _____                                      _    _               )"<<endl;
    cout<<R"(     /\    (_)       |__   __|(_)      | |        | |     |  __ \                                    | |  (_)              )"<<endl;
    cout<<R"(    /  \    _  _ __     | |    _   ___ | | __ ___ | |_    | |__) | ___  ___   ___  _ __ __   __ __ _ | |_  _   ___   _ __  )"<<endl;
    cout<<R"(   / /\ \  | || '__|    | |   | | / __|| |/ // _ \| __|   |  _  / / _ \/ __| / _ \| '__|\ \ / // _` || __|| | / _ \ | '_ \ )"<<endl;
    cout<<R"(  / ____ \ | || |       | |   | || (__ |   <|  __/| |_    | | \ \|  __/\__ \|  __/| |    \ V /| (_| || |_ | || (_) || | | |)"<<endl;
    cout<<R"( /_/    \_\|_||_|       |_|   |_| \___||_|\_\\___| \__|   |_|  \_\\___||___/ \___||_|     \_/  \__,_| \__||_| \___/ |_| |_|)"<<endl;
    cout<<endl;
    cout<<R"(---------------------------------------------------------------------------------------------------------------------------)"<<endl;
    cout<<"                           Group members --> Bishal Roy, Kulendu K. Chakraborty, Kamalakshi Kapinjal";
    cout<<endl;
    cout<<R"(---------------------------------------------------------------------------------------------------------------------------)"<<endl;

}


int main() {
    string uname;
    int counter = 0,choice;
    print_banner();
    while(1){
    // cout<<"\n\n\n\tMENU";
    cout<<R"(   \\\\\\\\\\\\\\\\\\\)"<<endl;
    cout<<R"(            MENU        )"<<endl;
    cout<<R"(    \\\\\\\\\\\\\\\\\\\)"<<endl;
    cout<<"\n   1. Reservation\n   2. Cancellation\n   3. Show all tickets\n   4. Exit"<<endl;
    cin>>choice;
    switch(choice){
    case 1:
        t1[counter].reserve_ticket();
        t1[counter].display();
        counter++;
        break;
    case 2:
        cin.ignore();
        cout<<"\nEnter name exactly as in ticket: ";
        getline(cin, uname);
        for(int i=0;i<counter;i++){
           if(t1[i].name==uname){
           t1[i].cancel_ticket();
           cout<<"\nTicket cancelled"; 
           }
           }
        break;
    case 3:
        for(int j=0;j<counter;j++){
            t1[j].display();
        }
        break;
    case 4:exit(0);
    defalt:cout<<"\nWrong Choice";

    
 }
}
}

