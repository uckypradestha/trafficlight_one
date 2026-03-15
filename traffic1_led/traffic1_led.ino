/*
  Traffic Light Control 1

  Program ini digunakan untuk mensimulasikan sistem lampu lalu lintas sederhana
  menggunakan tiga buah LED yang merepresentasikan lampu merah, kuning, dan hijau.

  Prinsip kerja sistem:
  - Arduino mengontrol masing-masing LED menggunakan fungsi digitalWrite().
  - Waktu nyala setiap lampu diatur menggunakan fungsi delay().
  - Sistem bekerja secara berulang (loop) sehingga menyerupai operasi lampu lalu lintas sebenarnya.

  Catatan:
  - Resistor digunakan untuk membatasi arus agar LED tidak rusak.
  - Durasi nyala lampu dapat diubah sesuai kebutuhan simulasi.

  Program ini dibuat sebagai latihan penggunaan output digital
  dan pengaturan waktu (timing control) pada sistem mikrokontroler Arduino.

  Dibuat oleh Ucky Pradestha
  Tahun 2026
  Direvisi oleh -
  Tahun -
*/

// Pin pada setiap LED
const int rledPin = 9;  // Pin untuk LED merah
const int yledPin = 8;  // Pin untuk LED kuning
const int gledPin = 7;  // Pin untuk LED hijau

void setup() {
  // Semua LED sebagai output
  pinMode(rledPin, OUTPUT);
  pinMode(yledPin, OUTPUT);
  pinMode(gledPin, OUTPUT);
}

void loop() {
  // LED merah menyala selama 3s
  digitalWrite(rledPin, HIGH);
  delay(3000);
  digitalWrite(rledPin, LOW);

  // LED kuning kedip tiga kali
  for (int i = 0; i < 3; i++) {
    digitalWrite(yledPin, HIGH);
    delay(500);
    digitalWrite(yledPin, LOW);
    delay(500);
  }

  // LED hijau menyalan 3s
  digitalWrite(gledPin, HIGH);
  delay(3000);
  digitalWrite(gledPin, LOW);
}
