#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#include<cmath>

using namespace std ;

string checkdepart(int z) {
    switch(z) {

        case 1 : return"Cardiology Departmant" ;
        break ;

        case 2 : return"Endocrinology Departmant" ;
        break ;

        case 3 : return"ENT Departmant" ;
        break ;

        case 4 : return"Gastroenterology Departmant" ;
        break ;

        case 5 : return"Geriatric Medicine Departmant" ;
        break ;

        case 6 : return"Hematology Departmant" ;
        break ;

        case 7 : return"Nephrology Departmant" ;
        break ;

        case 8 : return"Obs and Gynae Departmant" ;
        break ;

        case 9 : return"Ophthalmology Departmant";
        break ;

        case 10 : return"Orthopedics Departmant" ;
        break ;

        case 11 : return"Paediatrics Departmant" ;
        break ;

        case 12 : return"PMR Departmant" ;
        break ;

        case 13 : return"Psychiatry Departmant" ;
        break ;

        case 14 : return"Sleep Disorder Departmant" ;
        break ;

        case 15 : return"Rheumatology Departmant" ;
        break ;

        case 16 : return"Skin Departmant" ;
        break ;

        case 17 : return"Urology Departmant" ;
        break ;

        case 18 : return"Pulmonary Medicine" ;
        break ;

        case 19 : return"OPD" ;
        break ;

        default : return"N.A." ;
        break;
    }
}

int cardiology() {
    cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
        
 	    i++;
 
	    }
	    a.close();
}
int endocrinology() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'$');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int ent() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'&');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int gastroenterology() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'@');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int geriatric() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'#');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int hematology() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'%');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int nephrology() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'!');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int obsAndGynae() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'^');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int ophthalmology() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'*');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int orthopedics() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'(');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int paediatrics() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,')');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int pmr() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,':');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int psychiatry() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'_');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int sleep() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'=');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int rheumatology() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'+');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int skin() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'[');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int urology() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,']');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int pulmonary() {

       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'?');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();

}
int opd() {
	
       cout<<"\n" ;

    ifstream a ;

    a.open("doctor.txt") ;
    if(!a) {
        cout<<"FILE DO NOT EXIST !!\n" ;
        return 1 ; 
    }

        string discard;
        getline(a,discard,'/');

    	string depart;
	    int x,y,z,b,i=0;
        cout << setw(5) << "Slot ID:" << setw(35) << "DEPARTMENT" << setw(35) << "NAME" << setw(35) <<"TIMINGS"<<endl << endl;

	
	    while  (i!=4) {
	
	    a>>x;
	    a.ignore();
	
	    a>>y;
	    depart=checkdepart(y);
	    a.ignore();
	
	    a >> z;
	    a.ignore();
	
	    a>>b;
	    a.ignore();
	    string line;
	    getline(a,line,',');
	
	    cout<<setw(4)<<x<<setw(35)<<depart<<setw(35)<<line<<setw(35)<<z<<"-"<<b<<endl;
 	    i++;
 
	    }
	    a.close();
    
}

