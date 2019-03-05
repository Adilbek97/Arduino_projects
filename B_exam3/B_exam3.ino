const int buzzerPin = 9;
const int songLength = 18;
char notes[] = "cdfda ag cdfdg gf "; // пробелы означают
int beats[] = {1,1,1,1,1,1,4,4,2,1,1,1,1,1,1,4,4,2};
int tempo = 150;
void setup() {
pinMode(buzzerPin, OUTPUT);
 }
void loop(){
int i, duration;
for (i = 0; i < songLength; i++){ // пошаговое воспроизведение

duration = beats[i] * tempo;  // длительность нот/пауз в ms
if (notes[i] == ' '){          // если нота отсутствует?
delay(duration);            // тогда не большая пауза
}
else                          // в противном случае играть
{
tone(buzzerPin, frequency(notes[i]), duration);
delay(duration);            // ждать пока проигрывается
}
delay(tempo/10);              // маленькая пауза между нотами 
   }
while(true){}
}
int frequency(char note){
int i;
const int numNotes = 8;  // количество хранимых нот
char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
int frequencies[] = {262, 294, 330, 349, 392, 440, 494, 523};
for (i = 0; i < numNotes; i++)  // пошаговый перебор нот
{
if (names[i] == note)         // если находим
{
return(frequencies[i]);     // возвращаем частоту
}
}
return(0);  // Поиск символа не дал результата? Но, необходимо
}
