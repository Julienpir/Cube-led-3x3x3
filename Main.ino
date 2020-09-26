long unsigned currentMillis =0;
unsigned long previousMillis =0;

int L1[] = {2};
int L2[] = {12};

int colonnes[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10};
int etages[] = {13, 12, 11};
int RandEtage; // Variable pour les étages
int RandColonnes; //Variable pour les colonnes

//============================================================
// POUR LA FONCTION CARRE
//============================================================
int liste_Carre_1[] = {2, 3, 4, 10, 5, 9, 8, 6};
int taille_liste_Carre_1 = 8;
int liste_Carre_1bis[] = {13};
int taille_liste_Carre_1bis = 1;

int liste_Carre_2[] = {2, 4, 9, 6};
int taille_liste_Carre_2 = 4;
int liste_Carre_2bis[] = {12};
int taille_liste_Carre_2bis = 1;

int liste_Carre_3[] = {2, 3, 4, 10, 5, 9, 8, 6};
int taille_liste_Carre_3 = 8;
int liste_Carre_3bis[] = {11};
int taille_liste_Carre_3bis = 1;

//============================================================
// POUR LA FONCTION INV_CARRE
//============================================================
int liste_Inv_Carre_1[] = {7};
int taille_liste_Inv_Carre_1 = 1;
int liste_Inv_Carre_1bis[] = {13};
int taille_liste_Inv_Carre_1bis = 1;

int liste_Inv_Carre_2[] = {3, 10, 7, 5, 8};
int taille_liste_Inv_Carre_2 = 5;
int liste_Inv_Carre_2bis[] = {12};
int taille_liste_Inv_Carre_2bis = 1;

int liste_Inv_Carre_3[] = {7};
int taille_liste_Inv_Carre_3 = 1;
int liste_Inv_Carre_3bis[] = {11};
int taille_liste_Inv_Carre_3bis = 1;

//============================================================
// POUR LA FONCTION Eollienne
//============================================================

int liste_Eollienne1[] = {3, 7, 8};
int liste_Eollienne1bis[] = {11, 12, 13};

int liste_Eollienne2[] = {2, 7, 6};
int liste_Eollienne2bis[] = {11, 12, 13};

int liste_Eollienne3[] = {10, 7, 5};
int liste_Eollienne3bis[] = {11, 12, 13};

int liste_Eollienne4[] = {4, 7, 9};
int liste_Eollienne4bis[] = {11, 12, 13};


//============================================================
// POUR LA FONCTION EollienneBIS
//============================================================

int liste2_1_Eollienne1[] = {4, 5, 6};
int liste2_1_Eollienne1bis[] = {13};

int liste2_1_Eollienne2[] = {3, 7, 8};
int liste2_1_Eollienne2bis[] = {12};

int liste2_1_Eollienne3[] = {2, 10, 9};
int liste2_1_Eollienne3bis[] = {11};


int liste2_2_Eollienne1[] = {2, 3, 4, 10, 7, 5, 9, 8, 6};
int liste2_2_Eollienne1bis[] = {12};


int liste2_3_Eollienne1[] = {3, 7, 8};
int liste2_3_Eollienne1bis[] = {11, 12, 13};


//============================================================
// POUR LA FONCTION EollienneBIS2
//============================================================

int liste2_1bis_Eollienne1[] = {2, 3, 4};
int liste2_1bis_Eollienne1bis[] = {13};

int liste2_1bis_Eollienne2[] = {10, 7, 5};
int liste2_1bis_Eollienne2bis[] = {12};

int liste2_1bis_Eollienne3[] = {9, 8, 6};
int liste2_1bis_Eollienne3bis[] = {11};


int liste2_2bis_Eollienne1[] = {2, 3, 4, 10, 7, 5, 9, 8, 6};
int liste2_2bis_Eollienne1bis[] = {12};


int liste2_3bis_Eollienne1[] = {10, 7, 5};
int liste2_3bis_Eollienne1bis[] = {11, 12, 13};




//============================================================

void setup()
{

Serial.begin(9600);
//Serial.println(sizeof(liste_Carre_1)/sizeof(liste_Carre_1[1]));
//Serial.println(sizeof(liste_Carre_1));  
int compteur;

for (int compteur = 0; compteur < 10; compteur++){
pinMode(colonnes[compteur], OUTPUT); }
for (int compteur = 1; compteur < 4; compteur++){
pinMode(etages[compteur], OUTPUT); }
}
void loop()
{
//RandLed();

//Eollienne(500);
//Eollienne(500);
Eollienne(500);
Eollienne(500);
//Clignoter_carre(500);
//Clignoter_carre(500);
//Clignoter_carre(500);
//Clignoter_carre(500);
//EollienneBIS2(500);
//EollienneBIS2(500);
//EollienneBIS2(500);
//EollienneBIS2(500);


//digitalWrite(colonnes[8],HIGH);
//digitalWrite(12,HIGH);

//affichage(L1,1,liste2_1bis_Eollienne1bis,1);
}

void affichage(int L[],int l,int M[],int m){

for (int compteur = 0; compteur < m; compteur++){
    
digitalWrite(M[compteur],HIGH);

for (int compteurbis = 0; compteurbis < l; compteurbis++){
    digitalWrite(L[compteurbis],HIGH);
    //Serial.println("on envoie la sauce");
    delay(0.1);
    digitalWrite(L[compteurbis],LOW);
    
}
digitalWrite(M[compteur],LOW);
    
}

}
void Clean_All(){
  
  for (int compteur = 0; compteur < 9; compteur++){
    digitalWrite(colonnes[compteur],LOW);  }
  
  for (int compteur = 0; compteur < 3; compteur++){
    digitalWrite(etages[compteur],LOW); }
  
  }


