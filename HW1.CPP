#include<iostream>
using namespace std;

int main(){
    std::string password1="1111",password2="2222",accountM="155288",account1="155001",account="",password="";
    int i = 0;
    bool j=true;
    while(j==true){
        cout<<"enter account here:";
        getline(cin>> std::ws,account);
        cout<<"enter password here:";
        getline(cin>> std::ws,password);
        if(account==accountM && password==password1){
        cout<<"welcome manager"<<'\n';}
        else if (account== account1 && password==password2){
        cout<<"welcome user"<<'\n';
        }else if (account==accountM || account==account1){
        cout<<"Wrong password"<<'\n';
        }else{
        switch(i){
        case 0:
        cout<<"please check your account again"<<'\n';
        i++;
        break;
        case 1:
        cout<<"please check your account again"<<'\n';
        i++;
        break;
        case 2:
        cout<<"please check your account again"<<'\n'<<"you have three times left"<<'\n';
        i++;
        break;
        case 3:
        cout<<"please check your account again"<<'\n'<<"you have two times left"<<'\n';
        i++;
        break;
        case 4:
        cout<<"please check your account again"<<'\n'<<"you have one times left"<<'\n';
        i++;
        break;
        case 5:
        cout<<"you are locked"<<'\n';
        j=false;
        break;
        }
        }
    }
    }
    
    