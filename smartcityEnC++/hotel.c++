
#include <iostream>
using namespace std;

int main(){
  int quantity;
  int choice;
  int roomNum = 0 , pastaNum = 0 , burgerNum = 0 ,noodlesNum = 0 , shakeNum = 0 , chickenNum = 0;

  int roomT = 0 , pasteT = 0 , burgerT = 0 , noodlesT = 0 , shakeT = 0 , chickenT = 0;

  int totalRooms = 0 , totalPasta = 0 , totalBurger = 0 , totalNoodles = 0 , totalShake = 0 , totalChicken = 0;

  cout<<"\n\t Quantity of items in stock";
  cout<<"\n How many available rooms";
  cin>> roomNum;

  cout<<"\n How many available paste";
  cin>> pastaNum;

  cout<<"\n How many available burgers";
  cin>> burgerNum;

  cout<<"\n How many available noodles";
  cin>> noodlesNum;

  cout<<"\n How many available shakes";
  cin>> shakeNum;

  cout<<"\n How many available chiken";
  cin>> chickenNum;


  cout<<"\n\t\t\t\t Please select from the menu options: ";
  cout<<"\n\n1) Rooms";
  cout<<"\n\n2) Pasta";
  cout<<"\n\n3) Burgers";
  cout<<"\n\n4) Noodles";
  cout<<"\n\n5) Shakes";
  cout<<"\n\n6) Chicken";
}