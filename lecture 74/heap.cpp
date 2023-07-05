#include<iostream>
#include<bits/stdc++.h>
#include<queue>

using namespace std ;

class heap{

    public:
        int arr[100];
        int size = 0;
      
        heap(){
            size = 0;
            arr[0] = -1;
        }

        // insertion take log(N) time complexcity
       void insert(int val){

            size = size + 1;
            int index = size;
            arr[index] = val;
            while(index > 1){
                int parent = index / 2;
                if(arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                     index = parent;
                }else{
                    return;
                }
               
            }
        }


        void deleteFromHeap(){

            if(size == 0){
                cout<<"element is not present "<<endl;
                return;
            }
            arr[1] = arr[size];
            size--;
         
            // take root node its correct position 
             int i = 1;
            while(i<size){
                int leftIndex = 2 * i;
                int rightIndex = 2 * i + 1;
                int large;
                if(leftIndex < size && arr[i] < arr[leftIndex]){
                    
                     swap(arr[i], arr[leftIndex]);
                     i = leftIndex;

                }else if(rightIndex<size && arr[i] < arr[rightIndex]){

                    swap(arr[i], arr[rightIndex]);
                    i = rightIndex;
                }else{
                    return;
                }
            }
        }


        void print(){
          
            for (int i = 1; i <= size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        
    
};

int main(){
    heap h;
    h.insert(55);
    h.insert(53);
    h.insert(54);
    h.insert(50);
    h.insert(45);
    h.insert(35);
    h.insert(30);
    h.print();

   h.deleteFromHeap();
    h.print();
    return 0;
}