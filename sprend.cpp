#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream fin("duom.txt");
    ofstream fout("rez.txt");

    int t, b, n, kainasu = 0, kainabe = 0, rez, k[100];
    
    fin >> t >> b >> n;

    for(int i=0; i<n; i++){

        fin >> k[i];

    }

    for(int i=0; i<n; i++){

        kainabe = kainabe + k[i];
        cout << kainabe << endl;

    }


    for(int i=0; i<n; i++){

       if(k[i] < b){

            continue;

       }else{

        k[i] = k[i] / 2;

       }
       
    }

    for(int i=0; i<n; i++){

        kainasu = kainasu + k[i];

    }



    rez = kainabe - (kainasu + t);

    fout << rez;

    
   
   


    fin.close();
    fout.close();

    return 0;
}