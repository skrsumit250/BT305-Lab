#include<bits/stdc++.h>
using namespace std;
int random_angle(int l,int r){
    int range=l+r+1;
    int res=rand()%range;
    return res-abs(l);
}
int main(){
    // ifstream inputFile("input.txt");
    ofstream outputFile("output.rib");
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    outputFile<<"# sample command file. this builds the peptide as a helix\n\n#except for the glycine which has a phi of 90.0 and psi of 0.0\n\nTITLE RIBOSOME EXAMPLE 2\n\ndefault helix\n\n";
    vector<string>Amino_Acids{"ala","arg","asn","asp","cys","glu","gln","gly","his","ile","leu","lys","met","phe","pro","ser","thr","trp","tyr","val"};
    for(int i=0;i<n;i++){
        int idx=rand()%20;
        string aa=Amino_Acids[idx];

        int strand=rand()%2;
        if(strand){ // Generate phi and psi for Alpha Helix
            int phi=random_angle(-130,-30); // Generate random phi angle between -40 deg and  -130 deg
            int psi=random_angle(-60,30);// Generate random psi angle between -40 deg and  40 deg
            outputFile<<"res "<<aa<<" phi "<<phi<<" psi "<<psi<<"\n";
        }
        else{   // Generate phi and psi for Beta Strand
            int phi=random_angle(-160,-30);// Generate random phi angle between -160 deg and  -30 deg
            int psi=random_angle(90,180);  // Generate random psi angle between 90 deg and  180 deg
            outputFile<<"res "<<aa<<" phi "<<phi<<" psi "<<psi<<"\n";
        }
    }
    return 0;
}