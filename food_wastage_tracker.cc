// Please fill in below.
// <Your name>
// <Your section number> (e.g. CPSC 121L-01)
// <Date>
// <Your csu.fullerton.edu email>
// <Your GitHub username>

#include "food_wastage_tracker.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement
// the member functions declared in the header (food_wastage_tracker.h), only
// if you didn't implement them inline within food_wastage_tracker.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the FoodWastageTracker
// class.
// ===================================================================

bool FoodWastageTracker::AddRecord( const FoodWastageRecord &record ) {
    //checks for the record in the food_wastage_record
    for ( const auto & rec : food_wastage_records_ ) {
        if ( rec.Date() == record.Date() ) {
            if ( rec.Meal() == record.Meal() ) {
                if ( rec.FoodName() == record.FoodName() ) {
                    if ( rec.QuantityInOz() == record.QuantityInOz() ) {
                        if ( rec.WastageReason() == record.WastageReason() ) {
                            if ( rec.DisposalMechanism() == record.DisposalMechanism() ) {
                                if ( rec.Cost() == record.Cost() ) {
                                    //if the record is already in the vector, don't add and delete it
                                    return false;
                                }
                            }
                        }
                    }
                }
            }
        }

    }
    //add the record if not in the vector and return true
    food_wastage_records_.push_back( record );
    return true;
}

bool FoodWastageTracker::DeleteRecord( const FoodWastageRecord &record ) {
    //check if the record is in the vector
    for ( auto i = food_wastage_records_.begin(); i != food_wastage_records_.end(); ++i  ) {
        if ( i->Date() == record.Date() ) {
            if ( i->Meal() == record.Meal() ) {
                if ( i->FoodName() == record.FoodName() ) {
                    if ( i->QuantityInOz() == record.QuantityInOz() ) {
                        if ( i->WastageReason() == record.WastageReason() ) {
                            if ( i->DisposalMechanism() == record.DisposalMechanism() ) {
                                if ( i->Cost() == record.Cost() ) {
                                    //if it is, delete it and return true
                                    food_wastage_records_.erase( i );
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    //tried to delete a record that isn't in the vector
    return false;
}