bool checkavailable(int id) {
    fstream a ("appointment.txt");
    if (!a) {
	     cout << "Can't open file" << endl;
        return 1;
    }
    int number;
    a >> number;

    while(!a.eof()) {
        if (number == id) {
            return false;    
        }
        a >> number;  
    }
    return true;
    a.close();
}
/*int appointmentDetails() {

}*/
int startappointment(int d) {
	bool check = false ;
	while(!check) {
		int id ;
		cout<<"\nPlease note your Slot ID for appointment reference."<<"\nEnter your desired Doctor's Slot ID number : " ;
		cin>>id ;
		while(cin.fail()) {
			cout<< "\nEnter number for above options : " ;
			cin.clear() ;
			cin.ignore() ;
			cin>> id ;
		}
		switch(d) {

			case 1 : do{
				if(id!=101&&id!=201&&id!=301&&id!=401) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=101&&id!=201&&id!=301&&id!=401) ;
			break;

			case 2 : do{
				if(id!=501&&id!=601&&id!=701&&id!=801) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=501&&id!=601&&id!=701&&id!=801) ;
			break;

			case 3 : do{
				if(id!=901&&id!=1001&&id!=1101&&id!=1201) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=901&&id!=1001&&id!=1101&&id!=1201) ;
			break;

			case 4 : do{
				if(id!=1301&&id!=1401&&id!=1501&&id!=1601) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=1301&&id!=1401&&id!=1501&&id!=1601) ;
			break;

			case 5 : do{
				if(id!=1701&&id!=1801&&id!=1901&&id!=2001) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=1701&&id!=1801&&id!=1901&&id!=2001) ;
			break;

			case 6 : do{
				if(id!=2101&&id!=2201&&id!=2301&&id!=2401) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=2101&&id!=2201&&id!=2301&&id!=2401) ;
			break;

			case 7 : do{
				if(id!=2501&&id!=2601&&id!=2701&&id!=2801) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=2501&&id!=2601&&id!=2701&&id!=2801) ;
			break;

			case 8 : do{
				if(id!=2901&&id!=3001&&id!=3101&&id!=3201) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=2901&&id!=3001&&id!=3101&&id!=3201) ;
			break;

			case 9 : do{
				if(id!=3301&&id!=3401&&id!=3501&&id!=3601) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=3301&&id!=3401&&id!=3501&&id!=3601) ;
			break;

			case 10 : do{
				if(id!=3701&&id!=3801&&id!=3901&&id!=4001) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=3701&&id!=3801&&id!=3901&&id!=4001) ;
			break;

			case 11 : do{
				if(id!=4101&&id!=4201&&id!=4301&&id!=4401) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=4101&&id!=4201&&id!=4301&&id!=4401) ;
			break;

			case 12 : do{
				if(id!=4501&&id!=4601&&id!=4701&&id!=4801) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=4501&&id!=4601&&id!=4701&&id!=4801) ;
			break;

			case 13 : do{
				if(id!=4901&&id!=5001&&id!=5101&&id!=5201) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=4901&&id!=5001&&id!=5101&&id!=5201) ;
			break;

			case 14 : do{
				if(id!=5301&&id!=5401&&id!=5501&&id!=5601) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=5301&&id!=5401&&id!=5501&&id!=5601) ;
			break;

			case 15 : do{
				if(id!=5701&&id!=5801&&id!=5901&&id!=6001) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=5701&&id!=5801&&id!=5901&&id!=6001) ;
			break;

			case 16 : do{
				if(id!=6101&&id!=6201&&id!=6301&&id!=6401) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=6101&&id!=6201&&id!=6301&&id!=6401) ;
			break;

			case 17 : do{
				if(id!=6501&&id!=6601&&id!=6701&&id!=6801) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=6501&&id!=6601&&id!=6701&&id!=6801) ;
			break;

			case 18 : do{
				if(id!=6901&&id!=7001&&id!=7101&&id!=7201) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=6901&&id!=7001&&id!=7101&&id!=7201) ;
			break;

			case 19 : do{
				if(id!=7301&&id!=7401&&id!=7501&&id!=7601) {
					cout<< "\nEnter Valid Doctor's Slot ID Number : " ;
				}
				else
				break;
				cout<< "\nEnter your desired Doctor's Slot ID number : " ;
				cin>> id ;
			}while(id!=7301&&id!=7401&&id!=7501&&id!=7601) ;
			break;

			default : cout<< "\nEnter Valid Input !!" ;
			break;
		}

		bool found = checkavailable(id) ;
		if(!found) {
            cout<<"\nDoctor Unavailable !!" ;
        } else {
            string data ;
            ofstream a ;
            a.open("appointment.txt",std::ofstream::out|std::ofstream::app);
            a<<id<<endl ;
            check = true ;
            cout<< "\nAppointment successful !!"<< endl << "Please note your Slot ID for appointment reference." ;
        }
        int set() ;

	}

}
int checkappointment(int id) {

    ifstream a ("appointment.txt");
    if (!a) {    
        cout << "Can't open file" << endl;
        return 1;
    }
    
    int number;
    bool found;
    a >> number;

    while(!a.eof()) {
        if (number == id) {
        cout << "\nFound\nPlease proceed to the waiting area.\nYou'll shortly be guided to your Doctor" << endl;
        found=true;
        }
        a >> number;
    }
    if(!found) {
        cout<<"\nNot Found !!\n";
    }
    a.close();
}

