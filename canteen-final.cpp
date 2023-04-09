#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<windows.h>
#include<stdio.h>
 using namespace std;

 class menu_list{

 public:
     int k,l,m,j,bill,r;
     int  t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,d1,d2,d3,d4,d5,d6,d7,d8,d9,total;
     int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13;

     int bill_back(){

     int  bill_in,ret;

   z:
    cout<<"\nplease pay amount:";cin>>bill_in;

    try{
    if(bill_in<total)
        throw bill_in;
    else{
    ret=bill_in-total;
    cout<<"\n\treturn : "<<ret<<endl;
    cout<<"\n\n\n\n\tplease take your token & recive your food"<<endl;
    }

   }
   catch(int i){
   cout <<"\n your bill is: "<<total<<endl;
    goto z;
   }
    }


     void chose(){
         total=0;
     cout<<"\t\t\t\tPlease enter what do you want"<<endl;
     cout<<"\t\t\t..........................................\n"<<endl;
     cout<<"\t\t\tPress 1 for food"<<endl;
     cout<<"\t\t\tPress 2 for canteen details"<<endl;
     cout<<"\t\t\tPress 3 for start & close time of canteen"<<endl;

     mn:
     cin>>k;

     switch(k){
        case 1:{  cout<<"\tPress 1 for breakfirst"<<endl;
                  cout<<"\tPress 2 for lunch/dinner"<<endl;
                  cout<<"\tPress 3 for altime food"<<endl;
                  cin>>l;

                  switch(l){
                       case 1:{

                            cout<<"\t\t\tmenu list\n"<<endl;
                            cout<<"\n"<<endl;
                            cout<<"\t\tItem...............................  Rs"<<endl;
                            cout<<"\n"<<endl;
                            cout<<"\t1.Paratha 2pcs+mixed vegetable .........  30.00 Tk"<<endl;
                            cout<<"\t2.Paratha 2pcs+daal ....................  25.00 Tk"<<endl;
                            cout<<"\t3.Paratha 2pcs+egg omlete ..............  28.00 TK"<<endl;
                            cout<<"\t4.tanduri nan rooti 2 pcs+lotpoti ......  40.00 TK"<<endl;
                            cout<<"\t5.plain Paratha 1pcs ...................  08.00 Tk"<<endl;
                            cout<<"\t6.plain nan rooti 1 pcs  ...............  10.00 TK"<<endl;
                            cout<<"\t7.Paratha 2pcs+beef curry ..............  65.00 Tk"<<endl;
                            cout<<"\t8.Daal .................................  10.00 TK"<<endl;
                            cout<<"\t9.Lotpoti ..............................  15.00 TK"<<endl;
                            cout<<"\t10.Water(500ml).........................  15.00 TK"<<endl;
                            cout<<"\t11.Water(1 Li)..........................  25.00 TK"<<endl;
                            cout<<"\t12.Coffee ..............................  20.00 TK"<<endl;
                            cout<<"\t13.Tea(every cup) ......................  08.00 TK"<<endl;

                            z:
                            cout<<"\t\nif you want to food presss 2 else perss 1"<<endl;
                            cin>>j;


                            while(j!=1)

                            {  cout<<"Enter your choise from menu list"<<endl;
                                cin>>m;
                             switch(m){
                                case 1:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>p1;
                                    r=30;
                              bill=r*p1;
                            }
                                break;
                            case 2:{
                                    cout<<"how many pecs you want"<<endl;
                                    cin>>p2;
                                    r=25;
                              bill=r*p2;
                            }
                            break;

                            case 3:{
                                    cout<<"how many pecs you want"<<endl;
                                    cin>>p3;
                                    r=28;
                              bill=r*p3;
                            }
                            break;

                            case 4:{
                                    cout<<"how meny pecs you want"<<endl;
                                    cin>>p4;
                                    r=40;
                              bill=r*p4;
                            }
                            break;

                            case 5:{
                                    cout<<"how meny pecs you want"<<endl;
                                    cin>>p5;
                                    r=8;
                              bill=r*p5;
                            }
                            break;

                            case 6:{
                                    cout<<"how many pecs you want"<<endl;
                                    cin>>p6;
                                    r=10;
                              bill=r*p6;
                            }
                            break;

                            case 7:{
                                    cout<<"how many pecs you want"<<endl;
                                    cin>>p7;
                                    r=65;
                              bill=r*p7;
                            }
                            break;
                                                       case 8:{
                                    cout<<"how many pecs you want"<<endl;
                                    cin>>p8;
                                    r=10;
                              bill=r*p8;
                            }
                            break;
                                  case 9:{
                                    cout<<"how many pecs you want"<<endl;
                                    cin>>p9;
                                    r=15;
                              bill=r*p9;
                            }
                            break;
                             case 10:{
                                    cout<<"how many pecs you want"<<endl;
                                    cin>>p10;
                                    r=15;
                              bill=r*p10;
                             }
                             break;

                             case 11:{
                                    cout<<"how many pecs you want"<<endl;
                                    cin>>p11;
                                    r=25;
                              bill=r*p11;
                             }
                             break;

                             case 12:{
                                    cout<<"how many pecs you want"<<endl;
                                    cin>>p12;
                                    r=20;
                              bill=r*p12;
                             }
                             break;

                             case 13:{
                                    cout<<"how many pecs you want"<<endl;
                                    cin>>p13;
                                    r=8;
                              bill=r*p13;
                             }
                             break;
                            default:
                                break;
                             }


                             total=total+bill;
                             goto z;           //a manu list aber food nele

                            }
                         //cout<<total;
                         cout<<"\n\n\n"<<endl;
                         cout<<"\n\ttotal bill:"<<total<<endl;
                             bill_back();
                         cout<<"\n\t\t\t><thank you><"<<endl;

                          }
                          break;
                   case 2:{

                            cout<<"\t\t\t\tmenu list\n"<<endl;
                            cout<<"\n"<<endl;
                            cout<<"\tItem..................................  Rs"<<endl;
                            cout<<"\t1.Rice+vegetable+daal ....................  35.00 Tk"<<endl;
                            cout<<"\t2.Rice+beef curry+dall....................  70.00 Tk"<<endl;
                            cout<<"\t3.Chaicken biriyani.......................  90.00 TK"<<endl;
                            cout<<"\t4.Chicken fied rice+chichen fry+veg....... 115.00 TK"<<endl;
                            cout<<"\t5.Chicken vuna khichudi ..................  80.00 Tk"<<endl;
                            cout<<"\t6.Beef vuna khichudi  ....................  80.00 TK"<<endl;
                            cout<<"\t7.Water(500ml) ...........................  15.00 TK"<<endl;
                            cout<<"\t8.Water(1 Li) ............................  25.00 Tk"<<endl;
                            cout<<"\t9.Dinks ..................................  30.00 TK"<<endl;
                            h:
                            cout<<"\t\nif you want to food presss 2 else perss 1"<<endl;
                            cin>>j;

                            while(j!=1)
                            {  cout<<"Enter your choise from menu list"<<endl;
                                cin>>m;
                             switch(m){
                                case 1:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>d1;
                                    r=35;
                              bill=r*d1;
                            }
                                break;
                            case 2:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>d2;
                                    r=70;
                              bill=r*p2;
                            }
                            break;
                            case 3:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>d3;
                                    r=90;
                              bill=r*d3;
                            }
                            break;
                            case 4:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>d4;
                                    r=115;
                              bill=r*d4;
                            }
                            break;
                            case 5:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>d5;
                                    r=80;
                              bill=r*d5;
                            }
                            break;
                            case 6:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>d6;
                                    r=80;

                              bill=r*d6;
                            }
                            break;
                                  case 7:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>d7;
                                    r=15;

                              bill=r*d7;
                            }
                            break;
                                  case 8:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>d8;
                                    r=25;

                              bill=r*d8;
                            }
                            break;
                                  case 9:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>d9;
                                    r=30;

                              bill=r*d9;
                            }
                            break;

                            default:
                                break;
                             }


                             total=total+bill;
                             goto h;               //a manu theke aro khaber nele

                            }
                         cout<<"\n\n\n"<<endl;
                         cout<<"\n\ttotal bill:"<<total<<endl;
                                 bill_back();
                         cout<<"\n\t\t\t><thank you><"<<endl;
                          }
                         break;
                            case 3:{

                                  cout<<"\t\t\t\t menu list\n"<<endl;
                                  cout<<"\n"<<endl;
                                  cout<<"\titem.............................   Rs"<<endl;
                                  cout<<"\n"<<endl;
                                  cout<<"\t1.Noodles ...........................  30.00 Tk"<<endl;
                                  cout<<"\t2.Samusa/shinragara..................  08.00 TK"<<endl;
                                  cout<<"\t3.Beef burger .......................  60.00 TK"<<endl;
                                  cout<<"\t4.Chicken burger.....................  55.00 TK"<<endl;
                                  cout<<"\t5.Chicken/beef shawarma .............  80.00 TK"<<endl;
                                  cout<<"\t6.Cake(per pcs)......................  10.00 TK"<<endl;
                                  cout<<"\t7.Drinks.............................  30.00 TK"<<endl;
                                  cout<<"\t8.tea................................  08.00 TK"<<endl;
                                  cout<<"\t9.Coffee streme......................  20.00 TK"<<endl;
                                  cout<<"\t10.Water ............................  25.00 TK"<<endl;
                            u:
                            cout<<"\t\nif you want to food presss 2 else perss 1"<<endl;
                            cin>>j;

                            while(j!=1)
                            {   cout<<"Enter your choise from menu list"<<endl;
                                cin>>m;
                             switch(m){
                                case 1:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>t1;
                                    r=30;
                              bill=r*t1;
                            }
                                break;
                            case 2:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>t2;
                                    r=8;
                              bill=r*t2;
                            }
                            break;
                              case 3:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>t3;
                                    r=60;
                              bill=r*t3;
                            }
                            break;
                              case 4:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>t4;
                                    r=55;
                              bill=r*t4;
                            }
                            break;
                              case 5:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>t5;
                                    r=80;
                              bill=r*t5;
                            }
                            break;
                              case 6:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>t6;
                                    r=10;
                              bill=r*t6;
                            }
                            break;
                              case 7:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>t7;
                                    r=30;
                              bill=r*t7;
                            }
                            break;
                              case 8:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>t8;
                                    r=8;
                              bill=r*t8;
                            }
                            break;
                              case 9:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>t9;
                                    r=20;
                              bill=r*t9;
                            }
                            break;
                               case 10:{
                                    cout<<"how many pecs"<<endl;
                                    cin>>t10;
                                    r=25;
                              bill=r*t10;
                            }
                            break;


                            default:
                                break;
                             }


                             total=total+bill;
                             goto u;                //again for food of manu list

                            }
                         cout<<"\n\n"<<endl;
                         cout<<"\n\ttotal bill:"<<total<<endl;
                                bill_back();
                         cout<<"\n\t\t\t><thank you><"<<endl;

                          }
                           break;
                   default :
                                cout<<"press any of those opetion"<<endl;
                                goto mn;                            // 1,2,3 bade press korle



                   }
                  }
                    break;
             case 2:{
                cout<<" \n\n\t\tWelcome our canteen.Opening time"<<endl;
                cout<<"\t\tof the canteen is 8:30 amand stays"<<endl;
                cout<<"\t\tup to 8:00 pm.Here 40 workers provide"<<endl;
                cout<<"\t\tthere good service.We try to different"<<endl;
                cout<<"\t\ttypes of food whichare good in quality."<<endl;
                cout<<"\t\tThe canteen is well managed.The selling"<<endl;
                cout<<"\t\tand buying system is also managed electronically."<<endl;

                     }
                      //goto z;
                     break;

                case 3:{
                     cout<<"\n"<<endl;
                     cout<<"\t\t\tSTART TIME:8.30 AM"<<endl;
                     cout<<"\t\t\tCLOSE TIME:9.00 PM"<<endl;
                     cout<<"\t\t\t ***<THANKS>***"<<endl;
                     }
                     break;
                default:{cout<<"Please enter any of those opetion"<<endl;
                        chose();
                }
                }
            }



 };
 class User: public menu_list{
 public:
    char user_name[50];
    char password [30];

    void regester(){
      int i,q,k;
      char user_name[50];
      w:
        try{
 int i,q,k;
 char s, v;
      char user_name[50];

    cout<<"\nEnter your user name :\n "<<endl;
    cout<<"(first latter must capetal and no digite no space)"<<endl;

    cin>>user_name;
    for(i=0;i<10;i++){
   if(isdigit(user_name[i]))
        {
            throw q;
            }
    if(islower(user_name[0])){
        throw v;
    }

    }
       }catch(...){



cout<<"\nnot digit,start not lower or space"<<endl;

goto w;

       }


    cout<<"\nEnter your password"<<endl;
    cin>>password;
    cout<<"\n\tRegistatin successful"<<endl;
    cout<<"\n\t*<You can login now>*"<<endl;

   FILE *reg;
   int n=0;
    reg=fopen("user number.txt","r");
    fscanf(reg,"%d",&n);
    fclose(reg);

    n=n+1;
    reg=fopen("user number.txt","w");
    fprintf(reg,"%d\n",n);
    fclose(reg);

    //FILE *reg;

    reg=fopen("regester.txt","a");
    fprintf(reg,"%s\n",user_name);
    fprintf(reg,"%s\n",password);

    fclose(reg);
    login();
    }

 void login(){

 char uname[50];
 char pass[30];
 int n=0, i=0;
 cout<<"\n\tEnter your usur name"<<endl;
 cin>>uname;
 cout<<"\n\tEnter your password"<<endl;
 cin>>pass;
 cout<<"\n"<<endl;
 FILE *reg ; //*f1;

 reg=fopen("user number.txt","r");
 fscanf(reg,"%d",&n);
 fclose(reg);

 reg=fopen("regester.txt","r");
for( i=0;i<n;i++)
 {

 fscanf(reg, "%s\n",user_name);
 fscanf(reg, "%s\n",password);


 if(strcmp(user_name,uname)==0 && strcmp(password,pass)==0){
        //cout<<"successful";
        chose();
        goto z;


 }
 }
 cout<<"Incorrect user name or password\n\n";
  login();
  z:
 fclose(reg);
 }

 };




 int main(){
     int n;
      User a;
 cout<<"\n\n\n\n\n\n\n"<<endl;
 cout<<"\t\t\t\t\t\tWELLCOME TO EWU CANTEEN\t\t\t"<<endl;
  cout<<"\n\n\n\n\n"<<endl;
 z:
 cout<<"\t\t\t\t\t\tPress 1 for regestation"<<endl;
 cout<<"\t\t\t\t\t\tPress 2 for login"<<endl;
 cout<<"\t\t\t\t\t\tPress 3 for exit"<<endl;
 cin>>n;
 switch(n){
     case 1: a.regester();
             break;
     case 2: a.login();
             break;
     case 3:{cout<<"you are sure for exit"<<endl;
           cout<<"press 1,press 2 for conitnue"<<endl;

         int ex;
         cin>>ex;
         if(ex==1)

                cout<<"**<thank you>**"<<endl;

             break;
             goto z;
            }

     default:{
        cout<<"Enter any of those number"<<endl;
        goto z;                                        //1/2/3 bade onno press korle
     }
 }
 cout<<"\n"<<endl;
 goto z;


 return 0;

 }


