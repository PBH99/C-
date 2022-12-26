#include<iostream>
#include<process.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
using namespace std;
class tata
{

           public:
	 tata()
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
		cout<<" WELCOME";
		Sleep(1000);
		cout<<"   TO";
		Sleep(1000);
		cout<<"   TATA";
		Sleep(1000);
		cout<<"    MOTORS";
		Sleep(1000);
		cout<<"\n\n\n\n\n";
			}
	public:
	void show()
	{
		system("cls");
		cout<<"\n\n\t\t\t\t\t\t\t*********TATA MOTORS**********\n";
                    cout<<"\t\t\t\t\t\t\t      MUMBAI(MAHARASTRA)\n";
	          cout<<"\t\t\t\t\t\t\t           IND009567\n";
	          cout<<"\n\n\n\nHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                    cout<<"\nFOUNDER      : J.R.D TATA";	          
	          cout<<"\nFOUNDED      : 1945(MUMBAI)";
	          cout<<"\nREVENUE      : 3.19 lakh crores INR(USS$45 billion,2021)";
	          cout<<"\nSTOCK PRIC   : TATAMOTORS(NSE)";
	          cout<<"\n               RS436.20 +3.00(+0.69)";
                    cout<<"\nPARENT ORGANISATION : TATA GROUP";
                    cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";
                    
		
		
		cout<<"\n\n\n\n\n";
          }
          void id()
	{
		//do{
				string pas;
		string uid;
		
		
		
		
		cout<<"\n\n\t\t\t\t\t Enter Userid   ::";
		cin>>uid;
		cout<<"\t\t\t\t\t Enter Password ::";
		int i = 0;
 /*   char a;//a Temp char
   // for(i=0;;)//infinite loop
  //  {
        a=getch();
         pas[i]=a;//stores a in pass
            ++i;
            cout<<"*";
//  }*/
		cin>>pas;
		if(uid=="tata" && pas== "rntt")
		{  
		   //system("cls");
			cout<<" \n\n\n\n\n\n\n\t\t\t\t\tLOGINED SUCESSFULLY\n";
	                     	                 //    	cout<<" \n\n\n\n\n\n\n";
	          system("pause");
		view();
	//	hexa();
	//	 	safari();
		           	
		 } 
		 else
		 {
		 	system("cls");
		 	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t!!!! LOGIN FAILED !!!!";
		 //cout<<" \n\n\n\n\n\n\n";
		 }
              // }  //end of while
             //  while(1);
	}   //void id closed
	void view()
	{
	//	do
	//	{
		
		string p;
		int q,r;
		system("cls");
		cout<<"\n\n\t\t\t\t\t\t\t*********TATA MOTORS**********\n";
                    cout<<"\t\t\t\t\t\t\t      MUMBAI(MAHARASTRA)\n";
	          cout<<"\t\t\t\t\t\t\t           IND009567\n";
	          cout<<"\n\n\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                    cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";
                     cout<<"\n\n\n\n\t\t\t\t\t\t\t\t CURRENT MODELS\n";
		 cout<<"\n\n \t\t\t\t ****TATA SUV****\t\t\t\t\t\t****TATA CARS****\n";
		 cout<<" \t\t\t\t    1.HEXA        \t\t\t\t\t\t   1.TIAGO\n"; 
		 cout<<" \t\t\t\t    2.SAFARI        \t\t\t\t\t\t   2.TIGOR\n";
		 cout<<" \t\t\t\t    3.NEXON        \t\t\t\t\t\t   3.ALTROZ\n";
		 cout<<" \t\t\t\t    4.NEXON EV    \t\t\t\t\t\t   4.TIGOR EV\n";
		 cout<<" \t\t\t\t    5.HARRIER     \t\t\t\t\t\t   5.PUNCH\n";
		 cout<<"\n\n\t\t\t\t\t\t Whats your demand sir [SUV/CARS] :: ";
		 cin>>p;
		 if(p=="suv")
		 {
		 	cout<<"\t\t\t\t\t\t  Which Tata suv do you wanna see :: ";
		 	cin>>q;
		 	switch(q)
		 	{
			        case 1:
			             	hexa();                 
		                              break;
		                  case 2:
                       		                    safari();	
			                    break;
		                  case 3:
		         			nexon();
		                              break;
                                      case 4:
			             	nexonev();                
		                              break;
		                  case 5:
                       		          harrier();	
			                    break;
		                    default:
		                    	cout<<"\t\t\t\t\t\t\t!!!!!!!!! NO MATCH !!!!!!!!!\n";
		         }
		          
		       }    
		else if (p=="cars")
		{
			cout<<"\t\t\t\t\t\t Which Tata cars do you wanna see :: ";
		 	cin>>r;
                              
                              switch(r)
		 	{
			        case 1:
			             	tiago();                 
		                              break;
		                  case 2:
                       		         tigor();	
			                    break;
		                  case 3:
		         		          altroz();
		                              break;
                                      case 4:
			             	tigorev();                
		                              break;
		                  case 5:
                       		          punch();	
			                    break;
		                    default:
		                    	cout<<"\t\t\t\t\t\t\t!!!!!!!!! NO MATCH !!!!!!!!!\n";
		         }
	
	          }         
	  //  }  // end of do
	    //while(1);
	}  
      	void hexa()
	{
		char frtn[20],lstn[20],ffrtn[20],flstn[20];
		string bolo,adn,ctn,stn,ead,dtb,ddb;
		int vrt,r=5,n;
		long int p ,dp,esc,total,ordn,mbn,ccd;
		float emi;
		system("cls");
               cout<<"\n\n\t\t\t\t\t\t\t*********TATA MOTORS**********\n";
                    cout<<"\t\t\t\t\t\t\t      MUMBAI(MAHARASTRA)\n";
	          cout<<"\t\t\t\t\t\t\t           IND009567\n";
	         /* cout<<"\n\n\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                    cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";
		*/
		cout<<"\n\n       \t\t\t\t\t\t***************TATA HEXA****************\n\n";
		cout<<"\t\tTata hexa is a full-size crossover SUV manufactured by indian passanger and comercial vehicles manufacturer Tatamotors";
		cout<<"\n\t\tThe SUV, which was originally unveiled in the 2016 Geneva Motor Show,[1] was launched into the Indian markets in January 2017.[2";
		cout<<"\n\t\tThe Tata Hexa was based on the company's previously used Aria platform, with a body-on-frame chassis.";
		cout<<"\n\t\tThe Tata Hexa was available in a number of variants, all of which are differentiated based on cabin features, design aesthetics \
		\n\t\tas well as engine power and torque output.";
		cout<<"\n\n  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
		cout<<"  |     OVERIVEW\t\t               BODY AND CHASIS \t\t            POWERTRAIN \t\t            DIMENSION\t                      CHRONOLOGY   |\n";
                    cout<<"  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n\n";
		cout<<" MANUFACUTURER Tatamotors\tCLASS    Midsize-crossover\t\t ENGINE 2.21L DW12       \tWHEELBASE  2850mm(112.2 in)\t\tPREDECESSOR Tata Aria\n";
		
		cout<<" PRODUCTION    2016-2020 \tBody size   5-Door SUV    \t\t          varicor 14-T   \tLENGTH     4788mm(188.5 in)\t\t                     \n";
		cout<<" ASSEMBLY      India Pune\tLAYOUT   Front-engine-rear\t\t           (Diesel)      \tWIDTH      1900mm(188.5 in)\t\tSUCCESSOR   Tata safari\n";
		cout<<"                         \t         wheel-drive      \t\t TRANSMISSION 5-Speed man\tHEIGHT     1785mm(70.3  in)\t\t               (2021)\n";
		cout<<"                         \t         Front-engine-four\t\t               -ual      \t\n";
		cout<<"                         \t         wheel-drive      \t\t              6-Speed man\t\n";
		cout<<"                         \tPLATFORM  Tata x2         \t\t               -ual\n";
		cout<<"                         \t                          \t\t              6-Speed atutomatic\n\n";         
		cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";
                    cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";	
		cout<<"\n\t\t\t\t\t ARE YOU SATISTISFIED WITH OUR SERVICE SIR/MAM  [yes/no]:: ";
		cin>>bolo;
		if(bolo=="yes")
		{
                          cout<<"\t\t\t\t\t DO YOU WANNA GET IT SIR/MAM [yes/no] :: ";
                          cin>>bolo;
                           if(bolo=="yes")
                           {
                           	system("cls");
                               	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
                   /* cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";

                  */
	                   cout<<"\n\n\n\n\n\n\t\t\t\t\t     --------Tata Hexa price According to their model--------\n";
                              cout<<"\n\n\t\t\t\t\t   1.TOP VARIENT            2.MID VARIENT               3.BASE VARIENT\n\n";
                              cout<<"\t\t\t\t\t     RS.1900000               RS.1650000                  RS.1300000\n";
                              cout<<"\n\n\t\t\t\tWhich varient want to book sir :: ";
                              cin>>vrt;
                              switch(vrt)
                              {
                                 case 1:
                                 	{
				   
                              	long int price=1925000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			system("cls");
			
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                     "<<ddb<<"                    "<<endl;
			total=0;
			total=price+esc;
	                    p=0;
			p=total-dp;
			
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
	           	cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<price<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		          }  //end of case 1
			break;
			case 2:
				{
				
		                 	long int pric=1525000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pric+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pric<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		         }   // end of case 2
			break;
			case 3:
				{
					
				
		          	long int pri=1325000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pri+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pri<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI        \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		            }  // end of case 3
                                     break;
					                default :
			        cout<<"\n\n\t\t\t\t!!!!INVALID VARIENT SIR/MAM!!!!!";              	

		         }   //  end of switch
                              
		       }
		       else
		       {
		       cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
		       exit(0);
                           }
                    }   // end of if
                    else
                    {
                    	cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
                    	exit(0);
		}
         }  //  end of void hexa
         
	

            void safari()
	{
		char frtn[20],lstn[20],ffrtn[20],flstn[20];
		string bolo,adn,ctn,stn,ead,dtb,ddb;
		int vrt,r=5,n;
		long int p ,dp,esc,total,ordn,mbn,ccd;
		float emi;
		system("cls");
               cout<<"\n\n\t\t\t\t\t\t\t*********TATA MOTORS**********\n";
                    cout<<"\t\t\t\t\t\t\t      MUMBAI(MAHARASTRA)\n";
	          cout<<"\t\t\t\t\t\t\t           IND009567\n";
	         /* cout<<"\n\n\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                    cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";
		*/
		cout<<"\n\n       \t\t\t\t\t\t***************TATA SAFARI****************\n\n";
		cout<<"\t\tTata safari is a mid-size crossover SUV produced by the indian automobile manufacturer  tata motors since 1998 ";
		cout<<"The first-generation Safari has been designed as a seven-seater SUV with a foldable third row, roomy interior; on the market ";
		cout<<"\n\t\t it has positioned itself as an alternative from the competitive price to other brands off-road vehicles";
		cout<<"\n\t\tSafari was re-introduced in 2021. Unlike the first-generation , the second-generation Safari is a front-wheel-drive, monocoque \
		\n\t\tcrossover SUV, sharing its underpinnings with the Tata Harrier.";
		cout<<"\n\n  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
		cout<<"  |     OVERIVEW\t\t               BODY AND CHASIS \t\t            POWERTRAIN \t\t            DIMENSION\t                      CHRONOLOGY   |\n";
                    cout<<"  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n\n";
		cout<<" MANUFACUTURER Tatamotors\tCLASS    Midsize-crossover\t\t ENGINE 2.21L DW12       \tWHEELBASE  2850mm(112.2 in)\t\tPREDECESSOR Tata Aria\n";
		
		cout<<" PRODUCTION              \tBody size   5-Door SUV    \t\t          varicor 14-T   \tLENGTH     4788mm(188.5 in)\t\t                     \n";
		cout<<" ASSEMBLY      India Pune\tLAYOUT   Front-engine-rear\t\t           (Diesel)      \tWIDTH      1900mm(188.5 in)\t\tSUCCESSOR   Tata safari\n";
		cout<<"                         \t         wheel-drive      \t\t TRANSMISSION 5-Speed man\tHEIGHT     1785mm(70.3  in)\t\t               (2021)\n";
		cout<<"                         \t         Front-engine-four\t\t               -ual      \t\n";
		cout<<"                         \t         wheel-drive      \t\t              6-Speed man\t\n";
		cout<<"                         \tPLATFORM  Tata x2         \t\t               -ual\n";
		cout<<"                         \t                          \t\t              6-Speed atutomatic\n\n";         
		cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";
                    cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";	
		cout<<"\n\t\t\t\t\t ARE YOU SATISTISFIED WITH OUR SERVICE SIR/MAM  [yes/no]:: ";
		cin>>bolo;
		if(bolo=="yes")
		{
                          cout<<"\t\t\t\t\t DO YOU WANNA GET IT SIR/MAM [yes/no] :: ";
                          cin>>bolo;
                           if(bolo=="yes")
                           {
                           	system("cls");
                               	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
                   /* cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";

                   */ 
	                   cout<<"\n\n\n\n\n\n\t\t\t\t\t     --------Tata Hexa price According to their model--------\n";
                              cout<<"\n\n\t\t\t\t\t   1.TOP VARIENT            2.MID VARIENT               3.BASE VARIENT\n\n";
                              cout<<"\t\t\t\t\t     RS.1900000               RS.1650000                  RS.1300000\n";
                              cout<<"\n\n\t\t\t\tWhich varient want to book sir :: ";
                              cin>>vrt;
                              switch(vrt)
                              {
                                 case 1:
                                 	{
				   
                              	long int price=1925000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                     "<<ddb<<"                    "<<endl;
			total=0;
			total=price+esc;
	                    p=0;
			p=total-dp;
			
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
	           	cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<price<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		          }  //end of case 1
			break;
			case 2:
				{
				
		                 	long int pric=1525000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pric+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pric<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		         }   // end of case 2
			break;
			case 3:
				{
					
				
		          	long int pri=1325000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pri+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pri<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI        \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		            }  // end of case 3
                                break;
					                default :
			        cout<<"\n\n\t\t\t\t!!!!INVALID VARIENT SIR/MAM!!!!!";              	

		         }   //  end of switch
                              
		       }
		       else
		       {
		       cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
		       exit(0);
                           }
                    }   // end of if
                    else
                    {
                    	cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
                    	exit(0);
		}
         }  //  end of void safari 
         
         void nexon()
	{
		char frtn[20],lstn[20],ffrtn[20],flstn[20];
		string bolo,adn,ctn,stn,ead,dtb,ddb;
		int vrt,r=5,n;
		long int p ,dp,esc,total,ordn,mbn,ccd;
		float emi;
		system("cls");
               cout<<"\n\n\t\t\t\t\t\t\t*********TATA MOTORS**********\n";
                    cout<<"\t\t\t\t\t\t\t      MUMBAI(MAHARASTRA)\n";
	          cout<<"\t\t\t\t\t\t\t           IND009567\n";
	         /* cout<<"\n\n\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                    cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";
		*/
		cout<<"\n\n       \t\t\t\t\t\t***************TATA HEXA****************\n\n";
		cout<<"\t\tTata hexa is a full-size crossover SUV manufactured by indian passanger and comercial vehicles manufacturer Tatamotors";
		cout<<"\n\t\tThe SUV, which was originally unveiled in the 2016 Geneva Motor Show,[1] was launched into the Indian markets in January 2017.[2";
		cout<<"\n\t\tThe Tata Hexa was based on the company's previously used Aria platform, with a body-on-frame chassis.";
		cout<<"\n\t\tThe Tata Hexa was available in a number of variants, all of which are differentiated based on cabin features, design aesthetics \
		\n\t\tas well as engine power and torque output.";
		cout<<"\n\n  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
		cout<<"  |     OVERIVEW\t\t               BODY AND CHASIS \t\t            POWERTRAIN \t\t            DIMENSION\t                      CHRONOLOGY   |\n";
                    cout<<"  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n\n";
		cout<<" MANUFACUTURER Tatamotors\tCLASS    Midsize-crossover\t\t ENGINE 2.21L DW12       \tWHEELBASE  2850mm(112.2 in)\t\tPREDECESSOR Tata Aria\n";
		
		cout<<" PRODUCTION    2016-2020 \tBody size   5-Door SUV    \t\t          varicor 14-T   \tLENGTH     4788mm(188.5 in)\t\t                     \n";
		cout<<" ASSEMBLY      India Pune\tLAYOUT   Front-engine-rear\t\t           (Diesel)      \tWIDTH      1900mm(188.5 in)\t\tSUCCESSOR   Tata safari\n";
		cout<<"                         \t         wheel-drive      \t\t TRANSMISSION 5-Speed man\tHEIGHT     1785mm(70.3  in)\t\t               (2021)\n";
		cout<<"                         \t         Front-engine-four\t\t               -ual      \t\n";
		cout<<"                         \t         wheel-drive      \t\t              6-Speed man\t\n";
		cout<<"                         \tPLATFORM  Tata x2         \t\t               -ual\n";
		cout<<"                         \t                          \t\t              6-Speed atutomatic\n\n";         
		cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";
                    cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";	
		cout<<"\n\t\t\t\t\t ARE YOU SATISTISFIED WITH OUR SERVICE SIR/MAM  [yes/no]:: ";
		cin>>bolo;
		if(bolo=="yes")
		{
                          cout<<"\t\t\t\t\t DO YOU WANNA GET IT SIR/MAM [yes/no] :: ";
                          cin>>bolo;
                           if(bolo=="yes")
                           {
                           	system("cls");
                               	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
                   /* cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";

                  */
	                   cout<<"\n\n\n\n\n\n\t\t\t\t\t     --------Tata Hexa price According to their model--------\n";
                              cout<<"\n\n\t\t\t\t\t   1.TOP VARIENT            2.MID VARIENT               3.BASE VARIENT\n\n";
                              cout<<"\t\t\t\t\t     RS.1900000               RS.1650000                  RS.1300000\n";
                              cout<<"\n\n\t\t\t\tWhich varient want to book sir :: ";
                              cin>>vrt;
                              switch(vrt)
                              {
                                 case 1:
                                 	{
				   
                              	long int price=1925000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			system("cls");
			
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                     "<<ddb<<"                    "<<endl;
			total=0;
			total=price+esc;
	                    p=0;
			p=total-dp;
			
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
	           	cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<price<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		          }  //end of case 1
			break;
			case 2:
				{
				
		                 	long int pric=1525000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pric+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pric<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		         }   // end of case 2
			break;
			case 3:
				{
					
				
		          	long int pri=1325000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pri+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pri<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI        \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		            }  // end of case 3
                                     break;
					                default :
			        cout<<"\n\n\t\t\t\t!!!!INVALID VARIENT SIR/MAM!!!!!";              	

		         }   //  end of switch
                              
		       }
		       else
		       {
		       cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
		       exit(0);
                           }
                    }   // end of if
                    else
                    {
                    	cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
                    	exit(0);
		}
         }  //  end of void nexon
        
 
 //   nexon v part
                    void nexonev()
	{
		char frtn[20],lstn[20],ffrtn[20],flstn[20];
		string bolo,adn,ctn,stn,ead,dtb,ddb;
		int vrt,r=5,n;
		long int p ,dp,esc,total,ordn,mbn,ccd;
		float emi;
		system("cls");
               cout<<"\n\n\t\t\t\t\t\t\t*********TATA MOTORS**********\n";
                    cout<<"\t\t\t\t\t\t\t      MUMBAI(MAHARASTRA)\n";
	          cout<<"\t\t\t\t\t\t\t           IND009567\n";
	         /* cout<<"\n\n\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                    cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";
		*/
		cout<<"\n\n       \t\t\t\t\t\t***************TATA HEXA****************\n\n";
		cout<<"\t\tTata hexa is a full-size crossover SUV manufactured by indian passanger and comercial vehicles manufacturer Tatamotors";
		cout<<"\n\t\tThe SUV, which was originally unveiled in the 2016 Geneva Motor Show,[1] was launched into the Indian markets in January 2017.[2";
		cout<<"\n\t\tThe Tata Hexa was based on the company's previously used Aria platform, with a body-on-frame chassis.";
		cout<<"\n\t\tThe Tata Hexa was available in a number of variants, all of which are differentiated based on cabin features, design aesthetics \
		\n\t\tas well as engine power and torque output.";
		cout<<"\n\n  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
		cout<<"  |     OVERIVEW\t\t               BODY AND CHASIS \t\t            POWERTRAIN \t\t            DIMENSION\t                      CHRONOLOGY   |\n";
                    cout<<"  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n\n";
		cout<<" MANUFACUTURER Tatamotors\tCLASS    Midsize-crossover\t\t ENGINE 2.21L DW12       \tWHEELBASE  2850mm(112.2 in)\t\tPREDECESSOR Tata Aria\n";
		
		cout<<" PRODUCTION    2016-2020 \tBody size   5-Door SUV    \t\t          varicor 14-T   \tLENGTH     4788mm(188.5 in)\t\t                     \n";
		cout<<" ASSEMBLY      India Pune\tLAYOUT   Front-engine-rear\t\t           (Diesel)      \tWIDTH      1900mm(188.5 in)\t\tSUCCESSOR   Tata safari\n";
		cout<<"                         \t         wheel-drive      \t\t TRANSMISSION 5-Speed man\tHEIGHT     1785mm(70.3  in)\t\t               (2021)\n";
		cout<<"                         \t         Front-engine-four\t\t               -ual      \t\n";
		cout<<"                         \t         wheel-drive      \t\t              6-Speed man\t\n";
		cout<<"                         \tPLATFORM  Tata x2         \t\t               -ual\n";
		cout<<"                         \t                          \t\t              6-Speed atutomatic\n\n";         
		cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";
                    cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";	
		cout<<"\n\t\t\t\t\t ARE YOU SATISTISFIED WITH OUR SERVICE SIR/MAM  [yes/no]:: ";
		cin>>bolo;
		if(bolo=="yes")
		{
                          cout<<"\t\t\t\t\t DO YOU WANNA GET IT SIR/MAM [yes/no] :: ";
                          cin>>bolo;
                           if(bolo=="yes")
                           {
                           	system("cls");
                               	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
                   /* cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";

                  */
	                   cout<<"\n\n\n\n\n\n\t\t\t\t\t     --------Tata Hexa price According to their model--------\n";
                              cout<<"\n\n\t\t\t\t\t   1.TOP VARIENT            2.MID VARIENT               3.BASE VARIENT\n\n";
                              cout<<"\t\t\t\t\t     RS.1900000               RS.1650000                  RS.1300000\n";
                              cout<<"\n\n\t\t\t\tWhich varient want to book sir :: ";
                              cin>>vrt;
                              switch(vrt)
                              {
                                 case 1:
                                 	{
				   
                              	long int price=1925000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			system("cls");
			
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                     "<<ddb<<"                    "<<endl;
			total=0;
			total=price+esc;
	                    p=0;
			p=total-dp;
			
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
	           	cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<price<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		          }  //end of case 1
			break;
			case 2:
				{
				
		                 	long int pric=1525000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pric+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pric<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		         }   // end of case 2
			break;
			case 3:
				{
					
				
		          	long int pri=1325000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pri+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pri<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI        \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		            }  // end of case 3
                                     break;
					                default :
			        cout<<"\n\n\t\t\t\t!!!!INVALID VARIENT SIR/MAM!!!!!";              	

		         }   //  end of switch
                              
		       }
		       else
		       {
		       cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
		       exit(0);
                           }
                    }   // end of if
                    else
                    {
                    	cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
                    	exit(0);
		}
         }  //  end of void nexonev
      
     
                    void harrier()
	{
		char frtn[20],lstn[20],ffrtn[20],flstn[20];
		string bolo,adn,ctn,stn,ead,dtb,ddb;
		int vrt,r=5,n;
		long int p ,dp,esc,total,ordn,mbn,ccd;
		float emi;
		system("cls");
               cout<<"\n\n\t\t\t\t\t\t\t*********TATA MOTORS**********\n";
                    cout<<"\t\t\t\t\t\t\t      MUMBAI(MAHARASTRA)\n";
	          cout<<"\t\t\t\t\t\t\t           IND009567\n";
	         /* cout<<"\n\n\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                    cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";
		*/
		cout<<"\n\n       \t\t\t\t\t\t***************TATA HEXA****************\n\n";
		cout<<"\t\tTata hexa is a full-size crossover SUV manufactured by indian passanger and comercial vehicles manufacturer Tatamotors";
		cout<<"\n\t\tThe SUV, which was originally unveiled in the 2016 Geneva Motor Show,[1] was launched into the Indian markets in January 2017.[2";
		cout<<"\n\t\tThe Tata Hexa was based on the company's previously used Aria platform, with a body-on-frame chassis.";
		cout<<"\n\t\tThe Tata Hexa was available in a number of variants, all of which are differentiated based on cabin features, design aesthetics \
		\n\t\tas well as engine power and torque output.";
		cout<<"\n\n  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
		cout<<"  |     OVERIVEW\t\t               BODY AND CHASIS \t\t            POWERTRAIN \t\t            DIMENSION\t                      CHRONOLOGY   |\n";
                    cout<<"  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n\n";
		cout<<" MANUFACUTURER Tatamotors\tCLASS    Midsize-crossover\t\t ENGINE 2.21L DW12       \tWHEELBASE  2850mm(112.2 in)\t\tPREDECESSOR Tata Aria\n";
		
		cout<<" PRODUCTION    2016-2020 \tBody size   5-Door SUV    \t\t          varicor 14-T   \tLENGTH     4788mm(188.5 in)\t\t                     \n";
		cout<<" ASSEMBLY      India Pune\tLAYOUT   Front-engine-rear\t\t           (Diesel)      \tWIDTH      1900mm(188.5 in)\t\tSUCCESSOR   Tata safari\n";
		cout<<"                         \t         wheel-drive      \t\t TRANSMISSION 5-Speed man\tHEIGHT     1785mm(70.3  in)\t\t               (2021)\n";
		cout<<"                         \t         Front-engine-four\t\t               -ual      \t\n";
		cout<<"                         \t         wheel-drive      \t\t              6-Speed man\t\n";
		cout<<"                         \tPLATFORM  Tata x2         \t\t               -ual\n";
		cout<<"                         \t                          \t\t              6-Speed atutomatic\n\n";         
		cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";
                    cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";	
		cout<<"\n\t\t\t\t\t ARE YOU SATISTISFIED WITH OUR SERVICE SIR/MAM  [yes/no]:: ";
		cin>>bolo;
		if(bolo=="yes")
		{
                          cout<<"\t\t\t\t\t DO YOU WANNA GET IT SIR/MAM [yes/no] :: ";
                          cin>>bolo;
                           if(bolo=="yes")
                           {
                           	system("cls");
                               	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
                   /* cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";

                  */
	                   cout<<"\n\n\n\n\n\n\t\t\t\t\t     --------Tata Hexa price According to their model--------\n";
                              cout<<"\n\n\t\t\t\t\t   1.TOP VARIENT            2.MID VARIENT               3.BASE VARIENT\n\n";
                              cout<<"\t\t\t\t\t     RS.1900000               RS.1650000                  RS.1300000\n";
                              cout<<"\n\n\t\t\t\tWhich varient want to book sir :: ";
                              cin>>vrt;
                              switch(vrt)
                              {
                                 case 1:
                                 	{
				   
                              	long int price=1925000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			system("cls");
			
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                     "<<ddb<<"                    "<<endl;
			total=0;
			total=price+esc;
	                    p=0;
			p=total-dp;
			
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
	           	cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<price<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		          }  //end of case 1
			break;
			case 2:
				{
				
		                 	long int pric=1525000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pric+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pric<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		         }   // end of case 2
			break;
			case 3:
				{
					
				
		          	long int pri=1325000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pri+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pri<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI        \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		            }  // end of case 3
                                     break;
					                default :
			        cout<<"\n\n\t\t\t\t!!!!INVALID VARIENT SIR/MAM!!!!!";              	

		         }   //  end of switch
                              
		       }
		       else
		       {
		       cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
		       exit(0);
                           }
                    }   // end of if
                    else
                    {
                    	cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
                    	exit(0);
		}
         }  //  end of void harrier
        
         
                     void tiago()
	{
		char frtn[20],lstn[20],ffrtn[20],flstn[20];
		string bolo,adn,ctn,stn,ead,dtb,ddb;
		int vrt,r=5,n;
		long int p ,dp,esc,total,ordn,mbn,ccd;
		float emi;
		system("cls");
               cout<<"\n\n\t\t\t\t\t\t\t*********TATA MOTORS**********\n";
                    cout<<"\t\t\t\t\t\t\t      MUMBAI(MAHARASTRA)\n";
	          cout<<"\t\t\t\t\t\t\t           IND009567\n";
	         /* cout<<"\n\n\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                    cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";
		*/
		cout<<"\n\n       \t\t\t\t\t\t***************TATA HEXA****************\n\n";
		cout<<"\t\tTata hexa is a full-size crossover SUV manufactured by indian passanger and comercial vehicles manufacturer Tatamotors";
		cout<<"\n\t\tThe SUV, which was originally unveiled in the 2016 Geneva Motor Show,[1] was launched into the Indian markets in January 2017.[2";
		cout<<"\n\t\tThe Tata Hexa was based on the company's previously used Aria platform, with a body-on-frame chassis.";
		cout<<"\n\t\tThe Tata Hexa was available in a number of variants, all of which are differentiated based on cabin features, design aesthetics \
		\n\t\tas well as engine power and torque output.";
		cout<<"\n\n  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
		cout<<"  |     OVERIVEW\t\t               BODY AND CHASIS \t\t            POWERTRAIN \t\t            DIMENSION\t                      CHRONOLOGY   |\n";
                    cout<<"  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n\n";
		cout<<" MANUFACUTURER Tatamotors\tCLASS    Midsize-crossover\t\t ENGINE 2.21L DW12       \tWHEELBASE  2850mm(112.2 in)\t\tPREDECESSOR Tata Aria\n";
		
		cout<<" PRODUCTION    2016-2020 \tBody size   5-Door SUV    \t\t          varicor 14-T   \tLENGTH     4788mm(188.5 in)\t\t                     \n";
		cout<<" ASSEMBLY      India Pune\tLAYOUT   Front-engine-rear\t\t           (Diesel)      \tWIDTH      1900mm(188.5 in)\t\tSUCCESSOR   Tata safari\n";
		cout<<"                         \t         wheel-drive      \t\t TRANSMISSION 5-Speed man\tHEIGHT     1785mm(70.3  in)\t\t               (2021)\n";
		cout<<"                         \t         Front-engine-four\t\t               -ual      \t\n";
		cout<<"                         \t         wheel-drive      \t\t              6-Speed man\t\n";
		cout<<"                         \tPLATFORM  Tata x2         \t\t               -ual\n";
		cout<<"                         \t                          \t\t              6-Speed atutomatic\n\n";         
		cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";
                    cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";	
		cout<<"\n\t\t\t\t\t ARE YOU SATISTISFIED WITH OUR SERVICE SIR/MAM  [yes/no]:: ";
		cin>>bolo;
		if(bolo=="yes")
		{
                          cout<<"\t\t\t\t\t DO YOU WANNA GET IT SIR/MAM [yes/no] :: ";
                          cin>>bolo;
                           if(bolo=="yes")
                           {
                           	system("cls");
                               	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
                   /* cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";

                  */
	                   cout<<"\n\n\n\n\n\n\t\t\t\t\t     --------Tata Hexa price According to their model--------\n";
                              cout<<"\n\n\t\t\t\t\t   1.TOP VARIENT            2.MID VARIENT               3.BASE VARIENT\n\n";
                              cout<<"\t\t\t\t\t     RS.1900000               RS.1650000                  RS.1300000\n";
                              cout<<"\n\n\t\t\t\tWhich varient want to book sir :: ";
                              cin>>vrt;
                              switch(vrt)
                              {
                                 case 1:
                                 	{
				   
                              	long int price=1925000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			system("cls");
			
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                     "<<ddb<<"                    "<<endl;
			total=0;
			total=price+esc;
	                    p=0;
			p=total-dp;
			
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
	           	cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<price<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		          }  //end of case 1
			break;
			case 2:
				{
				
		                 	long int pric=1525000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pric+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pric<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		         }   // end of case 2
			break;
			case 3:
				{
					
				
		          	long int pri=1325000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pri+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pri<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI        \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		            }  // end of case 3
                                     break;
					                default :
			        cout<<"\n\n\t\t\t\t!!!!INVALID VARIENT SIR/MAM!!!!!";              	

		         }   //  end of switch
                              
		       }
		       else
		       {
		       cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
		       exit(0);
                           }
                    }   // end of if
                    else
                    {
                    	cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
                    	exit(0);
		}
         }  //  end of void tiago
         
         
 
         
                     void tigor()
	{
		char frtn[20],lstn[20],ffrtn[20],flstn[20];
		string bolo,adn,ctn,stn,ead,dtb,ddb;
		int vrt,r=5,n;
		long int p ,dp,esc,total,ordn,mbn,ccd;
		float emi;
		system("cls");
               cout<<"\n\n\t\t\t\t\t\t\t*********TATA MOTORS**********\n";
                    cout<<"\t\t\t\t\t\t\t      MUMBAI(MAHARASTRA)\n";
	          cout<<"\t\t\t\t\t\t\t           IND009567\n";
	         /* cout<<"\n\n\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                    cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";
		*/
		cout<<"\n\n       \t\t\t\t\t\t***************TATA HEXA****************\n\n";
		cout<<"\t\tTata hexa is a full-size crossover SUV manufactured by indian passanger and comercial vehicles manufacturer Tatamotors";
		cout<<"\n\t\tThe SUV, which was originally unveiled in the 2016 Geneva Motor Show,[1] was launched into the Indian markets in January 2017.[2";
		cout<<"\n\t\tThe Tata Hexa was based on the company's previously used Aria platform, with a body-on-frame chassis.";
		cout<<"\n\t\tThe Tata Hexa was available in a number of variants, all of which are differentiated based on cabin features, design aesthetics \
		\n\t\tas well as engine power and torque output.";
		cout<<"\n\n  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
		cout<<"  |     OVERIVEW\t\t               BODY AND CHASIS \t\t            POWERTRAIN \t\t            DIMENSION\t                      CHRONOLOGY   |\n";
                    cout<<"  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n\n";
		cout<<" MANUFACUTURER Tatamotors\tCLASS    Midsize-crossover\t\t ENGINE 2.21L DW12       \tWHEELBASE  2850mm(112.2 in)\t\tPREDECESSOR Tata Aria\n";
		
		cout<<" PRODUCTION    2016-2020 \tBody size   5-Door SUV    \t\t          varicor 14-T   \tLENGTH     4788mm(188.5 in)\t\t                     \n";
		cout<<" ASSEMBLY      India Pune\tLAYOUT   Front-engine-rear\t\t           (Diesel)      \tWIDTH      1900mm(188.5 in)\t\tSUCCESSOR   Tata safari\n";
		cout<<"                         \t         wheel-drive      \t\t TRANSMISSION 5-Speed man\tHEIGHT     1785mm(70.3  in)\t\t               (2021)\n";
		cout<<"                         \t         Front-engine-four\t\t               -ual      \t\n";
		cout<<"                         \t         wheel-drive      \t\t              6-Speed man\t\n";
		cout<<"                         \tPLATFORM  Tata x2         \t\t               -ual\n";
		cout<<"                         \t                          \t\t              6-Speed atutomatic\n\n";         
		cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";
                    cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";	
		cout<<"\n\t\t\t\t\t ARE YOU SATISTISFIED WITH OUR SERVICE SIR/MAM  [yes/no]:: ";
		cin>>bolo;
		if(bolo=="yes")
		{
                          cout<<"\t\t\t\t\t DO YOU WANNA GET IT SIR/MAM [yes/no] :: ";
                          cin>>bolo;
                           if(bolo=="yes")
                           {
                           	system("cls");
                               	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
                   /* cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";

                  */
	                   cout<<"\n\n\n\n\n\n\t\t\t\t\t     --------Tata Hexa price According to their model--------\n";
                              cout<<"\n\n\t\t\t\t\t   1.TOP VARIENT            2.MID VARIENT               3.BASE VARIENT\n\n";
                              cout<<"\t\t\t\t\t     RS.1900000               RS.1650000                  RS.1300000\n";
                              cout<<"\n\n\t\t\t\tWhich varient want to book sir :: ";
                              cin>>vrt;
                              switch(vrt)
                              {
                                 case 1:
                                 	{
				   
                              	long int price=1925000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			system("cls");
			
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                     "<<ddb<<"                    "<<endl;
			total=0;
			total=price+esc;
	                    p=0;
			p=total-dp;
			
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
	           	cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<price<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		          }  //end of case 1
			break;
			case 2:
				{
				
		                 	long int pric=1525000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pric+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pric<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		         }   // end of case 2
			break;
			case 3:
				{
					
				
		          	long int pri=1325000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pri+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pri<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI        \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		            }  // end of case 3
                                     break;
					                default :
			        cout<<"\n\n\t\t\t\t!!!!INVALID VARIENT SIR/MAM!!!!!";              	

		         }   //  end of switch
                              
		       }
		       else
		       {
		       cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
		       exit(0);
                           }
                    }   // end of if
                    else
                    {
                    	cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
                    	exit(0);
		}
         }  //  end of void tigor
         
         
         
 
                 void altroz()
	{
		char frtn[20],lstn[20],ffrtn[20],flstn[20];
		string bolo,adn,ctn,stn,ead,dtb,ddb;
		int vrt,r=5,n;
		long int p ,dp,esc,total,ordn,mbn,ccd;
		float emi;
		system("cls");
               cout<<"\n\n\t\t\t\t\t\t\t*********TATA MOTORS**********\n";
                    cout<<"\t\t\t\t\t\t\t      MUMBAI(MAHARASTRA)\n";
	          cout<<"\t\t\t\t\t\t\t           IND009567\n";
	         /* cout<<"\n\n\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                    cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";
		*/
		cout<<"\n\n       \t\t\t\t\t\t***************TATA HEXA****************\n\n";
		cout<<"\t\tTata hexa is a full-size crossover SUV manufactured by indian passanger and comercial vehicles manufacturer Tatamotors";
		cout<<"\n\t\tThe SUV, which was originally unveiled in the 2016 Geneva Motor Show,[1] was launched into the Indian markets in January 2017.[2";
		cout<<"\n\t\tThe Tata Hexa was based on the company's previously used Aria platform, with a body-on-frame chassis.";
		cout<<"\n\t\tThe Tata Hexa was available in a number of variants, all of which are differentiated based on cabin features, design aesthetics \
		\n\t\tas well as engine power and torque output.";
		cout<<"\n\n  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
		cout<<"  |     OVERIVEW\t\t               BODY AND CHASIS \t\t            POWERTRAIN \t\t            DIMENSION\t                      CHRONOLOGY   |\n";
                    cout<<"  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n\n";
		cout<<" MANUFACUTURER Tatamotors\tCLASS    Midsize-crossover\t\t ENGINE 2.21L DW12       \tWHEELBASE  2850mm(112.2 in)\t\tPREDECESSOR Tata Aria\n";
		
		cout<<" PRODUCTION    2016-2020 \tBody size   5-Door SUV    \t\t          varicor 14-T   \tLENGTH     4788mm(188.5 in)\t\t                     \n";
		cout<<" ASSEMBLY      India Pune\tLAYOUT   Front-engine-rear\t\t           (Diesel)      \tWIDTH      1900mm(188.5 in)\t\tSUCCESSOR   Tata safari\n";
		cout<<"                         \t         wheel-drive      \t\t TRANSMISSION 5-Speed man\tHEIGHT     1785mm(70.3  in)\t\t               (2021)\n";
		cout<<"                         \t         Front-engine-four\t\t               -ual      \t\n";
		cout<<"                         \t         wheel-drive      \t\t              6-Speed man\t\n";
		cout<<"                         \tPLATFORM  Tata x2         \t\t               -ual\n";
		cout<<"                         \t                          \t\t              6-Speed atutomatic\n\n";         
		cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";
                    cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";	
		cout<<"\n\t\t\t\t\t ARE YOU SATISTISFIED WITH OUR SERVICE SIR/MAM  [yes/no]:: ";
		cin>>bolo;
		if(bolo=="yes")
		{
                          cout<<"\t\t\t\t\t DO YOU WANNA GET IT SIR/MAM [yes/no] :: ";
                          cin>>bolo;
                           if(bolo=="yes")
                           {
                           	system("cls");
                               	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
                   /* cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";

                  */
	                   cout<<"\n\n\n\n\n\n\t\t\t\t\t     --------Tata Hexa price According to their model--------\n";
                              cout<<"\n\n\t\t\t\t\t   1.TOP VARIENT            2.MID VARIENT               3.BASE VARIENT\n\n";
                              cout<<"\t\t\t\t\t     RS.1900000               RS.1650000                  RS.1300000\n";
                              cout<<"\n\n\t\t\t\tWhich varient want to book sir :: ";
                              cin>>vrt;
                              switch(vrt)
                              {
                                 case 1:
                                 	{
				   
                              	long int price=1925000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			system("cls");
			
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                     "<<ddb<<"                    "<<endl;
			total=0;
			total=price+esc;
	                    p=0;
			p=total-dp;
			
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
	           	cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<price<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		          }  //end of case 1
			break;
			case 2:
				{
				
		                 	long int pric=1525000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pric+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pric<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		         }   // end of case 2
			break;
			case 3:
				{
					
				
		          	long int pri=1325000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pri+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pri<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI        \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		            }  // end of case 3
                                     break;
					                default :
			        cout<<"\n\n\t\t\t\t!!!!INVALID VARIENT SIR/MAM!!!!!";              	

		         }   //  end of switch
                              
		       }
		       else
		       {
		       cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
		       exit(0);
                           }
                    }   // end of if
                    else
                    {
                    	cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
                    	exit(0);
		}
         }  //  end of void altroz
  
         
         
         
         
                void tigorev()
	{
		char frtn[20],lstn[20],ffrtn[20],flstn[20];
		string bolo,adn,ctn,stn,ead,dtb,ddb;
		int vrt,r=5,n;
		long int p ,dp,esc,total,ordn,mbn,ccd;
		float emi;
		system("cls");
               cout<<"\n\n\t\t\t\t\t\t\t*********TATA MOTORS**********\n";
                    cout<<"\t\t\t\t\t\t\t      MUMBAI(MAHARASTRA)\n";
	          cout<<"\t\t\t\t\t\t\t           IND009567\n";
	         /* cout<<"\n\n\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                    cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";
		*/
		cout<<"\n\n       \t\t\t\t\t\t***************TATA HEXA****************\n\n";
		cout<<"\t\tTata hexa is a full-size crossover SUV manufactured by indian passanger and comercial vehicles manufacturer Tatamotors";
		cout<<"\n\t\tThe SUV, which was originally unveiled in the 2016 Geneva Motor Show,[1] was launched into the Indian markets in January 2017.[2";
		cout<<"\n\t\tThe Tata Hexa was based on the company's previously used Aria platform, with a body-on-frame chassis.";
		cout<<"\n\t\tThe Tata Hexa was available in a number of variants, all of which are differentiated based on cabin features, design aesthetics \
		\n\t\tas well as engine power and torque output.";
		cout<<"\n\n  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
		cout<<"  |     OVERIVEW\t\t               BODY AND CHASIS \t\t            POWERTRAIN \t\t            DIMENSION\t                      CHRONOLOGY   |\n";
                    cout<<"  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n\n";
		cout<<" MANUFACUTURER Tatamotors\tCLASS    Midsize-crossover\t\t ENGINE 2.21L DW12       \tWHEELBASE  2850mm(112.2 in)\t\tPREDECESSOR Tata Aria\n";
		
		cout<<" PRODUCTION    2016-2020 \tBody size   5-Door SUV    \t\t          varicor 14-T   \tLENGTH     4788mm(188.5 in)\t\t                     \n";
		cout<<" ASSEMBLY      India Pune\tLAYOUT   Front-engine-rear\t\t           (Diesel)      \tWIDTH      1900mm(188.5 in)\t\tSUCCESSOR   Tata safari\n";
		cout<<"                         \t         wheel-drive      \t\t TRANSMISSION 5-Speed man\tHEIGHT     1785mm(70.3  in)\t\t               (2021)\n";
		cout<<"                         \t         Front-engine-four\t\t               -ual      \t\n";
		cout<<"                         \t         wheel-drive      \t\t              6-Speed man\t\n";
		cout<<"                         \tPLATFORM  Tata x2         \t\t               -ual\n";
		cout<<"                         \t                          \t\t              6-Speed atutomatic\n\n";         
		cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";
                    cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";	
		cout<<"\n\t\t\t\t\t ARE YOU SATISTISFIED WITH OUR SERVICE SIR/MAM  [yes/no]:: ";
		cin>>bolo;
		if(bolo=="yes")
		{
                          cout<<"\t\t\t\t\t DO YOU WANNA GET IT SIR/MAM [yes/no] :: ";
                          cin>>bolo;
                           if(bolo=="yes")
                           {
                           	system("cls");
                               	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
                   /* cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";

                  */
	                   cout<<"\n\n\n\n\n\n\t\t\t\t\t     --------Tata Hexa price According to their model--------\n";
                              cout<<"\n\n\t\t\t\t\t   1.TOP VARIENT            2.MID VARIENT               3.BASE VARIENT\n\n";
                              cout<<"\t\t\t\t\t     RS.1900000               RS.1650000                  RS.1300000\n";
                              cout<<"\n\n\t\t\t\tWhich varient want to book sir :: ";
                              cin>>vrt;
                              switch(vrt)
                              {
                                 case 1:
                                 	{
				   
                              	long int price=1925000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			system("cls");
			
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                     "<<ddb<<"                    "<<endl;
			total=0;
			total=price+esc;
	                    p=0;
			p=total-dp;
			
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
	           	cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<price<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		          }  //end of case 1
			break;
			case 2:
				{
				
		                 	long int pric=1525000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pric+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pric<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		         }   // end of case 2
			break;
			case 3:
				{
					
				
		          	long int pri=1325000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pri+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pri<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI        \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		            }  // end of case 3
                                     break;
					                default :
			        cout<<"\n\n\t\t\t\t!!!!INVALID VARIENT SIR/MAM!!!!!";              	

		         }   //  end of switch
                              
		       }
		       else
		       {
		       cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
		       exit(0);
                           }
                    }   // end of if
                    else
                    {
                    	cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
                    	exit(0);
		}
         }  //  end of void tigor ev
        
                void punch()
	{
		char frtn[20],lstn[20],ffrtn[20],flstn[20];
		string bolo,adn,ctn,stn,ead,dtb,ddb;
		int vrt,r=5,n;
		long int p ,dp,esc,total,ordn,mbn,ccd;
		float emi;
		system("cls");
               cout<<"\n\n\t\t\t\t\t\t\t*********TATA MOTORS**********\n";
                    cout<<"\t\t\t\t\t\t\t      MUMBAI(MAHARASTRA)\n";
	          cout<<"\t\t\t\t\t\t\t           IND009567\n";
	         /* cout<<"\n\n\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                    cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";
		*/
		cout<<"\n\n       \t\t\t\t\t\t***************TATA HEXA****************\n\n";
		cout<<"\t\tTata hexa is a full-size crossover SUV manufactured by indian passanger and comercial vehicles manufacturer Tatamotors";
		cout<<"\n\t\tThe SUV, which was originally unveiled in the 2016 Geneva Motor Show,[1] was launched into the Indian markets in January 2017.[2";
		cout<<"\n\t\tThe Tata Hexa was based on the company's previously used Aria platform, with a body-on-frame chassis.";
		cout<<"\n\t\tThe Tata Hexa was available in a number of variants, all of which are differentiated based on cabin features, design aesthetics \
		\n\t\tas well as engine power and torque output.";
		cout<<"\n\n  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n";
		cout<<"  |     OVERIVEW\t\t               BODY AND CHASIS \t\t            POWERTRAIN \t\t            DIMENSION\t                      CHRONOLOGY   |\n";
                    cout<<"  |----------------------------------------------------------------------------------------------------------------------------------------------------------------|\n\n";
		cout<<" MANUFACUTURER Tatamotors\tCLASS    Midsize-crossover\t\t ENGINE 2.21L DW12       \tWHEELBASE  2850mm(112.2 in)\t\tPREDECESSOR Tata Aria\n";
		
		cout<<" PRODUCTION    2016-2020 \tBody size   5-Door SUV    \t\t          varicor 14-T   \tLENGTH     4788mm(188.5 in)\t\t                     \n";
		cout<<" ASSEMBLY      India Pune\tLAYOUT   Front-engine-rear\t\t           (Diesel)      \tWIDTH      1900mm(188.5 in)\t\tSUCCESSOR   Tata safari\n";
		cout<<"                         \t         wheel-drive      \t\t TRANSMISSION 5-Speed man\tHEIGHT     1785mm(70.3  in)\t\t               (2021)\n";
		cout<<"                         \t         Front-engine-four\t\t               -ual      \t\n";
		cout<<"                         \t         wheel-drive      \t\t              6-Speed man\t\n";
		cout<<"                         \tPLATFORM  Tata x2         \t\t               -ual\n";
		cout<<"                         \t                          \t\t              6-Speed atutomatic\n\n";         
		cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";
                    cout<<"               **_____________________TATA________________TATA________________TATA____________TATA______________TATA________________________**\n";	
		cout<<"\n\t\t\t\t\t ARE YOU SATISTISFIED WITH OUR SERVICE SIR/MAM  [yes/no]:: ";
		cin>>bolo;
		if(bolo=="yes")
		{
                          cout<<"\t\t\t\t\t DO YOU WANNA GET IT SIR/MAM [yes/no] :: ";
                          cin>>bolo;
                           if(bolo=="yes")
                           {
                           	system("cls");
                               	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
                   /* cout<<"\n\n\n\n\t\t\t\t\t!!!   Tata Motors Limited is an Indian multinational automotive manufacturing company,   !!!\n\t\t\t\t \t!!!   headquartered in the city of mumbai,Indai which is part of Tata Group. The  \t !!!\
		\t\t\t\n\t\t\t\t \t!!!   Company produces passenger cars, trucks,vans,coaches\t\t                 !!!\n\t\t\t\t\t!!!   buses,luxurycars,sportscars, construction equpipment.\t\t                 !!!	";

                  */
	                   cout<<"\n\n\n\n\n\n\t\t\t\t\t     --------Tata Hexa price According to their model--------\n";
                              cout<<"\n\n\t\t\t\t\t   1.TOP VARIENT            2.MID VARIENT               3.BASE VARIENT\n\n";
                              cout<<"\t\t\t\t\t     RS.1900000               RS.1650000                  RS.1300000\n";
                              cout<<"\n\n\t\t\t\tWhich varient want to book sir :: ";
                              cin>>vrt;
                              switch(vrt)
                              {
                                 case 1:
                                 	{
				   
                              	long int price=1925000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			system("cls");
			
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                     "<<ddb<<"                    "<<endl;
			total=0;
			total=price+esc;
	                    p=0;
			p=total-dp;
			
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
	           	cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<price<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		          }  //end of case 1
			break;
			case 2:
				{
				
		                 	long int pric=1525000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pric+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pric<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI       \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		         }   // end of case 2
			break;
			case 3:
				{
					
				
		          	long int pri=1325000;
                                 	system("cls");

	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
   
			      cout<<"\n\n\n\n\n-><--><-Please submit basic details for online booking -><--><-\n\n";
                              cout<<"\nEnter your first name";
                              cin>>frtn;
                              cout<<"Enter your last name";
                              cin>>lstn;
                              cout<<"Enter your father's first name";
                              cin>>ffrtn;
                              cout<<"Enter your farthr's last name";
                              cin>>flstn;
                               cout<<"Ener order number";
                              cin>>ordn;
                              cout<<"Enter your address";
                              cin>>adn;
                              cout<<"Enter your city name";
                              cin>>ctn;
                              cout<<"Enter you state name";
                              cin>>stn;
                              cout<<"Ener your country code";
                              cin>>ccd;
                              cout<<"Enter your mobile number";
                              cin>>mbn;
                              cout<<"Enter your e-mail address";
			cin>>ead;
			cout<<"Enter date of booking";
			cin>>dtb;
			cout<<"Enter date of delivery";
			cin>>ddb;
			cout<<"Enter extra service charges";
			cin>>esc;
			cout<<"Enter  downpayment ";
			cin>>dp;
			cout<<"Enter tenure for loan";
			cin>>n;
			
			system("cls");
			cout<<"\n\n\t\t\t\t\t\t***********************START UP INDIA**************************\n";
			cout<<"\t\t\t\t\t\t                         WITH TATA\n";
			cout<<"\t\t\t\t\t\t                           MOTORS\n\n";
			 	cout<<"\n\n  **********************TATA MOTORS************************\t\t \t\t          *****************THANKS FOR APPRICIATION****************\n";
                              cout<<"\t\t      MUMBAI(MAHARASTRA)\t\t\t\t\t\t\t                WE ARE HAPPY TO HAVE YOU HERE    \n";
	                    cout<<"\t\t           IND009567\n";
	                    cout<<"\n\n\t\tHEADQUARTERS : MUMBAI\t\t\t\t\t\t\t\t\t\tCUSTOMER SERVICE : 180002097979";
                              cout<<"\n\n\n\n";
                              strcat(frtn," ");
                              strcat(frtn,lstn);
	                    strcat(ffrtn," ");
                              strcat(ffrtn,flstn);
                              cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t\t\tNAME             : "<<frtn<<"\t\t\tORDER NO. : "<<ordn<<"         "<<endl;
			cout<<"\t\t\t\tFATHER'S NAME    : "<<ffrtn<<"                                                "<<endl;
			cout<<"\t\t\t\tADDRESS          : "<<adn<<"                                               "<<endl;
			cout<<"\t\t\t\t           CITY                     STATE                    COUNTRY          \n";
			cout<<"\t\t\t \t        "<<ctn<<"                "<<stn<<"                    INDIA          \n";
			cout<<"\n\t\t\t\t\t\t********* CONTACT DETAILS*********\n";
			cout<<"\n\t\t\t\tMOB NO : "<<ccd<<" "<<mbn<<"                "<<"\t\tE-MAIL : "<<ead<<"     "<<endl;
			cout<<"\t\t\t\tDATE OF BOOKING                                     DATE OF DELIVERY           \n";
			cout<<"\t\t\t\t"<<dtb<<"                                                  "<<ddb<<"                    "<<endl;
			total=0;
			total=pri+esc;
			p=0;
			p=total-dp;
			emi=0;
			emi=p*r*(1+r)*n/((1+r)*n-1);
			
			
			cout<<"\n\t\t\t        PRICE                    EXTRA SERVICE CHARGES                    TOTAL PRICE   \n";
			cout<<"\t\t\t        "<<pri<<"  \t              "<<esc<<"                                  "<<total<<"           "<<endl;
			cout<<"\t\t\t        DOWNPAYMENT                TO BE PAID                                 EMI        \n";
			cout<<"\t\t\t         " <<dp<<"                    "<<p<<"                                " <<emi<<endl;
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t ooooo  TATA MOTORS ooooo       \n";
			cout<<"\t\t\t\t\t\t\t\t\t\t       PRASHANT_BH.             \n";                 	
			cout<<"\t\t                                                                                            \n";
			cout<<"\t\t                                                                                            \n";
			cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\n";
		            }  // end of case 3
                                     break;
					                default :
			        cout<<"\n\n\t\t\t\t!!!!INVALID VARIENT SIR/MAM!!!!!";              	

		         }   //  end of switch
                              
		       }
		       else
		       {
		       cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
		       exit(0);
                           }
                    }   // end of if
                    else
                    {
                    	cout<<" \t\t\t\t\t!!!!  SORRY SIR NEXT TIME WE TRYING OUR BEST KEEP VISITING !!!!";
                    	exit(0);
		}
         }  //  end of void punch     
 
};
int main()
{
	tata ob;
	ob.show();
	ob.id();
	//ob.();
}
