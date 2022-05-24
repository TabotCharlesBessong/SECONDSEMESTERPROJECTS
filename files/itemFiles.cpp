
#include <iostream>
#include <fstream>
using namespace std;

int main(){

  fstream monFicher;

  monFicher.open("example.pdf",ios::out); // write mode
  if(monFicher.is_open()){
    monFicher<<"Hello my friends\n";
    monFicher<<"How are you two doing\n";
    monFicher.close();
  }
  monFicher.open("example.pdf",ios::app); // append mode
  if(monFicher.is_open()){
    monFicher<<"Hello my enemies\n";
    monFicher<<"I have come to kill you all\n";
    monFicher.close();
  }

   cout<<"Hello world: "<<endl;
   system("pause");
}
