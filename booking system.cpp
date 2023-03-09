
//A bus boking ticket

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

class Booking{
	public:
		char bname[100];
		int bno;
		char pass[20];
		char *password;
		int fare;
		int d,m,y;//day month and year
		int noseats;
		char bp[100];
		char dest[100];
		int age;
		char pname[100];
		int seatno;
		int no;
		void booking()
       {
	   /*
           strcpy(name,"Name");
           strcpy(ticketno,"Ticket No");
           strcpy(sc,"No Book ID");
           strcpy(sc1,"No Book ID");
           noseats=0;
           B=0;
           tprice=0;
           */
       }
         void get();
          void client();
          //void pass();
         
          //void password();
          void getdata();
          void show();
          void booklist(int);
          void modify();
          void reservation();
          void resdetails();
          void showcancell();
          void cancell();
          void der(char[],int,int);
  
};
void Booking::getdata(){
		cout<<"Enter the details as follows\n";
        cout<<"bus no:";
        cin>>bno;
        cout<<"bus name:";
        gets(bname);
        cout<<"Boarding point:";
        gets(bp);
        cout<<"Destination pt:";
        gets(dest);
        cout<<" fare per ticket:";
        cin>>fare;
        cout<<"Date of travel:";
        cin>>d>>m>>y;
}

void Booking::show(){
	cout<<"\t\t Bus name :"<<bname<<endl;
	cout<<"\t\t Bus number :"<<bno<<endl;
	cout<<"\t\t Boarding point :"<<bp<<endl;
	cout<<"\t\t Destination :"<<dest<<endl;
	cout<<"\t\t Bus fare :"<<fare<<endl;
	cout<< "\t\t Number of seats:"<<no<<endl;
	cout<<d<<"-"<<m<<"-"<<y<<endl;
}
void Booking::reservation(){
	int i;
	char pname[100];
	int age;
	for(i = 0; i <= no; i++){
	cout<<"Passenger name :\n";
	gets(pname);
	cout<<"Passengers age :\n\n";
	cin>>age;
	
	}

}
void Booking::resdetails(){
	cout<<"\t\tPassengers Name"<<pname<<endl;
	cout<<"\t\tPassengers Age"<<age<<endl;
	cout<<"\t\t Bus name :"<<bname<<endl;
	cout<<"\t\t Bus number :"<<bno<<endl;
	cout<<"\t\t Boarding point :"<<bp<<endl;
	cout<<"\t\t Destination :"<<dest<<endl;
	cout<<"\t\t Bus fare :"<<fare<<endl;
	cout<<"\t\t Number of seats:"<<no<<endl;
	cout<<d<<"-"<<m<<"-"<<y<<endl;
}

void Booking::cancell(){
	cout<<"Bus number\n";
	cin>>bno;
	cout<<"Bus name\n";
	cin>>bname;
	cout<<"destination\n";
	cin>>dest;
	cout<<"Passenger name\n";
	cin>>pname;
	cout<<"Passanger age\n";
	cin>>age;
	cout<<"Number of seats\n";
	cin>>seatno;
	cout<<"date\n";
	cin>>d>>m>>y;
}
void Booking::showcancell(){
	cout<<"\n CANCELLATION\n";
	cout<<"Date"<<":"<<d ;
	cout<<"-"<< m ;
	cout<<"-"<< y <<endl;
}
 void user ();
 void administrator();
int main(){
//	clrscr();
	char ch;
	cout<<":::::::::::::::::WELCOME TO BUS BOOKING SYSTEM::::::::::::::::::::\n\n";
	
	do{
		cout<<"*****MAIN MENU8****\n\n";
		cout<<"1.Admin "<<endl;
		cout<<"2.User\n\n";
		cout<<"Enter your choice";
		cin>>ch;
		cout<<endl;
		
		switch(ch){
			case 1:
				administrator();
				break;
				case 2:
					user();
					break;
						case 3:
							cout<<"exit\n";
							break;
					
		}
		
	}
	while(ch != 3)
	
	getch();
	user();
		
}
