
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

    void paymentPortal(string classVal , string endpointVal){
       if(classVal == "first_class"){
         paymentAmount = 2.25 * endpointVal;
       }else if(classVal == "second_class"){
         paymentAmount = 1.6 * endpointVal;
       }else if (classVal == "economy_class")
       {
         /* code */
         paymentAmount = 1.25 * endpointVal;
       }else{
         cout<<"Please choose another flight class"<<endl;
       }
       
    }
};

int main(){
  cout<<"Here is your payment portal"<<endl;
  Payment p1(23000);
  p1.getPaymentInfo();
}