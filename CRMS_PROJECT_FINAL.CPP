#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<iomanip.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<graphics.h>
#include<process.h>
static int p=0;
class CRIME
{
   int j,i,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,n,c,a;
   char dob[10],add[5],par[5],doj[10],dept[10];
   char post[20],ename[10],id[5];
   char number[5];
   char nps[10], addr[20],paddr[20],name[10],dob1[10];
   char occ[20],fname[10],dates[10],nat[10],idp[20],idno[20];
   char firno[5],det[10],act[20],dis[20];

	public:
	     void addnew();     void update();
	     void show();       void delet();
	     void addnew1();    void show1();
	     void welcome();    void login();
	     void info();       void menu();
	     void PED();        void draw();
	     void FIR();        void vline(char);
}
b[10],d[10];

//draw vertical line

  void CRIME::vline(char ch)
  {
     for(i=80;i>0;i--)
     {
     cout<<ch;
     delay(10);
     }
  }

//Accept FIR details

void CRIME::FIR()
{   clrscr();
    cout<<"\n";
    vline('-');
    cout<<"\nDate:";
    cin>>d[p].dates;
    cout<<"FIR No.:";
    cin>>d[p].firno;
    cout<<"A) Information Recieve at";
    cout<<"\n  (Name of Police station):";
    cin>>d[p].nps;
    cout<<"B) Place of Occurance:";
    cout<<"\n i) Distance from Police Station:";
    cin>>d[p].dis;
    cout<<" ii) Address:";
    cin>>d[p].paddr;
    cout<<"C) Complaint/Informant:";
    cout<<"\n i) Name(Name of Informant):";
    cin>>d[p].name;
    cout<<" ii) Father Name/Husband Name:";
    cin>>d[p].fname;
    cout<<" iii) Date of Birth:";
    cin>>d[p].dob1;
    cout<<" iv) Nationality:";
    cin>>d[p].nat;
    cout<<"v) ID Proof:";
    cin>>d[p].idp;
    cout<<"vi) ID Number:";
    cin>>d[p].idno;
    cout<<"vii) Address:";
    cin>>d[p].addr;
    cout<<"D) Details of known/unknown/suspended\n accussed with full particular:";
    cin>>d[p].det;
    cout<<"E) ACTs and SECTIONs:";
    cin>>d[p].act;
    p++;
}
void CRIME::addnew()
{  clrscr();
   vline('-');
   cout<<"\nPolice_Emp_Id:";
   cin>>b[p].id;
   cout<<"\nPolice_Emp_Name:";
   cin>>b[p].ename;
   cout<<"\nPolice_Emp_DOB:";
   cin>>b[p].dob;
   cout<<"\nPolice_Emp_Cr_Address:";
   cin>>b[p].add;
   cout<<"\nPermanent_Address:";
   cin>>b[p].par;
   cout<<"\nDate_of_Joining:";
   cin>>b[p].doj;
   cout<<"\nDepartment_Name:";
   cin>>b[p].dept;
   cout<<"\nType of Post:";
   cin>>b[p].post;
   p++;
}


//Show Employee details

 void CRIME::show()
 { clrscr();
  vline('-');

   cout<<"\nEnter Emp_ID:";
   cin>>number;
    for(n=0;n<=p;n++)
    {
	 if(strcmp(b[n].id,number)==0)
	 break;
    }
    if(n>p)
	  cout<<"Enter correct id:";
   else
    {

    cout<<"\nID :  "<<b[n].id<<"\nName:  "<<b[n].ename;
    cout<<"\nDOB:  "<<b[n].dob<<"\nC_Address :"<<b[n].add;
    cout<<"\nP_Address:"<<b[n].par<<"\nDate of Joining:"<<b[n].doj;
    cout<<"\nDept_Name: "<<b[n].dept<<"\nType of Post:"<<b[n].post;

    }
}

//update employee details

