# Sistem Parkir Otomatis Berbasis IoT dengan metode ANN (artificial neural networks)

Proyek ini adalah contoh implementasi jaringan saraf buatan (ANN) pada perangkat Arduino menggunakan Arduino IoT Cloud. Jaringan saraf buatan digunakan untuk mengambil data dari sensor inframerah dan memberikan kontrol kepada lampu LED berdasarkan hasil inferensi. Proyek ini memberikan gambaran tentang bagaimana Anda dapat menggabungkan jaringan saraf buatan ke dalam perangkat Arduino untuk aplikasi berbasis sensor.

## Komponen Utama

- Arduino R4 WIFI (atau papan mikrokontroler yang kompatibel)
- Sensor Inframerah Proximity (4 sensor)
- LED (4 LED merah dan 4 LED hijau)
- Arduino IoT Cloud
- Arduino Create Agent

### Koneksi Perangkat

**Sensor Inframerah:**
- Pin 2: Sensor 1
- Pin 3: Sensor 2
- Pin 4: Sensor 3
- Pin 5: Sensor 4

**LED:**
- LED Merah: Pin 6, 7, 8, 9
- LED Hijau: Pin 10, 11, 12, 13

## Library yang Digunakan

- thingProperties.h: Library inti pada Arduino IoT Cloud.
- Neurona.h: Library yang digunakan untuk mengimplementasikan jaringan saraf buatan pada Arduino.

## Konfigurasi Jaringan Saraf Buatan

- Jumlah lapisan: 3 (masukan, tersembunyi, keluaran)
- Jumlah neuron:
  - Lapisan masukan: 4 (sama dengan jumlah sensor)
  - Lapisan tersembunyi: 8
  - Lapisan keluaran: 4
- Laju pembelajaran: 0.1
- Fungsi aktivasi: Sigmoid

## Cara Kerja

1. Sensor inframerah membaca data.
2. Data sensor digunakan sebagai masukan ke jaringan saraf buatan.
3. Jaringan saraf buatan menjalankan inferensi.
4. Hasil inferensi digunakan untuk mengontrol LED merah dan hijau. Jika hasil inferensi lebih besar dari 0.5, LED merah menyala; jika tidak, LED hijau menyala.

**Catatan:**
Proyek ini dibuat sebagai persyaratan kelulusan mata kuliah dan dapat mengandung kesalahan atau kekurangan. Setiap perdebatan atau perbaikan dapat diajukan kepada dosen mata kuliah kami.

Terima kasih telah mengunjungi proyek kami! 


[![Mendeteksi Object](https://github.com/devanys/Implementasi-ANN-Artificial-Neural-Networks-pada-projek-IoT/assets/145944367/c717c9fa-d5ba-4530-b10e-9815f98a542f)
]

