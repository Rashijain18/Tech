 #include<iostream>
 #include<fstream>
 using namespace std;

 class temp{
    string userName,Email,password;
    string searchName,searchPass,searchEmail;
    fstream file;
    public:
    void login();
    void signup();
    void forgot();
 }obj;

 int main(){
    char choice;
    cout<<"\n1-Login";
    cout<<"\n2-Sign-up";
    cout<<"\n3-Forgot Password";
    cout<<"\n4-Exit";
    cout<<"\nEnter Your Choice ::";
    cin>>choice;
 

 switch(choice){
    
    case'1':
       obj.login();
    break;
    case'2':
     obj.signup();
    break;
    case'3':
     obj.forgot();
    break;
    case'4':
      return 0;
[5:16 pm, 7/6/2024] Rashi: break;
    default:
     cout<<"Invalid Selection...!";
     }
 }
void temp :: signup(){
    cout<<"\nEnter Your User Name::";
    getline(cin,userName);
    cout<<"\Enter Your Email Address::";
    getline(cin,Email);
    cout<<"Enter Your Password :: ";
    getline(cin,password);

    file.open("loginData.txt",ios::out| ios::app);
    file<<userName<<""<<Email<<""<<password<<endl;
    file.close();
}
void temp::login(){
    cout<<"-------LOGIN-------"<<endl;
    cout<<"Enter Your User Name :: "<<endl;
    getline(cin,searchName);
    cout<<"Enter Your Password::"<<endl;
    getline(cin,searchPass);

    file.open("loginData.txt",ios :: in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    while(!file.eof()){
        if(userName == searchName) {
            if(password == searchPass){
                cout<<"\nAccount Login Succesfull...!";
                cout<<"\nUsername :: "<<userName<<endl;
                cout<<"\nEmail:: "<<Email<<endl;
                }else{
                    cout<<"Password is Incorrect...!";
                }
            }