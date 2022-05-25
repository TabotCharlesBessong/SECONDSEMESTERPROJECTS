
#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Hotel{

public:
int rank=1;
int price;
int recommendations=0;

	string hotelName;
	string hotelLocation;

    Hotel(string hotelName, string hotelLocation, int price);
    Hotel();
    

};

class User{
	private:
	 string name;
   int age;
   int contact;
  string gender;
   Hotel hotel;

 public:
  static vector<User> bookedUsers;
  static vector<Hotel> bookedHotels;
  static int userNumber;
  static vector<User> usersPerHotels;
 

  User(int x);
User();


Hotel getHotel() const;
void setHotel(Hotel hotel);
string getName() const;
string getGender() const;
void setGender(string gender);
void setName(string name);

   int getAge() const;
   void setAge(int age);
  int getContact() const;
  void setContact(int contact);
void book();


void book(string Hotellocation);
void book(int Hotelrank);


static void displayUsersBooked();
static void displayHotelsBooked();
};
int User::userNumber=0;
vector<Hotel> User::bookedHotels;
vector<User> User::bookedUsers;


class Admin:public User{

private :

int adminPassword;

public:
	static int hotelNumber;
	static vector<Hotel> hotelsCreated;

Admin(int x);
~Admin();
Admin();

int getadminPassword() const;
void setadminPassword(int adminPassword);
void hotelCreate();
void evaluation();
static void displayHotel();
};
int Admin::hotelNumber=1;
vector<Hotel> Admin::hotelsCreated;



class Build{
	public:
	string response;
	int choice;

	void Application();
//	void userRunner();
//	void adminRunner();
};

int main(){
	

Build Aa;

	Aa.Application();

// return 0;
}

Hotel::Hotel(string hName, string hLocation, int prc)
 :hotelName(hName),hotelLocation(hLocation),price(prc) {

    }

    Hotel::Hotel(){

	}


User::User(int y){
	}


User::User() {
	  cout<<"\nHello Sir \n Whats your name  please:"<<endl;
	  string name;
	  // getline(cin,name);
		cin>>name;
	  this->name=name;


	  cout<<"How old are you: "<<endl;
	  int age;
	  cin>>age;
	  this->age=age;

		cout<<"Are you male or female or both: "<<endl;
	  string gender;
	  cin>>gender;
	  this->gender=gender;


	  cout<<"Enter your Number:"<<endl;
	  int contact;
	  cin>>contact;
	  this->contact=contact;

	  cout<<endl<<endl;
	   ;

	  cout<<"Welcome "+this->name+" to Smart City";
}



Hotel User::getHotel() const{
	return hotel;
}


void User::setHotel(Hotel hotel) {
	this->hotel = hotel;
}

string User::getName() const{
      return name;
  }

  string User::getGender() const {
	return gender;
}

void User::setGender(string gender) {
	this->gender = gender;
}

void User::setName(string name){
       this->name=name;
  }

   int User::getAge() const{
      return age;
  }

  void User::setAge(int age){
       this->age=age;
  }

   int User:: getContact() const{
      return contact;
  }

   void User::setContact(int contact){
      this->contact=contact;
  }


void User::book() {
    cout<<endl;
	cout<<"Hotels can be booked by either of the following ways:\n 1)By Location\n 2)By Evaluation\n";
	int choice;
	cin>>choice;
	if(choice==1) {
		cout<<"\nEnter your Location:\t";
		string location;
		cin>>location;
		book(location);
	}

	if(choice==2) {
		cout<<"\nEnter rank within a range of 1 to 5:\t";
		int rank;
		cin>>rank;
		book(rank);
	}
}


