
#include <iostream>
#include <string>
using namespace std;

class Passenger{
  public:
    string passengerName {};
    string passengerEmail {};
    string passengerAddress {};
    int passengerPhone {};
    int passengerId {};

    Passenger(string nameP , string emailP , string addressP ,int phoneP , int idP ){
      passengerName = nameP;
      passengerEmail = emailP;
      passengerAddress = addressP;
      passengerPhone = phoneP;
      passengerId = idP;
    }

    void getPassengerInfo(){
      cout<<"\n"<<"Passenger Name: "<<passengerName;
      cout<<"\n"<<"Passenger Email: "<<passengerEmail;
      cout<<"\n"<<"Passenger Address: "<<passengerAddress;
      cout<<"\n"<<"Passenger Phone: "<<passengerPhone;
      cout<<"\n"<<"Passenger Id: "<<passengerId;
    }
};

int main(){
  cout<<"Welocome to the ailine our lovely passenger"<<endl;

  Passenger passenger1("Tabot Manyi BissongAgi","tabotman@gmail.com","Las Vegas",17027520424,8);
  passenger1.getPassengerInfo();
}