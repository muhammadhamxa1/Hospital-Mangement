#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<string>
using namespace std;
class patient
{
	protected:
		  int Admit_CHARGES=1000;
          string patient_name;
          string address;
		  int age;
		  string sex,admit_ward;
		  int opt1;
		  int ward_no;
	      int bed_no;
	      int no_of_days_admitted;
	      int charge_per_day;
	      string blood_group;
	      string checkup_type ;
	      int fee;
	public:
		void patient_menu()
{

	    cout<<"\n\n<><><><><><><><><><><> WELCOME TO PATIENT MENU <><><><><><><><><><><>\n ";
		cout<<"\n\n<><><><><><><><><><><> ENTER YOUR OPTIONAL NUMBER TO PROCEED <><><><><><><><><><><>";
		cout<<"\n\n\t1 ----> PRESS 1 TO ADMIT PATIENT.\n";
		cout<<"\n\t1 ----> PRESS 2 TO VIEW LIST OF ADMIT PATIENTS.\n";
		cout<<"\n\t2 ----> PRESS 3 TO GOTO MAIN MAIN MENU.\n";
		cin>>opt1;
		switch(opt1)
		{
		  case 1:
		{
		int count;
		cout<<"\n Enter No. of Patient Details You Want  :  ";
	    cin>>count;
        for(int i=0;i<count;i++)
        {
		  	ADMIT_PATIENT();
		}
		break;
		}
		  case 2:
		{
		  	show_admit_patients();
			break;
		}
		 case 3:
		  {
		  	void patient_list();
			break;
		  }
		}
	}
        void ADMIT_PATIENT()
{

 cout<<"\n -------------------------------";
 cout<<"\n Enter Patient Details";
 cout<<"\n -------------------------------";
 cout<<"\n enter patient name :\n \t\t\t";
 cin>> patient_name;
 cout<<"\n enter patient address :\n \t\t\t";
 cin>>address;
 cout<<"\n enter patient age :\n \t\t\t";
 cin>>age;
 cout<<"\n enter patient sex :\n \t\t\t";
 cin>>sex;
 cout<<"\n name the admit ward ";
 cin>>admit_ward;
 cout<<"\n Enter  ward number :\n \t\t\t";
 cin>>ward_no;
 cout<<"\n Enter  bed number :\n \t\t\t";
 cin>>bed_no;
 cout<<"\n number of days Patient admitted  :\n \t\t\t";
 cin>>no_of_days_admitted;
 cout<<"\n patient blood group   :\n \t\t\t";
 cin>>blood_group;
 cout<<"\n Patient case type :\n \t\t\t";
 cin>>checkup_type;
 cout<<"\n enter doctor charges ";
 cin>>fee;

}
        void show_admit_patients()
		{
		cout<<"\n -------------------------------";
        cout<<"\n Displaying Patient Details";
        cout<<"\n -------------------------------";
        cout<<"\n Patient name :\n \t\t\t";
        cout<<patient_name;
        cout<<"\n patient address :\n \t\t\t";
        cout<<address;
        cout<<"\n Patient age :\n \t\t\t";
        cout<<age;
        cout<<"\n Patient sex :\n \t\t\t";
        cout<<sex;
        cout<<"\n name of  admit ward ";
        cout<<admit_ward;
		cout<<"\n Patient ward number :\n \t\t\t";
		cout<<ward_no;
		cout<<"\n Patient bed number :\n \t\t\t";
		cout<<bed_no;
		cout<<"\n number of days Patient admitted  :\n \t\t\t";
		cout<<no_of_days_admitted;
		cout<<"\n Patient charged per day :\n \t\t\t";
		cout<<charge_per_day;
		cout<<"\n blood_group ";
		cout<<blood_group;
		cout<<"\n checkup_type ";
		cout<<checkup_type;
		}
}p1;
class information
{
private:
	int opt2,opt3,opt4,opt5,opt6;
	string name,address,blood_group,DOB;
	double mob_no,choice;
public :
void info()
{
	cout<<"\n\t <Select  1 to know Hospital expenses>   \n\t <SELECT 2 to know the Doctors Information> \n ";
	cin>>opt2;
	switch(opt2)
	{
		case 1:
		{
                cout<<"\n -------------------------------Hosptial expenses -------------------------------";
                cout<<"\n PER DAY ROOM CHARGES 5000-RS \n PER DAY WARD CHARGES 1000-RS \n PER DAY ICU CHARGES 15000-RS \n PER DAY CCU CHARGES 10000-RS \n";
                cout<<"\n Admit CHARGES 100-RS  ";
                cout<<"\n Discharge fee 1000-RS";
			break;
		}
		case 2:
		{
			cout<<"\n\t1 ----> PRESS 1  for OPD CARDIALOGIST  specialist \n \t2 ----> PRESS 2 for GYNACOLOGIST  for \n\t3----> PRESS 3  for  ENE( EAR NOSE EYE SPECIALIST ) \n \t4----> PRESS 4 for NEUROSERGONS (BRAIN) \n\t5 ----> PRESS 5 for NEPHRALOGISTS (KIDNEY SPECIALIST)\n ";
	             	cin>>opt3;
					 switch(opt3)
					 {
		   	        	case 1 :
		   			{
		   				cout<<"\n<-------------------------------------------------------------------------------------->\n";
		   				cout<<"\tTimings ---->MONDAY/TUESDAY/WEDNESDAY/THURSDAY/FRIDAY\n\t 8:00PM TO 10:00PM ";
		   				cout<<"\tDocter Muhammad Ali  "<<endl;
			            cout<<"\t visiting fee 3000-RS"<<endl;
			            cout<<"\n<-------------------------------------------------------------------------------------->\n";
			                 	break;
					   }
					   	case 2 :
		   			{
		   			    cout<<"\n<-------------------------------------------------------------------------------------->\n";
		   				cout<<"\tTimings ---->MONDAY/WEDNESDAY/FRIDAY\n\t 8:00PM TO 10:00PM\n ";
		   				cout<<"\tDocter Faizan Arshad  "<<endl;
			            cout<<"\t visiting fee 2000-RS"<<endl;
			            cout<<"\n<-------------------------------------------------------------------------------------->\n";
		 	                break;
					   }
					   	case 3 :
		   			{
		                    cout<<"\n<-------------------------------------------------------------------------------------->\n";
		   					cout<<"\tTimings ---->MONDAY/FRIDAY\n\t 8:00PM TO 10:00PM\n";
		   					cout<<"\tDocter Gulsher Akram"<<endl;
			                cout<<"\tvisiting fee 1000-RS"<<endl;
			                cout<<"\n<-------------------------------------------------------------------------------------->\n";
							        	break;
					   }
					   	case 4 :
		   			{
					                cout<<"\n<-------------------------------------------------------------------------------------->\n";
		   				            cout<<"\tTimings ---->MONDAY/WEDNESDAY/FRIDAY\n\t 8:00PM TO 10:00PM\n";
		   							cout<<"\tDocter Usama "<<endl;
			                        cout<<"\tvisiting fee 4000-RS"<<endl;
			                        cout<<"\n<-------------------------------------------------------------------------------------->\n";
										break;
					   }
					   case 5 :
		   			{
		   				cout<<"\n<-------------------------------------------------------------------------------------->\n";
		   				cout<<"\tTimings ---->SATURDAY/TUESDAY/THURSAY\n\t 8:00PM TO 10:00PM\n";
		   				cout<<"\tDocter Abdul Qadeer  "<<endl;
			            cout<<"\tvisiting fee 2500-RS"<<endl;
						cout<<"\n<-------------------------------------------------------------------------------------->\n";
			                        	break;
				    }
			   }
		}
	}
}
void first_visit()
{
	cout<<"\n <PRESS 1 FOR INFO> \n <PRESS 2 FOR SELECT DOCTOR> \n";
	cin>>opt5;
	switch(opt5){
		case 1:
			{
			info();
			break;
			}
			case 2:{
				select_doctor();
				break;
			}

	}
}
void select_doctor(){
			cout<<"\n\t1 ----> PRESS 1  for OPD CARDIALOGIST  specialist \n \t2 ----> PRESS 2 for GYNACOLOGIST  for \n\t3----> PRESS 3  for  ENE( EAR NOSE EYE SPECIALIST ) \n \t4----> PRESS 4 for NEUROSERGONS (BRAIN) \n\t5 ----> PRESS 5 for NEPHRALOGISTS (KIDNEY SPECIALIST)\n ";
			cin>>opt4;
			switch(opt4)
			{
		   		        case 1 :
		   			{
		   				cout<<"\n<-------------------------------------------------------------------------------------->\n";
		   				cout<<"\tTimings ---->MONDAY/TUESDAY/WEDNESDAY/THURSDAY/FRIDAY\n\t 8:00PM TO 10:00PM ";
		   				cout<<"\tDocter Muhammad Ali  "<<endl;
			            cout<<"\t visiting fee 3000-RS"<<endl;
			            cout<<"\t for appointment press 1 and 0 to leave "<<endl;
			            cin>>opt6;
			            switch(opt6)
			            {
			            	case 1:{
			            		cout<<"\nENTER YOUR NAME\n ";
			            		cin>>name;
			            		cout<<"\nENTER YOUR DOB \n ";
			            		cin>>DOB;
			            		cout<<"\nENTER YOUR ADDRESS \n ";
			            		cin>>address;
			            		cout<<"\nENTER YOUR mob no:\n ";
			            		cin>>mob_no;
			            		cout<<"ENTER YOU BLOOD GROUP";
			            		cin>>blood_group;
								break;
							}
						}

			break;
			}
					   	case 2 :
		   			{
		   			    cout<<"\n<-------------------------------------------------------------------------------------->\n";
		   				cout<<"\tTimings ---->MONDAY/WEDNESDAY/FRIDAY\n\t 8:00PM TO 10:00PM\n ";
		   				cout<<"\tDocter Faizan Arshad  "<<endl;
			            cout<<"\t visiting fee 2000-RS"<<endl;
			            cout<<"\t for appointment press 1 and 0 to leave "<<endl;
			            cin>>opt6;
			            switch(opt6)
			            {
			            	case 1:{
			            		cout<<"\nENTER YOUR NAME\n ";
			            		cin>>name;
			            		cout<<"\nENTER YOUR DOB \n ";
			            		cin>>DOB;
			            		cout<<"\nENTER YOUR ADDRESS \n ";
			            		cin>>address;
			            		cout<<"\nENTER YOUR mob no:\n ";
			            		cin>>mob_no;
			            		cout<<"ENTER YOU BLOOD GROUP";
			            		cin>>blood_group;
								break;
							}
					   }
					   break;}

					   	case 3 :
		   			{
		                    cout<<"\n<-------------------------------------------------------------------------------------->\n";
		   					cout<<"\tTimings ---->MONDAY/FRIDAY\n\t 8:00PM TO 10:00PM\n";
		   					cout<<"\tDocter Gulsher Akram"<<endl;
			                cout<<"\tvisiting fee 1000-RS"<<endl;
			                 cout<<"\t for appointment press 1 and 0 to leave "<<endl;
			            cin>>opt6;
			            switch(opt6)
			            {
			            	case 1:{
			            		cout<<"\nENTER YOUR NAME\n ";
			            		cin>>name;
			            		cout<<"\nENTER YOUR DOB \n ";
			            		cin>>DOB;
			            		cout<<"\nENTER YOUR ADDRESS \n ";
			            		cin>>address;
			            		cout<<"\nENTER YOUR mob no:\n ";
			            		cin>>mob_no;
			            		cout<<"ENTER YOU BLOOD GROUP";
			            		cin>>blood_group;
								break;
							}
					   } break;
					   }
					   	case 4 :
		   			{
					                cout<<"\n<-------------------------------------------------------------------------------------->\n";
		   				            cout<<"\tTimings ---->MONDAY/WEDNESDAY/FRIDAY\n\t 8:00PM TO 10:00PM\n";
		   							cout<<"\tDocter Usama "<<endl;
			                        cout<<"\tvisiting fee 4000-RS"<<endl;
			                         cout<<"\t for appointment press 1 and 0 to leave "<<endl;
			            cin>>opt6;
			            switch(opt6)
			            {
			            	case 1:{
			            		cout<<"\nENTER YOUR NAME\n ";
			            		cin>>name;
			            		cout<<"\nENTER YOUR DOB \n ";
			            		cin>>DOB;
			            		cout<<"\nENTER YOUR ADDRESS \n ";
			            		cin>>address;
			            		cout<<"\nENTER YOUR mob no:\n ";
			            		cin>>mob_no;
			            		cout<<"ENTER YOU BLOOD GROUP";
			            		cin>>blood_group;
								break;
							}
					   }
					    break;}
						case 5 :
		   			{
		   				cout<<"\n<-------------------------------------------------------------------------------------->\n";
		   				cout<<"\tTimings ---->SATURDAY/TUESDAY/THURSAY\n\t 8:00PM TO 10:00PM\n";
		   				cout<<"\tDocter Abdul Qadeer  "<<endl;
			            cout<<"\tvisiting fee 2500-RS"<<endl;
			             cout<<"\t for appointment press 1 and 0 to leave "<<endl;
			            cin>>opt6;
			            switch(opt6)
			            {
			            	case 1:{
			            		cout<<"\nENTER YOUR NAME\n ";
			            		cin>>name;
			            		cout<<"\nENTER YOUR DOB \n ";
			            		cin>>DOB;
			            		cout<<"\nENTER YOUR ADDRESS \n ";
			            		cin>>address;
			            		cout<<"\nENTER YOUR mob no:\n ";
			            		cin>>mob_no;
			            		cout<<"ENTER YOU BLOOD GROUP";
			            		cin>>blood_group;
								break;
							}
				    }
					break;
					}
		}
		}

}info1;
class doctor
{
	protected:
		string doc_name;
		string doc_type;
		string address;
		string email;
		int choice1;
		public:
			void doctor_menu()
			{
			cout<<"\n <<<<<<------MENU FOR DOCTOR------>>>>>> \n";
			cout<<"\n ENTER 1 TO ENTER DOCTOR DETIAL \n";
			cout<<"\n ENTER 2 TO DIPLAY DOCTOR \n";
			cin>>choice1;
			switch(choice1)
			{
				case 1 :
					{
			cout<<"\n <enter your  name doctor>  \n";
			cin>> doc_name;
			cout<<"\n <enter your  professional type  doctor>  \n";
			cin>>doc_type;
			cout<<"\n <enter your address doctor>\n ";
			cin>>address;
			cout<<"\n <enter your email-address doctor>\n ";
			cin>>email;
						break;
					}
					case 2:
					{

			cout<<"\ndoctor name is\n "<<doc_name;
			cout<<"\nprofessional type is\n  "<<doc_type;
			cout<<"\ndoc address is\n "<<address;
			cout<<"\nemail of the doctor is\n  "<< email ;

						break;
					}	
			}
}

}d1;

