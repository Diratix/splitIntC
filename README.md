# 📦 splitInt — Rozbijanie liczby całkowitej na cyfry w C

Ten prosty program w języku C zawiera funkcję `splitInt`, która przyjmuje liczbę całkowitą i zwraca dynamicznie alokowaną tablicę zawierającą jej cyfry w kolejności od najwyższego rzędu do najniższego.

## 🔧 Jak to działa?

Program:

1. Liczy, ile cyfr zawiera podana liczba (`len`).
2. Alokuje dynamicznie pamięć na tablicę o długości `len`.
3. Wypełnia tablicę cyframi liczby od lewej do prawej.
4. W funkcji `main` wypisuje cyfry liczby `2537`.

## 💻 Przykład działania

Dla liczby `2537` program wypisze:

```
2 
5 
3 
7 
```

## 🧠 Funkcja `splitInt`

```c
int *splitInt(int number)
```

- **Parametr:** `number` — liczba całkowita dodatnia, którą chcesz rozbić.
- **Zwraca:** wskaźnik na dynamicznie alokowaną tablicę `int[]` zawierającą cyfry liczby.

> ⚠️ Pamiętaj o zwolnieniu zaalokowanej pamięci za pomocą `free()` po zakończeniu korzystania z tablicy.

## 🚀 Kompilacja i uruchomienie

```bash
gcc -o splitInt splitInt.c
./splitInt
```

## ⚠️ Uwagi

- Funkcja nie obsługuje liczb ujemnych ani zera. Dla liczby `0` długość będzie równa `0`, co może prowadzić do nieoczekiwanych rezultatów.

Można to ulepszyć, np. zwracając długość tablicy jako dodatkowy parametr lub strukturę.

## 📄 Licencja

Projekt dostępny na licencji MIT.
