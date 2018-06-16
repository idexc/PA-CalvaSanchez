char inChar;
String string="";

void setup() {
	Serial.begin(9600);
	string.reserve(200);
}

void loop(){
	if (Serial.available()){
		inChar = Serial.read();
		string+=inChar;   
		if (inChar==','){
			Serial.print("Lectura: ");
			Serial.println(string);
			string=""; 
		}
	}
}

