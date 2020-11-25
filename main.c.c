#include <stdio.h>
#include <stdio.h>

int main()
{
    // Force (F) = m * a
//    mass für Gewicht, forcr für Kraft, acceleration für Beschleunigung
//Strecke für Zurückgelgtestrecke, time für Zeit
//    work(W) für Arbeit, height für höhe, die Gravitation is 9.81,

//Variablen Deklaration
    float mass,  force, work, height, energie_Pot;
    int strecke, time;
    int  acceleration;

    //3a)

    printf("Welche Masse (kg) hat der Korper?");
    scanf("%f", &mass);

    printf("\nUnd welche Beschleunigung (m/s*s)?");
    scanf("%d", &acceleration);

    force = mass * acceleration;// Formel der Kraft

    printf("\nDie Kraft betragt %.2f Newton!\n", force);


    //3b)

    printf("\n \nGeben Sie die zuruckgelegte Strecke des Körpers in Meter (m) ein?");
    scanf("%d", &strecke);

    printf("\nGeben Sie die Zeit in Sekunden ein (s)? ");
    scanf("%d", &time);

    acceleration = strecke /(time*time); //Formel der Beschleunigung

    printf("\n Die Beschleunigung ist: %d\n", acceleration);

    // 3c)

    work = force * strecke; //Formel der Arbeit

    printf("\n \nDie Arbeit entspricht %.3f Newton pro Meter" ,work);


    // 3d)
    //...

    printf("\n \nGeben Sie die  Hohe in Meter (m) ein ?" );
    scanf("%f", &height);

    energie_Pot = mass * height* 9.81; // Formel der Potenzielle Energie

    printf("\nDie Potenzielle Energie ist: %.3f", energie_Pot);

    return 0;
}
