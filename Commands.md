# Lab7:

**Box Simulation for 1pgb.pdb**

- gmx pdb2gmx -f 1pgb.pdb -o 1pgb_processed.gro -water spce -ignh
- gmx editconf -f 1pgb_processed.gro -o 1pgb_newbox.gro -c -d 1.0 -bt cubic
- gmx solvate -cp 1pgb_newbox.gro -cs spc216.gro -o 1pgb_solv.gro -p topol.top
- gmx grompp -f ions.mdp -c 1pgb_solv.gro -p topol.top -o ions.tpr -maxwarn 3
- gmx genion -s ions.tpr -o 1pgb_solv_ions.gro -p topol.top -pname NA -nname CL -neutral -conc 0.15
- gmx grompp -f minim.mdp -c 1pgb_solv_ions.gro -p topol.top -o em.tpr -maxwarn 3
- gmx mdrun -v -deffnm em
- gmx grompp -f nvt.mdp -c em.gro -r em.gro -p topol.top -o nvt.tpr -maxwarn 3
- gmx mdrun -v -deffnm nvt
- gmx grompp -f npt.mdp -c nvt.gro -r nvt.gro -t nvt.cpt -p topol.top -o npt.tpr -maxwarn 3
- gmx mdrun -deffnm npt
- gmx grompp -f md.mdp -c npt.gro -t npt.cpt -p topol.top -o md_1.tpr -maxwarn 3
- gmx mdrun -v -deffnm md_1

**Box Simulation for Your_name_trpcage.pdb**

- gmx pdb2gmx -f sumittrpcage.pdb -o trp_processed.gro -water spce -ignh
- gmx editconf -f trp_processed.gro -o trp_newbox.gro -c -d 1.0 -bt cubic
- gmx solvate -cp trp_newbox.gro -cs spc216.gro -o trp_solv.gro -p topol.top
- gmx grompp -f ions.mdp -c trp_solv.gro -p topol.top -o ions.tpr -maxwarn 3
- gmx genion -s ions.tpr -o trp_solv_ions.gro -p topol.top -pname NA -nname CL -neutral -conc 0.15
- gmx grompp -f minim.mdp -c trp_solv_ions.gro -p topol.top -o em.tpr -maxwarn 3
- gmx mdrun -v -deffnm em
- gmx grompp -f nvt.mdp -c em.gro -r em.gro -p topol.top -o nvt.tpr -maxwarn 3
- gmx mdrun -v -deffnm nvt
- gmx grompp -f npt.mdp -c nvt.gro -r nvt.gro -t nvt.cpt -p topol.top -o npt.tpr -maxwarn 3
- gmx mdrun -deffnm npt
- gmx grompp -f md.mdp -c npt.gro -t npt.cpt -p topol.top -o md_1.tpr -maxwarn 3
- gmx mdrun -v -deffnm md_1

**Box Simulation for beta_sheet.pdb**

- gmx pdb2gmx -f beta_sheet.pdb -o betasheet_processed.gro -water spce -ignh
- gmx editconf -f betasheet_processed.gro -o betasheet_newbox.gro -c -d 1.0 -bt cubic
- gmx solvate -cp betasheet_newbox.gro -cs spc216.gro -o betasheet_solv.gro -p topol.top
- gmx grompp -f ions.mdp -c betasheet_solv.gro -p topol.top -o ions.tpr -maxwarn 3
- gmx genion -s ions.tpr -o betasheet_solv_ions.gro -p topol.top -pname NA -nname CL -neutral -conc 0.15
- gmx grompp -f minim.mdp -c betasheet_solv_ions.gro -p topol.top -o em.tpr -maxwarn 3
- gmx mdrun -v -deffnm em
- gmx grompp -f nvt.mdp -c em.gro -r em.gro -p topol.top -o nvt.tpr -maxwarn 3
- gmx mdrun -v -deffnm nvt
- gmx grompp -f npt.mdp -c nvt.gro -r nvt.gro -t nvt.cpt -p topol.top -o npt.tpr -maxwarn 3
- gmx mdrun -deffnm npt
- gmx grompp -f md.mdp -c npt.gro -t npt.cpt -p topol.top -o md_1.tpr -maxwarn 3
- gmx mdrun -v -deffnm md_1

**Box Simulation for alpha_helix.pdb**

