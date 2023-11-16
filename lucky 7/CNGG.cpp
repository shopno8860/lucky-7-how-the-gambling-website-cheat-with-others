#include<bits/stdc++.h>
using namespace std;
int main()
{
    int balance=100,i,j,s,q;
rakesh:
    cout<<"chose your ammount per spin 1=5,2=10,3=50,4=100"<<endl;
    cin>>s;
    if(s==1)
    {
        if(balance>=5)
        {


            int a[3][3];

            srand(static_cast<unsigned int>(time(0)));
            a[0][0]=7;
            a[0][1]=7;
            a[0][2]=rand()%7+1;
            a[1][0]=7;
            a[1][1]=7;
            a[1][2]=rand()%7+1;
            a[2][0]=rand()%7+1;
            a[2][1]=rand()%7+1;
            a[2][2]=7;
           if(((a[0][0]==7)&&(a[0][1]==7)&&(a[0][2]==7))||
                    ((a[1][0]==7)&&(a[1][1]==7)&&(a[1][2]==7))||
                    ((a[2][0]==7)&&(a[2][1]==7)&&(a[2][2]==7)) )
                    {
                        cout<<"you win"<<endl;
                         balance+=20;
                    }
            else balance-=5;
        }
        else cout<<"insuficent balance! please recharge and come back to spin"<<endl<<" THANK YOU"<<endl;
    }
    if(s==2)
    {
        if(balance>=10)
        {


            int a[3][3];

            srand(static_cast<unsigned int>(time(0)));
            a[0][0]=7;
            a[0][1]=rand()%7+1;
            a[0][2]=rand()%7+1;
            a[1][0]=7;
            a[1][1]=7;
            a[1][2]=rand()%7+1;
            a[2][0]=rand()%7+1;
            a[2][1]=rand()%7+1;
            a[2][2]=7;
            if(((a[0][0]==7)&&(a[0][1]==7)&&(a[0][2]==7))||
                    ((a[1][0]==7)&&(a[1][1]==7)&&(a[1][2]==7))||
                    ((a[2][0]==7)&&(a[2][1]==7)&&(a[2][2]==7)) )
                    {
                        cout<<"you win"<<endl;
                         balance+=40;
                    }
            else balance-=10;
        }

        else cout<<"insuficent balance! please recharge and come back to spin"<<endl<<" THANK YOU"<<endl;
    }
    if(s==3)
    {
        if(balance>=50)
        {


            int a[3][3];

            srand(static_cast<unsigned int>(time(0)));
            a[0][0]=7;
            a[0][1]=rand()%7+1;
            a[0][2]=rand()%7+1;
            a[1][0]=7;
            a[1][1]=7;
            a[1][2]=rand()%7+1;
            a[2][0]=rand()%7+1;
            a[2][1]=rand()%7+1;
            a[2][2]=7;
           if(((a[0][0]==7)&&(a[0][1]==7)&&(a[0][2]==7))||
                    ((a[1][0]==7)&&(a[1][1]==7)&&(a[1][2]==7))||
                    ((a[2][0]==7)&&(a[2][1]==7)&&(a[2][2]==7)) )
                    {
                        cout<<"you win"<<endl;
                         balance+=200;
                    }
            else balance-=50;
        }
         else cout<<"insuficent balance! please recharge and come back to spin"<<endl<<" THANK YOU"<<endl;
    }
    if(s==4)
    {
        if(balance>=100)
        {


            int a[3][3];

            srand(static_cast<unsigned int>(time(0)));
            a[0][0]=7;
            a[0][1]=rand()%7+1;
            a[0][2]=rand()%7+1;
            a[1][0]=rand()%7+1;
            a[1][1]=7;
            a[1][2]=rand()%7+1;
            a[2][0]=rand()%7+1;
            a[2][1]=rand()%7+1;
            a[2][2]=7;
            if(((a[0][0]==7)&&(a[0][1]==7)&&(a[0][2]==7))||
                    ((a[1][0]==7)&&(a[1][1]==7)&&(a[1][2]==7))||
                    ((a[2][0]==7)&&(a[2][1]==7)&&(a[2][2]==7)) )
                    {
                        cout<<"you win"<<endl;
                         balance+=400;
                    }

            else balance-=100;
        }

        else
        {
             cout<<"insuficent balance! please recharge and come back to spin"<<endl<<" THANK YOU"<<endl;
        }
    }


    cout<<"remaining balance: "<<balance<<endl<<endl;
    cout<<"do you want to spin again? if yes press 1 else 0"<<endl;
    cin>>q;

    if(q==1)
        goto rakesh;
    else return 0;
    /* for(int i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/

}
