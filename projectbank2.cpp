
class people:public bank{
char nameofpeople[20];
	char type[10];
	int age;
	double balance;
	int acc;
	public:
	
		
		
		
		void getdetails(int l)
		{
			int s,tr;
			int a;
			acc=l;
			
			cout<<"\nEnter Your Name Please  ";
			cin>>nameofpeople;
			cout<<"Enter Your Age  ";
			cin>>age;
			if(age>=18)
			{
				cout<<"Your Major Acount Will Be Create\n";
			}
			else{
				cout<<"You Are minor\n";
			}
			
			balance=1000;
			cout<<"PRESS\n 1 For CURRENT ACC\n 2 For SAVING\n";
			cin>>s;
			switch(s)
			{
				case 1:
				strcpy(type,"current");
					break;
					case 2:
						strcpy(type,"saving");
						break;
						default:
							return getdetails(acc);
			}
			
		}
		
		
		
		void withdraw()
		{
			int w;
			cout<<"Amount to be Withdraw\n";
			cin>>w;
			if(w>(balance-500))
			{
				cout<<"\n Amount is too MuCh  \n Curent Balance Is\n"<<balance;
				return withdraw();
				
			}
			else 
			balance=balance-w;
			
		}
		
		
		void deposit()
		{
			int am;
			system("cls");
			cout<<"\nENTER THE AMOUNT TO BE DEPOSIT\n";
			cin>>am;
			if(am<200)
			{
			
			cout<<"Sorry\n";
		    return deposit();	
		    }
			else
			balance=balance+am;
		}
	
	
	
		void showdetails()
		{
			cout<<"\n\n\n";
			cout<<"\n NAME OF BANK  "<<nameofbank<<endl;
			cout<<"\n PERSON NAME IS  "<<nameofpeople<<endl;
			cout<<"\nTYPE OF ACC  IS  "<<type<<endl;
			cout<<"\nAGE IS  "<<age<<endl;
		    cout<<"\nACCOUNT NUMBER IS  "<<acc<<endl;
			cout<<"\nBALANCE IS  "<<balance<<endl;
		
			
		}
		int search(string nts,int ats)
		{
		 
			if(nameofpeople==nts&&age==ats)
			return 1;
			else 
			return 0;
			
			
		}
};
