#ifndef FOOD_WASTAGE_TRACKER_H_
#define FOOD_WASTAGE_TRACKER_H_

#include <algorithm> //find
#include <vector>

#include "food_wastage_report.h"

// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>

class FoodWastageTracker {
  // ======================= YOUR CODE HERE =======================
  // Write the FoodWastageTracker class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================

  public:
    bool AddRecord( const FoodWastageRecord &record );
    
    // bool DeleteRecord( const FoodWastageRecord &record ) {}
    
    const std::vector<FoodWastageRecord> &GetRecords() const { return food_wastage_records_; }
    
    FoodWastageReport GetFoodWastageReport() const {
      FoodWastageReport food_wastage_report( food_wastage_records_ );
      return food_wastage_report;
    }

  private:
    std::vector<FoodWastageRecord> food_wastage_records_;

};

#endif