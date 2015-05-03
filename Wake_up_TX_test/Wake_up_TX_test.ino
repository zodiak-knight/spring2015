/*
Wake_up_TX_test
Fernando Aragon
4/5/15 - Created

Wake up Xtend module for incomming and outgoing communications (very simple)
*/

// initialize some variables
int txPin = 36;                  // Connects to pin 7 XTEND power/shutdown module
char txState = 'OFF';        // Signals if Xtend is ON or OFF

// Initialize all programming flags
bool requestFLAG = false;           // signals there's request pending
bool navSetUpFLAG = false;          // signals parachute released (lasts predetermined time)
bool txFLAG = false;               // signals if it is transmission time 
bool abortFLAG = false;            //signals if aborting sequence begins
bool lowAltitudeFLAG= false;      // signals if modeul is under predetermined altitude
bool recordingFLAG = false;        // signals when is time to take picture
int fligthtModeFLAG = 1;          // signals current operation mode (Ascent/Flight/Descent/Nav)

void setup() {
//  Serial3.begin(9600);  //DEBUGGING
//  Serial.begin(9600);  //DEBUGGING
  pinMode(txPin, OUTPUT);
  digitalWrite(txPin, LOW);    // power XTEND
  
}

// Checking if it receives data when Xtend power pin is down  
void loop() {
//  if (Serial3.available()) {  //DEBUGGING
//    char incomingData = Serial3.read();  //DEBUGGING
//    Serial.print(incomingData);  //DEBUGGING
//  }  //DEBUGGING
//  if (10000 < millis())  //DEBUGGING
    wake_up_TX(); //DEBUGGING
//  if (20000 < millis())  //DEBUGGING
//    digitalWrite(txPin,LOW);  //DEBUGGING
}



/*
WAKE_UP_TX powers Xtend module during active communication time (txFLAG is true)
*/
void wake_up_TX() {
  digitalWrite(txPin,HIGH);    // power XTEND
}
