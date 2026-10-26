# 🧮 QtCalculator

![C++](https://img.shields.io/badge/C++-17-00599C?logo=cplusplus&logoColor=white)
![Qt](https://img.shields.io/badge/Qt-6-41CD52?logo=qt&logoColor=white)
![Platform](https://img.shields.io/badge/platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey)

## ✨ Возможности

- ➕ Сложение
- ➖ Разность
- ✖️ Умножение
- ➗ Деление
- Мгновенный вывод результата в окне приложения

## 🖥 Интерфейс

| Элемент | Назначение |
|---------|-----------|
| **Число 1** | Первое число |
| **Число 2** | Второе число |
| **Сложение / Разность / Умножение / Деление** | Выбор операции |
| **Результат** | Отображение итога вычисления |

## 🛠 Технологии

- C++
- Qt 6 (Qt Widgets) <!-- укажите свою версию, например Qt 5.15 -->
- Qt Creator

## 🚀 Сборка и запуск

### Через Qt Creator

1. Склонируйте репозиторий:
   ```bash
   git clone https://github.com/cameon8868/QtCalculator.git
   ```
2. Откройте файл проекта (`.pro` или `CMakeLists.txt`) в **Qt Creator**.
3. Выберите комплект сборки (Kit) и нажмите **Run** (`Ctrl+R`).

### Через консоль (qmake)

```bash
git clone https://github.com/cameon8868/QtCalculator.git
cd QtCalculator
qmake
make        # на Windows с MinGW: mingw32-make
./QtCalculator
```

## 📖 Как пользоваться

1. Введите первое число в поле **Число 1**.
2. Введите второе число в поле **Число 2**.
3. Нажмите нужную кнопку операции.
4. Результат появится рядом с надписью **Результат**.

## 📁 Структура проекта

```
QtCalculator/
├── main.cpp
├── mainwindow.cpp
├── mainwindow.h
├── mainwindow.ui
└── QtCalculator.pro
```


## 👤 Автор

[cameon8868](https://github.com/cameon8868)
