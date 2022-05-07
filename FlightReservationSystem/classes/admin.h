

class Admin {
  public:
    int  adminId {};
    char adminEmail {};
    int adminPhone {};
    char adminName {};

    Admin(){
      adminPhone;
      adminId;
      adminEmail;
      adminName;
    }

    Admin(int idParam , char emailParam , int phoneParam , char nameParam){
      adminId = idParam;
      adminEmail = emailParam;
      adminPhone = phoneParam;
      adminName = nameParam;
    }

    int getAdminId(){
      return adminId;
    }

    int getAdminPhone(){
      return adminPhone;
    }

    int getAdminEmail(){
      return adminEmail;
    }

    int getAdminName(){
      return adminName;
    }

    void setAdminId (int idParam){
      adminId = idParam;
    }

    void setAdminEmail (int emailParam){
      adminEmail = emailParam;
    }

    void setAdminPhone (int phoneParam){
      adminPhone = phoneParam;
    }

    void setAdminName (int nameParam){
      adminName = nameParam;
    }

    void addPassenger(){
      cout<<"One passenger has been added into the system"<<endl;
    }
};
