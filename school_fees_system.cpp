//#$%%^&&*!@#$$%^^&&*((!@#%^&*()@#$$%^^&&&&&&&*
//______________________________________________
//           project on the school fee system
//______________________________________________
//!@#$%^&*()_+!@#$%^&*()_!@#$%^&*()_+!@#$%^&*()_+



//**********************************************
//              header files
//______________________________________________
//**********************************************



#include<fstream>
//#include<conio.h>
#include<stdio.h>
#include<cstdio>
#include<stdlib.h>
#include<iostream>
#include<string.h>
//#include<process>
#include<iomanip>

using namespace std;
//**********************************************
//           ordinary    function
//_____________________________________________
//**********************************************


void labs()
{

cout<<"\n\t D.A.V. CENTENARY PUBLIC SCHOOL ";
cout<<"\n\t sector B-4 ,pocket 5,DDA,project narela, delhi-110040 ";
cout<<"\n\t ph : 27784139,27784140  fax:27784140 ";
cout<<"\n\t E-mail : davcp_nrl@hotmail.com ";
cout<<"\n\t website : www.davcpnrl.org.com ";
cout<<"\n\t DAV PUBLIC SCHOOL was founded in 1988 . It is an arya samaj based school ,,in narela ,in india and educates to the cbse curriculum . ";
cout<<"\n\t the full form of the school is dayanand anglo vedic public school . ";
cout<<"\n\t                               ---------------------------------- ";
cout<<"\n\t our labs are neat and clean and well maintained ";

}


void awards()
{

cout<<" D.A.V. CENTENARY PUBLIC SCHOOL,NARELA, DELHI has been conferred with  the prestigious 'british council international school awards 2014-2018 '. Be it international competition or national competition ,  D.A.V. CENTENARY PUBLIC SCHOOL ,NARELA has left no stone unturned to make its presence felt . ";
cout<<"\n\t the school has been very actively involved in international activities , project exchanges , cultural exchange programs, video conferences and online interaction with partner schools across the globe . ";

}


void facility()
{

cout<<"\n\t D.A.V. CENTENARY PUBLIC SCHOOL \n";
cout<<"\n\t sector B-4 ,pocket 5,DDA,project narela, delhi-110040 \n";
cout<<"\n\t ph : 27784139,27784140  fax:27784140 \n";
cout<<"\n\t E-mail : davcp_nrl@hotmail.com \n";
cout<<"\n\t website : www.davcpnrl.org.com \n";
cout<<"\n\t DAV PUBLIC SCHOOL was founded in 1988 . It is an arya samaj based school ,in narela ,in india and educates to the cbse curriculum .\n ";
cout<<"\n\t the full form of the school is dayanand anglo vedic public school .\n ";
cout<<"\n\t                                ----------------------------------\n ";
cout<<"\n\t education for all is quite modern  in india . A school is a place where people go to learn about topics like reading ,writing and mathematics .in a school , one or more teachers help student to learn \n";
cout<<"\n\t children with mental issues which are difficult to handle are not require to go to the regular schools . The children are given other ways to get shooling . There also are special schools which teaches thing which other school do not \n ";
cout<<"\n\t our school provides a classroom environment that fosters excellence and motivates student towards better performance . Our classrooms are aesthetically designed and integrated with the smart boards and well furnished desks.with technological support ,our skilled teachers provide guidance to each individual. The emphasis is on making every classroom session interesting and interactive . \n";
cout<<"\n\t our school accomodates a well -equipped and well - furnished medical room ,which is accessible during school hours . We have nursing attendants in place for ensurig that all the emergencies are taken care of . We have a tie - up wih the adiva hospital to address medical exigencies right one time \n";
cout<<"\n\t the activity rooms at our school are magical jukeboxes that spur every presidian into actio . eqipped with the wide range of performing arts, our spacious activity rooms are fit for every session - be it dance, music or yoga \n";

}


