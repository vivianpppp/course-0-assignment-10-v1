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

void Print2(Purchase purchase) {
    if (purchase.category == 1) {
        cout << "Shopping: ";
    } else if (purchase.category == 2) {
        cout << "Transportation: ";
    } else if (purchase.category == 3) {
        cout << "Other: ";
    } else {
        cout << "Error Invalid Category! ";
    }
    cout << '$' << purchase.amount;
}
// -----------------------------------------------------------------------
// -----------------------------------------------------------------------
// -----------------------------------------------------------------------

Budget GetBudgetFromUser() {
  Budget budget;
  cout << "What is the item category?";
  cin >> budget.category;
  cout << "What is the limit amount?";
  cin >> budget.limit;
  return budget;
}


Purchase GetPurchaseFromUser() {
  Purchase item;
  cout << "What is the item category?";
  cin >> item.category;
  cout << "What is the purchase amount?";
  cin >> item.amount;
  return item;
}



// ------------------- DO NOT CHANGE CODE IN THIS SECTION -------------------
// ----------------------- Updating comments is ok. -------------------------
// --------------------------------------------------------------------------

/* The comment for this function is removed, try to understand what this
 * function does by reading it. Once you understand, you are welcome to update
 * this comment to help you remember.
 * This section is checking if you're within the budget or not.
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

int GetTotalForCategory(unsigned int category, Purchase item0, Purchase item1, Purchase item2) {
  int total_val = 0;
  if (category == item0.category) {
    total_val = item0.amount;
  }
  if (category == item1.category) {
    total_val = total_val + item1.amount;
  }
  if (category == item2.category) {
    total_val = total_val + item2.amount;
  }
  return total_val;
}

/* The comment for this function is removed, try to understand what this
 * function does by reading it. Once you understand, you are welcome to update
 * this comment to help you remember. Feel free to add comments before lines in
 * the code below as well.
 *
 */
int main() {
    cout << "Category Types:" << endl;
    cout << "1: Shopping" << endl << "2: Transportation" << endl << "3: Other" << endl;

    cout << "Enter a limit for shopping category" << endl;
    Budget limit_shopping = GetBudgetFromUser();
    Print(limit_shopping);
    cout << endl;

    cout << "Enter a limit for transportation category" << endl;
    Budget limit_transportation = GetBudgetFromUser();
    Print(limit_transportation);
    cout << endl;

    cout << "Enter a limit for other category" << endl;
    Budget limit_other = GetBudgetFromUser();
    Print(limit_other);
    cout << endl;

    cout << "Enter information about first item purchased." << endl;
    Purchase item0 = GetPurchaseFromUser();
    Print2(item0);
    cout << endl;

    cout << "Enter information about second item purchased." << endl;
    Purchase item1 = GetPurchaseFromUser();
    Print2(item1);
    cout << endl;

    cout << "Enter information about third item purchased." << endl;
    Purchase item2 = GetPurchaseFromUser();
    Print2(item2);
    cout << endl;

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
