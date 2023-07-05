#include<bits/stdc++.h>

using namespace std;
  
class heap{

    vector<int> pq;

    public :

    bool isEmpty(){

        return pq.size() == 0;
    }

    int getSize(){
        return pq.size();
    }

    
    int getMin(){

     if(isEmpty())
        return 0;

     return pq[0];
    }

 // up heapify
    void insert(int element){

        pq.push_back(element);
        int childIndex = pq.size() - 1;

       
        while(childIndex > 0){

            int parentIndex = (childIndex - 1) / 2;

            if(pq[childIndex] < pq[parentIndex]){
                swap(pq[childIndex], pq[parentIndex]);
                 childIndex = parentIndex ;
            }else{
                return;
            }
        }
    }

//   down heapify
    int deleteFromHeap(){

        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        
        while(leftChildIndex < pq.size()){

            int minIndex = parentIndex;

            if(pq[minIndex] > pq[leftChildIndex]){

                minIndex = leftChildIndex;
            }

            if( rightChildIndex < pq.size() && pq[minIndex] > pq[rightChildIndex]){
                minIndex = rightChildIndex;
            }


                if(minIndex == parentIndex)
                    break;

            swap(pq[minIndex], pq[parentIndex]);

            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }

        return ans;
    }

    void print(){
        for (int i = 0; i < pq.size(); i++)
            cout << pq[i] << " ";

        cout << endl;
    }
};


void heapify(vector<int> &arr, int parentChildIndex, int n){

    int leftChildIndex = 2 * parentChildIndex + 1;
    int rightChildIndex  = 2 * parentChildIndex + 2;

    while(leftChildIndex < n){

        int minIndex = parentChildIndex;

        if(arr[minIndex] > arr[leftChildIndex]){

            minIndex = leftChildIndex;
        }

        if(arr[minIndex] > arr[rightChildIndex]){
            minIndex = rightChildIndex;
        }

        if(minIndex == parentChildIndex)
            return;

        swap(arr[minIndex], arr[parentChildIndex]);
          parentChildIndex = minIndex;
         leftChildIndex = 2 * parentChildIndex + 1;
         rightChildIndex = 2 * parentChildIndex + 2;

    }
   // retutn;
}
int main(){
        
        heap h;
    h.insert(55);
    h.insert(53);
    h.insert(54);
    h.insert(50);
    h.insert(45);
    h.insert(35);
    h.insert(30);

    h.insert(6);

    h.print();

    cout << h.getMin() << endl;
    cout << h.isEmpty() << endl;
    cout << h.deleteFromHeap() << endl;
    cout << h.getSize() << endl;

    h.print();

    // heapify algorithm

    vector<int> arr = {12, 45, 23, 65, 44, 13, 43};
    int n = arr.size();
    for (int i = (n / 2 - 1); i >= 0; i--){
         heapify(arr, i, n);
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    // heap sort

    vector<int> v = {67, 34, 76, 35, 98, 56};

    for (int i = (v.size() - 1) / 2 - 1; i >= 0; i--)
    {
        heapify(v, i, v.size());
    }

    for (int i = v.size() - 1; i >= 0; i--){
        swap(v[i], v[0]);

        heapify(v, 0, i-1);
    }

    cout << " heap sort" << endl;
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
        return 0;
}