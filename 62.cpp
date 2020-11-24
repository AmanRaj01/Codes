#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight,objn;
};

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, struct Item arr[], int n){

    sort(arr, arr + n, cmp);

    //    Uncomment to see new order of Items with their
    //    ratio
    /*
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].value << "  " << arr[i].weight << " :
    "
             << ((double)arr[i].value / arr[i].weight) <<
    endl;
    }
    */

    int curWeight = 0;
    double finalvalue = 0.0;

    cout<<"Objects which are in the bag: ";
    for (int i = 0; i < n; i++){

        if (curWeight + arr[i].weight <= W)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
            cout<<arr[i].objn<<" ";
        }

        else
        {
            int remain = W - curWeight;
            if(remain>0){
               cout<<arr[i].objn<<" ";
            }
            finalvalue+= arr[i].value * ((double)remain / (double)arr[i].weight);
            break;
        }
    }
    cout<<'\n';
    return finalvalue;
}

int main()
{
    int W ,n;
    cout<<"Enter the bag weight:";
    cin>>W;
    cout<<"Enter no items:";
    cin>>n;
    Item arr[n];

    for(int i=0;i<n;i++){
        cout<<"\nDetails of obj-Value-"<<i+1<<": ";
        cin>>arr[i].value;
        cout<<"\nWeight-";
        cin>>arr[i].weight;
        arr[i].objn=i+1;
    }


    cout << "Maximum value we can obtain = "<< fractionalKnapsack(W, arr, n);

    return 0;
}
