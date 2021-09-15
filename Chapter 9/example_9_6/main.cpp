#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    // vector<float> Transaction;
    // vector<float> Sums(5);
    vector<float> SourceValues;
    vector<float> Products(5);
    vector<float>::iterator i;
    // float InitValue = 10000.0;
    // float ResultSum;

    SourceValues.push_back(1.);
    SourceValues.push_back(1./2.);
    SourceValues.push_back(1./3.);
    SourceValues.push_back(1./4.);
    SourceValues.push_back(1./5.);
    /*
    Transaction.push_back(18.56);
    Transaction.push_back(-100.00);
    Transaction.push_back(123.01);
    Transaction.push_back(7610.23);
    Transaction.push_back(-507.65);
    */

    partial_sum(SourceValues.begin(), SourceValues.end(), Products.begin(), multiplies<float>());
    // partial_sum(Transaction.begin(), Transaction.end(), Sums.begin());
    // ResultSum = accumulate(Transaction.begin(), Transaction.end(), InitValue, minus<float>());

    /* for (i = Sums.begin(); i != Sums.end(); i++)
        cout << *i << endl; */

    for (i = Products.begin(); i != Products.end(); i++)
        cout << *i << endl;

    // cout << "The balance of the transactions is " << ResultSum << endl;

    return 0;
}