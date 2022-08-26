// Name : Ayush Verma
// Roll : 2010993528
// Set No : 5
// Question : 2

#include <iostream>
#include <vector>
using namespace std;

void printZeroLengthSubArray(vector<int> list)
{
    int target = 0; // using an temporary variable target with value 0 to check for sum = 0..... 
    cout << "Subarrays with zero-sum are : " << endl;
    for(int i=0 ;i<list.size() ;i++)
    {
        for(int j=i ;j<list.size(); j++)
        {
            // Using nesting loop to check for each subarray ..
            int sum = 0;
            for(int k=i ; k<=j ;k++)
            {
                // cout << list[k] << " , ";
                sum += list[k];
            }
            // find sum for each subarray and check with target = 0...
            // cout << " = " << sum << endl;
            if(sum == target)
            {
                cout << "{ ";
                for(int x=i ;x<=j ;x++)
                    cout << list[x] << " , ";
                cout << " } " << endl;
            }
        }        
    }

}

int main()
{
    vector<int> list;
    int n ,x;
    cin >> n;
    for(int i=0 ;i<n ;i++)
    {
        cin >> x;
        list.push_back(x);
    }
    // list = {4 ,2 ,-3, -1, 0 ,4};
    // list = {3 ,4 ,-7 ,3 ,1 ,3 ,1 ,-4 ,-2 ,2};
    
    // for(int i=0 ;i<n ;i++)
    // {
    //     cout << list[i] << " , ";
    // }
    // cout << endl;

    // Call print Target Sub Array function to find subarr   
    printZeroLengthSubArray(list);
    return 0;
}