void CRIME::update()
{    clrscr();
 vline('-');
     cout<<"\n\n";
     cout<<"\nEnter Emp_ID :";
     cin>>number;
     for(n=0;n<=p;n++)
     {
       if(strcmp(b[n].id, number)==0);
       break;
     }
     if(n>p)
       cout<<"Enter Correct id:";
     else
     {

       do{
       cout<<"\n1. ID : "<<b[n].id<<"\n2. Name: "<<b[n].ename;
       cout<<"\n3. DOB: "<<b[n].dob<<"\n4. C_Address: "<<b[n].add;
       cout<<"\n5. P_Address: "<<b[n].par<<"\n6. Date of Joining: "<<b[n].doj;
       cout<<"\n7. Dept_Name: "<<b[n].dept<<"\n8. Type of Post: "<<b[n].post;
       cin>>c;

switch(c)
{
case 1:
     cout<<"\n Old ID: "<<b[n].id;
     cout<<"\n Enter New Id: ";
     cin>>b[n].id;
     break;
case 2:
     cout<<"\n Old Name:"<<b[n].ename;
     cout<<"\n Enter New ID: ";
     cin>>b[n].ename;
     break;
case 3:
     cout<<"\n Old DOB: "<<b[n].dob;
     cout<<"\n Enter New DOB: ";
     cin>>b[n].dob;
     break;
case 4:
     cout<<"\n Old C_Address: "<<b[n].add;
     cout<<"\n Enter New C_Address:";
     cin>>b[n].add;
     break;
case 5:
     cout<<"\n Old P_Address:"<<b[n].par;
     cout<<"\n Enter New P_Address: ";
     cin>>b[n].par;
     break;
case 6:
     cout<<"\n Old Date of Joining:"<<b[n].doj;
     cout<<"\n Enter New Date of Joining:";
     cin>>b[n].doj;
     break;
case 7:
     cout<<"\n Old Dept_Name:"<<b[n].dept;
     cout<<"\n Enter New Dept_Name:";
     cin>>b[n].dept;
     break;
case 8:
     cout<<"\n Old Type of Post:"<<b[n].post;
     cout<<"\n Enter New Post:";
     cin>>b[n].post;
     break;
default:
     cout<<"Please Select Correct Option";
     break;
}
}while(c!=1&&c!=2&&c!=3&&c!=4&&c!=5&&c!=6&&c!=7&&c!=8);
cout<<"\n Record is Updated....";
}
}
//Delete employee details

void CRIME::delet()
{ clrscr();
  cout<<"\n\n";
  cout<<"\n Enter Emp_ID:";
  cin>>number;
  for(n = 0; n<=p;n++)
  {
    if(strcmp(b[n].id, number)==0)
    break;
  }

  if(n>p)

     cout<<"Enter correct id....";
  else
  {
    a=n;
    while(a<p)
    {
      b[a] = b[a+1];
      a++;
    }
    p--;
    cout<<"\n Record id Deleted.....";
    }
}

