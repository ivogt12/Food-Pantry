// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>

#include <iostream>
#include <iterator>
#include <map>

#include "food_wastage_report.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (food_wastage_report.h), only
// if you didn't implement them inline within food_wastage_report.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the FoodWastageReport
// class.
// ===================================================================

std::vector<std::string> FoodWastageReport::MostCommonlyWastedFoods() const {

    std::map<std::string, int> name_repetitions;
    std::vector<std::string> names;
    for ( auto recs : food_wastage_records_ ) {
        name_repetitions[recs.FoodName()]++;
    }
    
    auto max_value = 0;
    for ( auto i = name_repetitions.begin(); i != name_repetitions.end(); ++i ) {
        if ( i->second >= max_value) {
            max_value = i->second;
        }
    }

    for ( const auto & pair : name_repetitions ) {
        if ( pair.second == max_value ) {
            names.push_back(pair.first);
        }
    }
    return names;
}
    std::vector<std::string> FoodWastageReport::MostCostlyWasteProducingMeals() const {
        std::vector<std::string> records;
        std::map<std::string, int> meals;
        // {{"B", 0}, {"L", 0}, {"D", 0}};
        for ( const auto & record : food_wastage_records_ ) {
            meals[record.Meal()] += record.Cost();
        }

        int highest_cost = 0;
        
        for ( const auto & meal : meals ) {
            if ( meal.second >= highest_cost ) highest_cost = meal.second;
        }

        for ( const auto & pair : meals) {
            if ( pair.second == highest_cost ) records.push_back(pair.first);
        }

        return records;
    }
    
    double FoodWastageReport::TotalCostOfFoodWasted() const { 
        double total = 0;
        for ( const auto & record : food_wastage_records_ ) {
            total += record.Cost();
        }
        return total;
    }
    
    std::vector<std::string> FoodWastageReport::MostCommonWastageReasons() const { 
        std::vector<std::string> records;
        std::map<std::string, int> wastage_reasons;

        for ( const auto & record : food_wastage_records_ ) {
            wastage_reasons[record.WastageReason()]++;
        }

        int most_common_wastage = 0;

        for ( const auto & reason : wastage_reasons ) {
            if ( reason.second >= most_common_wastage ) most_common_wastage = reason.second;
        }

        for ( const auto & pair : wastage_reasons) {
            if ( pair.second == most_common_wastage ) records.push_back( pair.first );
        }

        return records;
     }
    
    std::vector<std::string> FoodWastageReport::MostCommonDisposalMechanisms() const { 
        std::vector<std::string> records;
        std::map<std::string, int> disposal_mechanisms;

        for ( const auto & record : food_wastage_records_ ) {
            disposal_mechanisms[record.DisposalMechanism()]++;
        }

        int most_common_disposal = 0;

        for ( const auto & mech : disposal_mechanisms ) {
            if ( mech.second >= most_common_disposal ) most_common_disposal = mech.second;
        }

        for ( const auto & pair : disposal_mechanisms) {
            if ( pair.second == most_common_disposal ) records.push_back( pair.first );
        }

        return records;
     }
    
    std::vector<std::string> FoodWastageReport::SuggestWasteReductionStrategies() const { 
        std::vector<std::string> final;
        std::map<std::string, int> strategies;
        for ( const auto & reason : MostCommonWastageReasons() ) {
            std::cout << reason << "\n";
            if ( reason == "Expired" ) {
                strategies["Donate before expiration"];
            }

            else if ( reason == "Tastes bad" ) {
                strategies["Buy less food"]++;
                strategies["Recycle left overs"]++;
            }

            else if ( reason == "Too much left overs" ) {
                strategies["Cook small servings"]++;
                strategies["Buy less food"]++;
                strategies["Recycle left overs"]++;
            }
        }
        for ( const auto & s : strategies ) {
            final.push_back(s.first);
            std::cout << s.first << "\n";
        } 

        return final;
     }