void school()
{

cout<<"\n\t D.A.V. CENTENARY PUBLIC SCHOOL  \n";
cout<<"\n\t sector B-4 ,pocket 5,DDA,project narela, delhi-110040 \n";
cout<<"\n\t ph : 27784139,27784140  fax:27784140  \n";
cout<<"\n\t E-mail : davcp_nrl@hotmail.com  \n";
cout<<"\n\t website : www.davcpnrl.org.com \n";
cout<<"\n\t DAV PUBLIC SCHOOL was founded in 1988 . It is an arya samaj based school,in narela ,in india and educates to the cbse curriculum .  \n";
cout<<"\n\t the full form of the school is dayanand anglo vedic public school . ";
cout<<"\n\t                                ---------------------------------- ";
cout<<"\n\t education for all is quite modern  in india . A school is a place where people go to learn about topics like reading ,writing and mathematics .in a school , one or more teachers help student to learn  \n";
cout<<"\n\t children with mental issues which are difficult to handle are not require to go to the regular schools . The children are given other ways to get shooling . There also are special schools which teaches thing which other school do not  \n";
cout<<"\n\t our school provides a classroom environment that fosters excellence and motivates student towards better performance . Our classrooms are aesthetically designed and integrated with the smart boards and well furnished desks.with technological support ,our skilled teachers provide guidance to each individual. The emphasis is on making every classroom session interesting and interactive . \n ";
cout<<"\n\t our school accomodates a well -equipped and well - furnished medical room ,which is accessible during school hours . We have nursing attendants in place for ensurig that all the emergencies are taken care of . We have a tie - up wih the adiva hospital to address medical exigencies right one time \n";
cout<<"\n\t the activity rooms at our school are magical jukeboxes that spur every presidian into actio . eqipped with the wide range of performing arts, our spacious activity rooms are fit for every session - be it dance, music or yoga  \n";

}

void project()
{

cout<<"\n\t     FEE   ";
cout<<"\n\t    MANAGEMNET  ";
cout<<"\n\t     SYSTEM   ";
cout<<"\n\t     MADE BY: Tejashri   ";
//cout<<"\n\t     SCHOOL: D.A.V .C PUBLIC SCHOOL , NARELA ";

}

//**************************************************
//                 class definition
//________________________________________________
//**************************************************


class studdel
{

private:

int admin,clss;
char name[20],fname[20],mname[20],s,del[20];

public:

studdel();

int retadm()
{

return admin;

}

void input();
void show();

}u;


class feedel
{

private:

int trfee,tufee,adfee,h,totfee,admin,dfund,pfund,lfund,cfund,acharge,sfun,fine;
char t,de[20],o[20];

public:

feedel();

void fee();
void mode_of_payment();
void fee_receipt();

}f;


//***********************************************
//               constructors
//______________________________________________
//***********************************************

 studdel::studdel()
{

admin=5746;
clss=12;
s='D';
strcpy(name,"sweety");
strcpy(fname,"naik");
strcpy(mname,"shantha");

}


feedel::feedel()
{

adfee=5746;
tufee=100;
trfee=100;
dfund=100;
pfund=100;
lfund=100;
cfund=100;
acharge=100;
sfun=100;
fine=100;
totfee=900;

}


//***************************************************************
//                     member function of class
//_____________________________________________________________
//***************************************************************


void studdel:: input()
{

cout<<"\n\t enter the addmission number : ";
cin>>admin;
cout<<"\n\t enter the class : ";
cin>>clss;
cout<<"\n\t enter the section : ";
cin>>s;
cout<<"\n\t enter the name of the student : ";
//gets(name);
cin>>name;
cout<<"\n\t enter the father's name : ";
//gets(fname);
cin>>fname;
cout<<"\n\t enter the mother's name : ";
//gets(mname);
cin>>mname;

}


void studdel::show()
{

cout<<"\n\t addmission number of the student is : "<<admin;
cout<<"\n\t   class : "<<clss;
cout<<"\n\t  section : ";
cout<<s;
cout<<"\n\t name of the student : ";
puts(name);
cout<<"\n\t  father's name : ";
puts(fname);
cout<<"\n\t  mother's name : ";
puts(mname);

}


