#ifndef FOOD_WASTAGE_REPORT_H_
#define FOOD_WASTAGE_REPORT_H_

#include <string>
#include <vector>

#include "food_wastage_record.h"

// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>

class FoodWastageReport {
  // ======================= YOUR CODE HERE =======================
  // Write the FoodWastageReport class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================

 public:
  FoodWastageReport(const std::vector<FoodWastageRecord> &food_wastage_records)
      : food_wastage_records_(food_wastage_records) {}

  std::vector<std::string> MostCommonlyWastedFoods() const;

  std::vector<std::string> MostCostlyWasteProducingMeals() const;

  double TotalCostOfFoodWasted() const;

  std::vector<std::string> MostCommonWastageReasons() const;

  std::vector<std::string> MostCommonDisposalMechanisms() const;

  std::vector<std::string> SuggestWasteReductionStrategies() const;

 private:
  std::vector<FoodWastageRecord> food_wastage_records_;

  std::vector<std::string> most_commonly_wasted_foods_;

  std::vector<std::string> most_costly_waste_producing_meals_;

  double total_cost_of_food_wasted_;

  std::vector<std::string> most_common_wastage_reasons_;

  std::vector<std::string> most_common_disposal_mechanisms_;

  std::vector<std::string> suggested_strategies_to_reduce_waste_;
};

#endif