void User::book(string Hotellocation){
	  int flag=0;
	  int i=0;
	  for(i=0;i< Admin::hotelsCreated.size();i++){

			  if(Admin::hotelsCreated.at(i).hotelLocation==Hotellocation){
				  cout<<endl<<endl;

				  cout<<"\nID of hotel:\t"<<i<<"\nName of hotel:\t"<<Admin::hotelsCreated.at(i).hotelName<<"\nRank of hotel:\t"<<Admin::hotelsCreated.at(i).rank<<"\nLocation:\t"
						  <<Admin::hotelsCreated.at(i).hotelLocation<<"\nPrice of hotel:\t"<<Admin::hotelsCreated.at(i).price;

				  flag++;
			  }
	  }


	  if(flag>0){
		  cout<<"\n\nGive ID of the Hotel you have chosen:\t";

		  int id;
		  cin>>id;
		  cout<<endl<<endl;
		  cout<<"\nCheck the hotel you have chosen:\n";
		  cout<<"Name of hotel Chosen:\t"<<Admin::hotelsCreated.at(id).hotelName<<"\nRank of hotel:\t"<<Admin::hotelsCreated.at(id).rank<<"\nLocation:\t"
				  <<Admin::hotelsCreated.at(id).hotelLocation+"\nPrice of hotel:\t"<<Admin::hotelsCreated.at(id).price;
		  cout<<endl<<endl;
		   

		  Admin::hotelsCreated.at(id).recommendations++;

		  this->hotel=Admin::hotelsCreated.at(id);
		  this->hotel.hotelName=Admin::hotelsCreated.at(id).hotelName;
		  this->hotel.hotelLocation=Admin::hotelsCreated.at(id).hotelLocation;
		  this->hotel.price=Admin::hotelsCreated.at(id).price;

		  User::bookedUsers.push_back(*this);
		  User::bookedHotels.push_back(this->hotel);

		 userNumber++;

		  cout<<endl<<endl;
	  }
	  if(flag==0){
		  cout<<"\nNo hotel found at this location";
		   
	  }
}
void User::book(int Hotelrank){
	 int flag=0;
	    int i=0;
	    for(i=0;i< Admin::hotelsCreated.size();i++){
	             if(Admin::hotelsCreated.at(i).rank==Hotelrank){
	            	 cout<<endl;

	                cout<<"\nID of hotel:\t"<<i<<"\nName of hotel:\t"+Admin::hotelsCreated.at(i).hotelName+"\nRank of hotel:\t"<<Admin::hotelsCreated.at(i).rank<<"\nLocation:\t"
	                         +Admin::hotelsCreated.at(i).hotelLocation+"\nPrice of hotel:\t"<<Admin::hotelsCreated.at(i).price;

	                 flag++;
	                 }
	    }
	    if(flag>0){
	         cout<<"\n\nGive ID of hotel chosen:\t";

	                 int id;
	                 cin>>id;
	                
	                 cout<<"\nThe hotel chosen is:";
	                  cout<<"\nName of hotel:\t"<<Admin::hotelsCreated.at(id).hotelName<<"\nRank of hotel:\t"<<Admin::hotelsCreated.at(id).rank<<"\nLocation:\t"
	                         <<Admin::hotelsCreated.at(id).hotelLocation<<"\nPrice of hotel:\t"<<Admin::hotelsCreated.at(id).price;
	                  cout<<endl<<endl;

	                  Admin::hotelsCreated.at(id).recommendations++;

	        		  this->hotel=Admin::hotelsCreated.at(id);
	        		  this->hotel.hotelName=Admin::hotelsCreated.at(id).hotelName;
	        		  this->hotel.hotelLocation=Admin::hotelsCreated.at(id).hotelLocation;
	        		  this->hotel.price=Admin::hotelsCreated.at(id).price;

	        		  User::bookedUsers.push_back(*this);
	        		  User::bookedHotels.push_back(this->hotel);
	        	
	        		 userNumber++;

	        		  cout<<endl<<endl;
	        		   ;
		   ;
	    }
	    if(flag==0){
	        cout<<"No hotel with this rank";
	         cout<<endl<<endl;
		   ;
	    }


      }


void User::displayUsersBooked(){
    cout<<"List of Registered clients";
	cout<<endl<<endl;
	 
	   cout<<endl;

	        for(User i:User::bookedUsers){

	            cout<<"%-30s%-10s%-5d%10d%20s",i.getName().c_str(),i.getGender().c_str(),i.getAge(),i.getContact(),i.getHotel().hotelName.c_str();
	            cout<<endl;
	            }
	        }

void User::displayHotelsBooked(){
    cout<<"List of booked Hotels";
cout<<endl;
	cout<<"%-20s%20s%10s%20s%10s","Hotel Name","Location","Price","Recommendations","Evaluation";
	cout<<endl;

	        for(Hotel i:bookedHotels){

	            cout<<"%-20s%20s%10d%15d%15d",i.hotelName.c_str(),i.hotelLocation.c_str(),i.price,i.recommendations,i.rank;
	            cout<<endl;
	            }
	        }

int Admin::getadminPassword() const{
	return adminPassword;
}


void Admin::setadminPassword(int adminPassword) {
	this->adminPassword = adminPassword;
}



Admin::Admin(int x):User(x) {

}

Admin::~Admin() {

}

Admin::Admin() :User(2){
	this->setName("Charles");
	
	
	this->adminPassword=1234;

	cout<<"\nWelcome"<<endl;
	cout<<"Whats your Name Sir"<<endl;
	string name;
	cin>>name;

	cout<<endl<<"\nEnter your Password:\t";
	int pin;
	cin>>pin;

	if(name==this->getName()&&pin==this->adminPassword) {
             cout<<endl<<endl;
		   ;
		cout<<"\nWelcome "+this->getName();
	}
	else {
	     cout<<endl<<endl;
		   ;
		cout<<"\nIncorrect Cridentials";
		Admin admin;
	}
}

void Admin::hotelCreate(){

	cout<<"\nHow many Hotels do you wish to register:"<<endl;
	int numberOfHotels;
	cin>>numberOfHotels;

	for(int i=1;i<=numberOfHotels; i++) {
		cout<<"\n\n\t\tHotel Number "<<hotelNumber;
		cout<<"\nEnter the name of the Hotel:"<<endl;
		string name;
		cin>>name;

		cout<<"\nEnter the price of the Hotel:"<<endl;
		int price;
		cin>>price;

		cout<<"\nEnter Hotel's Location':"<<endl;
		string location;
		cin>>location;

		Hotel hot1(name,location,price);
		Admin::hotelsCreated.push_back(hot1);

		hotelNumber++;
		 cout<<endl<<endl;

	}
  ;
}


