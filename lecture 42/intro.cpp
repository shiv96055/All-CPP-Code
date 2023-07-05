#include<iostream>
using namespace std;

 class Hero {
     // properties
     public :
     int health ;

    public :
     char level ;
     // static keyword 
     static int TimeToComplete ;
     
     void print(){
         cout<< level<<endl ;
         cout<<health<<endl;
     }
    
     char getLevel(){
         // level = 'A' ;
         return level ;
     }

     int getHealth(){
         return health ;
     }

     void setHealth(int h){
         health = h ;
     }  
     
     void setLevel(char ch){
        level = ch ;
     }
     // simple constructor
     Hero(){
         cout<<"constructor called "<<endl;
       }
       // copy constructor
      Hero (Hero(&temp )){
          cout<<"copy constructor called "<<endl;
          health = temp.health ;
          level = temp.level ;
      }
     // parameterised constructor 
     Hero (int health, char level){
       this ->health = health ;
       this ->level = level ;
        cout<<"adress of this -> "<<this <<endl;
     }
    Hero(int healt)
    {
         health = healt ;
    }
    ~Hero(){
        cout<<" destructor called "<<endl;
    }
    // static function 
    static int fun(){
        return TimeToComplete;
    }
    };

    int Hero :: TimeToComplete = 12 ; 
   

int main()
{

    Hero a ;
    a.health = 87 ;
    a.level = 'A';
    a.print() ;
    Hero b ;
    // copy assingment operator 
    b = a;
   b.print() ;









//     // static function
//    cout<<Hero::fun()<<endl;
   
   
   
   
   
   
   
    // cout<<Hero::TimeToComplete <<endl;
    // Hero :: TimeToComplete = 28 ;

    // cout<< Hero :: TimeToComplete <<endl;
    // Hero b ;
    // cout<<b.TimeToComplete <<endl;
    // Hero a ;
    // a.TimeToComplete = 198 ;
    // cout<<a.TimeToComplete << endl;
    // cout<< b.TimeToComplete << endl;













// // static function k liye destructor automatically  call hota hai 
//     Hero shiv ;
//     // dynaic
//     Hero *Shiv = new Hero ;
//     // dynamic k liye destructor manually call krna prega 
//     delete Shiv ;




//     Hero shiv;
//     shiv.setHealth(81);
//     shiv.setLevel('d');
//    cout<< shiv.getLevel()<<endl;;
//    cout<< shiv.getHealth()<<endl;
//     Hero R(3,'B');
//     R.print();
    
//     Hero S(R);
//     S.print();
//     Hero Shiv ;
//     Shiv.setHealth(8)  ;
//     cout<<Shiv.getHealth();
//     Shiv.print();




















//     // Hero ramesh ;
//     // ramesh.setLevel('s');
//     // ramesh.getHealth();
//     //cout<<"address of ramesh "<<&ramesh<<endl;
//     Hero Shiv ;
//     //cout<<"adress of shiv "<<&Shiv <<endl;
//     //Hero *s = new Hero ;
// //     Hero love(5,'d') ;
// //   //  cout<<"love ka dose "<<love.getHealth()<<endl;
// //     cout<<"adress of love "<<&love<<endl;
// //     cout<<"value of love "<<love.getHealth()<<endl;
// //     cout<<"value of char love "<<love.getLevel()<<endl;
//     // love.setHealth(7);
//     // cout<<love.getHealth()<<endl;
//     // love.print();






//     // cout<<"hii "<<endl;
//     // //object created statically 
//     // Hero ramesh;
//     // cout<<"hello "<<endl;

//     // //dynamically
//     // Hero *h = new Hero();
//     /*
//     // static allocation 
//     Hero a ;
//     a.setHealth(80) ;
//     a.setLevel('h');
//     cout<<"level is "<<a.getLevel() <<endl;
//     cout<<"helath is "<<a.getHealth() <<endl;

//     // dynamically 
//     Hero *b = new Hero ;
//     b->setHealth(67);
//     b->setLevel('s');
//     cout<<"level is "<<b->getLevel()<<endl;
//     cout<<"health is "<<b->getHealth()<<endl;

//     cout<<"level is "<<(*b).getLevel()<<endl;
//     cout<<"health is "<<(*b).getHealth()<<endl;

//     */
// //   // creation of object 
// //    Hero ramesh ;

// //    cout<< " seze of ramesh is "<<sizeof(ramesh)<<endl;  
// //    cout<<" ramesh health is " << ramesh.getHealth()<< endl;
// //    cout<<ramesh.getLevel()<<endl;

// //   ramesh.setHealth(30);
// //   ramesh.setLevel('h') ;
// //   cout<<"level  is " << ramesh.getLevel()<<endl;

// //    cout<<"health is "<<ramesh.getHealth()<<endl;
// //   // h2.a = 45;
// //    //h2.b = 23;
// //    //  cout<<h2.a<<endl;cl
// //   // cout<<h2.b<<endl; 
// //    //h1.print();

 
} 