void feedel::fee()
{

cout<<"\n\t enter the addmission number : ";
cin>>admin;
cout<<"\n\t enter the tution fee : ";
cin>>tufee;
cout<<"\n\t enter the admission fee : ";
cin>>adfee;

//*************************************************
//        use transport or not
//_______________________________________________
//*************************************************


cout<<"\n\t whether the student use tranport (y/n): ";
cin>>t;


//***************************************************
//          if not
//__________________________________________________
//***************************************************


if(t=='n')
{

     trfee=0;

}


//***************************************************
//           if yes
//__________________________________________________
//***************************************************


else
{

cout<<"\n\t\n for the students who use transport |- ";
cout<<"\n\t 1. transport charge is rs 600 /- per month ";
cout<<"\n\t  DDA sector A-5,A-6,A-7,A-8,A-9,A-10,punjabi colony,indira colony,bhorgarh,shahpur,tikri,singhu,singhola,gautam colony,sanjay colony,ramdev chowk,lal mandir, vijay nagar ,narela mandi,mangla chowk ,sanjay colony ,rajiv colony. ";
cout<<"\n\t 2. transport charge is rs 650 /- per month ";
cout<<"\n\t banknr ,swatantra nagar. ";
cout<<"\n\t 3. transport charge is rs 700 /- per month ";
cout<<"\n\t lampur,shersa. ";
cout<<"\n\t 4. transport charge is rs 750 /- per month ";
cout<<"\n\t rasoi,kundali,piau,nathupur,saboli,ITBP camp, ";
cout<<"\n\t 5. transport charge is rs 800 /- per month ";
cout<<"\n\t bakoli,khampur,alipur and alipur block,bawana,pooth,sannoth. ";
cout<<"\n\t 6. transport charge is rs 850 /- per month ";
cout<<"\n\t dariyapur,auchandi,nahri,katlupur,badkhalsa,pitampura,hamidpur. ";
cout<<"\n\t 7. transport charge is rs 900 /- per month ";
cout<<"\n\t nahara,mazra,tiggipur,tajpur,bakhtawarpur. ";


//*****************************************************
//               enter the choice
//___________________________________________________
//*****************************************************


cout<<"\n\n\t enter your choice : ";
cin>>h;

switch(h)
{

 case 1:

      {

      trfee=600;
      break;

    }

 case 2:

    {

     trfee=650;
     break;

    }

 case 3:

       {

    trfee=700;
    break;

       }

 case 4:

       {

    trfee=750;
    break;

       }

 case 5:

       {

    trfee=800;
    break;

       }

 case 6:

       {

    trfee=850;
    break;

       }

 case 7:

       {

    trfee=900;
    break;

       }

}

}

cout<<"\n\t enter the development fund : ";
cin>>dfund;
cout<<"\n\t enter the pupil's fund : ";
cin>>pfund;
cout<<"\n\t enter the science and laboratory fund : ";
cin>>lfund;
cout<<"\n\t enter the computer fund : ";
cin>>cfund;
cout<<"\n\t enter the annual charge : ";
cin>>acharge;
cout<<"\n\t enter the security fund : ";
cin>>sfun;
cout<<"\n\t enter the fine if any : ";
cin>>fine;
cout<<"\n\n\t\t fee receipt ";
totfee=tufee+adfee+trfee+dfund+pfund+lfund+cfund+acharge+sfun+fine;
cout<<"\n\t total fee is : "<<totfee;

}


void feedel::fee_receipt()
{

cout<<"\n\t addmission fee : "<<adfee;
cout<<"\n\t tuition fee : "<<tufee;
cout<<"\n\t transport fee : "<<trfee;
cout<<"\n\t development fee : "<<dfund;
cout<<"\n\t pupil's fund : "<<pfund;
cout<<"\n\t science and laboratory charges : "<<lfund;
cout<<"\n\t computer fee : "<<cfund;
cout<<"\n\t half yearly charges : "<<acharge;
cout<<"\n\t security charge : "<<sfun;
cout<<"\n\t fine : "<<fine;
cout<<"\n\t total fee : "<<totfee;
cout<<"\n\t\n\t note |- ";
cout<<"\n\t 1. late fee shall be accepted only upto last day of the first month of payment schedule with late fee of rs 100/- for the month . ";
cout<<"\n\t 2. school reserves right to struck off the name in case of non payment of prolonged period ";
cout<<"\n\t\n\t                                                    print ";

}


