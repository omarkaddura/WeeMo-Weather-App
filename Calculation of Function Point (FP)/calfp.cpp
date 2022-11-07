//Omar Kaddura
#include <bits/stdc++.h>
using namespace std;
   
// Function to calculate Function Point
void calfp(int frates[][3], int fac_rate)
{
   
    // Function Units
    string functionUnits[5] = {
        "External Inputs",
        "External Outputs",
        "External Inquiries",
        "Internal Logical Files",
        "External Interface Files"
    };
   
    // Weight Rates
    string Rates[3] = { "Low", "Average", "High" };
   
    // Weight Factors
    int Factors[5][3] = {
        { 3, 4, 6 },
        { 4, 5, 7 },
        { 3, 4, 6 },
        { 7, 10, 15 },
        { 5, 7, 10 },
    };
   
    int UFP = 0;
   
    // Calculating UFP (Unadjusted Function Point)
    for (int i = 0; i < 5; i++) {
   
        for (int j = 0; j < 3; j++) {
   
            int freq = frates[i][j];
   
            UFP += freq * Factors[i][j];
        }
    }
   
    
   
    int sumF = 0;
   
    // Taking Input of factors rate
    for (int i = 0; i < 14; i++) {
   
        int rate = fac_rate;
   
        sumF += rate;
    }
   
    // Calculate CFP
    double CAF = 0.65 + 0.01 * sumF;
   
    // Calculate Function Point (FP)
    double FP = UFP * CAF;
   
    // Output Values
   
    cout << "Unadjusted Function Points (UFP) : " << UFP << endl;
   
    cout << "Complexity Adjustment Factor (CAF) : " << CAF << endl;
   
    cout << "Function Points (FP) : " << FP << endl;
}
   
// driver function
int main()
{
    int frates[5][3] = {
        { 0, 50, 0 },
        { 0, 40, 0 },
        { 0, 35, 0 },
        { 0, 6, 0 },
        { 0, 4, 0 }
    };
   
    int fac_rate = 3;
   
    calfp(frates, fac_rate);
   
    return 0;
}
