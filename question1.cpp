// Name : Ayush Verma
// Roll : 2010993528
// Set No : 5
// Question : 1

#include <iostream>
#include <vector>
using namespace std;

void printTargetLengthSubArray(vector<int> list ,int target)
{
    // Using a temporary max and start variable 
    // to keep a check on max length of subarray with length equal to target..
    int max = 0 ,start = 0;

    cout << "SubArrays with sum = " << target << " are "<< endl;
    for(int i=0 ;i<list.size() ;i++)
    {
        for(int j=i+1 ;j<list.size(); j++)
        {
            // Using nesting loop to check for each subarray ..
            int sum = 0;
            for(int k=i ; k<=j ;k++)
            {
                // cout << list[k] << " , ";
                sum += list[k];
            }
            // find sum for each subarray and check with target...
            // cout << " = " << sum << endl;
            if(sum == target)
            {
                cout << "{ ";
                for(int x=i ;x<=j ;x++)
                    cout << list[x] << " , ";
                cout << " } " << endl;
                // update max if length of subarray i.e. j-i+1 is greater than max....
                // and giving start the value of starting index of subarray....
                if(max <  j-i + 1)
                {
                    max = j-i+1;
                    start = i;  
                }
            }
        }        
    }

    cout << "The longest subarray is { ";
    for(int i = start ;i<start + max ;i++)
        cout << list[i] << " , ";
    cout << " } having length = " << max <<  endl;
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
    // list = {3 ,5 ,6 ,-5 ,5 ,3 ,5 ,3 ,-2 ,0};
    int target = 8;
    // for(int i=0 ;i<n ;i++)
    // {
    //     cout << list[i] << " , ";
    // }
    // cout << endl;

    // Call print Target Sub Array function to find subarr   
    printTargetLengthSubArray(list ,target);
    return 0;
}