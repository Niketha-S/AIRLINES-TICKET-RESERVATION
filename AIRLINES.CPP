#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
#include<stdio.h>
#include<graphics.h>

 int ch;
 int a;

 int intro();
 void show();
 void menu();
 void internationalf();
 void domesticf();
 int ars();
 void tickshow();
 int cho();
 void line();
 void end();
 void table();
 void exit();

 class airport{
	     private:
	     char name[30];
	     char gender[10];
	     char dest[30];
	     char meal[10];
	     int month,day,year;
	     char* airways;
	     char* flno;

	     public:
	     char g ;
	     int age;
	     float fare;
	     int time;
	     void input();
	     void calculate();
	     void dcalculate();
	     void show();
	     void output();
	     char *return_name();

	      };
 char * airport::return_name()
	{
		return name;
	}


   void airport::input()
  {
   cout<<endl<<endl<<endl<<endl;
   cout<<'\t';
   cout<<"KINDLY ENTER THE DETAILS";cout<<endl;
   cout<<'\t';
   cout<<"-------------------- \n\n";
   cout<<"            "<<"NAME:";gets(name);
   cout<<"            "<<"               " <<endl;
   cout<<"            "<<"AGE:";cin>>age;
   cout<<"            "<<"               "<<endl;
   cout<<"            "<<"GENDER :";gets(gender);
   cout<<"            "<<"               ";cout<<endl;
   cout<<"            "<<"DATE (Type in the format dd/mm/yy) :";cin>>day>>month>>year;
   cout<<"            "<<"                                "<<endl;
   cout<<endl<<endl;
   cout<<"             "<<"DESTINATION:";gets(dest);
   cout<<"             "<<"                               "<<endl;
   cout<<"             "; cout<<"MEAL(VEG OR NON-VEG):";gets(meal);
   cout<<"             "; cout<<"------------------------------\n\n";
   cout<<"                      "<<"THANK YOU FOR BOOKING :)";
   cout<<endl<<endl<<endl<<endl;
   cout<<"         "<<"PRESS ANY KEY TO CONTINUE...";
	 }

 void airport::calculate()
 {
  if(strcmpi(dest,"australia")==0)
  {
  fare=50000;
  time=1330;
  flno="AIR BUS-33";
  airways="AUSTRA ";
     }

  else if(strcmpi(dest,"U.K")==0)
 {
  fare= 58000;
  time= 2210;
  flno="FU-99";
  airways="UNITED";
  }

  else if(strcmpi(dest,"china")==0)
 {
  fare=30000;
  time= 2330;
  flno="CC-89";
  airways="JACKIE";
  }

 else if(strcmpi(dest,"dubai")==0)
 {
  fare=62000;
  time=1330;
  flno="OG-67";
  airways="INDIGO";
  }

 else if(strcmpi(dest,"paris")==0)
 {
  fare=80000;
  time=2300;
  flno="AS-231";
  airways="LUFTHANSA";
  }

 else if(strcmpi(dest,"srilanka")==0)
 {
  fare=10000;
  time=2210;
  flno="JAP-22";
  airways="KINGFISHER";
  }

  else if(strcmpi(dest,"texas")==0)
 {
  fare=50000;
  time= 1240;
  flno="A-420";
  airways="COLOMBIAN";
  }

 else if(strcmpi(dest,"sweden")==0)
 {
  fare= 40000;
  time= 1740;
  flno= "A-421";
  airways="LUFTHANSA";
  }

 else if(strcmpi(dest,"mexico")==0)
  {
  fare= 70000;
  time= 1150;
  flno= "U-D-F33";
  airways="JALAPENO";
   }

 else if(strcmpi(dest,"doha")==0)
 {
  fare=46000;
  time= 2234;
  flno= "U-D-F34";
  airways="ILTUMISH";
   }

}

   void airport::dcalculate()
  {
  if(strcmpi(dest,"delhi")==0)
 {
  fare=30000;
  time=1330;
  flno="dl-1440";
  airways="INDIGO";
    }

  else if(strcmpi(dest,"mumbai")==0)
 {
  fare= 20000;
  time= 2210;
  flno="MU-14";
  airways="KINGFISHER";
  }

  else if(strcmpi(dest,"madurai")==0)
 {
  fare=15000;
  time= 2330;
  flno="CH-87";
  airways="GAJA";
   }

 else if(strcmpi(dest,"kolkata")==0)
 {
  fare=28000;
  time=1330;
  flno="KL-285";
  airways="LUFTHANSA";
   }

 else if(strcmpi(dest,"shimla")==0)
 {
  fare=11000;
  time=2300;
  flno="SH-267";
  airways="AIR ASIA";

  }

 else if(strcmpi(dest,"jammu")==0)
 {
  fare=26000;
  time=2210;
  flno="JA4200";
  airways="DECCAN";
   }

 else if(strcmpi(dest,"bangalore")==0)
 {
  fare=20000;
  time= 1240;
  flno="BA2LARE";
  airways="INDIGO";
  }

 else if(strcmpi(dest,"goa")==0)
 {
  fare= 28000;
  time= 1740;
  flno= "GO3769";
  airways="SPICE JET";
  }

 else if(strcmpi(dest,"dispur")==0)
  {
  fare= 15000;
  time= 1150;
  flno= "DI3456";
  airways="AIR INDIA";
   }

 else if(strcmpi(dest,"bhopal")==0)
 {
  fare=18000;
  time= 2234;
  flno= "BH3465";
  airways="KINGFISHER";
   }

}

 void airport::show()
{

   cout<<endl;

   cout<<"\t\t\t\t"<<airways<<" AIRWAYS\n\n";

   cout<<"--------------------------------------------------------------------------------\n\n";

   cout<<"\t\tNAME: ";cout<<name<<"\n";

   cout<<"\t\tAGE: ";cout<<age<<"\t\t";

   cout<<"\t\tGENDER:";cout<<gender<<"\n";

   cout<<"\t\tDESTINATION:";cout<<dest<<"   ";

   cout<<"\t\tFARE=RS."<<fare<<"\n";

   cout<<"\t\tDATE:";cout<<day<<"-"<<month<<"-"<<year<<"\n";

   cout<<"\t\tDEPARTURE TIME: ";cout<<time<<"\n";

   cout<<"\t\tMEAL: "; cout<<meal<<"\n";

   cout<<"             ----------------------------------------------              ";

   cout<<"\n\nINSTRUCTIONS\n";
   cout<<"1) SHARP OBJECTS ARE NOT ALLLOWED IN CABIN LUGGAGE\n";
   cout<<"2) DO NOT LOOSE YOUR TICKET\n";
   cout<<"3) SMOKING PROHIBITTED\n";
   cout<<"4) SHOW YOUR TICKET WHILE BOARDING\n";
   cout<<"--------------------------------------------------------------------------------";
   cout<<"\n\nHAVE A NICE JOURNEY :)\n\t\a";
   getch();
   clrscr();
    }

 void airport::output()
{
  cout<<" "<<name<<"\t\t"<<dest<<"\t\t"<<day<<"-"<<month<<"-"<<year<<"\t\t"<<flno<<"\t   "<<time<<endl;
  getch();

    }

