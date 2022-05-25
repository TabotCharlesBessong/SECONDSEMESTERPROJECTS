
#include <iostream>
#include <string>
using namespace std;

class Flight{
  public:
    string flightDestination {};
    string flightOrigin {};
    int flightCapacity {};
    float flightPrice {};

    Flight( string destP , string originP , int capP , float priceP ){
      flightDestination = destP;
      flightOrigin = originP;
      flightCapacity = capP;
      flightPrice = priceP;
    } 

    void getFlightInfo(){
      cout<<"\n"<<"Flight Destination: "<<flightDestination<<endl;
      cout<<"\n"<<"Flight Origin: "<<flightOrigin<<endl;
      cout<<"\n"<<"Flight Capacity: "<<flightCapacity<<endl;
      cout<<"\n"<<"Flight Price: "<<flightPrice<<endl;
    }
    
};

int main(){
  cout<<"This is the flight you will be aborting"<<endl;
  Flight flight1("Buea","Douala",230,23000);
  flight1.getFlightInfo();
}