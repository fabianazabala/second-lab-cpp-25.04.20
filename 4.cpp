#include <iostream>

using namespace std;

//exercise number 4 

int linearSearch(int array[], int size, int searchValue){
    
    for(int i = 0; i < size; i++){
        
        if (searchValue == array[i]){ 
            return i;
        }
    }
    
    return -1;
}

int main()
{
    int arr[] = {5, 8, 6, 2, 7};
    int userInput;
    
    cout << "Insert an integer between 1 and 10 " << endl;
    cin >> userInput;
  
 int result = linearSearch(arr, 4, userInput);
 
 if(result >= 0){
     cout<<"The number " << arr[result] <<" was found at the element with index " 
     << result <<endl;
     
 }
 else cout<<"The number " << userInput << " was not found. " << endl;
}