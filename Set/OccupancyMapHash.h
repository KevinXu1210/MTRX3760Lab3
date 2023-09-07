#ifndef _OCCUPANCYMAPVECTOR_H
#define _OCCUPANCYMAPVECTOR_H

#include <string>
#include <set>
#include "OccupancyMapBase.h"

// Class to implement a occupancy map using set
class COccupancyMapHash : public COccupancyMapBase
{

  public:
    COccupancyMapHash();
    //virtual ~COccupancyMapHash(){};
    
    // Return the name of the approach as a string, for display purposes
    std::string GetNameOfApproach() override; 
    
    // Add a location observed to be occupied to the map
    void AddOccupiedLocation(std::pair<int,int> Location) override;
    
    // Check if a location is occupied
    bool CheckIsOccupied(std::pair<int,int> Location) override;

  private:
    // Set to store occupancy information
    std::set<std::pair<int,int>> mOccupancyGrid;

};

#endif
