#include<iostream>
using namespace std;

struct node
{
    int prn;
    char name[20];
    node *next;
};

class pinnacle
{
     public:
       node *head,*temp;
       pinnacle(){
        head=NULL;
        temp=NULL;
            }

void create();
void display();
void insert_front();
void insert_middle();
void insert_end();
void delete_front();
void delete_end();
void delete_middle();
void count();
void rev(node *);
};

void pinnacle::create()
{
    char ans;
    node *newnode,*current;
    do {
            newnode=new node;
            cout<<"enter a prn number ";
            cin>>newnode->prn;
            cout<<"enter a name ";
            cin>>newnode->name;
            newnode->next=NULL;
                    if(head==NULL)
                    {
                    head=newnode;
                    current=newnode;
                    }
                    else
                    {
                        current->next=newnode;
                        current=newnode;
                    }
            cout<<"do you want to exit if yes enter y";
            cin>>ans;
        }

    while(ans=='y');
}

void pinnacle::display()
{
    node *p;
    cout<<"\n PRN no.\tname \n";
if(head!=NULL)
{
p=head;
while(p!=NULL)
{
if(p==head)
{
cout<<"\n"<<p->prn;
cout<<"\t"<<p->name;
cout<<"\t -> president";
p=p->next;
}
else if(p->next!=NULL)
{
cout<<"\n"<<p->prn;
cout<<"\t"<<p->name;
p=p->next;
}
else
{
cout<<"\n"<<p->prn;
cout<<"\t"<<p->name;
cout<<"\t -> secretory";
p=p->next;
}
}
}
else
{
cout<<"list is empty";
}
}
void pinnacle::insert_front()
{
    node *temp;
    temp=new node;
    cout<<"enetr a prn no";
    cin>>temp->prn;
    cout<<"enter name";
    cin>>temp->name;
    temp->next=head;
    head=temp;
}
void pinnacle::insert_middle()
{
node *temp,*p;
int position;
temp=new node;
cout<<"enter a prn number as position ";
cin>>position;
cout<<"enter a prn no";
cin>>temp->prn;
cout<<"enter name";
cin>>temp->name;
p=head;
while(p!=NULL)
{
if(p->prn==position)
{
break;
}
else
{
p=p->next;
}
}
temp->next=p->next;
p->next=temp;
}
void pinnacle::insert_end()
{
    node *temp,*p;
temp=head;
p=new node;
cout<<"enter a prn no";
cin>>p->prn;
cout<<"enter a name";
cin>>p->name;
p->next=NULL;
while(temp->next!=NULL)
{
if(temp->next==NULL)
{
break;
}
else
{
temp=temp->next;
}
}
temp->next=p;
temp=p;
}
void pinnacle::delete_front()
{
node *p;
p=head;
head=p->next;
delete p;
}
void pinnacle::delete_middle()
{
int position;
node *p,*temp;
temp=head;
cout<<"enter prn which you want to dalete";
cin>>position;
while((temp->next)->next!=NULL)
{
if((temp->next)->prn==position)
{
break;
}
else
{
temp=temp->next;
}
}
p=temp->next;
temp->next=p->next;
delete p;
}
void pinnacle::delete_end()
{
node *p,*temp;
temp=head;
while((temp->next)->next!=NULL)
{
temp=temp->next;
}
p=temp->next;
temp->next=NULL;
delete p;
}
void pinnacle::count()
{
int i=0;
node *p;
p=head;
while(p!=NULL)
{
i++;
p=p->next;
}
cout<<"\n total number of members of club: "<<i;
}
void pinnacle::rev(node *head)
{
node *p;
p=head;
/*int **a[20];
int i=0,j=0;
while(p!=NULL)
{
a[i]=&p;
i++;
p=p->next;
}
for(j=i;j>=0;j--)
{
cout<<a[j];
}*/
if(p==NULL)
{
return;
}
else
{
rev(p->next);
}
cout<<"\n"<<p->prn<<"\t"<<p->name;
}
int main()
{
int ch;
char ans;
pinnacle p,q;
p.create();
p.display();
do
{
    cout<<"\n \n -------------------------------------MAIN MENU--------------------------------------------";
cout<<"\n 1.add president";
cout<<"\n 2.add student.";
cout<<"\n 3.add secretary.";
cout<<"\n 4.delete president";
cout<<"\n 5.delete member";
cout<<"\n 6.delete secretary";
cout<<"\n 7.count total no. of members.";
cout<<"\n 8.display member of club.";
cout<<"\n 9.reverse the string.";
cout<<"\n 10.concatinate two string";
cout<<"\n ------------------------------------------------------------------------------------";
cout<<"\n enter a choice";
cin>>ch;
switch(ch)
{
case 1:
p.insert_front();
p.display();
break;
case 2:
p.insert_middle();
p.display();
break;
case 3:
p.insert_end();
p.display();
break;
case 4:
p.delete_front();
p.display();
break;
case 5:
p.delete_middle();
p.display();
break;
case 6:
p.delete_end();
p.display();
break;
case 7:
p.count();
break;
case 8:
p.display();
break;
case 9:
p.rev(p.head);
break;
case 10:
q.create();
p.temp=p.head;
while(p.temp->next!=NULL)
{
p.temp=p.temp->next;
}
p.temp->next=q.head;
p.display();
break;
default:
break;
}
cout<<"do you want to continue if yes enter y";
cin>>ans;
}while(ans=='y');
return 0;
}
