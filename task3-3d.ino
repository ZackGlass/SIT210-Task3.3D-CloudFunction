int wavegap = 500;
int patgap = 250;

void setup() {
    
    pinMode(D4, OUTPUT);
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);

}

void loop() {

}

void myHandler(const char *event, const char *data){
    
    if (strcmp(data, "wave") == 0){
        
        for (int i = 0; i < 3; i++){
            digitalWrite(D4, HIGH);
            delay(wavegap);
            digitalWrite(D4, LOW);
            delay(wavegap);
        }
    }
    else if (strcmp(data, "pat") == 0){
        
        for (int i = 0; i < 6; i++){
            digitalWrite(D4, HIGH);
            delay(patgap);
            digitalWrite(D4, LOW);
            delay(patgap);
        }
    }
}

    
    