# 🤖 Robot Pembersih Kaca Berbasis Blynk

### 🌐 Smart Window Cleaning Robot with IoT Control

📌 **TIM PBL (2) – AKSIKALOKA**
📁 Repository:
🔗 [https://github.com/Rivetchan/Robot-Pembersih-Kaca-Berbasis-Blynk](https://github.com/Rivetchan/Robot-Pembersih-Kaca-Berbasis-Blynk)

---

<p align="center">
  <img src="https://media3.giphy.com/media/v1.Y2lkPTc5MGI3NjExNDZtbGg2aHZoM3R1MWp6cTExM2ZyMnQzbGM0Z2RkaWRwNGN2YmVqMyZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/5GrNOi29Ol3WmhwlIj/giphy.gif" width="300"/>
</p>

## 📖 Deskripsi Proyek

**Robot Pembersih Kaca Berbasis Blynk** adalah sebuah robot pintar yang dirancang untuk membersihkan permukaan kaca secara **otomatis dan jarak jauh** menggunakan teknologi **Internet of Things (IoT)**.

Robot ini dikendalikan melalui aplikasi **Blynk** pada smartphone, sehingga pengguna dapat:

* Mengontrol pergerakan robot
* Mengaktifkan motor pembersih
* Mengatur sistem semprot air
* Memantau status robot secara real-time

Proyek ini dibuat sebagai bagian dari **Project Based Learning (PBL)** oleh **TIM AKSIKALOKA**.

---

## ✨ Fitur Utama

✅ Kontrol robot via **aplikasi Blynk (Android/iOS)**
✅ Koneksi **WiFi (ESP8266 / NodeMCU)**
✅ Mode **Manual Kontrol**
✅ Sistem pembersih kaca (motor + lap)
✅ Sistem semprot air
✅ Monitoring status robot

---

## 🧩 Komponen yang Digunakan

| No | Komponen                   | Fungsi                      |
| -- | -------------------------- | --------------------------- |
| 1  | ESP8266 / NodeMCU          | Mikrokontroler & IoT        |
| 2  | Motor DC                   | Menggerakkan robot          |
| 3  | Driver Motor (L298N/L293D) | Pengontrol motor            |
| 4  | Pompa air                  | Menyemprot cairan pembersih |
| 5  | Baterai                    | Sumber daya                 |
| 6  | Modul WiFi                 | Koneksi ke Blynk            |
| 7  | Smartphone + Blynk App     | Kontrol robot               |

---

## 📱 Tampilan Aplikasi Blynk

<p align="center">
  <img src="css/images/blynk.jpeg" width="300"/>
</p>

---

## 🎥 Demo Video (YouTube)

<p align="center">
  <iframe width="560" height="315" src="https://www.youtube.com/embed/gbjV_paw4iY?rel=0&modestbranding=1&showinfo=0&autoplay=0" title="Demo Robot Pembersih Kaca Berbasis Blynk" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>
</p>

---

## 🔌 Cara Kerja Sistem

1. Robot dinyalakan dan terhubung ke WiFi
2. ESP8266 terkoneksi ke **server Blynk**
3. Pengguna mengirim perintah melalui aplikasi Blynk
4. Mikrokontroler memproses perintah
5. Motor dan pompa air bekerja sesuai perintah
6. Robot membersihkan kaca

---

## ⚙️ Instalasi & Penggunaan

> 📌 *Bagian perintah/command dihapus sesuai permintaan. Silakan tambahkan langkah instalasi sesuai kebutuhan proyek (misalnya upload sketch via Arduino IDE).*