void Admin::evaluation(){
	for(Hotel i: hotelsCreated) {
    if(i.recommendations==100){
    	i.rank=2;
    }
    else if(i.recommendations==200){
        i.rank=3;
    }
    else if(i.recommendations==300){
        i.rank=4;
    }
    else if(i.recommendations==400){
        i.rank=5;
    }
	}
}


void Admin::displayHotel(){
    cout<<"\tList of Registered Hotels";
cout<<endl<<endl;

	  printf("%10s%25s%25s%15s%25s%15s","Hotel ID","Hotel Name","Location","Price","Recommendations","Rank");
	  cout<<endl;
	  

	        for(int i=0;i<hotelsCreated.size();i++){
	    
	            printf("%10d%25s%25s%15d%25d%15d",i,hotelsCreated[i].hotelName.c_str(),hotelsCreated[i].hotelLocation.c_str(),hotelsCreated[i].price,hotelsCreated[i].recommendations,hotelsCreated[i].rank);
	            cout<<endl;
	            }
	        }

void Build::Application() {
		while(true) {
                 
		cout<<"\nSMART CITY LIMITED CORP"<<endl;
		
		cout<<"Are you an admin or a client?\n";

	    cin>>response;
	    if(response=="client"||response=="CLIENT" || response =="Client" ) {
	    	cout<<endl;
	    //	userRunner();
	    	Admin admin(1);
		 User user;
		
		  cout<<endl<<endl<<endl;  
				cout<<"Enter 1 to Book Hotels";
	        cout<<"\nEnter 2 to view list of registered Hotels";
	        cout<<"\nEnter 3 to exit\n";

	        cin>>choice;
	        cout<<"\n";
	        switch (choice) {
	        case 1:

             user.book();
             admin.evaluation();

             break;

	        case 2:
	              cout<<endl<<endl;
	               ;


	              Admin::displayHotel();
	             
	              cout<<"\n\nDo you wish to book a hotel from the list?\nYes or No\n";
                   cin>>response;

	              if(response==("yes") || response == ("YES") || response== ("Yes") ) {
	            	  cout<<"\nGive id of hotel chosen:\t";

		                 int id;
		                 cin>>id;
		                cout<<endl<<endl;
		                 cout<<"\nThe hotel you have chosen is:\n\n";
		                 cout<<"Name of hotel:\t"<<Admin::hotelsCreated.at(id).hotelName+"\nRank of hotel:\t"<<Admin::hotelsCreated.at(id).rank<<"\nLocation:\t"
		                         <<Admin::hotelsCreated.at(id).hotelLocation<<"\nPrice of hotel:\t"<<Admin::hotelsCreated.at(id).price;
		                  cout<<endl;

		                  Admin::hotelsCreated.at(id).recommendations++;

		        		  user.setHotel(Admin::hotelsCreated.at(id));


		        		  User::bookedUsers.push_back(user);
		        		  User::bookedHotels.push_back(user.getHotel());
		        
		        		 User::userNumber++;
		        		  admin.evaluation();
                       cout<<endl<<endl;
	               

	              }

	              else {

                    cout<<endl<<endl;
	               

	              }


	              break;

	        case 3:
  cout<<endl<<endl;
	               ;

	        	cout<<"\n****************";
  cout<<endl<<endl;
	               ;

	              break;

	         default:
	        	 cout<<"Wrong Choice";
	        }


	        if(choice==3) {
	        	break;
	        }
		}



	    if(response=="admin"||response=="ADMIN" || response == "Admin") {
	    cout<<endl;
	    	//adminRunner();
	    	
		Admin admin;

	        cout<<endl<<"\nEnter 1 to Register Hotel";
	        cout<<"\nEnter 2 to view list of registered Hotels";
	       cout<<"\nEnter 3 to view list of booked Hotels";
	        cout<<"\nEnter 4 to View list of Clients";
	        cout<<"\nEnter 5 to exit";

	        cout<<"\n";

	        cin>>choice;
cout<<endl;
	        switch (choice) {
	        case 1:

	        	admin.hotelCreate();

           break;

	        case 2:
	              cout<<endl<<endl;
	               ;

                  Admin::displayHotel();
	            
  cout<<endl<<endl;
	               
	               ;

	              break;

            case 3:
                  cout<<endl<<endl;
	               ;


	            User::displayHotelsBooked();
  cout<<endl<<endl;
	               
	               ;

	              break;

	        case 4:
	              cout<<endl<<endl;
	               ;

User::displayUsersBooked();
	              
	               cout<<endl<<endl;
	               
	               ;

	              break;

	        case 5:

	              cout<<endl<<endl;
	
	        	  cout<<endl<<endl;
 

	              break;

	         default:
	        	cout<<"\nWrong Choice";
	       


	        }


	        if(choice==5) {
	        	break;
	        }
		}


	}


	    }
	