void feedel::mode_of_payment()
{

cout<<"\n\t 1. april     ";
cout<<"\n\t #  one month fee+1st installment of annual charges ";
cout<<"\n\t # last day of payment is 15th april ";
cout<<"\n\t 2. may-june     ";
cout<<"\n\t # last day of payment is 15th may ";
cout<<"\n\t 3. july-august     ";
cout<<"\n\t # last day of payment is 15th july ";
cout<<"\n\t 4. september     ";
cout<<"\n\t #  one month fee+2nd installment of annual charges ";
cout<<"\n\t # last day of payment is 15th september ";
cout<<"\n\t 5. oct-nov     ";
cout<<"\n\t # last day of payment is 15th oct ";
cout<<"\n\t 6. dec-jan    ";
cout<<"\n\t # last day of payment is 15th dec ";
cout<<"\n\t 7. feb-march     ";
cout<<"\n\t # last day of payment is 15th feb ";

}


//***************************************************
//                main function
//_________________________________________________
//***************************************************


int main()
{

int b,m;
char s;

//clrscr();

//*******************************************
//               for password
//__________________________________________
//*******************************************


cout<<"\n\t enter the password : ";
cin>>s;


//********************************************
//      for incorrect password
//___________________________________________
//********************************************

if(s!='s')
{

cout<<"\n\t incorrect password !!! ";
cout<<"\n\t try again ";

}


//*******************************************
//       for correct password
//__________________________________________
//*******************************************

else
{


//*********************************************
//   menu driven
//__________________________________________
//*********************************************


cout<<"\n\t 1. about the project ";
cout<<"\n\t 2. about the school ";
cout<<"\n\t 3. about the facelity ";
cout<<"\n\t 4. about the awards ";
cout<<"\n\t 5. about the labs ";
cout<<"\n\t 6. inputing the detail of the student  ";
cout<<"\n\t 7. display student detail ";
cout<<"\n\t 8. searching the detail of the student ";
cout<<"\n\t 9. calculating  fee ";
cout<<"\n\t 10. mode of payment ";
cout<<"\n\t 11. transport charges ";
cout<<"\n\t 12. display a particular record ";
cout<<"\n\t 13. delete the record ";
cout<<"\n\t 14. update the file ";
cout<<"\n\t 15. exit ";


do
{


//**********************************************
//            entering the choice
//_____________________________________________
//**********************************************


cout<<"\n\t enter your choice : ";
cin>>b;


switch(b)
{


//*************************************************
//         about  the project
//_______________________________________________
//*************************************************


 case 1:

         {

         project();
         break;

         }


//**********************************************
//        about the school
//____________________________________________
//**********************************************


 case 2:

        {

        cout<<setw(20);
        cout<<"\n\t about the school ......";
        school();
        break;

        }


//*********************************************
//        about  the facility
//____________________________________________
//*********************************************


 case 3:

        {

          cout<<"\n\t about the facility .....";
          facility();
          break;

        }


//****************************************************
//                about the awards
//___________________________________________________
//****************************************************


 case 4:

        {

          cout<<"\n\t  about the awards ......";
          awards();
          break;

        }


//****************************************************
//                about the labs
//__________________________________________________
//****************************************************


 case 5:

        {

          cout<<"\n\t about the labs .......";
          labs();
          break;

        }


//****************************************************
//            inputing the details of the student
//____________________________________________________
//****************************************************


 case 6:

        {

          cout<<"\n\t input the details of the student .....";

          int n;

          ofstream ofile("fee.dat",ios::binary|ios::app);

          studdel v;

          cout<<"\n\t enter the number of student: ";
          cin>>n;
          cout<<"\n\t inputing the detail of the student ";

          for(int i=0;i<n;++i)
          {

          v.input();
          ofile.write((char*)&v,sizeof(v));

          }

          ofile.close();
          break;

        }


//***************************************************
//          displaying the details of the student
//_________________________________________________
//***************************************************


 case 7 :

        {

          cout<<"\n\t displaying the records ...... ";
          ifstream ifile("fee.dat",ios::binary|ios::in);
          if(!ifile)
          {

          cout <<"\n\t error in opening file";
          //return;

          }

          else
          {

          studdel v;

          cout<<"\n\t display student details ...";
          while(ifile.read((char*)&v,sizeof(v)))
          {

          v.show();

          }

          ifile.close();
          break;

        }

        }


//***********************************************
//            search the details of the student
//______________________________________________
//***********************************************


 case 8:

        {

          cout<<"\n\t searching the detail of the student ";

          studdel v;

          int admin;

          ifstream fin("fee.dat",ios::binary|ios::in);

          if(!fin)
          {

          cout<<"\n\t error in opening a file";

          exit(0);

           }

           else
           {

           cout<<"\n\t enter the admission number to be search " ;
           cin>>admin;

          while(fin.read((char*)&v,sizeof(v)))
          {

          if(v.retadm()==admin)
          {

          v.show();

          }

          }

          }

          fin.close();
          break;

        }


//**************************************************
//         calculating the fee
//_________________________________________________
//***************************************************


 case 9:

        {

          cout<<"\n\t calculating fee |- ";
          f.fee();
          break;


        }


//************************************************
//               mode of payment
//______________________________________________
//************************************************


 case 10:

        {

          cout<<"\n\t mode of payment |- ";
          f.mode_of_payment();
          break;

        }


//************************************************
//               transport charges
//________________________________________________
//*************************************************


 case 11:

        {

          cout<<"\n\t transport charge |-  ";
          f.fee_receipt();
          break;

        }


//*****************************************************
//                  displaying a particular record
//____________________________________________________
//*****************************************************


 case 12:

        {

           cout<<"\n\t display a particular record ";

           studdel v;

          int admin;

          ifstream fin("fee.dat",ios::binary|ios::in);

          if(!fin)
          {

          cout<<"\n\t error in opening a file";
          exit(0);

           }

           else
           {

           cout<<"\n\t enter the admission number to be search " ;
          cin>>admin;

          while(fin.read((char*)&v,sizeof(v)))
          {

          if(v.retadm()==admin)
          {

          v.show();

          }

          }

          }

          fin.close();
          break;

        }


//**************************************************
//        delete the record
//_________________________________________________
//**************************************************


 case 13 :

        {

          cout<<"\n\t delete the record ";

           studdel v;

           int admin;

           fstream ifile1, ifile2;

         ifile1.open("fee.dat",ios::binary|ios::in);
          ifile2.open("feem.dat",ios::binary|ios::out);

          cout<<"\n\t enter the admission number to be deleted " ;
          cin>>admin;

          while(ifile1.read((char*)&v,sizeof(v)))
          {

          if(v.retadm()!=admin)
          {


          ifile2.write((char*)&v,sizeof(v));

            v.show();

           }

           else
           {

           cout<<admin<<"found";

           v.show();

           }

           }

          ifile1.close();
          ifile2.close();

          remove("fee.dat");
          rename("feem.dat","fee.dat" );
          break;

        }

//**************************************************
//              update a record
//_______________________________________________
//**************************************************


 case 14:

        {

         cout<<"\n\t update the record ";

         studdel v;

         int found =0;

         fstream ifile("fee.dat",ios::binary|ios::in|ios::out);

         int admin;

         cout<<"\n\t enter the addmission to be updated";
         cin>>admin;

        while(ifile.read((char*)&v,sizeof(v))&& found==0)
          {

          if(v.retadm()==admin)
          {

          v.show();
          cout<<"\n\t enter the new details ";
          v.input();
          int pos=(-1)*sizeof(v);
          ifile.seekp(pos,ios::cur);
          ifile.write((char*)&v,sizeof(v));

          found=1;

          }

           }

        ifile.close();
         break;

        }

//**********************************************
//           exit function
//_____________________________________________
//**********************************************

 case 15 :

        {

          cout<<"\n\t exiting from a function ...... ";
          exit(0);

        }


 }


 //************************************************
 //            end of switch statement
 //_______________________________________________
 //************************************************


cout<<"\n\t do you want to run again !!!!! ";
cout<<"\n\t 1. yes ";
cout<<"\n\t 2. no ";


//************************************************
//         entering the choice
//_______________________________________________
//************************************************


cout<<"\n\t enter the choice : ";
cin>>m;


}while(m==1);


//************************************************
//         end of do while statement
//_______________________________________________
//************************************************


}

//***********************************************
//        end of else statement
//_____________________________________________
//***********************************************


cout<<"\n\t Have a nice day !!!! ";
return 0;
}


//***********************************************
//          end of the program
//_______________________________________________
//***********************************************
