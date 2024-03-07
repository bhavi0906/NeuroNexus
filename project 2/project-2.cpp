#include <iostream>    //for input output
#include<string>      //for strings
#include<vector>      //for vectors
#include <cstdlib>    //for system
#include<unistd.h>   //for sleep

using namespace std;

struct task{
    
    string tasktext;
    bool completed;
    
};

void sleep()
{
   for(int i=0;i<3;i++)
   {
   sleep(3);
   }
   
}


vector<task> t;

void addtask()
{
	string q;
    system("CLS");
    task x;
    
    here:
    
    cout<<"enter your task: ";
    cin.ignore(); // Ignore any remaining newline characters in the buffer
    getline(cin, x.tasktext);
    
    x.completed=0;
    t.push_back(x);
    
    if(t.size()!=0)
    {
	
    cout<<"task added successfully!!"<<endl;
    og:
    cout<<endl<<"do you want to add more tasks?(y/n):"<<endl;
    cin>>q;
    if(q=="y" || q=="Y")
    goto here;
    else if(q=="n" || q=="N")
    {
	 cout << "Press any key to return to the main screen...";
        system("pause");
    
}
else
{

cout<<"invalid choice ...please try again....:";
goto og;
}
}
    

}

void printask()
{
    system("CLS");
    cout<<"the following task are still to be completed: "<<endl<<endl;
    for(int i=0;i<t.size();i++)
    {
        cout<<i+1<<". "<<t[i].tasktext<<"     status:";
        if(t[i].completed==true)
        cout<<"completed"<<endl;
        else cout<< "not completed"<<endl;
        
        
    }
    
    
}

void deletetask()
{
	
	hello:
    system("CLS");
    int b;
    cout<<"select a task from the following"<<endl;
    printask();
    cout << endl <<"Enter the index of the task to delete: ";
    cin>>b;
    if (b >= 1 && b <= t.size())
    {
    t.erase(t.begin()+(b-1));
    cout<<"generating the new task list..."<<endl;
    
    printask();
     cout << "Press any key to return to the main screen...";
        system("pause");
}
else
{

 cout << "Invalid index....please try again....." << endl;
        goto hello;

}
    }


void editaskoptions()
{
    bye:
    system("CLS");
    int c;
    char d;
    cout<<"select the task of which you want to edit the task options..."<<endl;
    printask();
    cout << "Enter the index of the task: ";
    cin>>c;
    if (c >= 1 && c <= t.size()) {
    cout<<"current status of the following task:";
    if(t[c-1].completed==true)
    cout<<"task completed"<<endl;
    else
    cout<<"task incomplete"<<endl;
    hell:
    cout << "Do you want to change the current settings? (y/n): ";
        cin >> d;
        if (d == 'y' || d == 'Y') {
            t[c - 1].completed = !t[c - 1].completed;
            cout << "Task settings changed successfully" << endl;
             cout << "Press any key to return to the main screen...";
        system("pause");
        }
    else if(d=='n' || d=='N')
    {
	
      cout<<"task settings still the same"<<endl;
 cout << "Press any key to return to the main screen...";
        system("pause");
}
	  else {
            cout << "Invalid choice...please try again......" << endl;
            goto hell;
        
}
}else
{

cout<<"invalid index....please try again....."<<endl;
    goto bye;
}
}

int main() {
    
    int z;
    
while(true)
{
	system("CLS");
cout<<"----------------WELCOME to your TO-DO LIST------------------"<<endl<<endl;


cout << endl <<"1. Add task" << endl
             << "2. Print all tasks" << endl
             << "3. Delete task" << endl
             << "4. Edit task options" << endl
             << "5. Exit" << endl;
        cout <<endl<< "Select an option: ";
    cin>>z;
    
    
    switch(z)
    {
        case 1: 
        addtask();
        break;
        case 2: 
        printask();
        cout << "Press any key to return to the main screen...";
        system("pause");
        break;
        case 3:
        deletetask();
        break;
        case 4:
        editaskoptions();
        break;
        case 5:
        cout<<"exiting ..."<<endl;
        return 0;
        default:
        cout<<"invalid choice please try again"<<endl;
        
    }
        
    }

    return 0;
}