//Show FIR Details
void CRIME::show1()
{   clrscr();
 vline('-');
    cout<<"\n Enter FIR_ID: ";
    cin>>number;
    for(n=0 ; n<=p ; n++)
    {
       if(strcmp(d[n].firno, number)==0)
       break;
    }
    if(n>p)
       cout<<"\n Enter correct FIR_ID ";
    else
    {
       cout<<"\n";
       vline('~');
       cout<<"\n\nDate: "<<d[n].dates;
       cout<<"\t\tFOR No.: "<<d[n].firno;
       cout<<"\n";
       vline('~');
       cout<<"\nA) Information Recieve at ";
       cout<<"\n   (Name of Police Station):"<<d[n].nps;
       cout<<"\nB)  Place of Occurance: ";
       cout<<"\n 1. Distance from Police Station: "<<d[n].dis;
       cout<<"\n 2. Address: "<<d[n].paddr;
       cout<<"\nC)  Complaint: ";
       cout<<"\n 1. Name(Name of Informant): "<<d[n].name;
       cout<<"\n 2. Father Name/Husband Name: "<<d[n].fname;
       cout<<"\n 3. Date of Birth: "<<d[n].dob1;
       cout<<"\n 4. Nationality: "<<d[n].nat;
       cout<<"\n 5. ID Proof:"<<d[n].idp;
       cout<<"\n 6. ID Number:"<<d[n].idno;
       cout<<"\n 7. Occupation:"<<d[n].occ;
       cout<<"\n 8. Address:"<<d[n].addr;
       cout<<"\nD) Details of known/suspended/unknown\n accused with full";
       cout<<"\nE) ACTs and SECTIONs: "<<d[n].act; cout<<"\n";
       vline('~');
       }
}

 void CRIME::draw()
      {
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
       //	int c=12;
	setbkcolor(0);
	int t;
	while(1)
	{
		settextstyle(2,0,5);
		outtextxy(140,10,"HELLO ");
		outtextxy(100,30,"Press 1 for MENU");
		as:
		setcolor(13);
		ellipse(380,127,20,152,130,35);
		//////////////////////////////rear//////////////////////////

		line(490,109,560,142);
		line(560,142,569,142);
		line(569,142,582,102);
		line(582,102,620,92);
		line(593,132,617,125);

		line(617,124,627,96);
		line(620,92,628,97);

		line(472,86,602,96);
		line(501,113,575,121);
		line(443,77,475,80);

		line(443,77,432,93);
		line(475,80,472,85);

		line(593,132,593,137);
		line(593,137,600,141);
		line(600,141,600,185);
		line(600,185,608,192);
		line(608,192,608,234);
		line(608,234,586,253);
		line(586,253,577,248);

		///     mirror
		line(263,112,363,127);
		line(193,160,263,112);
		line(193,160,220,170);
		line(220,170,280,180);
		line(280,180,320,185);
		line(320,185,363,127);
		///////sidemirror
		line(340,194,460,169);
		line(460,169,519,152);

		ellipse(512,144,300,30,10,10);
		ellipse(467,143,28,100,50,30);
		line(510,128,521,138);
		line(435,116,440,171);

		/////////cont//
		line(339,194,372,144);

		ellipse(454,208,87,123,128,95);
		line(372,144,384,128);
		int b,x,y;
		////////////////lower
		line(365,298,524,264);
		line(365,298,330,310);
		line(330,310,323,310);


		/////////////////bumper
		ellipse(162,221,135,190,90,40);
		line(96,193,140,174);
		line(140,174,160,168);
		line(160,168,192,161);

		//////////////////////front
		ellipse(75,246,95,190,18,18);
		line(57,251,57,286);
		ellipse(181,178,232,263,200,137);
		ellipse(195,180,256,286,200,137);

		ellipse(191,171,228,247,200,100);
		ellipse(231,198,234,275,200,80);

		ellipse(196,167,228,246,200,90);
		ellipse(231,184,234,276,200,80);


		ellipse(191,200,228,246,200,90);
		ellipse(228,218,234,276,200,80);

		ellipse(258,268,180,220,200,40);
		ellipse(178,296,244,355,16,10);

		ellipse(238,249,227,250,200,60);


		/////////////wheel1
		ellipse(302,281,320,77,26,45);
		ellipse(290,277,65,162,40,45);
		ellipse(278,288,144,212,31,45);

		/////////////wheel2
		ellipse(302+260,229,328,87,26,45);
		ellipse(290+280-7,277-50+2,90,162,40,45);
		ellipse(278+270,288-50,144,215,27,45);
		 b=0;
		int v=0;

		/////////
		ellipse(302+250+v,227+b,295,90,29,41);
		ellipse(302+234+v,231+b,245,306,50,40);

		ellipse(302+248+v,229+b,0,360,21,30);

		ellipse(302+247+v,229+b,0,360,8,10);
		setfillstyle(6,11);

		line(546+v,201+b,546+v,220+b);
		line(551+v,201+b-2,551+v,220+b);

		line(546+v,238+b,546+v,257+b);
		line(551+v,238+b+2,551+v,257+b+2);


		line(530+v,225+b,541+v,225+b);
		line(530+v,230+b,541+v,230);

		line(557+v,225+b,570+v,225+b);
		line(557+v,230+b,570+v,230+b);



		line(563+v,206+b,552+v,222+b);
		line(534+v,246+b,543+v,232+b);

		line(566+v,210+b,556+v,223+b);
		line(536+v,250+b,544+v,238+b);

		line(536+v,207+b,546+v,222+b);
		line(532+v,213+b,542+v,224+b);

		line(556+v,235+b,566+v,247+b);
		line(551+v,237+b,563+v,253+b);

		////////////////////////
		v=-260;
		b=56;
		ellipse(302+233+v,221+b,260,60,49,51);
		ellipse(302+243+v,224+b,0,360,28,35);
		ellipse(300+245+v,223+b,0,360,10,12);

		ellipse(285+249+v,239+b,210,260,30,33);
		b=45;
		v=v-4;
		line(546+v,201+b,546+v,220+b+2);
		line(551+v,201+b,551+v,220+b+2);
		b=b+8;
		line(546+v,238+b,546+v,257+b+4);
		line(551+v,238+b,551+v,257+b+4);
		v=v-2;
		line(530+v-6,225+b,541+v,225+b);
		line(530+v-6,230+b,541+v,230+b);
		v=v+5;
		line(557+v,225+b,570+v+3,225+b);
		line(557+v-1,230+b,570+v+3,230+b);


		b=b-5;
		v=v-5;
		line(565+v+3,206+b,552+v+4,222+b-2);
		b=b+15;

		line(534+v,246+b,543+v+3,232+b-5);
		b=b-10;
		line(566+v+7,210+b-5,556+v+4,220+b);
		line(536+v-5,250+b,544+v-2,238+b-4);


		line(536+v,207+b-8,545+v,222+b-5);
		line(531+v,212+b-8,542+v,224+b-2);

		line(556+v,235+b,566+v+3,247+b+5);
		line(551+v,237+b,563+v+2,253+b+3);

		///////////////lights
		ellipse(199,250,144,345,18,8);
		line(185,245,206,230);
		ellipse(223,234,340,110,8,5);
		line(230,237,217,252);
		line(206,230,220,229);

		/////////////////////////////
		line(90,223,152,236);
		line(152,236,137,254);
		line(90,223,90,242);

		ellipse(240,270,104,136,100,60);
		ellipse(185,237,120,160,100,60);
		ellipse(80,221,357,134,10,10);

		line(152,236,168,228);
		/////////////////////////////
		line(435,116,440,171);
		///////////////////////////hp
		line(134,185,196,160);
		line(214,212,318,185);
		////////////////light

		ellipse(166,247,99,330,8,8);
		ellipse(171,243,310,129,7,7);
		putpixel(174,250,13);
		putpixel(173,251,13);
		putpixel(164,239,13);
		putpixel(165,238,13);

		////////road/////////////////////
		setcolor(13);
		line(1,430,639,300);
		line(1,445,639,315);

		line(1,210,93,194);
		line(1,195,194,158);

		line(520,90,639,71);
		line(478,86,639,56);

		int c=0;

		line(10,194+c,10,208+c);
		line(40,189+c,40,204+c);
		line(70,183+c,70,198+c);
		line(100,176+c,100,190+c);
		line(130,170+c,130,177+c);
		line(160,166+c,160,168+c);
		line(190,160+c,190,161+c);

		line(190+330,78+c,190+330,89+c);

line(190+360,72+c,190+360,85+c);
line(190+390,67+c,190+390,81+c);
line(190+420,62+c,190+420,76+c);
line(190+449,57+c,190+449,71+c);



   c=236;

line(10,192+c,10,208+c);
line(40,189+c-2,40,204+c-3);
line(70,183+c-3,70,198+c-3);
line(100,176+c-2,100,190+c-2);
line(130,170+c-2,130,177+c+5);
line(160,166+c-3,160,168+c+8);
line(190,160+c-4,190,161+c+9);

line(190+30,156+c-5,190+30,170+c-5);


line(190+30+30,156+c-12,190+30+30,170+c-12);

line(190+90,156+c-18,190+90,170+c-17);

line(190+120,156+c-25,190+120,170+c-25);

line(190+150,156+c-30,190+150,170+c-30);

line(190+180,156+c-37,190+180,170+c-36);


line(190+210,156+c-42,190+210,170+c-42);


line(190+240,156+c-48,190+240,170+c-48);


line(190+270,156+c-55,190+270,170+c-54);


line(190+300,156+c-61,190+300,170+c-61);



 line(190+330,78+c+10,190+330,89+c+13);

line(190+360,72+c+11,190+360,85+c+13);
line(190+390,67+c+10,190+390,81+c+10);
line(190+420,62+c+8,190+420,76+c+10);
line(190+449,57+c+8,190+449,71+c+8);




/////////////////road

setcolor(12);          /////////////////////////////1

line(1,310,25,306);
line(6,318,30,315);
line(1,310,6,318);
line(25,306,30,314);
//int k,m;
//k=13*45+19;
//m=16*(-8);
							//2
setcolor(12);

line(605,310-128,629,306-128);
line(610,318-128,634,315-128);
line(605,310-128,610,318-128);
line(629,306-128,634,314-128);

setcolor(12);    //////////////////////////////////3
//k=45;
//m=-8;
line(46,302,70,298);
line(51,310,75,307);
line(46,302,51,310);
line(70,298,75,306);


setfillstyle(1,0);
floodfill(64,303,12);

setfillstyle(1,14);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(1,0);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(1,14);
floodfill(64,303,12);

while(!kbhit())
{

delay(120);
setfillstyle(6,0);         //////////////////////////ty
floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);

setfillstyle(1,0);
floodfill(64,303,12);

/////////////// road

setfillstyle(9,0);       /////////////////////color
floodfill(81-40+5,419+7,13);
floodfill(151-40,409+7,13);
floodfill(211-40,397+7,13);
floodfill(271-40,380+7,13);
floodfill(331-40,368+7,13);
floodfill(396-40,355+7,13);
floodfill(450-40,345+7,13);
floodfill(510-40,335+7,13);
floodfill(570-40,325+7,13);
floodfill(630-40,312+7,13);


//////////////////////
floodfill(50,197,13);
floodfill(110,177,13);
floodfill(166,165,13);
floodfill(527,86,13);
floodfill(587,71,13);




setfillstyle(6,14); //////////////////////////ty
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);
////////////////////////////////////////road

setfillstyle(9,10);///////////////////////////////////color
floodfill(19,429,13);
floodfill(81,419,13);
floodfill(151,409,13);
floodfill(211,397,13);
floodfill(271,380,13);
floodfill(331,368,13);
floodfill(396,355,13);
floodfill(450,345,13);
floodfill(510,335,13);
floodfill(570,325,13);
floodfill(630,312,13);
//////////////////////////////////////
floodfill(20,197,13);
floodfill(80,187,13);
floodfill(133,174,13);
floodfill(517,86,13);
floodfill(557,81,13);
floodfill(627,70,13);

setfillstyle(1,14);
floodfill(14,314,12);
floodfill(617,183,12);

///////////////////////////////////////
setfillstyle(10,4);
floodfill(302+248,230,13);
floodfill(302+248+v,230+b,13);
///light
setfillstyle(6,11);                             ///////////

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);

