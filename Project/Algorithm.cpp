#include<bits/stdc++.h>
using namespace std;
// Function to generate random angle in a given range
double random_angle(double l, double r) {
  double range=r-l;
  double random_value=static_cast<double>(rand()) / (RAND_MAX + 1.0);
  return random_value*range+l;
}
// Driver Code
int main(){
    ofstream outputFile("output.rib");
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; // # Residue
    cin>>n;

    // printing default lines in output.rib file
    outputFile<<"# sample command file. this builds the peptide as a helix\n\n#except for the glycine which has a phi of 90.0 and psi of 0.0\n\nTITLE RIBOSOME EXAMPLE 2\n\ndefault helix\n\n";
    // List of Amino Acids
    vector<string>Amino_Acids{"ala","leu","glu","gln","lys","met","arg","asn","asp","cys","gly","his","ile","phe","pro","ser","thr","trp","tyr","val"};

    for(int i=0;i<n;i++){
        int idx=rand()%20;
        string aa=Amino_Acids[idx];

        double phi; // phi angle
        double psi; // psi angle

        int strand=rand()%2;
        if(strand){ // Generate phi and psi for Alpha Helix
            phi=random_angle(-130,-30); // Generate random phi angle between -40 deg and  -130 deg
            psi=random_angle(-60,30);// Generate random psi angle between -40 deg and  40 deg
        }
        else{   // Generate phi and psi for Beta Strand
            phi=random_angle(-160,-30);// Generate random phi angle between -160 deg and  -30 deg
            psi=random_angle(90,180);  // Generate random psi angle between 90 deg and  180 deg
        }
        // printing each residue line in output.rib file
        outputFile<<"res "<<aa<<" phi "<<phi<<" psi "<<psi<<"\n";
    }
    return 0;
}