
#include <iostream>
#include <string>
using namespace std;

class Payment{
  private:
    float paymentAmount {};

  public:
    Payment(float amtP){
      paymentAmount = amtP;
    }

    void getPaymentInfo(){
      cout<<"\n"<<"flight price: "<<paymentAmount;
    }
};

int main(){
  cout<<"Here is your payment portal"<<endl;
  Payment p1(23000);
  p1.getPaymentInfo();
}