class user {

	protected: 
		int id;
		string name;
		char gender;
		long long phnNum[10] ;

	public:
		int set() {

			cin.ignore();
			cout <<"\t\tEnter Name : " ;
			getline(cin, name) ;

			cout<< "\n\t\tEnter Gender(M/F/T) :" ;
			cin>>gender;

			bool check = false ;
            while(check==false) {
		        if(gender!='M'&&gender!='m'&&gender!='F'&&gender!='f'&&gender!='T'&&gender!='t') {
                    try {
                        throw &gender;
                    }
                    catch (char *gender) {
                        cout<<"enter valid input:"<<endl;
                        cin>>*gender;
                        if(*gender=='M'||*gender=='m'||*gender=='F'||*gender=='f'||*gender=='T'||*gender=='t'){
                            check=true;
                        }
                    }
                } else {
                    check = true ;
                }
            }

			cout<<"\n\t\tEnter Phone number : " ;
			cin.ignore() ;
			cin>>phnNum[10] ;
			while (cin.fail()) {
				cout << "\nEnter phone number in numericals digits : " ;
				cin.clear() ;
				cin.ignore() ;

				cin>> phnNum[10] ;
			}
			

		}

		string getName() {
			return name ;
		}
		int getid() {
			return id ;
		}
		char getGender() {
			return gender ;
		}
		long long getPhnNum() {
			return phnNum[10] ;
		}

} ;
class doctor:public user {
	private:
		string special;
	public:
		int setspcial(string sp){
		special=sp;
	}
		string getspecial(){
			return special;
	}
		void checkPatient(){
		cout<<"Patient checked.";	
	}
		void prescribeMedicine(){
		cout<<"Medicine prescription sent to pharmacy."<<endl;
	}
		void generateReport(){
		cout<<"reports will be available to collect after 10 days from the check-up date."<<endl;
	}
} ;
class paitent:public user {
	int choice ;
	public : int set() {
		
		user::set();
		system("CLS") ;
		cout<< "\n\t\tChoose Departmant: \n" << "\t\t\t1. Cardiology\n\t\t\t2. Endocrinology\n\t\t\t3. ENT\n\t\t\t4. Gastroenterology\n\t\t\t5. Geriatric Medicine\n\t\t\t6. Hematology\n\t\t\t7. Nephrology\n\t\t\t8. Obs and Gynae\n\t\t\t9. Ophthalmology\n\t\t\t10. Orthopedics\n\t\t\t11. Paediatrics\n\t\t\t12. PMR\n\t\t\t13. Psychiatry\n\t\t\t14. Sleep Disorder\n\t\t\t15. Rheumatology\n\t\t\t16. Skin\n\t\t\t17. Urology\n\t\t\t18. Pulmonary Medicine\n\t\t\t19. OPD" <<"\n\n" ;
		cin>>choice ;
		while(cin.fail()) {
			cout<<"\nEnter number for above options : " ;
			cin.clear() ;
			cin.ignore() ;
			cin>>choice ;
		}

		bool check = false ;
		while(!check) {
			if(choice>=1&&choice<=19) {
				check = true ;
			} else {
				try {
					throw &choice ;
				}
				catch(int *choice) {
					cout<< "\n\t\tEnter Valid Input !! : " ;
					cin>> *choice ;
					while(cin.fail()) {
						cout<<"Enter number for above options : " ;
						cin.clear() ;
						cin.ignore() ;
						cin>> *choice ;
					}
				}
			}

		}

		switch (choice) {

			case 1 : cardiology() ;
			break;

			case 2 : endocrinology() ;
			break;

			case 3 : ent() ;
			break;

			case 4 : gastroenterology() ;
			break;

			case 5 : geriatric() ;
			break;

			case 6 : hematology() ;
			break;

			case 7 : nephrology() ;
			break;

			case 8 : obsAndGynae() ;
			break;

			case 9 : ophthalmology() ;
			break;

			case 10 : orthopedics() ;
			break;

			case 11 : paediatrics() ;
			break;

			case 12 : pmr() ;
			break;

			case 13 : psychiatry() ;
			break;

			case 14 : sleep() ;
			break;

			case 15 :rheumatology()  ;
			break;

			case 16 : skin() ;
			break;

			case 17 : urology() ;
			break;

			case 18 : pulmonary() ;
			break;

			case 19 : opd() ;
			break;
		
			default: cout<< "Department Not Present !!" ;
			break;
		}
        return choice ;
	}
} ;
class process:public user {
	bool available = false ;
	char ans ;
	int id = 100 ;
	public: process() {
	}
	process(int d) {
		cout<<"\nDo you have an appointment (Y/N) ?" ;
		cin>>ans ;
		bool check = false ;
		/*while(!check){
			if(ans=='Y'||ans=='y'||ans=='N'||ans=='n') {
				check = true ;
			} else {
				try {
					throw &ans;
				}
				catch (char *ans) {
					cout<<"\nEnter Valid Input !!:"<<endl;
					cin>>*ans;
					if(*ans=='Y'||*ans=='y'||*ans=='N'||*ans=='n'){
						check=true;
					}
				}
			}
		}*/
        while(check==false) {
            if(ans!='Y'&&ans!='y'&&ans!='N'&&ans!='n') {
                try {
                    throw &ans;
                }
                catch (char *ans) {
                    cout<<"enter valid input:"<<endl;
                    cin>>*ans;
                    if(*ans=='Y'||*ans=='y'||*ans=='N'||*ans=='n'){
                        check=true;
                    }
                }
            } else {
            check=true;
            }
	    }
		char choice ;
		switch(ans) {
			case 'N' :
			case 'n' :
				cout<<"\nDo you want an Appointment? (A) or Walk In? (W)" ;
				cin>>choice ;
				check = false ;
				/*while(!check) {
					if(choice=='A'&&choice=='a'&&choice=='W'&&choice=='w') {
						check = true ;
					} else {
						try {
							throw &choice ;
						}
						catch(char *choice) {
							cout<<"\nEnter Valid Input !!:"<<endl;
							cin>>*choice;
							if(*choice=='A'||*choice=='a'||*choice=='W'||*choice=='w'){
								check=true;
							}
						}
					}
				} */
                while(check==false){	
                    if(choice!='A'&&choice!='a'&&choice!='W'&&choice!='w') {
                        try {
                            throw &choice;
                        }
                        catch (char *choice) {
                            cout<<"enter valid input:"<<endl;
                            cin>>*choice;
                            if(*choice=='A'||*choice=='a'||*choice=='W'||*choice=='w'){
                                check=true;
                            }
                        }
                    } else {
                    check=true;
                    }
	            }
				if(choice=='A'||choice=='a') {
					startappointment(d) ;
				} else if(choice=='W'||choice=='w') {
					while(!available) {
						switch(d)
						{
							case 1 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=101&&id!=201&&id!=301&&id!=401) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=101&&id!=201&&id!=301&&id!=401) ;
							break;

							case 2 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=501&&id!=601&&id!=701&&id!=801) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=501&&id!=601&&id!=701&&id!=801) ; ;
							break;

							case 3 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=901&&id!=1001&&id!=1101&&id!=1201) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=901&&id!=1001&&id!=1101&&id!=1201) ; ;
							break;

							case 4 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=1301&&id!=1401&&id!=1501&&id!=1601) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=1301&&id!=1401&&id!=1501&&id!=1601) ; ;
							break;

							case 5 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=1701&&id!=1801&&id!=1901&&id!=2001) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=1701&&id!=1801&&id!=1901&&id!=2001) ; ;
							break;

							case 6 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=2101&&id!=2201&&id!=2301&&id!=2401) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=2101&&id!=2201&&id!=2301&&id!=2401) ; ;
							break;

							case 7 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=2501&&id!=2601&&id!=2701&&id!=2801) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=2501&&id!=2601&&id!=2701&&id!=2801) ; ;
							break;

							case 8 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=2901&&id!=3001&&id!=3101&&id!=3201) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=2901&&id!=3001&&id!=3101&&id!=3201) ; ;
							break;

							case 9 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=3301&&id!=3401&&id!=3501&&id!=3601) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=3301&&id!=3401&&id!=3501&&id!=3601) ; ;
							break;

							case 10 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=3701&&id!=3801&&id!=3901&&id!=4001) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=3701&&id!=3801&&id!=3901&&id!=4001) ; ;
							break;

							case 11 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=4101&&id!=4201&&id!=4301&&id!=4401) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=4101&&id!=4201&&id!=4301&&id!=4401) ; ;
							break;

							case 12 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=4501&&id!=4601&&id!=4701&&id!=4801) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=4501&&id!=4601&&id!=4701&&id!=4801) ; ;
							break;

							case 13 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=4901&&id!=5001&&id!=5101&&id!=5201) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=4901&&id!=5001&&id!=5101&&id!=5201) ; ;
							break;

							case 14 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=5301&&id!=5401&&id!=5501&&id!=5601) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=5301&&id!=5401&&id!=5501&&id!=5601) ; ;
							break;

							case 15 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=5701&&id!=5801&&id!=5901&&id!=6001) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=5701&&id!=5801&&id!=5901&&id!=6001) ; ;
							break;

							case 16 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=6101&&id!=6201&&id!=6301&&id!=6401) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=6101&&id!=6201&&id!=6301&&id!=6401) ; ;
							break;

							case 17 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=6501&&id!=6601&&id!=6701&&id!=6801) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=6501&&id!=6601&&id!=6701&&id!=6801) ; ;
							break;

							case 18 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=6901&&id!=7001&&id!=7101&&id!=7201) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=6901&&id!=7001&&id!=7101&&id!=7201) ; ;
							break;

							case 19 : do {
								cout<< "\nEnter your desired Doctor's Slot ID number : " ;
								cin>>id ;
								while(cin.fail()) {
									cout<< "\nEnter Valid Input !! : " ;
									cin.clear() ;
									cin.ignore() ;
									cin>> id ;
								}
								if(id!=7301&&id!=7401&&id!=7501&&id!=7601) {
									cout<<"\nEnter Doctor's Valid Slot ID Number (as shown on screen) :" ;
								}
							} while(id!=7301&&id!=7401&&id!=7501&&id!=7601) ; ;
							break;
						
							default: cout<< "\nEnter Valid Input !!" ;
							break;
						}

						available = checkavailable(id) ;
						if(!available) {
							cout<<"\nNot Available !!" ;
						} else {
							cout<<"Doctor Avilable :)" ;
						}
					}
				} else {
					cout<< "\nEnter Valid Input\t !!" ;
				}
				break ;

			case 'y' :
			case 'Y' :
				int id ;
				cout<< "\nEnter Your Assigned Doctors Slot ID number : " ;
				cin>> id ;
				while(cin.fail()) {
					cout<< "\nEnter Valid Input !!" ;
					cin.clear() ;
					cin.ignore() ;
					cin>> id ;
				}
				checkappointment(id) ;
				break;

			default : cout<< "\n______________________________" ;
			break;
				
		}
	}

} ;
class facility {
	private: int	No_of_Rooms;
	public: int updatedoctor() {

		fstream fin;
		fin.open("doctor.txt",fstream::in);
   		stringstream sstr;

   		string x;
		string o;
   		string temp;
   		cin.ignore();
   		cout<<"Enter the name of Doctor which you want to replace:"<<endl;
   
  		getline(cin,x);
   
		cout<<"Enter the name of new doctor:";
   		getline(cin,o);
 

		int comma=0;
			while(! fin.eof() ) {
				getline(fin, temp, '\n');
				if (temp.find(x) != std::string::npos) {
					for (int i=0; i<temp.length(); i++) {
						sstr<<temp[i]; 
						if (temp[i] == ',') {
							comma++;
						}
						if (comma==4) {
							break;
						}
					}
					sstr<<o<<",";
					if (temp[temp.length()-1] != ',') {
						sstr<<temp[temp.length()-1];
					}
					sstr<<endl;	

				} else {
					sstr << temp << endl ;
				}
			}
	
   		fin.close();
   
		fstream fout;
		fin.open("doctor.txt", fstream::out | fstream::trunc);
		fin << sstr.str();
}