delay(120);

setfillstyle(6,0);/////////////////////ty
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);
/////////////////////////////////////road
setfillstyle(9,0);      ///////////////color

floodfill(19,429,13);
floodfill(81,419,13);
floodfill(151,409,13);
floodfill(211,397,13);
floodfill(271,380,13);
floodfill(331,368,13);
floodfill(396,355,13);
floodfill(450,345,13);
floodfill(510,335,13);
floodfill(570,325,13);
floodfill(630,312,13);
///////////////////////////////////////////////////////
floodfill(20,197,13);
floodfill(80,187,13);
floodfill(133,174,13);
floodfill(517,86,13);
floodfill(557,81,13);
floodfill(627,70,13);
/////////////////////////////
setfillstyle(1,0);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(6,10);            /////////////ty

floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);
////////////////////////////////////////////////road
setfillstyle(9,14);/////////////////////////////////////////color
floodfill(81-40+5,419+7,13);
floodfill(151-40,409+7,13);
floodfill(211-40,397+7,13);
floodfill(271-40,380+7,13);
floodfill(331-40,368+7,13);
floodfill(396-40,355+7,13);
floodfill(450-40,345+7,13);
floodfill(510-40,335+7,13);
floodfill(570-40,325+7,13);
floodfill(630-40,312+7,13);
/////////////////////////////////////////

