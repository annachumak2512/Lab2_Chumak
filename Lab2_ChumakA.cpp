#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;

    cout << "=== ВИБІР ЗАВДАННЯ ===" << endl;
    cout << "1 - Завдання 1 (Обчислення виразу та радіус за 3 сторонами)" << endl;
    cout << "2 - Завдання 2 (Операції з n та m)" << endl;
    cout << "3 - Завдання 3 (Радіус вписаного кола з перевіркою)" << endl;
    cout << "Введіть номер завдання (1, 2 або 3): ";
    cin >> choice;
    cout << "-----------------------------------" << endl;

    if (choice == 1) {
        // --- ЗАВДАННЯ 1 ---
        double a, b;
        cout << "Введіть a та b: ";
        cin >> a >> b;
        double res = (pow(a + b, 3) - (pow(a, 3) + 3 * pow(a, 2) * b)) / (3 * a * pow(b, 2) + pow(b, 3));
        cout << "Результат виразу: " << res << endl;

        double x, y, z;
        cout << "Введіть сторони трикутника (x, y, z): ";
        cin >> x >> y >> z;
        double p = (x + y + z) / 2.0;
        double r = sqrt((p - x) * (p - y) * (p - z) / p);
        cout << "Радіус вписаної окружності: " << r << endl;

    } else if (choice == 2) {
        // --- ЗАВДАННЯ 2 ---
        double n, m;
        cout << "Введіть значення n: ";
        cin >> n;
        cout << "Введіть значення m: ";
        cin >> m;

        cout << "\n=== Результати завдання n---m ===" << endl;
        cout << "Різниця (n - m): " << n - m << endl;
        cout << "Добуток (n * m): " << n * m << endl;

        if (m != 0) {
            cout << "Частка (n / m): " << n / m << endl;
        } else {
            cout << "Частка (n / m): Помилка (ділення на ноль!)" << endl;
        }

    } else if (choice == 3) {
        // --- ЗАВДАННЯ 3 ---
        double a, b, c;
        cout << "Введіть довжину першої сторони (a): ";
        cin >> a;
        cout << "Введіть довжину другої сторони (b): ";
        cin >> b;
        cout << "Введіть довжину третьої сторони (c): ";
        cin >> c;

        if (a + b > c && a + c > b && b + c > a) {
            double p = (a + b + c) / 2.0;
            double r = sqrt(((p - a) * (p - b) * (p - c)) / p);
            cout << "Радіус вписаного кола (r) дорівнює: " << r << endl;
        } else {
            cout << "Помилка: трикутник із такими сторонами не може існувати!" << endl;
        }

    } else {
        cout << "Помилка: вибрано неіснуюче завдання!" << endl;
    }

    return 0;
}