	bool checkpass(string pass) {
		string password="pass" ;
		if(password==pass){
			return true;
		}
		else
		return false;
	}
} ;

int main(void) {

    cout<< setw(25)<< "\n\t\t\t\tHOSPITAL MANAGEMENT"<<endl ;
    int ans;
    bool check = false ;
    cout<<"\t\t1. Doctor Present\n\t\t2. Appointment\n\n\t\tAdministration Login\n\t\t3. Doctor Login\n\t\t Input : " ;
    cin>>ans ;

    while(cin.fail()) {

        cout << "\n\t\tEnter a number for Above Choice !!!\n" ;
        cin.clear() ;
        cin.ignore() ;
        cin>> ans ;
    }
    while(!check){
        if(ans>=1&&ans<=3) {
            check = true ;
        } else {
            try
            {
                throw &ans ;
            }
            catch(int *ans)
            {
                cout<<"\n\t\tEnter a number for Above Choice !!!\n" ;
                cin>> *ans ;
                while(cin.fail()) {

                    cout << "\n\t\tEnter a number for Above Choice !!!\n" ;
                    cin.clear() ;
                    cin.ignore() ;
                    cin>> *ans ;
                }
            }
            
        }
    }
	int pass, d ;

    switch(ans) {

        case 1 :
            
            cardiology() ;
            endocrinology() ;
            ent() ;
            gastroenterology() ;
            geriatric() ;
            hematology() ;
            nephrology() ;
            obsAndGynae() ;
            ophthalmology() ;
            orthopedics() ;
            paediatrics() ;
            pmr() ;
            psychiatry() ;
            sleep() ;
            rheumatology() ;
            skin() ;
            urology() ;
            pulmonary() ;
            opd() ;
        break;

        case 2 : 
        {
            paitent opt ;
            d=opt.set() ;
        }
        {
            process pro(d) ;
        }
        break;

        case 3 : 
		{
			facility b;
			string pass ;
			bool check = false ;
			while(check!=true){
				cout<<"\n\t\t\t\tEnter PassWord : ";
				cin>>pass;
				check=b.checkpass(pass);
				if(check==true){
					cout<<"\n\n\t\t\t\tAccess granted"<<endl;
					b.updatedoctor();		
				} else
				cout<<"\n\n\t\t\t\tAccess denied"<<endl;
			}
		}
		break;

		default : cout<<"\nEnter Vaild Input !!" ;
        break ;
	}
	system("pause") ;
}
