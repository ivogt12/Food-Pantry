#ifndef FOOD_WASTAGE_RECORD_H_
#define FOOD_WASTAGE_RECORD_H_

#include <string>

// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>

class FoodWastageRecord {
  // ======================= YOUR CODE HERE =======================
  // Write the FoodWastageRecord class here. Refer to your class design for the
  // member variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================

  public:
    void SetDate( const std::string &date ) {
      date_ = date;
    }
    
    void SetMeal( const std::string &meal ) {
      meal_ = meal;
    }
    
    void SetFoodName( const std::string &food_name ) {
      food_name_ = food_name;
    }
    
    void SetQuantityInOz( double qty_in_oz ) {
      qty_in_oz_ = qty_in_oz;
    }
    
    void SetWastageReason( const std::string &wastage_reason ) {
      wastage_reason_ = wastage_reason;
    }
    
    void SetDisposalMechanism( const std::string &disposal_mechanism ) {
      disposal_mechanism_ = disposal_mechanism;
    }
    
    void SetCost( double cost ) {
      cost_ = cost;
    }

    std::string Date() const { return date_; }

    std::string Meal() const { return meal_; }

    std::string FoodName() const { return food_name_; }

    double QuantityInOz() const { return qty_in_oz_; }

    std::string WastageReason() const { return wastage_reason_; }

    std::string DisposalMechanism() const { return disposal_mechanism_; }

    double Cost() const { return cost_; }

  private:
    std::string date_;
    
    std::string meal_;
    
    std::string food_name_;
    
    double qty_in_oz_;
    
    std::string wastage_reason_;
    
    std::string disposal_mechanism_;
    
    double cost_;

};

#endif