#include<iostream>
using namespace std;
int main()
{
    int age;
   cout<<"Tell me your age : ";
   cin>>age;

   //******************* Selection control Structure : If else-if else ladder ************************


//    if((age<18) && (age>0)){
//        cout<<"you can't come to my party"<<endl;
//    }
//    else if(age==18){
//        cout<<"you are a kid and you will get a kid pass to the party"<<endl;
//    }
//    else if(age<1){
//        cout<<"You are not yet born"<<endl;
//    }
//    else{
//        cout<<"You can come to the party"<<endl;
//    }


// ******************** Selection control structure : Switch Case statements *****************************
switch (age)
{
case 18:
    cout<<"you are 18"<<endl;
    break;
case 22:
    cout<<"you are 22"<<endl;
    break;
case 2:
    cout<<"you are 2"<<endl;
    break;

default:
cout<<"No special Cases"<<endl;

    break;
}
cout<<"Done with Switch case";
    return 0;
}