floodfill(50,197,13);
floodfill(110,177,13);
floodfill(166,165,13);
floodfill(527,86,13);
floodfill(587,71,13);
setfillstyle(1,14);
floodfill(64,303,12);

setfillstyle(9,4);
floodfill(302+248,230,13);
floodfill(302+248+v,230+b,13);

delay(20);
setfillstyle(1,14);

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);

 delay(20);
setfillstyle(1,0);

floodfill(200,250,13);

floodfill(170,250,13);
floodfill(80,230,13);
}
while(!kbhit())
{

delay(120);
setfillstyle(6,0);         //////////////////////////ty
floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);

setfillstyle(1,0);
floodfill(64,303,12);

/////////////// road

setfillstyle(9,0);       /////////////////////color
floodfill(81-40+5,419+7,13);
floodfill(151-40,409+7,13);
floodfill(211-40,397+7,13);
floodfill(271-40,380+7,13);
floodfill(331-40,368+7,13);
floodfill(396-40,355+7,13);
floodfill(450-40,345+7,13);
floodfill(510-40,335+7,13);
floodfill(570-40,325+7,13);
floodfill(630-40,312+7,13);


//////////////////////
floodfill(50,197,13);
floodfill(110,177,13);
floodfill(166,165,13);
floodfill(527,86,13);
floodfill(587,71,13);




