Implementasi Metode ANN Pada Ardruino (Parkir Otomatis Berbasis IoT)
 
Proyek ini adalah contoh implementasi jaringan saraf buatan (ANN) pada perangkat Arduino menggunakan PlatformIO. Jaringan saraf buatan digunakan untuk mengambil data dari sensor inframerah dan memberikan kontrol kepada lampu LED berdasarkan hasil inferensi. Proyek ini memberikan gambaran tentang bagaimana Anda dapat menggabungkan jaringan saraf buatan ke dalam perangkat Arduino untuk aplikasi berbasis sensor.

Komponen Utama:
Arduino (atau papan mikrokontroler yang kompatibel)
Esp8266 model 01 (sebagai perantara dengan REST API)
Sensor Inframerah Proximity (4 sensor)
LED (4 LED merah dan 4 LED hijau)
PlatformIO sebagai lingkungan pengembangan


Sensor Inframerah:
Pin 2: Sensor 1
Pin 3: Sensor 2
Pin 4: Sensor 3
Pin 5: Sensor 4

LED:
LED Merah: Pin 6, 7, 8, 9
LED Hijau: Pin 10, 11, 12, 13
Library yang Digunakan
Arduino.h: Library inti untuk mengembangkan aplikasi Arduino.
ArduinoNeuralNetwork.h: Library yang digunakan untuk mengimplementasikan jaringan saraf buatan pada Arduino.
Konfigurasi Jaringan Saraf Buatan
Jumlah lapisan: 3 (masukan, tersembunyi, keluaran)
Jumlah neuron:
Lapisan masukan: 4 (sama dengan jumlah sensor)
Lapisan tersembunyi: 8
Lapisan keluaran: 4
Laju pembelajaran: 0.1
Fungsi aktivasi: Sigmoid
Cara Kerja
Sensor inframerah membaca data.
Data sensor digunakan sebagai masukan ke jaringan saraf buatan.
Jaringan saraf buatan menjalankan inferensi.
Hasil inferensi digunakan untuk mengontrol LED merah dan hijau. Jika hasil inferensi lebih besar dari 0.5, LED merah menyala; jika tidak, LED hijau menyala.

//Catatan:
Proyek ini adalah persyaratan kelulusan mata kuliah kami. kesalahan, kekurangan dan perdebatan dalam bentuk apapun akan saya kembalikan kepada dosen mata kuliah saya/kami pribadi


Proyek ini dilisensikan di bawah Lisensi pribadi