class accounts:public patient
{
protected:
	int Admit_CHARGES=1000;
	int Discharge_fee=1000;
	int che;
	int tl;
	public:
   total()
   {
   patient:: ADMIT_PATIENT();
  	cout<<"\nselect 1 for OPD CARDIALOGIST  specialist \nselect 2 GYNACOLOGIST  for \nselect 3 ENE( EAR NOSE EYE SPECIALIST ) \nselect 4  for NEUROSERGONS (BRAIN) \nselect 5 for NEPHRALOGISTS (KIDNEY SPECIALIST)\n";
  	cin>>che;
 switch (che){

		 	case 1:{
 		int doctor_charges =3000;
		tl=doctor_charges+Admit_CHARGES+Discharge_fee + no_of_days_admitted*charge_per_day;
		cout<<"your grand total is ="<<tl;
		break;
	}

		 	case 2:
			 {
 		int doctor_charges=2000;
		tl=doctor_charges+Admit_CHARGES+Discharge_fee + no_of_days_admitted*charge_per_day;
		cout<<"your grand total is ="<<tl;
		break;}

		 	case 3:
		 		{

			 int doctor_charges = 4000;
             tl=doctor_charges+Admit_CHARGES+Discharge_fee + no_of_days_admitted*charge_per_day;
		     	cout<<"your grand total is ="<<tl;
		      break;}

			case 4:{

			 		 int doctor_charges = 2500;
             tl=doctor_charges+Admit_CHARGES+Discharge_fee + no_of_days_admitted*charge_per_day;
			cout<<"your grand total is ="<<tl;
		break;}

		   case 5 :{

		 		int   doctor_charges =1800;
			tl=doctor_charges+Admit_CHARGES+Discharge_fee + no_of_days_admitted*charge_per_day;
			cout<<"your grand total is ="<<tl;
			break;
		}
		}

 }
 }ac1;
