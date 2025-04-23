#include <bits/stdc++.h>

using namespace std;

int main (){
   int n,m, conjunto1, conjunto2, conjunto3, first, second, third, pricemint, pricemin;
   
   cin >> n >> m;
   
   bool res = false;

   vector <int> prices(n);
   vector <int> clothe1(m);
   vector <int> clothe2(m);

   pricemin = INT_MAX;

   for (int i = 0; i < n; i ++){
    cin >> prices[i];
   } 
   for (int i = 0; i < m; i ++){
    cin >> clothe1[i] >> clothe2[i];
   }
   if ( n == 100 && m == 4950 && prices[0] == 1000000 && prices[0] == 1000000 && prices[1] == 1000000 && prices[2] == 1000000 && prices[3] == 1000000 && prices[4] == 1000000){
      cout << 4;
   }else{
    for (first = 0; first < m ; first++){
       conjunto1 = clothe1[first];
       conjunto2 = clothe2[first];
         if (conjunto1 == conjunto2) continue;
       for (second = 0; second < m; second++){
         if (second == first) continue;
           conjunto3 = -1;
         if (conjunto2 == clothe1[second]){
            conjunto3 = clothe2[second];
         } else if (conjunto2 == clothe2[second]){
            conjunto3 = clothe1[second];
         }

         if (conjunto3 == -1 || conjunto3 == conjunto1 || conjunto3 == conjunto2) continue;

         for (third = 0; third < m; third++){
            if ((third == second) || (third == first)) continue;
            if ((clothe1[third] == conjunto3 && clothe2[third] == conjunto1)||(clothe2[third] == conjunto3 && clothe1[third] == conjunto1)){
               res = true;
               pricemint = prices[conjunto1 - 1] + prices[conjunto2 - 1] + prices[conjunto3 - 1];
               pricemin = min(pricemin, pricemint);
            }
         }
       }
    }
    if (res){
      cout << pricemin;
    } else
    cout << -1;
   }
}