setfillstyle(6,14); //////////////////////////ty
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);
////////////////////////////////////////road

setfillstyle(9,10);///////////////////////////////////color
floodfill(19,429,13);
floodfill(81,419,13);
floodfill(151,409,13);
floodfill(211,397,13);
floodfill(271,380,13);
floodfill(331,368,13);
floodfill(396,355,13);
floodfill(450,345,13);
floodfill(510,335,13);
floodfill(570,325,13);
floodfill(630,312,13);
//////////////////////////////////////
floodfill(20,197,13);
floodfill(80,187,13);
floodfill(133,174,13);
floodfill(517,86,13);
floodfill(557,81,13);
floodfill(627,70,13);

setfillstyle(1,14);
floodfill(14,314,12);
floodfill(617,183,12);

///////////////////////////////////////
setfillstyle(10,4);
floodfill(302+248,230,13);
floodfill(302+248+v,230+b,13);
///light
setfillstyle(6,11);                             ///////////

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);

delay(120);

setfillstyle(6,0);/////////////////////ty
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);
/////////////////////////////////////road
setfillstyle(9,0);      ///////////////color

floodfill(19,429,13);
floodfill(81,419,13);
floodfill(151,409,13);
floodfill(211,397,13);
floodfill(271,380,13);
floodfill(331,368,13);
floodfill(396,355,13);
floodfill(450,345,13);
floodfill(510,335,13);
floodfill(570,325,13);
floodfill(630,312,13);
///////////////////////////////////////////////////////
floodfill(20,197,13);
floodfill(80,187,13);
floodfill(133,174,13);
floodfill(517,86,13);
floodfill(557,81,13);
floodfill(627,70,13);
/////////////////////////////
setfillstyle(1,0);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(6,10);            /////////////ty

floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);
////////////////////////////////////////////////road
setfillstyle(9,14);/////////////////////////////////////////color
floodfill(81-40+5,419+7,13);
floodfill(151-40,409+7,13);
floodfill(211-40,397+7,13);
floodfill(271-40,380+7,13);
floodfill(331-40,368+7,13);
floodfill(396-40,355+7,13);
floodfill(450-40,345+7,13);
floodfill(510-40,335+7,13);
floodfill(570-40,325+7,13);
floodfill(630-40,312+7,13);
/////////////////////////////////////////

