#include<iostream>
#include<algorithm>  //use for predefine binary search
#include<vector>     //use vector
using namespace std;


// int Binary_Search(int arr[], int n, int Target_Key){
//     int start = 0;
//     int end = n-1;
//     int mid = (start+(end-start)/2);

//     while(start <= end){
//         if(arr[mid]==Target_Key){
//             return mid;
//         }
//         else if(arr[mid]>Target_Key){
//             end = mid -1;
//         }
//         else if(arr[mid]<Target_Key){
//             start = mid + 1;
//         }
//         mid = (start+(end-start)/2);
//     }

// }

// int main(){
//     int arr[10]={1,3,4,6,7,9};
//     int n = 6;

//     int Target_key = 7;
//     int location = Binary_Search(arr,n,Target_key);

//     cout<<"Target value is present at : "<<location<<" Location"<<endl;

// }

// int main(){
//     int arr[10]={2,6,8,9,10,12,14,16};
//     int n = 8;
//     int Target_Key = 8;

//     int location = Binary_Search(arr,n,Target_Key);
//     cout<<"Target value is present at : "<<location<<" location "<<endl;
// }

// Output = Target value is present at : 4 Location
//          Target value is present at : 2 location 

// ==================================================================

// Binary Search

// int Binary_Search(int arr[], int size, int target){
//     int start = 0; 
//     int end = size -1;
//     int mid = (start+(end-start)/2);