//============================================================
// Fonction pour creer des formes...
//============================================================

void EollienneBIS2(int temps){
currentMillis = millis();
previousMillis = currentMillis;

while ((millis() - previousMillis) < temps) {
affichage(liste2_1bis_Eollienne1,3,liste2_1bis_Eollienne1bis,1);
affichage(liste2_1bis_Eollienne2,3,liste2_1bis_Eollienne2bis,1);
affichage(liste2_1bis_Eollienne3,3,liste2_1bis_Eollienne3bis,1);
}

while ((millis() - previousMillis) < temps*2) {
affichage(liste2_2bis_Eollienne1,9,liste2_2bis_Eollienne1bis,1);
}

Clean_All();
while ((millis() - previousMillis) < temps*3) {
affichage(liste2_1bis_Eollienne1,3,liste2_1bis_Eollienne3bis,1);
affichage(liste2_1bis_Eollienne2,3,liste2_1bis_Eollienne2bis,1);
affichage(liste2_1bis_Eollienne3,3,liste2_1bis_Eollienne1bis,1);
}
Clean_All();
while ((millis() - previousMillis) < temps*4) {
affichage(liste2_3bis_Eollienne1,9,liste2_3bis_Eollienne1bis,3);

}
}



void EollienneBIS(int temps){
currentMillis = millis();
previousMillis = currentMillis;

while ((millis() - previousMillis) < temps) {
affichage(liste2_1_Eollienne1,3,liste2_1_Eollienne1bis,1);
affichage(liste2_1_Eollienne2,3,liste2_1_Eollienne2bis,1);
affichage(liste2_1_Eollienne3,3,liste2_1_Eollienne3bis,1);
}

while ((millis() - previousMillis) < temps*2) {
affichage(liste2_2_Eollienne1,9,liste2_2_Eollienne1bis,1);
}

while ((millis() - previousMillis) < temps*3) {
affichage(liste2_1_Eollienne1,3,liste2_1_Eollienne3bis,1);
affichage(liste2_1_Eollienne2,3,liste2_1_Eollienne2bis,1);
affichage(liste2_1_Eollienne3,3,liste2_1_Eollienne1bis,1);
}
Clean_All();
while ((millis() - previousMillis) < temps*4) {
affichage(liste2_3_Eollienne1,9,liste2_3_Eollienne1bis,3);

}
}


void Eollienne(int temps){
currentMillis = millis();
previousMillis = currentMillis;

while ((millis() - previousMillis) < temps) {
affichage(liste_Eollienne1,3,liste_Eollienne1bis,3);
}


while ((millis() - previousMillis) < temps*2) {
affichage(liste_Eollienne2,3,liste_Eollienne2bis,3);
}


while ((millis() - previousMillis) < temps*3) {
affichage(liste_Eollienne3,3,liste_Eollienne3bis,3);
}


while ((millis() - previousMillis) < temps*4) {
affichage(liste_Eollienne4,3,liste_Eollienne4bis,3);
}

}


void Clignoter_carre(int temps){
Clean_All();
Inv_Carre(temps);

Clean_All();
Carre(temps);

}

void Carre(int temps) {
currentMillis = millis();
previousMillis = currentMillis;

while ((millis() - previousMillis) < temps) {
affichage(liste_Carre_1,taille_liste_Carre_1,liste_Carre_1bis,taille_liste_Carre_1bis);
affichage(liste_Carre_2,taille_liste_Carre_2,liste_Carre_2bis,taille_liste_Carre_2bis);
affichage(liste_Carre_3,taille_liste_Carre_3,liste_Carre_3bis,taille_liste_Carre_3bis);
}
}

void Inv_Carre(int temps) {
currentMillis = millis();
previousMillis = currentMillis;

while (millis() - previousMillis < temps) {
affichage(liste_Inv_Carre_1,taille_liste_Inv_Carre_1,liste_Inv_Carre_1bis,taille_liste_Inv_Carre_1bis);
affichage(liste_Inv_Carre_2,taille_liste_Inv_Carre_2,liste_Inv_Carre_2bis,taille_liste_Inv_Carre_2bis);
affichage(liste_Inv_Carre_3,taille_liste_Inv_Carre_3,liste_Inv_Carre_3bis,taille_liste_Inv_Carre_3bis);
}
}



void RandLed()
{
RandEtage = random(0,3);
RandColonnes = random(0,9);
digitalWrite(etages[RandEtage], HIGH);
digitalWrite(colonnes[RandColonnes], HIGH);
//Serial.println(etages[RandEtage]);
//Serial.println(colonnes[RandColonnes]);
delay(750);
digitalWrite(etages[RandEtage], LOW);
digitalWrite(colonnes[RandColonnes], LOW);
delay(500);
}
/*
delay(50);
  digitalWrite(13,HIGH);
for (int compteur = 1; compteur < 10; compteur++){
  digitalWrite(colonnes[compteur],HIGH); 
  delay(50);
  digitalWrite(colonnes[compteur],LOW);
}
digitalWrite(13,LOW);
digitalWrite(12,HIGH);
for (int compteur = 1; compteur < 10; compteur++){
  digitalWrite(colonnes[compteur],HIGH); 
  delay(50);
  digitalWrite(colonnes[compteur],LOW);
}
digitalWrite(12,LOW);
digitalWrite(11,HIGH);
for (int compteur = 1; compteur < 10; compteur++){
  digitalWrite(colonnes[compteur],HIGH); 
  delay(50);
  digitalWrite(colonnes[compteur],LOW);
}
digitalWrite(11,LOW);
*/
/*
digitalWrite(3,HIGH);
digitalWrite(11,HIGH);
delay(200);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
delay(200);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
delay(200);
digitalWrite(13,LOW);
}
*/
