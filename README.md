# 🤖 Robot Pembersih Kaca Berbasis Blynk
### 🌐 Smart Window Cleaning Robot with IoT Control

📌 **TIM PBL (2) – AKSIKALOKA**  
📁 Repository:  
🔗 https://github.com/Rivetchan/Robot-Pembersih-Kaca-Berbasis-Blynk  

---

<p align="center">
  <img src="https://media.giphy.com/media/3o7aD2saalBwwftBIY/giphy.gif" width="300"/>
</p>

## 📖 Deskripsi Proyek

**Robot Pembersih Kaca Berbasis Blynk** adalah sebuah robot pintar yang dirancang untuk membersihkan permukaan kaca secara **otomatis dan jarak jauh** menggunakan teknologi **Internet of Things (IoT)**.

Robot ini dikendalikan melalui aplikasi **Blynk** pada smartphone, sehingga pengguna dapat:
- Mengontrol pergerakan robot
- Mengaktifkan motor pembersih
- Mengatur sistem semprot air
- Memantau status robot secara real-time

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

| No | Komponen | Fungsi |
|----|---------|--------|
| 1 | ESP8266 / NodeMCU | Mikrokontroler & IoT |
| 2 | Motor DC | Menggerakkan robot |
| 3 | Driver Motor (L298N/L293D) | Pengontrol motor |
| 4 | Pompa air | Menyemprot cairan pembersih |
| 5 | Baterai | Sumber daya |
| 6 | Modul WiFi | Koneksi ke Blynk |
| 7 | Smartphone + Blynk App | Kontrol robot |

---

## 📱 Tampilan Aplikasi Blynk (Contoh)

<p align="center">
  <img src="https://media.giphy.com/media/l0HlBO7eyXzSZkJri/giphy.gif" width="300"/>
</p>

> 📌 *Tambahkan screenshot asli dashboard Blynk kamu di folder `assets/` agar README makin keren.*

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

### 1️⃣ Clone Repository
```bash
git clone https://github.com/Rivetchan/Robot-Pembersih-Kaca-Berbasis-Blynk.git
cd Robot-Pembersih-Kaca-Berbasis-Blynk
