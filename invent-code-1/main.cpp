#include <iostream>
#include <string>
using namespace std;

// ------------------- DO NOT CHANGE THIS IN THIS SECTION -------------------
// --------------------------------------------------------------------------
// --------------------------------------------------------------------------

/* Category Types:
 * 1: Shopping
 * 2: Transportation
 * 3: Other
 */

struct Purchase {
    unsigned int category;    // A category as described above.
    int amount;               // The cost of the purchase.
};

struct Budget {
    unsigned int category;    // A category as described above.
    int limit;                // The maximum amount available for the specified category.
};

/* Prints out a budget in a human readable foramt.
 * Args:
 *   budget: A Budget Type to Print.
 */
void Print(Budget budget) {
    if (budget.category == 1) {
        cout << "Shopping: ";
    } else if (budget.category == 2) {
        cout << "Transportation: ";
    } else if (budget.category == 3) {
        cout << "Other: ";
    } else {
        cout << "Error Invalid Category! ";
    }
    cout << '$' << budget.limit;
}
// -----------------------------------------------------------------------
// -----------------------------------------------------------------------
// -----------------------------------------------------------------------

Budget FromUser() {
    Budget budget;
    cin << budget.category;
    cin << budget.limit;
    return budget;
}


Purchase FromUser() {
Purchase item;
    cin << item.category;
cin << item.limit;
    return item;
}



// ------------------- DO NOT CHANGE CODE IN THIS SECTION -------------------
// ----------------------- Updating comments is ok. -------------------------
// --------------------------------------------------------------------------

/* The comment for this function is removed, try to understand what this
 * function does by reading it. Once you understand, you are welcome to update
 * this comment to help you remember.
 */
void BudgetStatus(Budget budget, int total_spent) {
    cout << "Budget ";
    Print(budget);
    if (total_spent < budget.limit) {
        cout << " And you remained within your budget!";
    } else {
        cout << " You blew the budget!";
    }
    cout << endl;
}

/* The comment for this function is removed, try to understand what this
 * function does by reading it. Once you understand, you are welcome to update
 * this comment to help you remember. Feel free to add comments before lines in
 * the code below as well.
 */
int main() {
    cout << "Enter a limit for shopping category" << endl;
    Budget limit_shopping = GetBudgetFromUser(1);
    Print(limit_shopping);
    cout << endl;

    cout << "Enter a limit for transportation category" << endl;
    Budget limit_transportation = GetBudgetFromUser(2);
    Print(limit_transportation);
    cout << endl;

    cout << "Enter a limit for other category" << endl;
    Budget limit_other = GetBudgetFromUser(3);
    Print(limit_other);
    cout << endl;

    Purchase item0 = GetPurchaseFromUser();
    Print(item0);

    Purchase item1 = GetPurchaseFromUser();
    Print(item1);

    Purchase item2 = GetPurchaseFromUser();
    Print(item2);

    int total_other = GetTotalForCategory(limit_other.category, item0, item1, item2);
    int total_shopping = GetTotalForCategory(limit_shopping.category, item0, item1, item2);
    int total_transportation = GetTotalForCategory(limit_transportation.category, item0, item1, item2);

    BudgetStatus(limit_other, total_other);
    BudgetStatus(limit_shopping, total_shopping);
    BudgetStatus(limit_transportation, total_transportation);
}
// -----------------------------------------------------------------------
// -----------------------------------------------------------------------
// -----------------------------------------------------------------------
