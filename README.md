# 🚦Traffic Light Menggunakan Arduino Uno

## Overview
Project ini merupakan simulasi sederhana **lampu lalu lintas (Traffic Light)** menggunakan Arduino Uno. Tujuan dari project ini adalah untuk memahami konsep dasar **pemrograman mikrokontroler**, penggunaan **GPIO (General Purpose Input Output)**, serta pengaturan **waktu (timing)** dalam sistem embedded.

Pada project ini, tiga LED digunakan untuk merepresentasikan lampu lalu lintas:
- 🔴 Merah (Stop)
- 🟡 Kuning (Bersiap Jalan)
- 🟢 Hijau (Jalan)

Arduino akan mengatur nyala LED secara bergantian sesuai urutan kerja lampu lalu lintas pada persimpangan jalan.

## Objectives
Tujuan dari project ini adalah:
- Memahami dasar penggunaan **Arduino dan mikrokontroler**
- Mempelajari cara mengontrol **LED menggunakan pin digital**
- Mengimplementasikan **logika sekuensial dan delay waktu**
- Memahami dasar **simulasi sistem kontrol sederhana**

## Components Required
Komponen yang digunakan pada project ini antara lain:

- Arduino Uno
- 3 LED (Red, Yellow, Green)
- 3 Resistor 220Ω
- Breadboard
- Jumper wires
- Atau Modul Traffic Light

## Circuit Diagram
Rangkaian terdiri dari tiga LED yang masing-masing dihubungkan ke pin digital Arduino melalui resistor.

Contoh koneksi:
- LED Merah → Pin 9
- LED Kuning → Pin 8
- LED Hijau → Pin 7

Setiap LED dihubungkan ke **ground melalui resistor** untuk membatasi arus.

## How It Works
Program Arduino akan menyalakan LED secara bergantian sesuai dengan urutan berikut:

1. Lampu **Merah menyala** (kendaraan berhenti)
2. Lampu **Kuning menyala** (persiapan berjalan)
3. Lampu **Hijau menyala** (kendaraan berjalan)

Siklus ini akan terus berulang selama Arduino dijalankan.

## Learning Outcomes
Setelah menyelesaikan project ini, diharapkan pengguna dapat memahami:

- Dasar pemrograman Arduino
- Penggunaan pin digital sebagai output
- Pengendalian perangkat elektronik sederhana
- Konsep sistem kontrol berbasis waktu

## Author
Project ini dibuat sebagai bagian dari pembelajaran **Embedded System dan Mikrokontroler menggunakan Arduino**.