floodfill(50,197,13);
floodfill(110,177,13);
floodfill(166,165,13);
floodfill(527,86,13);
floodfill(587,71,13);
setfillstyle(1,14);
floodfill(64,303,12);

setfillstyle(9,4);
floodfill(302+248,230,13);
floodfill(302+248+v,230+b,13);

delay(20);
setfillstyle(1,14);

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);

 delay(20);
setfillstyle(1,0);

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);




}


t=getch();
if(t=='1')
menu();
if(t=='h')
{
sound(710);
delay(500);
nosound();
//break;
}
if(t=='t')
{
while(!kbhit())  {
setfillstyle(1,0);
floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);
setfillstyle(1,random(12));
floodfill(200,250,13);
delay(10);
//setfillstyle(1,11);

 floodfill(170,250,13);
 floodfill(80,230,13);


 }}

setfillstyle(1,0);

floodfill(200,250,13);
delay(10);
//setfillstyle(1,11);

 floodfill(170,250,13);
 floodfill(80,230,13);

	}
//circle(300,100,3);
//nosound();
//getch();
//closegraph();
}


// Menu for Selection best choice

void CRIME::menu()
{
  clrscr();
  cleardevice();
  clrscr();
  textmode(C40);
  textcolor(LIGHTGREEN);   // to set the color of the text
  gotoxy(8, 8);
  do
  {
  s1:
  clrscr();
  cprintf("Select any one");
  gotoxy(9, 13);
  textcolor(WHITE);
  cprintf("1. Police Employment Details");
  gotoxy(9, 15);
  cprintf("2. FIR System ");
  gotoxy(9, 17);
  cprintf("3. EXIT");
  cin>>ch1;
  closegraph();
  textmode(BW80);
	     switch(ch1)
	     {
	     //cleardevice();
	     //textcolor(WHITE);
	     case 1:
	   do
	   {
	   s:
	   clrscr();
	   cout<<"\n\n\n\t\t1.ADD NEW\t3.VIEW";
	   cout<<"\n\n\n\t\t2.UPDATE \t4.DELETE";
	   cout<<"\n\n\n\t\t5.GO BACK\t";
	   cin>>ch2;
	   //textcolor(YELLOW);
	   switch(ch2)
	   {
	   //textcolour(YELLOW);
	   case 1:
	       clrscr();
	      // vline(-);
	       cout<<"\n\n\t\t\t ADD NEW ";
	       addnew();
	       getch();
	       goto s;

	   case 2:
	       clrscr();
	       cout<<"\n\n\t\t\t UPDATE ";
	       update();
	       //cout<<"\nRecord is Updated....";
	       getch();
	       clrscr();
	       goto s;
	   case 3:
	       clrscr();
	       cout<<"\n\n\t\t\t SHOW ";

	       show();
	       getch();
	       clrscr();
	       goto s;

	   case 4: clrscr();
	       cout<<"\n\n\t\t\t DELETE ";
	       delet();
	       //cout<<"\nRecord is Delete....";
	       getch();
	       clrscr();
	       goto s;
	   case 5:
	       //cleardevice();
	       clrscr();
	       goto s1;

	   default:
	       cout<<"\nSorry your selection is wrong \nplease select correct option\n";
	   break;
	   }
	   }while(ch2!=1 && ch2!=2 && ch2!=3 && ch2!=4 && ch2!=5);

	   getch();
	   clrscr();

	    break;
	     case 2:
		 do{
	       s2:
	       clrscr();
		 cout<<"\n\n\n\t\t1. ADD_REPORT\n\n\n\t\t2. VIEW_REPORT";
		 cout<<"\n\n\n\t\t3. GO BACK\t";

		 cin>>ch3;
	   textcolor(WHITE);
	   switch(ch3)
	   {
	   //textcolor(YELLOW);
	   case 1:
	       clrscr();
	      // vline(-);
	       cout<<"\n\n\t\t ADD REPORT ";
	       FIR();
	       getch();
	       clrscr();
	       goto s2;

	   case 2:
	       clrscr();
	       cout<<"\n\n\t\t VIEW REPORT";
	       show1();
	       getch();
	       clrscr();
	       goto s2;
	   case 3:
	       clrscr();
	       goto s1;

	   default:
		  cout<<"\nSorry your selection is wrong \nplease select correct option\n";
	   break;
	   }
	   }while(ch3!=1 && ch3!=2 && ch3!=3 );
		  getch();

	    break;

	     case 3:
	       textmode(C40);
	       textcolor(LIGHTGREEN);  // to set the color of the text
	       gotoxy(14, 15);
	       cprintf(" Thank You!! ") ;
	       gotoxy(12, 16);
	       textcolor(LIGHTCYAN);
	       cprintf(" PROJECT MADE BY ");
	       gotoxy(4, 18);
	       textcolor(LIGHTMAGENTA);
	       cprintf(" Ayush Gangwar   Deepali Kushwaha \n");
	       gotoxy(4, 19);
	       cprintf("          Gaurav Singh             \n ");
               gotoxy(4, 20);
               cprintf(" Latika Saini    Arushi Srivastava \n ");
	       break;
	     default:
	   clrscr();
	   cout<<"\n Sorry your selection is wrong please select correct option\n";
	   break;
	   }
	   }
	   while(ch1!=1 && ch1!=2 && ch1!=3);
	   getch();
 }

