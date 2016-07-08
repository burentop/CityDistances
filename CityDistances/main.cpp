//
//  main.cpp
//  CityDistances
//
//  Created by Brent Perry on 7/8/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    vector<double> distances;
    double low, high, mean;
    double sum = 0;
    
    cout << "Please type distances between cities (enter any letter to quit): \n";
    
    for (double distance; cin >> distance;) {
        distances.push_back(distance);
    }
    
    sort(distances);
    
    low = distances[0];
    high = distances[int (distances.size() - 1)];
    
    for (double distance : distances) {
        sum += distance;
    }
    
    mean = sum / distances.size();
    
    cout << "Shortest distance entered: " << low << ".\n";
    cout << "Longest distance entered: " << high << ".\n";
    cout << "Total distance: " << sum << ".\n";
    cout << "Mean distance: " << mean << ".\n";
    
}