- gmx pdb2gmx -f helix.pdb -o alphahelix_processed.gro -water spce -ignh
- gmx editconf -f alphahelix_processed.gro -o alphahelix_newbox.gro -c -d 1.0 -bt cubic
- gmx solvate -cp alphahelix_newbox.gro -cs spc216.gro -o alphahelix_solv.gro -p topol.top
- gmx grompp -f ions.mdp -c alphahelix_solv.gro -p topol.top -o ions.tpr -maxwarn 3
- gmx genion -s ions.tpr -o alphahelix_solv_ions.gro -p topol.top -pname NA -nname CL -neutral -conc 0.15
- gmx grompp -f minim.mdp -c alphahelix_solv_ions.gro -p topol.top -o em.tpr -maxwarn 3
- gmx mdrun -v -deffnm em
- gmx grompp -f nvt.mdp -c em.gro -r em.gro -p topol.top -o nvt.tpr -maxwarn 3
- gmx mdrun -v -deffnm nvt
- gmx grompp -f npt.mdp -c nvt.gro -r nvt.gro -t nvt.cpt -p topol.top -o npt.tpr -maxwarn 3
- gmx mdrun -deffnm npt
- gmx grompp -f md.mdp -c npt.gro -t npt.cpt -p topol.top -o md_1.tpr -maxwarn 3
gmx mdrun -v -deffnm md_1

# Lab3:

**Compile ribosome to create ribosome and res.zmat files in src folder** 
- f77 -O *.f -o ribosome
**Compile rib_file to pdb_file**
- ribosome "filename.com" "output_filename" res.smart

# Lab2:

- :g/pattern1\|pattern2\|pattern3/d (Delete lines which contain given pattern)
- :g/HETATM\|ATOM\|SOL/p (Print the lines which contain given pattern in terminal)
- :g/HETATM\|ATOM\|SOL/w new_file.txt (Print the lines which contain given pattern in new file)

**Find particular amino acids/atoms and print in respective files**

- awk '/^ATOM/ && ($3=="CA") { print $0 }' 4DFR.pdb - file2
- awk '/^ATOM/ && ($3=="N") { print $0 }' 4DFR.pdb - file3
- awk '/^ATOM/ && ($3=="CB") { print $0 }' 4DFR.pdb - file4

- awk '{gsub(/ATOM/, "your_first_name"); print}' 4DFR.pdb - file5

**you can do individually by running following code one by one**
- awk '{gsub(/ATOM/, "friend1"); print}' 4DFR.pdb - friend1
- awk '{gsub(/ATOM/, "friend1"); print}' 4DFR.pdb - friend1
- awk '{gsub(/ATOM/, "friend1"); print}' 4DFR.pdb - friend1

    or just run below code once:

- friends=("friend1" "friend2" "friend3")
- for friend in "${friends[@]}"; do
-    awk '{gsub(/ATOM/, "'$friend'"); print}' 4DFR.pdb - "file_${friend}.pdb"
- done

3B. cat friend1 friend2 friend3 - file 6

**Find particular amino acids/atoms and print in respective files**

- awk '/^ATOM/ && ($3=="CG") { print $0 }' 4DFR.pdb - file7
- awk '/^ATOM/ && ($4=="TYR" || $4=="TRP" || $4=="PHE" || $4=="LEU" || $4=="ILE") { print $0 }' 4DFR.pdb - file8.pdb
- awk '/^ATOM/ && ($3=="CA") && ($4=="ASP" || $4=="GLU") { print $0 }' 4DFR.pdb - file9.pdb
- awk '/^ATOM/ && ($3=="CA") && ($4=="ARG" || $4=="LYS" || $4=="HIS") { print $0 }' 4DFR.pdb - file10.pdb

- awk '/^ATOM/ && ($3=="CA") {count++} END {print count}' 4DFR.pdb
- awk '/^ATOM/ && ($3=="CA") && ($4=="ALA") {count++} END {print count}' 4DFR.pdb
- awk '/^ATOM/ && ($3=="CA") && ($4=="TRP") {count++} END {print count}' 4DFR.pdb
- awk '/^ATOM/ && ($3=="CA") && ($4=="SER" || $4=="THR" || $4=="ASN" || $4=="GLN" || $4=="TYR" || $4=="CYS" || $4=="GLY") {count++} END {print count}' 4DFR.pdb

**Find sum of corrdinates**

- awk '/^ATOM/ {sum_X+=$7} END {print sum_X}' 4DFR.pdb 
- awk '/^ATOM/ {sum_Y+=$8} END {print sum_Y}' 4DFR.pdb
- awk '/^ATOM/ {sum_Z+=$9} END {print sum_Z}' 4DFR.pdb