int main()
{

int selection,opt1;
char ch='n';
	cout<<"\n\n\t\t<-------------------HOSPITAL MANAGMENT SYSTEM BY CHARLY GROUP------------------->\n";
	cout<<"\t\t<<<<<GROUP-MEMBERS>>>>>\n\t<------------------->\n\t----> FAIZAN ARSHAD\n\n\t<------------------->\n\t----> MUHAMMAD ALI\n\n\t<------------------->\n\t----> GULSHER AKRAM\n\n\t<------------------->\n\t----> USAMA\n\t<------------------->";
	cout<<"\t\t<<<<<PRESS  ANY KEY TO CONTINUE>>>>>\n";
    ch = getche();
    cout<<"\n<-------------------------------------------------------------------------------------->\n";
    cout<<"\n\t\t\t<<---------------------<<THE MEDICAL CENTER >>>--------------------->>\n";
	cout<<"\t\t\t<<---------------<<<WELCOME TO MAIN MENU>>>--------------->>\n";
	cout<<"\n\n---------------------ENTER YOUR OPTIONAL NUMBER TO PROCEED---------------------\n\n";
        do
{
		cout<<"\n\t1 ----> PRESS 1 INFORMATION ABOUT DOCTORS AND PATIENTS.\n";
		cout<<"\t2 ----> PRESS 2 TO PROCEED TO  FOR FIRST VISIT MENU.\n";
		cout<<"\t3 ----> PRESS 3 TO PROCEED TO PATIENT MENU.\n";
		cout<<"\t4 ----> PRESS 4 TO PROCEED TO DOCTOR MENU.\n";
		cout<<"\t5 ----> PRESS 5 TO Accounts \n";
		cout<<"\t6 ----> PRESS 0 TO Exit.\n";
		cin>>selection;
		switch(selection)
		{
		case  1:
				{
		info1.info();
				break;
				}
		case 2:{
				info1.first_visit();
					break;
				}
		case  3:
				{
				p1.patient_menu();
				break;
				}
		case  4:
				{
					d1.doctor_menu();
			    break;
				}
		case  5:
				{
				ac1.total();
				break;
				}
		}
}
		while(selection != 0);
		return 0;
}
