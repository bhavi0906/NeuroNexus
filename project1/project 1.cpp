#include<iostream>
#include<cstdlib>
#include<ctime>
 
using namespace std;

int main() {
	
	srand(time(NULL));   //seeding of rand()
   
   int orignal,temp;
   int count=0;
   
   int random=rand() %100;
   orignal=random;
   cout<<"enter your guess: "<<endl;
   
   cin>>temp;
   while(temp!=orignal)
   {
   if(temp > orignal)
   {
   	   system("CLS");
       cout<<"your guess is TOO HIGH!!"
           <<endl<<"please try again with with a smaller no than "<<temp<<":"<<endl;
       int a;
       cin>>a;
       temp=a;
       
   }
   else 
   {
   	   system("CLS");
       cout<<"your guess is TOO LOW!!"
           <<endl<<"please try again with a bigger no than "<<temp<<":"<<endl;
       int b;
       cin>>b;
       temp=b;
   }
    count++;
}

if (count==0)
{
    cout<<"CONGRATULATIONS you guessed the right number in the first guess"<<endl;
}
else
{
cout<<"well it took you "<<count<< " guess to guess correctly."<<endl;
cout<<"congratulations"<<endl;
}

return 0;
}