//     while(start <= end){
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(arr[mid]>target){
//             end = mid -1;
//         }
//         else if(arr[mid]<target){
//             start = mid +1;
//         }
//         mid = (start+(end-start)/2);
//     }
//     return -1;
// }


// int main(){
//     int arr[] = {10,20,30,40,50,60};
//     int size = 6;
//     int target = 50;

//     int IndexFound = Binary_Search(arr,size,target);

//     if(IndexFound == -1){
//         cout<<"Target is not found "<<endl;
//     }
//     else{
//         cout<<"Target is found at "<<IndexFound<<" Location "<<endl;
//     }
//     return 0;
// } 

// Output = Target is found at 4 Location  

// ===============================================================

// Predefine Binary STL Function 
// in vector

// int main(){
//     vector<int>arr{1,2,3,4,5,6,7,8};
//     if(binary_search(arr.begin(),arr.end(),6)){
//         cout<<"Found"<<endl;
//     }
//     else{
//         cout<<"Not Found"<<endl;
//     }
// }

// Output = Found

// ============================================

// In Array

// int main(){
//     int arr[]={10,20,30,40,50,66,70};
//     int size = 7;

//     int Target = binary_search(arr,arr+size,66);
//     if(Target){
//         cout<<"Fount"<<endl;
//     }
//     else{
//         cout<<"Not Found "<<endl;
//     }
// }

// Output = Fount

// ==================================================

//find first occurrence of an element 

// int FirstOcc(int arr[],int size, int target){
//     int start = 0;
//     int end = size-1;
//     int mid = (start+(end-start)/2);

//     int ans = 0;

//     while (start <= end){
//         if(arr[mid]==target){
//             ans = mid;
//             end = mid-1;
//         }
//         else if(arr[mid]>target){
//             end = mid-1;
//         }
//         else if(arr[mid]<target){
//             start = mid+1;
//         }
//         mid =(start+(end-start));
//     }
//     return ans;
// }

// int main(){
//     int arr[]={1,3,4,4,4,4,4,6,7,9};
//     int size = 10;

//     int FirstValue = 4;

//     int FirstLoc = FirstOcc(arr,size,FirstValue);

//     cout<<"First Occurrence At Location : "<<FirstLoc<<endl;
// }

// Output = First Occurrence At Location : 2 

// ================================================================

//find last  occurrence of an element

// int LastOcc(vector<int>arr,int size, int LastLoc){
//     int start = 0;
//     int end = size -1;
//     int mid = (start+(end-start)/2);

//     int ans = 0;
//     while(start<=end){
//         if(arr[mid]==LastLoc){
//             ans = mid;
//             start = mid + 1;
//         }
//         else if(arr[mid]>LastLoc){
//             end = mid - 1;
//         }
//         else if(arr[mid]<LastLoc){
//             start = mid +1;
//         }
//         mid = (start+(end-start));
//     }
//     return ans;
// }

// int main(){
//     vector<int>arr{2,5,7,7,7,7,9,20};
//     int size = arr.size();
//     int LastValue = 7;

//     int LastLoc = LastOcc(arr,size,LastValue);
//     cout<<"Last Occurrence At Location : "<<LastLoc<<endl;
// }

// Output = Last Occurrence At Location : 5

// =========================================================

// Using Predefine Function Lower_Bound and Upper_Bound

// int main(){
//     vector<int>arr{10,20,30,30,30,30,30,40,50};
//     int target = 30;

//     auto FirstLoc = lower_bound(arr.begin(),arr.end(),target);
//     cout<<"First Location : "<<FirstLoc-arr.begin()<<endl;

//     auto LastLoc = upper_bound(arr.begin(),arr.end(),target);
//     cout<<"Last Location :"<<LastLoc-arr.begin()<<endl;
// }

// =================================================== 

// Total Number of occurrence 

// int FirstIndex(vector<int>arr, int target){
//     int start = 0;
//     int end = arr.size()-1;
//     int mid = (start+(end-start)/2);

//     int ans = 0;

//     while(start<=end){
//         if(arr[mid]==target){
//             ans = mid;
//             end = mid - 1;
//         }
//         else if(arr[mid]>target){
//             end = mid- 1;
//         }
//         else if(arr[mid]<target){
//             start = mid + 1;
//         }
//         mid = (start+(end-start)/2);
//     }
//     return ans;
// }

// int LastIndex(vector<int>arr, int target){
//     int start = 0;
//     int end = arr.size()-1;
//     int mid = (start+(end-start)/2);

//     int ans = 0;
//     while(start<=end){
//         if(arr[mid]==target){
//             ans = mid;
//             start = mid + 1;
//         }
//         else if(arr[mid]>target){
//             end = mid - 1;
//         }
//         else if (arr[mid]<target){
//             start = mid + 1;
//         }
//         mid = (start+(end-start)/2);
//     }
//     return ans;
// }

// int main(){
//     vector<int>arr{2,4,4,4,4,4,4,6,8,9};

//     int target = 4;

//     int FirstValue = FirstIndex(arr,target);
//     cout<<"First Occurrence : "<<FirstValue<<endl;
//     int LastValue = LastIndex(arr,target);
//     cout<<"Last Occurrence : "<<LastValue<<endl;

//     int TotalNum = LastValue - FirstValue + 1;

//     cout<<"Total Number of Occurrence Is : "<<TotalNum<<endl;
// }

// Output = 
// First Occurrence : 1
// Last Occurrence : 6
// Total Number of Occurrence Is : 6

// ===============================================================

// find Pivot element 

int FindPivot(vector<int>arr){
    int start = 0;
    int end = arr.size();
    int mid = (start+(end-start)/2);

    while(start<=end){
        if(start == end ){
            return start;
        }
        else if(mid <= end && arr[mid]>arr[mid+1]){
            return mid; 
        }
        else if(mid -1 >= start && arr[mid - 1]>arr[mid]){
            return mid -1;
        }
        else if(arr[start]>arr[mid]){
            end = mid -1;
        }
        else if(arr[start]<arr[mid]){
            start = mid +1;
        }
        mid = (start+(end-start)/2);
    }
}

int main(){
    // vector<int>arr{1,2,10,3,4,5};
    // vector<int>arr{1,2,10,3,4};
    // vector<int>arr{1,2,3,4,5,7};
    vector<int>arr{1,2,10,2,4,5};

    int Pivot = FindPivot(arr);

    cout<<"Pivot element is find at location : "<<Pivot<<endl;

    return 0;
}

// Output =
// Pivot element is find at location : 2
// Pivot element is find at location : 2
// Pivot element is find at location : 5
// Pivot element is find at location : 2

// =================================================


class Solution {
public:
    int findPivot(vector<int>arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = (start+(end-start)/2);

    while(start<=end){
        if(start == end ){
            return start;
        }
        else if(mid <= end && arr[mid]>arr[mid+1]){
            return mid; 
        }
        else if(mid -1 >= start && arr[mid - 1]>arr[mid]){
            return mid -1;
        }
        else if(arr[start]>arr[mid]){
            end = mid -1;
        }
        else if(arr[start]<arr[mid]){
            start = mid +1;
        }
        mid = (start+(end-start)/2);
    }
    return -1;
}
    int binary_Search(vector<int>arr,int start, int end, int target){
        int mid = (start+(end-start)/2);

        while(start <= end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid -1;
        }
        else if(arr[mid]<target){
            start = mid + 1;
        }
        mid = (start+(end-start)/2);
    }
    return -1;
}

    int search(vector<int>& nums, int target) {
        int pivotIndex = findPivot(nums);

        int ans = 0;
        if(target >= nums[0] && target <= nums[pivotIndex]){
            ans = binary_Search(nums, 0, pivotIndex, target);
        }
        else{
            ans = binary_Search(nums, pivotIndex+1,nums.size()-1,target);
        }
        return ans;
    }
};


// ========================================================

// .solve

class Solution {
public:
int findPivot(vector<int> arr) {
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e-s)/2;

  while(s <= e) {
    if(s == e) {
      //single element
      return s;
    }
    if(mid <= e && arr[mid] > arr[mid+1])
      return mid;
    if(mid-1 >= s && arr[mid-1] > arr[mid])
      return mid-1;

    if(arr[s] > arr[mid]) 
      e = mid - 1;
    else
      s = mid + 1;

    mid = s + (e-s)/2;

  }
  return -1;
}
int binarySearch(vector<int> arr, int s, int e, int target) {
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid] == target) {
            return mid;
        }
        if(arr[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s +(e-s)/2;
    }
    return -1;


}
    int search(vector<int>& nums, int target) {

        int pivotIndex = findPivot(nums);
        int ans = 0;
        if(target >= nums[0] && target <= nums[pivotIndex]) {
            ans = binarySearch(nums, 0, pivotIndex, target);

        }
        else {
            ans = binarySearch(nums, pivotIndex+1, nums.size()-1, target);
        }

    return ans;











        
    }
};

// ==================================================================



