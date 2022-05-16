
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;

void menu();
void passcode();
void cpasscode();

// class declaration one //

class one{
  public:
    
  virtual void get()=0;
  virtual void show()=0;
};

// class declaration information //
class info:public one{
  public:
  char name[50], time[50];
  int num , age ;
  void get(){
    system("cls");
    cin.sync();
    cout<<"\n Enter the patient name:  ";
    cin.getline(name,50)
    cout<<"\n Enter the patient age:";
    cin>>age;
    cout<<"\n Enter the appointment time please: ";
    cin.getline(time,50)
    cout<<"\n Enter appointment number: ";
    cin>>num;
  }

  void show(){
    cout<<"\n Name:"<<name;
    cout<<"\n Age:"<<age;
    cout<<"\n Appointment number:"<<num;
    cout<<"Appointment time: "<<time;
  }
};


// class ranna 
class rana:public info{
  public:
  info a1;
  void get(){
    system("cls")
    ofstream out("Rana.txt",ios:: app|ios::binary )
    a1.get();
    out.close();
    cout<<"Your Entry Has Been saved ";
    getch();
    menu();
  }

  void show(){
    ifstream in("Rana.txt");
    if(in==NULL){
      cout<<"\n\n No data in this file: ";
      cout<<"\n\n\t\t Press any key to continue: ";
      getch();
      menu();
    }else{
      while(!in.eof()){
        in.read((char*)&a1,sizeof(a1));
        a1.show();
      }
      in.close();
      getch();
      menu();
    }
  }
};

// class //
class waqer:public info{

};

// class dr hanmad
class ahmad:public info{
  
};