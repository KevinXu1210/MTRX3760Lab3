// This file implements the OccupancyMapHash class
// This class is a hash table based approach to occupancy map
// The occupancy map is a 2D grid of boolean values
// The occupancy map is implemented as a 2D vector of boolean values
// The occupancy map is initialized to be all false
// The occupancy map is updated by setting the location to be occupied
// The occupancy map is queried by checking the occupancy status of a location

#include "OccupancyMapHash.h"

const int MAX_SIZE = 2048; // MAX_SIZE is the maximum size of the map

// Constructor
COccupancyMapHash::COccupancyMapHash()
{
  // Initialize the occupancy grid to be all false
  mOccupancyGrid.resize(MAX_SIZE, std::vector<bool>(MAX_SIZE, false));
}

// Return the name of the approach as a string, for display purposes
std::string COccupancyMapHash::GetNameOfApproach()
{
  return "2D-Vector-Base";
}

// Add a location observed to be occupied to the map
void COccupancyMapHash::AddOccupiedLocation(std::pair<int,int> Location)
{
  // Set the location to be occupied
  mOccupancyGrid[Location.first][Location.second] = true;
}

// Check if a location is occupied
bool COccupancyMapHash::CheckIsOccupied(std::pair<int,int> Location)
{
  // Return the occupancy status of the location
  return mOccupancyGrid[Location.first][Location.second];
}

