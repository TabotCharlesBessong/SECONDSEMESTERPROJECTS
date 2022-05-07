
#include <iostream>
#include <string>
using namespace std;

class Plane{
  private:
    int planeCap {};
    string planeModel {};
    int planeId {};
  
  public:
    Plane(int capP , string modelP , int idP){
      planeCap = capP;
      planeModel = modelP;
      planeId = idP;
    }

    void getPlaneInfo(){
      cout<<"\n"<<"Plane Cap"<<planeCap<<endl;
      cout<<"\n"<<"Plane Model"<<planeModel<<endl;
      cout<<"\n"<<"Plane Id"<<planeId<<endl;
    }
};

int main(){
  cout<<"Hello where is my plane"<<endl;
  Plane plane1 (500,"A380",1);
  plane1.getPlaneInfo();
}