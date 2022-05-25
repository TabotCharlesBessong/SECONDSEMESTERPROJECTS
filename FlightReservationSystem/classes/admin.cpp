
#include <iostream>
#include <string>
using namespace std;

class Admin {
  public:
    int adminId {};
    int adminPhone {};
    string adminName {};
    string adminEmail {};

    Admin(int idP , int phoneP , string nameP , string emailP){
      adminId = idP;
      adminPhone = phoneP;
      adminName = nameP;
      adminEmail = emailP;
    }

    void getAdminData(){
      cout<<"\n"<<"Admin Id: "<<adminId;
      cout<<"\n"<<"Admin Phone: "<<adminPhone;
      cout<<"\n"<<"Admin Name: "<<adminName;
      cout<<"\n"<<"Admin Email: "<<adminEmail;
    }
};

int main(){
  cout<<"Hello world"<<endl;

  Admin admin1(1,679395252,"Alkaloid","alkaloid34@gmail.com");
  admin1.getAdminData();
}