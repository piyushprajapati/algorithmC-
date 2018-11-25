 /*Find the maximum-sum subarray

   let arr[]={10,-5,-3,-4,2,12,-8,-12,19}

   maximum-sum subarray={10,-5,-3,-4,2,12}
   ans max sum = 20

  */


 #include<bits/stdc++.h>
 #define ll long long
 using namespace std;


int maxSubArraySum(int *arr, int length) {
   int maxSoFar = 0, currSum = 0;
    for(int index = 0; index < length; index++)
      {
       currSum += arr[index];
       if(currSum < 0)
         currSum = 0;
       else if(maxSoFar < currSum)
          maxSoFar = currSum;
        }
   return maxSoFar;
 }


 int main(){


 int *arr,length;
 cin>>length;

 arr =(int *)malloc(sizeof(int)*length);

 for(int index = 0; index < length; index++)
  cin>>arr[index];

 cout<< maxSubArraySum(arr, length);
 return 0;

 }