int main()
{
	char c;
	clrscr();
	airport obj;
	fstream nfil,fil;
	clrscr();
	ars();
	getch();
	clrscr();
	int f=1;

	do
	{
	clrscr();
	menu();
	getch();
	clrscr();
	a=cho();
	switch(a)
	{
	case 1:
		 {
		    intro();
		    clrscr();
		    domesticf();
		    clrscr();
		    fstream fil("book.dat",ios::out|ios::binary|ios::app);
		    obj.input();
		    obj.dcalculate();
		    fil.write((char*)&obj,sizeof(obj));
		    cout<<endl;
		    fil.close();
		    tickshow();
		    obj.show();
		    break;

		   }

	case 2:    {
		     intro();
		     clrscr();
		     internationalf();
		     clrscr();
		     fstream fil("book.dat",ios::out|ios::binary|ios::app);
		     obj.input();
		     obj.calculate();
		     fil.write((char*)&obj,sizeof(obj));
		     cout<<endl;
		     fil.close();
		     tickshow();
		     obj.show();
		     break;
		   }

	case 3:    {
		     intro();
		     clrscr();
		     char nam[30];    int k=0; int i,res;
		     fstream fil ("book.dat",ios::in|ios::binary);
		     cout<<endl<<endl;
		     cout<<"             "<<"SEARCH IS ON"<<endl;
		     cout<<"             "<<"-------------"<<endl<<endl;
		     cout<<"           "<<"PLEASE ENTER YOUR NAME    ::"<<endl;
		     cout<<"             ";gets(nam);
		     cout<<endl;
		     cout<<"      "<<"PLEASE WAIT"<<endl;

		  while (fil)
	  {
		  fil.read((char*)&obj,sizeof(obj));
		  if(fil.eof()) break;
		  res=strcmpi(nam,obj.return_name());
		  k++;
		  if(res==0)
		  break;

	  }

	  if(res==0)
	  {
			fil.write((char*)&obj,sizeof(obj));
			cout<<"      ";puts(nam);
			cout<<"      "<<"HAS BOOKED A TICKET"<<endl<<endl;
			cout<<endl<<endl;
			break;

	  }
	  else
	  {
		  cout<<"        ";puts(nam);
		  cout<<"        "<<"HAS NOT BOOKED A TICKET"<<endl<<endl;
		  cout<<endl<<endl;
		  break;
	  }





	      }


	case 4:{
			 intro();
			 clrscr();
			 table();
			 fstream fil ("book.dat",ios::in|ios::binary);
			  while(fil)
				{
					fil.read((char*)&obj,sizeof(obj));
					if(fil.eof())
							continue;
					obj.output();
					f++;
				}

				fil.close();
				break;
			}
	  case 5:    {
		     intro();
		     clrscr();
		     char nam[30];
		     int k=0;
		     int i,res;
		     fstream fil ("book.dat",ios::in|ios::binary);
		     fstream nfil("cancel.dat",ios::out|ios::binary|ios::app);
		     cout<<endl<<endl;
		     cout<<"             "<<"SEARCH MODE"<<endl;
		     cout<<"             "<<"============"<<endl<<endl;
		     cout<<"           "<<"PLEASE ENTER NAME    ::"<<endl;
		     cout<<"             ";gets(nam);
		     cout<<endl;
		     cout<<"      "<<"LOADING...."<<endl;

		  while (fil)
	  {
		  fil.read((char*)&obj,sizeof(obj));
		  if(fil.eof())
		    break;
		  res=strcmp(nam,obj.return_name());
		  k++;
		  if(res==0)
		    break;

	  }

	  if(res==0)
	  {
			nfil.write((char*)&obj,sizeof(obj));
			cout<<"      ";puts(nam);
			cout<<"      "<<"......YOU HAVE CANCELLED YOUR TICKET......"<<endl<<endl;
			break;
	  }
		   }

	case 6:
		   {
			 intro();
			 clrscr();
			 table();
			 fstream nfil ("cancel.dat",ios::in|ios::binary);
			  while(nfil)
				{
				       nfil.read((char*)&obj,sizeof(obj));
					if(nfil.eof())
							break;
					obj.output();
					f++;
				}

			       nfil.close();
				break;
			}

		}
		cout<<"\n\n";
		cout<<"             ";
		cout<<" CONTINUE (Y/N)? :";
		cin>>c;
	}
	while(c=='y'||c=='Y');
	end();
	getch();
	return 0;
}


 void internationalf()
{
  cout<<endl;        cout<<"    "<<"PLEASE CHOOSE YOUR DESTINATION"<<endl<<endl;
  cout<<"============================================================================="<<endl;
  cout<<"    "<<"S.NO"<<"   ";cout<<"   "<<" PLACE   "<<"    ";cout<<" AIRLINES         ";cout<<"     TIME  ";cout<<"  FARE   ";cout<<endl<<endl;

  cout<<"    "<<" 1  "<<"   ";cout<<"   "<<" AUSTRALIA"<<"   ";cout<<" AUSTRALIAN AIR    ";cout<<" 0930   ";cout<<" 10000   ";cout<<endl<<endl;

  cout<<"    "<<" 2  "<<"   ";cout<<"   "<<" U.K    "<<"     ";cout<<" BRITISH AIRWAYS   ";cout<<" 1210   ";cout<<" 20000   ";cout<<endl<<endl;

  cout<<"    "<<" 3  "<<"   ";cout<<"   "<<" CHINA   "<<"    ";cout<<" JACKIE  AIRWAYS   ";cout<<" 2330   ";cout<<" 15000   ";cout<<endl<<endl;

  cout<<"    "<<" 4  "<<"   ";cout<<"   "<<" DUBAI "<<"      ";cout<<" LUFTHANSA         ";cout<<" 1330   ";cout<<"  8000   ";cout<<endl<<endl;

  cout<<"    "<<" 5  "<<"   ";cout<<"   "<<" PARIS   "<<"    ";cout<<" AIR-FRANCE        ";cout<<" 2300   ";cout<<" 11000   ";cout<<endl<<endl;

  cout<<"    "<<" 6  "<<"   ";cout<<"   "<<" SRI LANKA"<<"   ";cout<<" JAPANESE-AIR      ";cout<<" 2210   ";cout<<" 15000   ";cout<<endl<<endl;

  cout<<"    "<<" 7  "<<"   ";cout<<"   "<<" TEXAS   "<<"    ";cout<<" AIR-INDIA         ";cout<<" 1330   ";cout<<" 18000  ";cout<<endl<<endl;

  cout<<"    "<<" 8  "<<"   ";cout<<"   "<<" SWEDEN "<<"     ";cout<<" LUFTHANSA AIRWAYS ";cout<<" 1740   ";cout<<" 28000  ";cout<<endl<<endl;

  cout<<"    "<<" 9  "<<"   ";cout<<"   "<<" DOHA  "<<"      ";cout<<" ILTUMISH-AIRWAYS  ";cout<<"  2234  ";cout<<" 18000   ";cout<<endl<<endl;

  cout<<"    "<<" 10 "<<"   ";cout<<"   "<<" MEXICO   "<<"   ";cout<<" JALAPENO-AIRWAYS  ";cout<<"  1150  ";cout<<" 15000   ";cout<<endl<<endl;
  cout<<"=============================================================================";
  cout<<"      "<<"PRESS ANY KEY TO CONTINUE";
  getch();
}

