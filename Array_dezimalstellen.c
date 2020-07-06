#include<stdio.h> //Wichtig!
// Float eher für Nachkommastellen
int main (){
  float test [100]; //Feld 0-99, [100] würde einen fehler erzeugen
  test [0] = 5; //hier lassen sich die Werte eintragen
  test [1] = 15.559;
  test [2] = 12;
  test [3] = 13;
  // hier lassen sich die eingetragenen werte Anzeigen
printf("erster Wert: %.f \n", test[0]); //%.f = keine Nachkommastellen
printf("zweiter Wert: %.1f \n", test[1]);//%.1f = 1 Nachkommastellen
printf("dritter Wert: %f \n", test[2]);//%f = 6 Nachkommastellen
printf("vierter Wert: %d \n", test[3]); // %d funktioniert nicht, da float %f braucht
int apfel=5;
apfel++;
printf("%d",apfel);
return  0;
}
