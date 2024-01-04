#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    int a,i=0;
    string text,old,password1,password2,password0,pass,name,age,user,word,word1;
    string creds[2],cp[2];
    cout<<"        SECURITY SYSTEM "<<endl;

    cout<<"__________________________________"<<endl<<endl;
    cout<<"|       1.Register                |"<<endl;
    cout<<"|       2.Login                   |"<<endl;
    cout<<"|       3.Change Password         |"<<endl;
    cout<<"|_______4.End Program_____________|"<<endl;

    do{
        cout<<endl<<endl;
        cout<<"Enter your choice :-";
        cin>>(a);
        switch (a)
        {
            case 1:{
                cout<<"____________________________________"<<endl<<endl;
                cout<<"|-------------Register---------------|"<<endl;
                cout<<"|____________________________________|"<<endl;
                cout<<"Please Enter Your Name :- ";
                cin>>name;
                cout<<"Please Enter The Password :- ";
                cin>>password0;
                cout<<"Please Enter Your Age :- ";
                cin>>age;

                ofstream of1;
                of1.open("file.txt");
                if(of1.is_open()){
                    of1<<name<<"\n";
                    of1<<password0;
                    cout<<"------Registration Successfull------"<<endl;
                }
                break;
            }
            case 2:{
                i=0;
                cout<<"__________________________________"<<endl<<endl;
                cout<<"|------------Login---------------|"<<endl;
                cout<<"|_________________________________|"<<endl;

                ifstream of2;
                of2.open("file.txt");
                cout<<"Please Enter The Username :- ";
                cin>>user;
                cout<<"Please Enter The Password :- ";
                cin>>pass;

                if(of2.is_open()){
                    while(!of2.eof()){
                        while(getline(of2,text)){
                            istringstream iss(text);
                            iss>>word;
                            creds[i]=word;
                            i++;
                        }
                        if(user==creds[0] and pass==creds[1]){
                            cout<<"-----Login Successfull-----";
                            cout<<endl<<endl;

                            cout<<"Details: "<<endl;
                            cout<<"Username :- "<<name<<endl;
                            cout<<"Password :- "<<pass<<endl;
                            cout<<"Age :- "<<age<<endl;
                        }
                        else{
                            cout<<endl<<endl;
                            cout<<"Incorrect Credentials "<<endl;
                            cout<<"|      1.Press 2 to Login             |"<<endl;
                            cout<<"|      2.Press 3 to Change Password   |"<<endl;
                            break;
                        }
                    }
                }

                break;
            }
            case 3:{
                i=0;
                cout<<"------------Change Password----------"<<endl;
                ifstream of0;
                of0.open("file.txt");
                cout<<"Enter The Old Password :- ";
                cin>>old;
                if(of0.is_open()){
                    while(of0.eof()){
                        while(getline(of0,text)){
                            istringstream iss(text);
                            iss>>word1;
                            cp[i]=word;
                            i++;
                        }
                        if(old==cp[1]){
                            of0.close();
                            ofstream of1;
                            if(of1.is_open()){
                                cout<<"Enter Your New Password :- ";
                                cin>>password1;
                                cout<<"Enter New Password Again :- ";
                                cin>>password2;

                                if(password1==password2){
                                    of1<<cp[0]<<"\n";
                                    of1<<password1;
                                    cout<<"Password Changed Successfully"<<endl;
                                }
                                else{
                                    of1<<cp[0]<<"\n";
                                    of1<<old;
                                    cout<<"Password Do Not Match"<<endl;
                                }
                            }
                        }
                        else{
                            cout<<"Please Enter a Valid Password"<<endl;
                            break;
                        }
                    }
                }
                break;
            }
            case 4:{
                cout<<"__________Thank You!__________";
                break;
            }
            default:
            cout<<"Enter a Valid Option";
        }
    }
    while(a!=4);
    return 0;
}