int intro()
{
   int gd = DETECT;

   int gm;

   initgraph( &gd , &gm ,"C:\\TC\\BGI");

   settextstyle(3,HORIZ_DIR,8);

   outtextxy(134,20,"WELCOME");

   outtextxy(253,180,"TO");

   outtextxy(90,310, "ASRO AIRLINES");

   getch();

   closegraph();


}




int ars()
{
   int gd= DETECT;

   int gm;

   initgraph( &gd , &gm , "C:\\TC\\BGI");

   settextstyle(9,HORIZ_DIR,6);

   outtextxy(0,20,"AIRLINE");

   outtextxy(60,168,"RESERVATION");

   outtextxy(310,320,"SYSTEM");

   getch();

   closegraph();

  }




void menu()

{

   int i,j;
   cout<<endl;
   cout<<"INPUT(1) TO BOOK DOMESTIC FLIGHT TICKET\n\n";
   cout<<"INPUT(2) TO BOOK INTERNATIONAL FLIGHT TICKET\n\n";
   cout<<"INPUT(3) TO CONFIRM YOUR TICKET\n\n";
   cout<<"INPUT(4) TO VIEW ALL MEMBERS,WHO BOOKED TICKETS\n\n";
   cout<<"INPUT(5) TO CANCEL YOUR TICKET\n\n";
   cout<<"INPUT(6) TO VIEW ALL MEMBERS,WHO CANCELLED THEIR TICKETS\n\n";
   cout<<"\nPress Any Key\n";

   getch();

}

