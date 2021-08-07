#include<bits/stdc++.h>
#include<Windows.h>
using namespace std;
#define loop(i,a,b)         for(int i=a;i<=b;i++)
#define ll                  long long int
#define ld                  long double
#define mod                 1000000007
#define endl                "\n"
#define inf                 1e18
#define pb                 push_back
#define vi                 vector<int>
#define vvi                vector<vector<int> >
#define logarr(arr,a,b)    for(int i=a;i<=b;i++)  cout<<arr[i]<<"  ";   cout<<endl;
#define mid(l,hi)          l+(hi-l)/2;
#define bitc(n)            __builtin_popcount(n)



class Student
{
private:
  char id[40];
  char name[40];
  float oopm,digital,ds,discrete;

  float total;
  int roll_no;
public:
  void add()
  {

    system("cls");
    ofstream fout;
    Student obj;
    fout.open("Input.txt",ios::app);
    if(fout.fail())
    {
      cout<<"The File could not be OPEN ..... Press Enter Key";
      cin.ignore();
      cin.get();
    }
    cout<<endl;
    cout<<"~~~~~~~~~~~~~Enter Details~~~~~~~~~~~~~~~"<<endl<<endl<<endl;

    cout<<"Enter Student name :  ";
    cin.ignore();
    cin.getline(obj.name,40);
    cout<<"Enter Student id:  CSE/";
    cin.ignore();
    cin.getline(obj.id,40);
    cout<<"Enter Class Roll no:  ";
    cin>>obj.roll_no;
    cout<<"Enter marks of OOPM : ";
    cin>>obj.oopm;
    cout<<"Enter marks of Digital :  ";
    cin>>obj.digital;
    cout<<"Enter marks of Data Structure(DS) :  ";
    cin>>obj.ds;
    cout<<"Enter marks of Discrete : ";
    cin>>obj.discrete;
    obj.total=(obj.oopm+obj.ds+obj.discrete+obj.digital);
   fout.write(reinterpret_cast<char *>(&obj) , sizeof(Student));
   fout.close();
   cout<<endl;
   cout<<"\t\t\t\tTHE FILE IS SUCCESSFULLY SAVED"<<endl;
   cout<<endl;
   cout<<"press any key to continue.....";
   cin.ignore();
   cin.get();
  }
  void view_record()
  {
    system("cls");
    Student obj;
    ifstream fin;
    fin.open("Input.txt",ios::app|ios::binary);
    if(fin.fail())
    {
      cout<<"THE FILE COULD NOT BE OPENED.................PRESS ANY KEY TO RETURN BACK!!"<<endl;
      cin.ignore();
      cin.get();
    }
    bool test=false;
    cout<<"=============All Student Report==================="<<endl<<endl<<endl;
    cout<<"###############################################################################"<<endl;

    while(fin.read(reinterpret_cast<char *>(&obj),sizeof(Student)))
    {
      cout<<"\tSTUDENT NAME :  "<<obj.name<<endl<<endl;
      cout<<"\tSTUDENT ID  :  "<<obj.id<<endl<<endl;
      cout<<"\tROLL NO  :  "<<obj.roll_no<<endl<<endl;
      cout<<"\tOOPM MARKS  :  "<<obj.oopm<<endl<<endl;
      cout<<"\tDIGITAL MARKS   :  "<<obj.digital<<endl<<endl;
      cout<<"\tDISCRETE MARKS  :  "<<obj.discrete<<endl<<endl;
      cout<<"\tDATA_STR MARKS  :  "<<obj.ds<<endl<<endl;
      cout<<"\tTOTAL MARKS  :  "<<obj.total<<endl<<endl;

      cout<<"###############################################################################"<<endl<<endl;

      test=true;
    }
    fin.close();
    if(test==false)
    {
      cout<<"\t\tNO RECORD FOUND..............!!!!!"<<endl<<endl;

    }
    cout<<"PRESS ANY KEY TO CONTINUE.............."<<endl<<endl;
    cin.ignore();
    cin.get();
  }
  void view_one(int n)
  {
    system("cls");
    Student obj;
    ifstream fin;
    fin.open("Input.txt",ios::app|ios::binary);
    if(fin.fail())
    {
      cout<<"\tTHE FILE COULD NOT OPEN....!!"<<endl<<endl;
      cin.ignore();
      cin.get();
    }
    bool test=false;
    cout<<"================VIEW SINGLE STUDENT RECORD=============";
    while (fin.read(reinterpret_cast<char *>(&obj),sizeof(Student))) {
      if(obj.roll_no==n)
      {
        cout<<"\tSTUDENT NAME :  "<<obj.name<<endl<<endl;
        cout<<"\tSTUDENT ID :  "<<obj.id<<endl<<endl;
        cout<<"\tROLL NO  :  "<<obj.roll_no<<endl<<endl;
        cout<<"\tOOPM MARKS  :  "<<obj.oopm<<endl<<endl;
        cout<<"\tDIGITAL MARKS  :  "<<obj.digital<<endl<<endl;
        cout<<"\tDISCRETE MARKS :  "<<obj.discrete<<endl<<endl;
        cout<<"\tDATA_STR MARKS :  "<<obj.ds<<endl<<endl;
        cout<<"\tTOTAL MARKS :  "<<obj.total<<endl<<endl;

        cout<<"###############################################################################"<<endl<<endl;

        test=true;
      }
    }
    if(test==false)
    {
      cout<<"NO RECORD FOUND .......!!"<<endl<<endl;
    }
    cin.ignore();
    cin.get();
  }
 void Edit(int n)
  {
    system("cls");
    Student obj;
    fstream fin;
    fin.open("Input.txt",ios::app|ios::binary);
    if(fin.fail())
    {
      cout<<"\t THE FILE COULD NOT OPEN .......!!!"<<endl<<endl;
      cin.ignore();
      cin.get();
    }
    bool test=false;
    cout<<"~~~~~~~~~~~~~~~~~~~~MODIFY A REPORT CARD~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    while(!fin.eof() && test==false)
    {
      fin.read(reinterpret_cast<char *>(&obj),sizeof(Student));
      {
        if(obj.roll_no==n)
        {
          cout<<"\tSTUDENT NAME : "<<obj.name<<endl<<endl;
          cout<<"\tSTUDENT ID  : "<<obj.id<<endl<<endl;
          cout<<"\tROLL NO :  "<<obj.roll_no<<endl<<endl;
          cout<<"\tOOPM MARKS : "<<obj.oopm<<endl<<endl;
          cout<<"\tDIGITAL MARKS : "<<obj.digital<<endl<<endl;
          cout<<"\tDISCRETE MARKS : "<<obj.discrete<<endl<<endl;
          cout<<"\tDATA_STR MARKS : "<<obj.ds<<endl<<endl;
          cout<<"\tTOTAL MARKS :  "<<obj.total<<endl<<endl;

          cout<<"###############################################################################"<<endl<<endl;
          cout<<"\t\tENTER THE NEW INFORMATION"<<endl<<endl;
          cout<<"################################################################################"<<endl<<endl;
          cout<<"ENTER YOUR FULL NAME :";
          cin.ignore();
          cin.getline(obj.name,40);
          cout<<"ENTER STUDENT ID CSE/";
          cin.ignore();
          cin.getline(obj.id,40);
          cout<<"ENTER YOUR ROLL NO  :";
          cin>>obj.roll_no;
          cout<<"Enter marks of OOPM  :-";
          cin>>obj.oopm;
          cout<<"Enter marks of Digital   :-";
          cin>>obj.digital;
          cout<<"Enter marks of Data Structure(DS) :-";
          cin>>obj.ds;
          cout<<"Enter marks of Discrete     :-";
          cin>>obj.discrete;
          obj.total=(obj.oopm+obj.ds+obj.discrete+obj.digital);

          int pos=(-1)*static_cast<int>(sizeof(Student));
          fin.seekp(pos,ios::cur);
          fin.write(reinterpret_cast<char *>(&obj),sizeof(Student));
          cout<<endl;
          cout<<"\t\t FILE IS SUCCESSFULLY UPDATED ...................!!"<<endl<<endl;
          test=true;
        }
      }
    }
    fin.close();
    if(test==false)
      cout<<"\t\tRECORD NOT FOUND"<<endl;
      cout<<endl<<endl;
      cout<<"PRESS ANY KEY TO CONTINUE  ..............";
      cin.ignore();
      cin.get();
  }
  void Result(int n)
  {
    system("cls");
    Student obj;
    ifstream fin;
    fin.open("Input.txt",ios::app|ios::binary);
    if(fin.fail())
    {
      cout<<"\t\tTHE FILE COULD NOT OPEN .............!!"<<endl;
      cin.ignore();
      cin.get();
    }
    bool test=false;
    cout<<"\t\t======================RESULT==================="<<endl<<endl;
    while(fin.read(reinterpret_cast<char *>(&obj),sizeof(Student)))
    {
      if(obj.roll_no==n)
      {
        cout<<"\tSTUDENT NAME : "<<obj.name<<endl<<endl;
        cout<<"\tSTUDENT ID  : "<<obj.id<<endl<<endl;
        cout<<"\tROLL NO : "<<obj.roll_no<<endl<<endl;
        cout<<"\tOOPM MARKS : "<<obj.oopm<<endl<<endl;
        cout<<"\tDIGITAL MARKS : "<<obj.digital<<endl<<endl;
        cout<<"\tDISCRETE MARKS : "<<obj.discrete<<endl<<endl;
        cout<<"\tDATA_STR MARKS : "<<obj.ds<<endl<<endl;
        cout<<"\tTOTAL MARKS : "<<obj.total<<endl<<endl;

        cout<<"###############################################################################"<<endl<<endl;

        test=true;
      }
    }
    fin.close();
    if(test==false)
      cout<<"\tNO RECORD FOUND.............."<<endl<<endl;
    cout<<"PRESS ANY KEY TO CONTINUE"<<endl;
    cin.ignore();
    cin.get();
  }
  void Remove(int n)
  {
    system("cls");
    Student obj;
    ifstream fin;
    fin.open("Input.txt",ios::binary);
    if(fin.fail())
    {
      cout<<"\t THE FILE COULD NOT OPEN .............!"<<endl;
      cin.ignore();
      cin.get();
    }
    ofstream fout;
    fout.open("Input2.txt",ios::binary);
    fin.seekg(0,ios::beg);
    cout<<"\t\t\t------------------------DELETE A REPORT CARD-------------------- "<<endl<<endl;
    while(fin.read(reinterpret_cast<char *>(&obj),sizeof(Student)))
    {
      if(obj.roll_no!=n)
      {
        fout.write(reinterpret_cast<char *>(&obj),sizeof(Student));

      }
    }
    fin.close();
    fout.close();
    remove("Input.txt");
    rename("Input1.txt","Input.txt");
    cout<<endl;
    cout<<"\t\tFILE SUCCESSFULLY DELETED .................!!!"<<endl<<endl;
    cout<<"PRESS ANY KEY TO CONTINUE................!!"<<endl<<endl;
    cin.ignore();
    cin.get();
  }
};
void main_menu()
{
  int n;
  system("Color C");
  cout<<"\t\t\t================================Main Menu==================================\t\t\t"<<endl<<endl<<endl;
  cout<<"\t\t\t\t\t 1. Create New Record"<<endl<<endl;
  Sleep(500);
  cout<<"\t\t\t\t\t 2. View Record OF All Students"<<endl<<endl;
  Sleep(500);
  cout<<"\t\t\t\t\t 3. View Individual Student Record"<<endl<<endl;
  Sleep(500);
  cout<<"\t\t\t\t\t 4. Modify Report Card"<<endl<<endl;
  Sleep(500);
  cout<<"\t\t\t\t\t 5. Result"<<endl<<endl;
  Sleep(500);
  cout<<"\t\t\t\t\t 6. Delete Record"<<endl<<endl;
  Sleep(500);
  cout<<"\t\t\t=============================================================================\t\t\t"<<endl<<endl<<endl;
  cout<<"\t\t\t\t\tEnter your Choice :";
  cin>>n;
  switch(n)
  {
    case 1:
       {
         Student obj1;
         obj1.add();
         break;
       }
    case 2:
        {
          Student obj1;
          obj1.view_record();
          break;
        }
    case 3:
       {
         int temp;
         cout<<"ENTER ROLL NO:";
         cin>>temp;
         Student obj;
         obj.view_one(temp);
         break;
       }
    case 4:
       {
         int temp;
         cin>>temp;
         Student obj;
         obj.Edit(temp);
         break;
       }
    case 5:
       {
         int temp;
         cout<<"ENTER ROLL NO WHOM RESULT YOU WANT :";
         cin>>temp;
         Student obj;
         obj.Result(temp);
         break;
       }
    case 6:
       {
         int temp;
          cout<<"ENTER ROLL NO WHOM DATA YOU WANT TO DELETE";
          cin>>temp;
          Student obj;
          obj.Remove(temp);
         break;
       }
    default:
        cout<<"You Enter Wrong Choice !! TRY AGAIN";
        break;
  }
}

 void intro()
 {

    cout << "\n\n\n";
    Sleep(300);
    cout << "\t\t\t\t * * *  **** *      ****  ***   ***   ****   " << endl;
    Sleep(300);
    cout << "\t\t\t\t * * * *     *     *     *   * * * * *        "<< endl;
    Sleep(300);
    cout << "\t\t\t\t * * * ***** *     *     *   * * * * *****    " << endl;
    Sleep(300);
    cout << "\t\t\t\t * * * *     *     *     *   * * * * *         " << endl;
    Sleep(300);
    cout << "\t\t\t\t  ***   **** *****  ****  ***  * * *  ****     " << endl;
    Sleep(300);
    cout<<endl;
    cout<<"\t\t\t\t============================================="<<endl;
    Sleep(500);
    cout<<"\t\t\t\tTHIS IS STUDENT REPORT CARD MANEGEMENT SYSTEM"<<endl;
    Sleep(500);
    cout<<"\t\t\t\t============================================="<<endl;
    Sleep(500);
    cout<<"press any key to continue...";
    cin.ignore();
    cin.get();
  }

int main()
{
  system("Color d");
  int  c;
  system("cls");
  intro();
  do {
    system("cls");
    system("color e");
    cout<<endl<<endl;
    cout<<"\t\t\t********STUDENT MANAGEMENT SYSTEM********";
    cout<<endl<<endl<<endl;
    cout<<"\t\t 1. Main Menu"<<endl<<endl;
    cout<<"\t\t 2. Exit"<<endl<<endl;
    cout<<"\t\t Enter Your Choice(1,2)  :  "<<endl;
    cin>>c;
    system("cls");
    switch(c)
    {
      case 1:
        {
          main_menu();
          break;
        }
      case 2:
      {
        cout<<"\t\t\t===================================THANK YOU  ...... !!===================================="<<endl;
        break;
      }
      default:
        cout<<"PLEASE ENTER CORRECT CHOICE";
        break;
    }
  } while(c!=2);
  return 0;
}
