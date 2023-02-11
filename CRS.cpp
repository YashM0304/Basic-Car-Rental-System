#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
class cars
{
	public:
	void available()
	{
		cout<<" The Cars Available Are :- "<<"\n 1. Honda Amaze \n 2. Maruti-Suzuki Swift \n 3. Maruti-Suzuki Alto ";
	}

};

void bill_cal()
{
		int time,amount;
	cout<<" Enter Time For Which The Car Is To Be Rented (in Hours) "<<endl;
	cin>>time;
	amount= 100*time;
	cout<<" Amount To Be Paid = Rs."<<amount<<endl;
	
}
void payment()
{
	cout<<" Select Payment Method "<<endl;
	cout<<" \n 1. Net Banking \n 2. UPI "<<endl;
	int pay;
	cout<<" Enter Your Choice "<<endl;
	cin>>pay;
	switch(pay)
	{
		case 1: cout<<" 1: Net Banking "<<endl;
		        	int cr_num,cvv,otp;
		char cr_name[50];
		cout<<" Enter Card Number : "<<endl;
		cin>>cr_num;
		cout<<" Enter Name As On The Card : "<<endl;
		cin>>cr_name;
		cout<<" Enter CVV : "<<endl;
		cin>>cvv;
		cout<<" Enter OTP : "<<endl;
		cin>>otp;
		break;
		case 2: cout<<" 2: UPI "<<endl;
		        	cout<<" Select Mobile App For Payment : "<<endl;
		cout<<" Press \n 1: Google Pay \n 2: Paytm \n 3: PhonePe \n 4: Paypal "<<endl;
		int mob_pay;
		cin>>mob_pay;
		switch(mob_pay)
		{
			case 1: cout<<" Google pay "<<endl;
			break;
			case 2: cout<<" Paytm "<<endl;
			break;
			case 3: cout<<" PhonePe "<<endl;
			break;
			case 4: cout<<" PayPal "<<endl;
			break;
			
		}
		
		break;
	}
}
	




int main()
{
	cout<<" Welcome to YM Car Rental System "<<endl;
	cout<<endl;
	system("CLS");
	char name[20],email[50];
	int mob_num;
	ofstream f1; //for writing in a file
	f1.open("custinfo.txt");
	cout<<" Enter Your Name : "<<endl;
	cin>>name;
	cout<<" Enter Your Mobile Number : "<<endl;
	cin>>mob_num;
	cout<<" Enter Your E-mail Address : "<<endl;
	cin>>email;
	cout<<endl;
	system("CLS");
	cars obj1;
	obj1.available();
	int rate=100;
	cout<<" \n\n Rate = Rs. 100/hr"<<endl;
	
	cout<<" \n ";
	cout<<"\n\nPlease Choose Your Car From The Available Ones "<<endl;
	cout<<" Press \n 1. Honda Amaze \n 2. Maruti-Suzuki Swift  \n 3. Maruti-Suzuki Alto "<<endl;
	
	
	int choice;
	cout<<" Enter Your Choice "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1: cout<<"  1 : Honda Amaze \n Number - MH 15 EP 7603 "<<endl;
		break;
		case 2: cout<<"  2 : Maruti-Suzuki Swift \n Number - MH 15 AY 1660 "<<endl;
		break;
		case 3: cout<<"  3 : Maruti-Suzuki Alto \n Number - MH 15 BZ 1234 "<<endl;
		break;
	}
	cout<<endl;
    bill_cal();
    payment();
    
    
    cout<<"\n\n\n\n\n Thank You For Using YM Car Rental System "<<endl; 
    int ROS;
    cout<<" Please Take A Moment & Rate Our Service Out Of 5 : "<<endl;
    cin>>ROS;
	

	
	
	
	
	
	
	return 1;
	
	
	
}

