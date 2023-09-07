
#include "OccupancyMapHash.h"

// Constructor
COccupancyMapHash::COccupancyMapHash()
{
}

// Return the name of the approach as a string, for display purposes
std::string COccupancyMapHash::GetNameOfApproach()
{
    return "Set-Base";
}

// Add a location observed to be occupied to the map
void COccupancyMapHash::AddOccupiedLocation(std::pair<int,int> Location)
{
    mOccupancyGrid.insert(Location);
}

// Check if a location is occupied
bool COccupancyMapHash::CheckIsOccupied(std::pair<int,int> Location)
{
    return mOccupancyGrid.find(Location) != mOccupancyGrid.end();
}