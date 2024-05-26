# PONG Revolution
„Pong Revolution” propune o versiune actualizată a clasicului joc Pong, care adaugă elementul de strategie și imprevizibilitate prin intermediul power-up-urilor (avantaje/dezavantaje temporare). Jucătorii se vor confrunta pe tabla de joc virtuală, folosindu-și abilitățile și reflexele pentru a marca puncte și pentru a obține victoria. Jocul va fi însoțit de un dinamism care va anima experiența de joc.

Scopul proiectului este de a oferi o experiență distractivă și captivantă jucătorilor, prin combinarea elementelor clasice ale jocului Pong cu inovații care aduc un plus de strategie și divertisment. Acest proiect își propune să atragă atât fanii jocului original, cât și noii jucători, adăugând un plus de strategie și dinamism.
Ideea proiectului a pornit de la dorința de a reanima un joc clasic, păstrând esența originalului, dar adăugând elemente noi pentru a îmbunătăți experiența de joc.

Utilitatea proiectului:
Jocul proiectat oferă o formă de divertisment captivantă, potrivită pentru jucători de toate vărstele, oferind sesiuni de joc cu elemente strategice și dinamică imprevizibilă. Totodată, interventiile sonore și vizuale îmbunătățesc experiența de joc prin stimularea multisenzorială.
Dintr-o altă perspectivă, proiectarea jocului Pong Revolution este o provocare personală care facilitează dezvoltarea abilităților tehnice: cunoștințe și abilități în programare, design de jocuri, integrare de efecte sonore și vizuale.

## Descriere sumară mod de funcționare:
Jocul implementat „Pong Revolition” funcționează după următorul mecanism de bază: jucătorii controlează fiecare o paletă pe tabla de joc și trebuie să lovească pucul pentru a-l trimite către adversar, scopul fiind marcarea punctelor prin trecerea pucului pe cealaltă parte a tablei de joc fără ca adversarul să-l returneze. Pe măsură ce jocul progresează, power-up-uri aleatorii apar pe tabla de joc. Acestea oferă avantaje sau dezavantaje temporare, modificând dinamica jocului. Pentru a captura un power-up jucătorul trebuie să își coordoneze mișcările astfel încât pucul sa intre în contact cu simbolul acestuia, activându-se automat. Mișcările vor fi ghidate prin utilizarea unui joystick care permite mișcări sus/jos, stânga/dreapta pe un anumit perimetru.
Jocul se va încheia fie când un jucător atinge un anumit număr de puncte, fie când timer-ul expiră.

## Listă piese:
- Arduino UNO R3 ATMEGA328p
- Display LCD 128x160px, SPI
- Breadboard
- 2 x Joystick
- Buzzer
- buton
- rezistențe: R = 330 Ohm; R = 1K Ohm
- tranzistor BC337
- LED Bicolor de 3 mm Rosu si Verde cu Anod Comun
- fire
- cablu USB

## Descriere Hardware:

Conexiuni Modul LCD - SPI și Controller ST7735S ↔ Arduino UNO R3:
1. SCK (Serial Clock): pinul de ceas serial (CLK) → pin digital 13
2. SDA/DIN (Serial Data): pinul de date seriale (MOSI) → pin digital 11
3. A0/ DC: selectare între date și comenzi → pin digital 9
4. RESET: pinul de resetare (RST) → pin digital 8
5. CS (Chip Select): selectare cip → pin digital 10
6. LED/BL: pinul de backlight → pin digital 4
7. VCC: alimentare
8. GND
   
Conexiuni Buzzer activ ↔ Arduino UNO R3:
1. VCC
2. GND
3. I\O: pin pentru semnalul de intrare/ieșire → pin digital D2
   
Conexiuni LED anod comun ↔ Arduino UNO R3:
- pentru pinii de culoare (roșu și verde): am conectat câte o rezistență de limitare a curentului și câte un pin digital: 1 și 4
- pentru pinul comun (anodul) → pin digital 7
  
Conexiuni buton ↔ Arduino UNO R3:
- pin conectat la GND
- pin de semnal al butonului → pin digital 0
  
Conexiuni joystick ↔ Arduino UNO R3:
1. GND
2. VCC
3. VRX: citire poziție pe axa Ox → pin analogic A3 (respectiv A1)
4. VRY: citire poziție pe axa Oy → pin analogic A4 (respectiv A5)
5. SW: citire stare buton → pin digital 5 (respectiv 6)

## Descriere Software:
- Mediu de dezvoltare: Arduino IDE (placă utilizată Arduino UNO R3);
- Librării şi surse 3rd-party:
- Adafruit GFX Library: oferă funcții grafice pentru a desena pe display-ul TFT
- Adafruit ST7735: Controler pentru display-ul ST7735, care gestionează comunicarea cu display-ul TFT
- Algoritmi şi structuri de implementat:
- Controlul Joystick-ului: Citirea valorilor analogice de la joystick pentru a controla mișcarea paletelor.
- Detecția Coliziunilor: Algoritmi pentru a detecta coliziunile bilei cu paletele și marginile ecranului.
- Algoritmul de mișcare a bilei și actualizarea poziției acesteia pe ecran.
- Algoritmul de actualizare a scorului și resetare a poziției bilei.
- Gestionarea Scorului: Funcții pentru actualizarea și afișarea scorului pe ecran.
- Controlul Jocului: Inițierea jocului la apăsarea unui buton de start.
- Controlul buzzer-ului pentru semnalizarea evenimentelor de joc.
- Controlul LED-ului pentru indicarea stării jocului.
- Surse şi funcţii implementate:
-> setup(): Funcția de inițializare a ecranului, a variabilelor globale și a pinilor de intrare/ieșire.\n
-> loop(): Funcția principală care rulează continuu și gestionează logica jocului, inclusiv mișcarea paletelor, mișcarea bilei, detecția coliziunii, actualizarea scorului și resetarea bilei.
-> resetBall(): Funcția pentru resetarea poziției bilei și a direcției acesteia.
-> updateScore(): Funcția pentru actualizarea scorului afișat pe ecran.
-> drawCenteredText(): Funcția pentru afișarea textului centrat pe ecran.
-> Buzzer control: Funcții pentru activarea și dezactivarea buzzer-ului în diferite momente ale jocului (de exemplu, la startul jocului sau la fiecare punct marcat).   
-> LED control: Funcții pentru activarea și dezactivarea LED-ului în diferite stări ale jocului (de exemplu, la startul jocului).


