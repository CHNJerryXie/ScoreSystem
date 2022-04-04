#include<cstdio>
#include<iostream>
using namespace std;
char name[105][105];
int sntf,score[105],optn,pd,pswd,lge;
bool f[105];
int main(){
    cout<<"选择语言（输入1中文,输入0英文）/Select language (input 1 Chinese, input 0 English):";
    cin>>lge;
    if(lge==0){
    	 cout<<"Welcome to Score System by Jerry v0.3(Beta Edition)"<<endl<<"Language:English"<<endl<<
    "Copyright by Jerry Score System Project 2022."<<endl
    <<"Set management password:"<<endl;
    cin>>pswd;
    for(int i=1;i>0;i++){
        cout<<endl<<"----------------------------------------------------------"<<endl;
        cout<<i<<" operation"<<endl<<"Enter 1 to register an account, enter 0 plus or minus points,enter 2 to view all accounts and scores, and enter -1 to exit:";
        cin>>optn;
        if(optn==-1){
        	cout<<"Enter the password:";
            scanf("%d",&pd);
            if(pd==pswd)return 0;
            else cout<<"Wrong！";
        }
        if(optn==1){
        	cout<<"Enter the number to register:";
            cin>>sntf;
            if(f[sntf]==true)cout<<"The number is already registered!";
        	else {
            	cout<<"Enter user name:";
                scanf("%s",name[sntf]);
                f[sntf]=true;
                cout<<"Done!";
            }
        }
        if(optn==2){
            cout<<"Enter the password:";
            scanf("%d",&pd);
        	if(pd==pswd)for(int k=1;k<=100;k++){
            	cout<<k;
                if(f[k]==true)cout<<' '<<name[k];
                else cout<<" Not registered";
                cout<<' '<<score[k]<<endl;
            }
            else cout<<"Wrong!";
        }
        if(optn==0){
        	int g,h;
            cout<<"Which number do you want to operate on:";
            cin>>g;
            cout<<"Enter the serial number you want to add or subtract(enter a positive number for bonus points and a negative number for deduction points):";
            cin>>h;
            score[g]+=h;
        }
    }
    }
    else {
     cout<<"欢迎来到谢宝辰制作的分数系统v0.3（测试版）"<<endl<<"语言：简体中文"<<endl<<
    "版权归Jerry Score System Project 2022所有。"<<endl
    <<"设置管理员密码："<<endl;
    cin>>pswd;
    for(int i=1;i>0;i++){
        cout<<endl<<"----------------------------------------------------------"<<endl;
        cout<<"第 "<<i<<" 次操作"<<endl<<"输入1注册用户,输入2查看所有用户和分数，输入0加减分，输入-1退出：";
        cin>>optn;
        if(optn==-1){
        	cout<<"输入管理员密码：";
            scanf("%d",&pd);
            if(pd==pswd){cout<<"再见!";return 0;}
            else cout<<"密码错误！";
        }
        if(optn==1){
        	cout<<"输入你要注册的号码：";
            cin>>sntf;
            if(f[sntf]==true)cout<<"这个号码被注册了!";
        	else {
            	cout<<"输入用户名：";
                scanf("%s",name[sntf]);
                f[sntf]=true;
                cout<<"成功!";
            }
        }
        if(optn==2){
            cout<<"输入管理员密码:";
            scanf("%d",&pd);
        	if(pd==pswd)for(int k=1;k<=100;k++){
            	cout<<k;
                if(f[k]==true)cout<<' '<<name[k];
                else cout<<" 未被注册";
                cout<<' '<<score[k]<<endl;
            }
            else cout<<"密码错误";
        }
        if(optn==0){
        	int g,h;
            cout<<"你要对哪个号码进行操作：";
            cin>>g;
            cout<<"你要加减几分（输入正数加分，输入负数扣分）？";
            cin>>h;
            score[g]+=h;
        }
    }
    }
   
}