//Information of project maker
void CRIME::info()
{ clrscr();
  textmode(C40);
  textcolor(LIGHTGREEN); // to set the color of the text
  gotoxy(16,17);
  cprintf(" MADE BY ");
  gotoxy(10,19);
  textcolor(LIGHTMAGENTA);
  cprintf(" CRMS PROJECT MEMBERS ");
  textcolor(LIGHTCYAN);
  gotoxy(10,21);
  cprintf(" B.Tech, CSE Department ");
  gotoxy(2, 23);
  cprintf(" Raj Kumar Goel Institude of Technology ");
  getch();
}

//logic form

void CRIME::login()
{
clrscr();
textmode(C80);
  g:
      int i=0,k=0,y=35;
    char a,b[7],c[7]="crmspj";
    clrscr();
    textbackground(BLACK);
    gotoxy(25, 10);
    printf("     Enter password:        ");
    textbackground(BLACK);
    textbackground(YELLOW);
    textcolor(CYAN);
    gotoxy(32,14);
    cprintf("           ");
    gotoxy(32,15);
    cprintf("           ");
    gotoxy(32,16);
    cprintf("           ");
    gotoxy(35,15);
    fflush(stdin);
    while((a=getch())!='\r')
    {
    if(a==8&&y>35)
    {
    y--;
    i--;
    b[i]=NULL;
    gotoxy(y,15);
    printf("  ");
    }
    else
    {
       b[i]=a;
    gotoxy(y,15);
       printf("*");
       i++;
       y++;
    }
    }
   // getch();
    b[i]='\0';
    fflush(stdin);
    if(strcmp(b,c)==0)
    {
    draw();
    menu();
    getch();
    }
    else
    {
	 k++;
	 gotoxy(31,18);
	 textcolor(RED);
	 textbackground(10);
	 cprintf("                           ");
	 gotoxy(31,19);
	 cprintf("   Sorry Worng Password!   ");
	 gotoxy(31,20);
	 cprintf("                           ");
	 textcolor(15);
	 textbackground(BLACK);
	 getch();
	 cleardevice();
	 goto g;
    }
}

// Welcome window

void CRIME::welcome()
{
clrscr();
int i;
    textmode(C40);
    textcolor(LIGHTMAGENTA); // to set the color of the text
    gotoxy(9,13);
    cprintf("WELCOME TO MY PROJECT");
    textcolor(YELLOW);
    gotoxy(5,15);
    cprintf("CRIME RECORD MANAGEMENT SYSTEM ");
    fflush(stdin);
    getch();
}

void main ()
{
  int gd=DETECT , gm;
  initgraph(&gd, &gm,"..\\bgi");
  gotoxy(500,500);
  CRIME c;
   c.welcome();
   c.info();
   c.login();
   getch();
  closegraph();
  }
