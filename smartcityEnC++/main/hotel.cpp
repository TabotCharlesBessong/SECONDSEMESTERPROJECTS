

#include <iostream>'
#include <string>
using namespace std;

class Hotel{
  public:
    string hotelName;
    int roomNumber;
    string location;

    Hotel(string nameH , int numberH , string locH){
      hotelName = nameH;
      roomNumber = numberH;
      location = locH;
    }

    string getHotelName(){
      return hotelName;
    }

    string getRoomNumber(){
      return roomNumber;
    }

    string getLocation(){
      return location;
    }

    void setHotelName(){
      
    }
    friend class Admin;
};

class User{
  string username;
  int userid;

  User(string nameU , int idU ){
    username = nameU;
    userid = idU;
  }

  void getUserName(){
    return username;
  }

  void getUserId(){
    return userid;
  }

  void setUserName(){
    cout<<endl<<"Please enter your username: ";
    cin>>username;

  }

  void setUserId(){
    cout<<endl<<"Please enter your user id: ";
    cin>>userid;
  }
};


class Admin{
  public:
    string adminName;
    int adminPin;
    string hotels[10] = {};
    string locations[10] = {};
    Admin(string nameA , int pinA){
      adminName = nameA;
      adminPin = pinA;
    }
};