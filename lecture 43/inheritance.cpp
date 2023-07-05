#include<iostream>
using namespace std ;

class Human {
    private :
    int height ;
    int weight ;
    int age ;

    int getAge (){
        return age ;
    }

    void setWeight(int w){
        weight = w ;
    }

};

class Male : private Human {
    public :
    string color ;
    int shiv = height ;
    int shiv1 = weight ;
    int shiv2 = age ; 
   

   void sleep (){
       cout<<"male is sleeping "<<endl;
    }
    int getHeight(){
        return height ;
    }
    int getAge(){
        return age ;
    }

};

int main(){

    Male obj ;
    // cout<<obj.height<<endl ;
    // cout<<obj.age<<endl;
   cout<<obj.getHeight()<<endl;
    cout<<obj.getAge()<<endl;
    cout<<"shiv "<<obj.shiv<<endl;
     cout<<"shiv1 "<<obj.shiv1<<endl;
      cout<<"shiv2 "<<obj.shiv2<<endl;
    obj.sleep();









   /* Male object1 ;
    cout<<"age of male " << object1.age <<endl;
    cout<<"weight of male "<<object1.weight<<endl;
    cout<<"height of male "<<object1.height<<endl;
    cout<<"name of male "<<object1.color<<endl;
    object1.setWeight(65);
    cout<<"new weight "<<object1.weight<<endl;
    cout<<"get age is "<<object1.getAge()<<endl;
    object1.sleep();
*/

}