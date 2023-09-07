// Implementation of the OccupancyMapHash class
// This class is a hash table based approach to occupancy map
// The occupancy map is a 2D grid of boolean values
// The occupancy map is implemented as a 2D vector of boolean values
// The occupancy map is initialized to be all false
// The occupancy map is updated by setting the location to be occupied
// The occupancy map is queried by checking the occupancy status of a location

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
  // Insert the location into the set
  mOccupancyGrid.insert(Location);
}

// Check if a location is occupied
bool COccupancyMapHash::CheckIsOccupied(std::pair<int,int> Location)
{
  // Check if the location is in the set
  return mOccupancyGrid.find(Location) != mOccupancyGrid.end();
}