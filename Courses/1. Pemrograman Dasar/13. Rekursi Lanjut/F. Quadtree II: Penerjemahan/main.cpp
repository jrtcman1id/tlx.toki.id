// #include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int m[128][128];
int nJawaban;
string jawaban[128*128];

void inverseQuadtree(int r, int c, int k, string s){
   if (s.length() <= 1) {
      // int val = (s[0] == '1') ? 1 : 0;
      int val = 0;
      if (s[0] == '1'){
         val = 1;
      }else{
         val = 0;
      }

      for (int i = r; i < r+k; i++) {
         for (int j = c; j < c+k; j++) {
            m[i][j] = val;
         }
      }

   } else {

      if(s[1] == '0'){
          inverseQuadtree(r, c, k/2, s.erase(1, 1));
      }else if(s[1] == '1'){
         inverseQuadtree(r, c+(k/2), k/2, s.erase(1, 1));
      }else if(s[1] == '2'){
         inverseQuadtree(r+(k/2), c, k/2, s.erase(1, 1));
      }else{
         // s[1] == '3'
         inverseQuadtree(r+(k/2), c+(k/2), k/2, s.erase(1, 1));
      }
   }
}

int main(){
   int r, c;

   cin >> nJawaban;
   for (int i = 0; i < nJawaban; i++) {
      cin >> jawaban[i];
   }

   cin >> r >> c;

   // Cari 2^p yang >= max(r, c)
   int maxRc = max(r, c);
   int pow2 = 1;
   while (pow2 < maxRc){
      pow2 *= 2;
   }

   // Inisialisasi
   for (int i = 0; i < pow2; i++) {
      for (int j = 0; j < pow2; j++) {
         m[i][j] = 0;
      }
   }

   // // Kodekan
   for (int i = 0; i < nJawaban; i++) {
      inverseQuadtree(0, 0, pow2, jawaban[i]);
   }

   // Cetak
   for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
         cout << m[i][j];
         if(j >= c - 1){
            cout << endl;
         }else{
            cout << " ";
         }
      }
   }

   return 0;
}
