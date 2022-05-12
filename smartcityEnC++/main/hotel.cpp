

#include <iostream>
#include <algorithm>
#include <string>
#include <conio.h>
using namespace std;

class Hotel{
  public:
    string hotelName;
    // int roomNumber;
    string location;
    int hotelValuation;
    string message;
    int recommendVal;
    string hotels[] = {}

    Hotel(string nameH ,  string locH , int valH , string messH , int recH){
      hotelName = nameH;
      // roomNumber = numberH;
      location = locH;
      hotelValuation = valH;
      message = messH;
      recommendVal =  recH;
    }

    // string getHotelName(){
    //   return hotelName;
    // }

    // string getRoomNumber(){
    //   return roomNumber;
    // }

    // string getLocation(){
    //   return location;
    // }

    // void setHotelName(){
      
    // }

    void createHotel(string name , string location){
      cout<<endl<<"Please enter the hotel name: "<<;
      // cin>>
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
    // cin>>username;

  }

  void setUserId(){
    cout<<endl<<"Please enter your user id: ";
    // cin>>userid;
  }
};


class Admin {
  public:
    string adminName;
    int adminPin;
    // string hotels[10] = {};
    // string locations[10] = {};
    Admin(string nameA , int pinA){
      adminName = nameA;
      adminPin = pinA;
    }

    void getAdminName(){
      return adminName;
    }

    void getAdminPin(){
      return adminPin;
    }

    void setAdmin(string prevName , int prevPin ){
      if((prevName == adminName) && (prevPin == adminPin)){
        cout<<endl<<"Please enter your name: ";
        _getch();
        cout<<endl<<"Please enter your pin";
        _getch();
      }
    }

    void hotelExit(int arr[] , string hName){
    int array[] = arr;
    int target = hName;
 
    bool exists = any_of(begin(array), end(array),
                        [&](int i) {
                            return i == target;
                        });
 
    if (exists) {
        // std::cout << "Element found";
        return true;
    } else {
        // std::cout << "Element not found";
        return false;
    }
 
    return 0;
};