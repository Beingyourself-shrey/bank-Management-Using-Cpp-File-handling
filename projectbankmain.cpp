#include<iostream>
using namespace std;
#include<fstream>
#include<string.h>

#include "projectbank1.cpp"
#include "projectbank2.cpp"
#include "projectbank3.cpp"







int main()
{
	
	

  
  	int sel,size,last;
	string nametosearch;
			int agetosearch;
				int yo=0;
		       people temp;
	fstream file;
	file.open("bank.dat",ios::in|ios::out|ios::binary);     ///////////dont try to open in append mode bcoz it cant modify old only add to last
	if(!file)
	cout<<"!OH WHAT HAPPEN\n";

	
	people person;
		employee em;
		size=sizeof(person);
		file.seekg(0,ios::end);
		
		last=file.tellg();
		      int accountno=last/size;
		
	do{
	
	cout<<"SELECT ONE\n 1. NEW ACC\n 2.MODIFY \n 3.COUNT NUMBER OF CUSTOMER\n 4.SHOW ME \n 5.NAME OF EMPLOYEE\n 6.DISPLAY ALL CUSTOMER\n ";
	cin>>sel;
	switch(sel)
	{
    case 1:
    	     system("cls");
	         file.seekg(0,ios::end);
            accountno++;
            
	        person.getdetails(accountno);
		    file.write((char*)&person,sizeof(person));
		    system("cls");
	         break;
	case 2:
		file.seekg(0);
		cout<<"your name";
		cin>>nametosearch;
			cout<<"age";
			cin>>agetosearch;
			yo=0;
				while(yo==0&&!file.eof())
              		{
              		
              			
              			file.read((char*)&temp,sizeof(temp));
              			 
              			 
              			 yo=temp.search(nametosearch,agetosearch);
					}
					if(yo==1)
					{
						last=file.tellg();
					
						size=sizeof(temp);
						
						file.seekg(last-size);
					
						cout<<"\n 1. WITHDRAW\n 2.DEPOSIT\n ";
						cin>>sel;
						switch(sel)
						{
							case 1:
								temp.withdraw();
								break;
								case 2:
									temp.deposit();
									break;
									
						}
						
						file.write((char*)&temp,sizeof(temp));
					}
					else
					{
						cout<<"\nSORRY\n";
						file.clear();
					}
			
		
		
			break;
	case 3:
		    system("cls");
		size=sizeof(person);
				file.seekg(0,ios::end);
			 last=file.tellg();
				
				cout<<"TOTAL THERE ARE  "<<last/size<<"  ACCOUNTS IN BANK";
				break;
				
				
				
				
	case 4:
		system("cls");
		
		 yo=0;
		      
			
			
            	if(!file)
                      	cout<<"!OH NOT MODIFIYING\n";
               	else
              	{
              		
              		file.seekg(0);
              	
              		cout<<"\nEnter YOur NAme\n";
              		cin>>nametosearch;
              		cout<<"\n ENTER your AGE\n";
              		cin>>agetosearch;
              		
              		while(yo==0&&!file.eof())
              		{
              		
              			
              			file.read((char*)&temp,sizeof(temp));
              			 
              			 
              			 yo=temp.search(nametosearch,agetosearch);
					}
					  if(yo==1)
		                {
		                	temp.showdetails();
						}
						else{
							cout<<"\nSorry\n";
							file.clear();
     						}
               	}
               
                     	break;
                     	
                     	

	case 5:
	    system("cls");
		em.disp();
	      break;
	      
	      
	case 6:
	      file.seekg(0);
	     
	  	  file.read((char*)&person,sizeof(person));
	       while(file.good())
	      {
	  	
	  		person.showdetails();
	  		file.read((char*)&person,sizeof(person));
	  
		  }	
		  
		  	
		  	file.clear();                          /////////////you need to clear flag   
		  	file.seekg(0);
		  
		  	
		  break;

		
	}
	
}
while(1);
}
