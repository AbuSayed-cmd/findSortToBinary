#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int x){
    int left =0;
    int right = n;
    while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}
    
void selectionSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int min = i;

    for (int j = i + 1; j < 5; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    if (min != i) {
      int temp = arr[min];
      arr[min] = arr[i];
      arr[i] = temp;
    }
  }
}

bool arraySortedOrNot(int arr[], int n) 
{
    if (n == 0 || n ==1){
    return true;
    }else{
        for(int i = 1; i<n; i++)
            if(arr[i-1]>arr[i])
    return false;
    }
    return true;
}

int main() {

    int n, key , op;
    cout<<"Enter No of Elements of the array: "<<endl;
    cin>>n;
    cout<<"Enter the key: "<<endl;
    cin>>key;
    int arr[n];
    //int siz=sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter Elements of array: "<<" ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

   if(arraySortedOrNot(arr, n)){
       cout<<"Yes: "<<" Find the Key"<<endl;
       op=binarySearch(arr, n, key);
       if(op==-1){
           cout<<"Sorry, match did not found"<<endl;
       }else{
           cout<<"Yahoo! Match is found at Index position: "<<op<<endl;
       }
       }
        else{
            cout<<"No,  Work on Sorted: "<<endl ;
            selectionSort(arr, n);
            cout<<"Array is sorted Now: "<<endl;
            for (int i = 0; i < n; i++) {
                cout << arr[i]<<" ";
                }
                cout<<"Lets Find the key:"<<endl;
                op=binarySearch(arr, n, key);
                      if(op==-1){
                            cout<<"Sorry, match did not found"<<endl;
                                 }else{
                                        cout<<"Yahoo! Match is found at Index position: "<<op<<endl;
                    }
        }
  return 0;
}
