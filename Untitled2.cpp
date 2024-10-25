#include<iostream>
using namespace std;

int main(){
	
	cout<<"==================================QUESTION 2 BANKING SYSYTEM====================";
	
	//Delare variables
	
	int balance = 5000, option, amount;
	char ch, charoption;
	
	
	//body
	cout<<"\n\nHello, Welcome to the ATM of FAST BANKING SYSTEM, please select any one of the following to proceed:";
	
	do{
	
	cout<<"\n\n1. Deposit Money\n2. Withdraw \n3. Check balance \n4. Transfer money to another account \n5. Exit "<<endl;
	cin>>option;
	
	if(option == 5){
		cout<<"\n\nAre you sure you want to exit: (y/n): ";
		cin>>charoption;
		
		if(charoption == 'Y' || charoption == 'y'){
			cout<<"\n\naccount closed successfully";
			break;
		}
		else{
			continue;
		}
	}
	
	switch(option){
		
		case 1 : cout<<"\nEnter amount to deposit: ";
				 cin>>amount;
				 
				 while (amount < 0){
				 	cout<<"\nYour deposit amount must be positive, please enter again: ";
				 	cin>>amount;
				 }
				 
				 cout<<"Deposited: $"<<amount;
				 
				 balance += amount;
				 
				 cout<<"\nNew balance: $"<<balance; 
				 
				 break;
				 
		case 2 : cout<<"\nEnter amount to withdraw ";
				 cin>>amount;
				 
				 while (amount < 0){
				 	cout<<"\nYour withdrawn amount must be positive, please enter again: ";
				 	cin>>amount;
				 }
				 
				 while(amount > balance){
				 	cout<<"\n\nInsufficient balance, please try again: ";
				 	cin>>amount;
				 }
				 
				cout<<"\nwithdrew: $"<<amount;
				 	
				balance -= amount;
				cout<<"\nNew balance: $"<<balance;
	 	 
				 
				 break;
				 
		case 3 : cout<<"\nCurrent Balance: $"<<balance;
				 
				 break;
				 
		case 4 : cout<<"\nEnter amount to transfer to recipent: ";
				 cin>>amount;
				 
				 while (amount < 0){
				 	cout<<"\nYour Transfer amount must be positive, please enter again: ";
				 	cin>>amount;
				 }
				 
				 while(amount > balance){
				 	cout<<"\n\nInsufficient balance, please try again: ";
				 	cin>>amount;
				 }
				 
				 balance -= amount;
				 
				 cout<<"\nTransferred: $"<<amount<<" to recipent";
				 cout<<"\nYour New balance: $"<<balance;
				 
				
				break;
		
		default : cout<<"Invalid input";
	}
	
	cout<<"\nDo you want to perform another action? (y/n): ";
	cin>>ch;
				 
	if(ch == 'n' || ch == 'N'){
	cout<<"\n\nAccount successfully closed";
	    	break;
				 }
				 
   }
   
    while(ch == 'Y' || ch == 'y');

	
	return 0;
}