#include<bits/stdc++.h>
using namespace std;
int main(){
    // ifstream inputFile("input.txt");
    ofstream outputFile("output.rib");
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    outputFile<<"# sample command file. this builds the peptide as a helix\n\n#except for the glycine which has a phi of 90.0 and psi of 0.0\n\nTITLE RIBOSOME EXAMPLE 2\n\ndefault helix\n\n";
    vector<string>Amino_Acids{"ala","arg","asn","asp","cys","glu","gln","gly","his","ile","leu","lys","met","phe","pro","ser","thr","trp","tyr","val"};
    for(int i=0;i<10000;i++){
        int idx=rand()%20;
        string aa=Amino_Acids[idx];

        int strand=rand()%2;
        if(strand){
            int phi=40+rand()%21;
            phi=-1*phi;
            int psi=rand()%41;
            int sign=rand()%2;
            if(sign)
            psi=-1*psi;
            
            outputFile<<"res "<<aa<<" phi "<<phi<<" psi "<<psi<<"\n";
        }
        else{
            int phi=110+rand()%21;
            phi=-1*phi;
            int psi=110+rand()%21;
            outputFile<<"res "<<aa<<" phi "<<phi<<" psi "<<psi<<"\n";
        }
        
    }
    return 0;
}