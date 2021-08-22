#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip> 


using namespace std;
class customer
{
	private:
	public:
	string customername;
    string carmodel;
    string carnumber;
    char data;
 
};
class rent : public customer 
{
	public :
	int days=0;
	int rentalfee=0; 
	void data()
	{
		int login();
	login();
	system ("CLS");
	//cout<<"\t\t--------------------------------------------------------------------------"<<endl;
	  cout<<"\n\n\n\n\t\t\t-------------------------------------------";
   			cout<<"\n\t\t\t             CAR RENTAL SYSTEM \n";
			cout<<"\n\t\t\t                 WELCOME \n";	
   			  cout<<"\t\t\t-------------------------------------------\n\n";
			cout << "\n\n\t\t\tPlease Enter your Name: "; 
    cin >> customername;
    cout<<endl;
    do
    {
        cout <<"\t\t\t\tPlease Select a Car"<<endl; 
        cout<<"\t\t\t\tEnter 'A' for Tesla 2021."<<endl;
        cout<<"\t\t\t\tEnter 'B' for Hyundai 2015."<<endl;
        cout<<"\t\t\t\tEnter 'C' for Ford 2017."<<endl;
        cout<<endl;
        cout<<"\t\t\t\tChoose a Car from the above options: \n";
        cout<<"\t\t\t\t";
        cin >>carmodel;
        cout<<endl;
 cout<<"\n\t\t\t-------------------------------------------\n\n";
 if(carmodel=="A")
 {
 	system("CLS");
 
		cout<<"\n\n\n\n\t\t\t\t\tYou have choosed Tesla model 2021"<<endl;
		 ifstream inA("A.txt"); 
         char str[200];
         while(inA) {
         inA.getline(str, 200);  
         if(inA) cout << str << endl;
}
sleep(2);
  }
  if(carmodel=="B")
  {
  	system("CLS");
  
		cout<<"\n\n\n\n\t\t\t\t\tYou have choosed Hyundai model 2015"<<endl;
		 ifstream inB("B.txt"); 
         char str[200];
         while(inB) {
         inB.getline(str, 200);  
         if(inB) cout << str << endl;
         
     }
     sleep(2);
 }
 if(carmodel=="C")
 {
 	system("CLS");
	     cout<<"You have choosed Ford model 2017"<<endl;
		 ifstream inC("C.txt"); 
         char str[200];
         while(inC) {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
     }
     sleep(2);
}  
if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" )
     
      cout<<"\n\n\t\t\tInvaild Car Model. Please try again!"<<endl;
      
        }
while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" );
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl; 

    cout<<"Please select a Car No. : ";
    cin >> carnumber;
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()
	{
		sleep(1);
		system ("CLS");
		cout<<"\t\t	Calculating rent. Please wait......"<<endl;
		system ("CLS");
		sleep(2);
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*56;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*60;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*75;
    }
void showrent()
    {
    	ofstream myFile("gogo.txt");
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
    myFile<<customername;
    cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
    cout << "\t\t	 require an authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    myFile<<customername;
    myFile<<carmodel;
    myFile<<carnumber;
    myFile<<days;
    myFile<<rentalfee;
    
    int f;
    system("PAUSE");
    
    system ("CLS");
    
     ifstream inf("thanks.txt");

  
  char str[300];

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}
};

string usn;
int tm;
void valid(string str)
{
    string dir,user;
    ifstream file;
    dir = str+".txt";
    file.open(dir.c_str());
    if(!file.is_open() && file.fail())
    {
        //file.close();
        return;
    }
    else
    {
        tm++;
        if(tm==3)
        {
            cout<<"\nThis username already exists\nPlease try Again.";
            //file.close();
            return;
        }
        cout<<"\nThis username already exists!\nCreate a username:";
        cin>>usn;
        //file.close();
        valid(usn);
    }
}

int main()
{
  cout<<"\n\t\t\t\t\tStarting the program please wait....."<<endl;
  sleep(1);
  cout<<"\nloading up files....."<<endl;
  sleep(1); 
  system ("CLS"); 
rent obj2; 

obj2.data();
obj2.calculate();
obj2.showrent();

return 0; 
}



int login()
{
    int choice,i,exit=0;
    string ans,psd,name,fname,usern,pw,line,nusn;
    ofstream fileo;
    ifstream filei;
    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
    while(1)
    {
        cout<<"\n\t\t\t\t\tChoose one option:\n\t\t\t\t\t1. SignIn/LogIn(press 1 to select this)\n\t\t\t\t\t2. SignUp/Register(press 2 to select this)\n\n\t\t\t\t\tpress the option";
        cin>>choice;
        system ("CLS");
        if(choice==1)
        {
        	cout<<"\n\n\n\n\t\t\t\t\t------------------------------";
   			cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
   			cout<<"\t\t\t\t\t------------------------------\n\n";
            cout<<"\t\t\t\t\tEnter your username:";
            cin>>usn;
            cout << "\t\t\t\t\tEnter Password: ";
            cin>>psd;
            system ("CLS");
            fname=usn+".txt";
            filei.open(fname.c_str());
            if(!filei.is_open() && filei.fail())
            {
                cout<<"\n\n\n\n\n\t\t\t\t\tYou are not registered, please register before logging in.\n";
                filei.close();
                continue;
            }
            getline(filei,usern);
            getline(filei,line);
            getline(filei,pw);
            if(usn==usern && psd==pw)
            {
                cout<<"\n\t\t\t\t\tYou are successfully logged in:)\n\t\t\t\t\tYOUR PROFILE SAYS:\n";
                cout<<"\t\t\t\t\tUser-name:"<<usern<<endl;
                cout<<"\t\t\t\t\tName:"<<line<<endl;
                getline(filei,line);
                filei.close();
                break;
            }
            else{
                cout<<"\n\n\n\n\t\t\t\t\tWrong username or password!\n\t\t\t\t\tPlease try Again.\n";
            }
            cout<<endl;
        }
        else if(choice==2)
        {
            cout<<"\n\t\t\t\t\tEnter your name:";
            cin.ignore();
            getline(cin,name);
            cout<<"\n\t\t\t\t\tCreate a username:";
            cin>>usn;
            tm=0;
            valid(usn);
            if(tm>=3)
            {
                continue;
            }
            cout<<"\n\t\t\t\t\tCreate a password:";
            cin>>psd;
            fname=usn+".txt";
            //cout<<fname;
            fileo.open(fname.c_str());
            fileo<<usn<<endl<<name<<endl<<psd<<endl;
            cout<<"\n\t\t\t\t\tYou are successfully registered:)";
            fileo.close();
            break;
        }
        
    }
    
}