void tickshow()
{

   clrscr();

   cout<<"\t\t\t\n\nPRINTING...\n\n";

   cout<<"PRESS ANY KEY TO CONTINUE:";

   getch();

   clrscr();

}


  int cho()
	 {
	   int i;
	   cout<<endl<<endl;
	   cout<<"PLEASE ENTER YOUR CHOICE NOW :";
	   cin>>ch;
	   cout<<endl<<endl;
	   cout<<"THANK YOU FOR YOUR CHOICE."<<endl<<endl;
	   cout<<endl<<endl;
	   cout<<endl<<endl;
	   cout<<"PRESS ANY KEY TO CONTINUE.....";
	   getch();
	   clrscr();
	   return ch;
	 }
     void end()
{
	 clrscr();

	 int gd=DETECT;

	 int gm;

	 initgraph(&gd,&gm,"C:\\TC\\BGI");

	 settextstyle(7,HORIZ_DIR,8);

	 outtextxy(60,20,"THANK YOU");

	 outtextxy(70,170,"FOR USING");

	 outtextxy(35,310,"OUR SERVICE");

	 getch();

	 closegraph();


	 }

		 void table()
 {
   cout<<endl<<endl<<"                              AIRPORT RECORDS                "<<endl<<endl;
   cout<<setw(7)<<"NAME"<<setw(17)<<"DESTINATION"<<"     "<<setw(8)<<" DATE"<<setw(15)<<"FLIGHT.NO"<<setw(12)<<"TIME"<<endl;
   cout<<"------------------------------------------------------------------------------"<<endl<<endl;
  }
 void domesticf()
 {
  cout<<endl;        cout<<"    "<<"PLEASE CHOOSE YOUR DESTINATION"<<endl<<endl;
  cout<<"==============================================================================="<<endl;
  cout<<"    "<<"S.NO"<<"   ";cout<<"   "<<" PLACE     "<<"    ";cout<<"    AIRLINES    ";cout<<"  TIME  ";cout<<"  FARE   ";cout<<endl<<endl;

  cout<<"    "<<" 1  "<<"   ";cout<<"   "<<" DELHI     "<<"     ";cout<<"INDIA-AIRLINES ";cout<<"  0930  ";cout<<" 10000   ";cout<<endl<<endl;


  cout<<"    "<<" 2  "<<"   ";cout<<"   "<<" MUMBAI    "<<"    ";cout<<"    KINGDOM     ";cout<<"  2210  ";cout<<" 20000   ";cout<<endl<<endl;

  cout<<"    "<<" 3  "<<"   ";cout<<"   "<<" MADURAI   "<<"    ";cout<<"      GAJA      ";cout<<"  2330  ";cout<<" 15000   ";cout<<endl<<endl;

  cout<<"    "<<" 4  "<<"   ";cout<<"   "<<" KOLKATA   "<<"    ";cout<<" INDIA-AIRLINES ";cout<<"  1330  ";cout<<"  8000   ";cout<<endl<<endl;

  cout<<"    "<<" 5  "<<"   ";cout<<"   "<<" SHIMLA    "<<"    ";cout<<"     DECCAN     ";cout<<"  2300  ";cout<<" 11000   ";cout<<endl<<endl;

  cout<<"    "<<" 6  "<<"   ";cout<<"   "<<" JAMMU     "<<"    ";cout<<" INDIA-AIRLINES ";cout<<"  2210  ";cout<<" 15000   ";cout<<endl<<endl;

  cout<<"    "<<" 7  "<<"   ";cout<<"   "<<" BANGALORE "<<"    ";cout<<"    KINGDOM     ";cout<<"  1330  ";cout<<"  18000  ";cout<<endl<<endl;

  cout<<"    "<<" 8  "<<"   ";cout<<"   "<<" GOA       "<<"    ";cout<<"   JET-AIRWAYS  ";cout<<"  1740  ";cout<<"  28000  ";cout<<endl<<endl;

  cout<<"    "<<" 9  "<<"   ";cout<<"   "<<" DISPUR    "<<"    ";cout<<" INDIA-AIRLINES ";cout<<"  2234  ";cout<<" 18000   ";cout<<endl<<endl;

  cout<<"    "<<" 10 "<<"   ";cout<<"   "<<" BHOPAL    "<<"    ";cout<<"     DECCAN     ";cout<<"  1150  ";cout<<" 15000   ";cout<<endl<<endl;
  cout<<"===============================================================================";
  cout<<"      "<<"PRESS ANY KEY TO CONTINUE";
   getch();
}
