#include<bits/stdc++.h>

using namespace std;

int main(){

    int n = 6;

    // left increasing triangle
    cout<<"left increasing trianglr "<<endl;
    for(int i=1; i<=n; i++){

        for(int j = 1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }   

    //right increasing tringle
    cout<<endl<<"right increasing triangle "<<endl;
    for(int i=1; i<=n; i++){

        // printing space
        for(int j=i; j<n; j++){
            cout<<"  ";
        }

        for(int j = 1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //left decresing triangle
    cout<<endl<<"left decreasing triangle"<<endl;
    for(int i=1; i<=n; i++){

        for(int j=i; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // right decreasing triangle
    cout<<endl<<"right decreasing triangle"<<endl;

    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout<<"  ";
        }

        for(int j = i; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // double hill 
    cout<<endl<<"double hill"<<endl;

    for(int i=1; i<=n; i++){
        // dec left space
        for(int j=i; j<n; j++){
            cout<<"  ";
        }

        //ince right triangle
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        
        //ince left trinagle
        for(int j = 1; j<i; j++){
            cout<<"* ";
        }

        for(int j=i; j<n; j++){
            cout<<"  ";
        }

          for(int j=i; j<n; j++){
            cout<<"  ";
        }

        for(int j=1; j<=i; j++){
            cout<<"* ";
        }

         for(int j = 1; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //butterfly print
    cout<<endl<<"butterfly printing"<<endl;
    //upper part
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }

        for(int j =i; j<n; j++){
            cout<<"  ";
        }

        for(int j=i; j<n; j++){
            cout<<"  ";
        }

        for(int j=1; j<=i; j++){
            cout<<"* ";
        }

        cout<<endl;
    }

    // lower part
     for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<"* ";
        }

        for(int j =1; j<i; j++){
            cout<<"  ";
        }

        for(int j=1; j<i; j++){
            cout<<"  ";
        }

        for(int j=i; j<=n; j++){
            cout<<"* ";
        }

        cout<<endl;
    }

    //pyramid
    cout<<endl<<"pyramid "<<endl;
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<"  ";
        }

        for(int j=1; j<=i; j++){
            cout<<"* ";
        }

        for(int j=1; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // reverse pyramid
    cout<<endl<<"reverse pyramid"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout<<"  ";
        }

        for(int j=i; j<=n; j++){
            cout<<"* ";
        }

        for(int j = i; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //right pasacl triangle
    cout<<endl<<"right pasacal triangle "<<endl;
    //upper part
    for(int i=1; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<"  ";
        }

        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //lower part
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout<<"  ";
        }

        for(int j=i; j<=n; j++){
            cout<<"* ";
        }

        cout<<endl;
    }

    //left pascal triangle
    cout<<endl<<"left pascal triangle"<<endl;
    //upper part
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //left part
    for(int i=1; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //Diamond
    // upper part
    cout<<endl<<"diamond"<<endl;
    
    for(int i=1; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<"  ";
        }

        for(int j=1; j<=i; j++){ 
            cout<<"* ";
        }
        for(int j=1; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // // lower part
    for(int i=1; i<=n; i++){
       for(int j = 1; j<i; j++){
        cout<<"  ";
       }

       for(int j=i; j<=n; j++){
        cout<<"* ";
       }

        for(int j=i; j<n; j++){
        cout<<"* ";
       }
       cout<<endl;

    }
    return 0;
}