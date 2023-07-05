#include<iostream>
using namespace std;
class car{
   
int topSpeed = 90;
string name = "odi";
public :
// void fun(string carName, int speed){

//     name= carName ;
//     topSpeed = speed ;
// }
void print(){
  cout<<"love shiv kumar "<<endl;
}
// getter function
int getTopSpeed(){
  
  return topSpeed ;
}
string getName(){
  return name ;
}

//setter function 
void setTopSpeed(int speed){
  topSpeed = speed ;
  return ;
}
void setName(string name){
  name = name ;
}

 // cout<<name<<endl;// dekhna bad me
};
class box {
    public:
    double width;
    double height ;
    double depth ;
};

class student {
  public:
  int rollNum ;
  float marks = 40;
  char nam[20];
  char grade ;


public:
  char getName(){
    return nam[20] ;
  }

  int getMarks(){
    return marks ;
  }

  char getGrade(){
    return grade ;
  }

void setGrade(){
  if(marks > 90) grade = 'A';
  else if(marks > 80) grade ='B';
  else if (marks > 70) grade = 'C';
  else if (marks > 60) grade = 'D';
  else grade = 'E';

}

};

int main()
{
student obj ;

obj.marks = 89;
obj.rollNum ;
obj.nam[20] = 's', 'h', 'i', 'v' ;
cout<<"nam is ->"<<obj.nam[20]<<endl;
cout<<"roll number is -> "<<obj.rollNum<<endl;
 cout<<obj.getMarks()<<endl;
 obj.setGrade();
 cout<<obj.getGrade()<<endl;














// car *obj= new car ;
// cout<<(*obj).getName()<<endl;
// cout<<"adress of obj -> "<<&obj<<endl;
// cout<<"adress of getName ->" <<(*obj).getName()<<endl;
// cout<<"adress of gettopSpeed "<<(*obj).getTopSpeed()<<endl;
// //obj.getTopSpeed()=78;
// obj->getName();
// obj->setName("BMW");
// obj->setTopSpeed(678);
// cout<<obj->getName()<<endl;
// cout<<obj->getTopSpeed()<<endl;


  //   car  creta ;
  //   cout<<"size of creta ->"<<sizeof(creta)<<endl;
  //   cout<<"adress of creta object -> "<<&creta<<endl;
  //  cout<< "car name -> "<<creta. name<<endl;
  //  cout<<"adress of creta.name for odi->" <<&creta.name<<endl;
  //  cout<<"car speed ->"<<creta.topSpeed<<endl;
  //  cout<<"adress of creta.topSpeed -> "<<&creta.topSpeed<<endl;
  //  creta.name= "BMW";
  //  cout<<"car nakme ->" << creta.name<<endl;
  //  cout<<"adress of crtea.name for BMW -> "<<&creta.name<<endl;
  //  creta.topSpeed = 480 ;
  //  cout<<"car speed ->"<<creta.topSpeed<<" km/hr"<<endl;
  //  cout<<"adress of creta.topSpeed for BMW ->"<<&creta.topSpeed<<endl;
  //  cout<<"size of creta ->"<<sizeof(creta)<<endl;

  //  string str = "shivo  how manyt t 6";
  //  cout<<"str -> "<<str<<endl;
  //  cout<<"size of string "<<sizeof(str)<<endl;
  //  cout<<"string length "<<str.size()<<endl;
  //  string str1 ;
  //  cout<< " size of empty string "<<sizeof(str)<<endl;
  
  //  cout<<endl;
  // // object creation of box class
  //   box obj;
  //   // assign the values to object in istance varible
  //   obj.depth = 10;
  //   obj.height = 15 ;
  //   obj.width = 12 ;

  //   int valume = obj.depth * obj.height * obj.width ;
  //   cout<<"volume of box ->"<<valume<<endl;
    


    
} // namespace st
