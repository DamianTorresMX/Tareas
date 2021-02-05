
#include <iostream>
#include <string>

using namespace std;
int main()
{
    vector<double> distances;
    double distance;
    double total = 0;
    double smallest = 0;
    double greatest = 0;
    double mean = 0;
    while (cin>>distance) {
        if (distance>0) 
            distances.push_back(distance);
    }
    if (distances.size()==0)
        simple_error("No se han introducido valores válidos");
    smallest = distances[0];
    greatest = distances[0];
    for (int i = 0; i<distances.size(); ++i) {
        total += distances[i];
        if (distances[i]<smallest)
            smallest = distances[i];
        if (distances[i]>greatest)
            greatest = distances[i];
    }
    mean = total / distances.size();
    cout << "Distancia total: " << total << endl;
    cout << "La distancia más pequeña: " << smallest << endl;
    cout << "La mayor distancia: " << greatest << endl;
    cout << "Distancia media: " << mean << endl;
    return 0;
}
