
#include <iostream>
#include <string>

using namespace std;
int main()
{
    vector<double> temps;
    double temp;
    while (cin>>temp)
        temps.push_back(temp);

   
    sort(temps.begin(),temps.end());
    double median = 0;


    if (temps.size()%2 == 1)
        median = temps[(temps.size()-1)/2];


    else
        median = (temps[temps.size()/2] + temps[temps.size()/2 - 1]) / 2;
    cout << "Temperatura media: " << median << endl;
    return 0;
}
