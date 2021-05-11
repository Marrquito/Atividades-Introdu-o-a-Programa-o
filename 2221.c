#include <stdio.h>

int Dabriel(int Ad, int Dd, int Ld, int b){
    int golpeD;

    if(Ld % 2 == 0){
        golpeD = ( (Ad + Dd) / 2 ) + b;
    }else golpeD = ( (Ad + Dd) / 2 );

    return golpeD;
}

int Guarte(int Ag, int Dg, int Lg, int b){
    int golpeG;

    if(Lg % 2 == 0){
        golpeG =( (Ag + Dg) / 2 ) + b;
    }else golpeG = ( (Ag + Dg) / 2 );

    return golpeG;
}

int main(){
    int t, b;
    int Ag, Dg, Lg, golpeD, golpeG;
    int Ad, Dd, Ld;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &b);
        scanf("%d %d %d", &Ad, &Dd, &Ld);
        scanf("%d %d %d", &Ag, &Dg, &Lg);

        golpeD = Dabriel(Ad, Dd, Ld, b);
        golpeG = Guarte(Ag, Dg, Lg, b);

        if(golpeG > golpeD){
            puts("Guarte");
        }else if(golpeD > golpeG){
            puts("Dabriel");
        }else if ( golpeD == golpeG) puts("Empate");

    }


    return 0;
}