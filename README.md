
# 🏦 Banka Kredisi Hesaplama Uygulaması

Bu projeyi C++ kullanarak bireysel kredi hesaplaması yapan basit bir konsol uygulaması olarak geliştirdim. Temel amacım hem **nesne yönelimli programlamayı (OOP)** pekiştirmek hem de polimorfizm gibi konuları uygulamalı şekilde kullanmaktı.

---

## 📌 Proje Özellikleri

- `Banka` adında soyut (abstract) bir sınıf oluşturdum.
- `ZiraatBankasi` ve `Akbank` sınıfları, bu soyut sınıftan kalıtım alıyor.
- Her banka için farklı geri ödeme hesaplama formülleri tanımladım.
- Polimorfizm kullanarak aynı fonksiyon adıyla farklı davranışları yönetmeyi gösterdim.

---

## 🛠️ Kullandığım Teknolojiler

- C++ (OOP, sınıflar, kalıtım, polimorfizm)
- Konsol uygulaması
- `getch()` ile ekran sonlandırma

---

## 💡 Nasıl Çalışıyor?

Uygulamada iki müşteri üzerinden örnek hesaplama yaptım. Her müşterinin hangi bankadan kredi aldığına göre geri ödeme miktarı farklı hesaplanıyor.

Örneğin:

- Ziraat Bankası %30 faiz + sabit 500 TL
- Akbank %30 faiz + vade başına 1.1 TL ek ücret

---

## 📤 Örnek Çıktı

```bash
Ahmet Musterisinin Geri Odeyecegi Tutar: 7000
Mehmet Musterisinin Geri Odeyecegi Tutar: 6955

