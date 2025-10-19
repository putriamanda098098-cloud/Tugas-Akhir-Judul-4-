#include <iostream>
using namespace std;

const int MAX = 5; 
int stack[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(int data) {
    if (isFull()) {
        cout << "Tumpukan penuh! Tidak bisa menambah piring lagi.\n";
        return;
    }
    stack[++top] = data;
    cout << " piring nomor" << data << " berhasil ditambahkan ke tumpukan.\n";
}

void pop() {
    if (isEmpty()) {
        cout << "Tumpukan kosong! Tidak ada piring untuk diambil.\n";
        return;
    }
    cout << " piring nomor" << stack[top--] << " diambil dari tumpukan.\n";
}

void peek() {
    if (isEmpty()) {
        cout << "Tumpukan kosong!\n";
        return;
    }
    cout << "Piring teratas adalah nomor: " << stack[top] << endl;
}

void display() {
    if (isEmpty()) {
        cout << "Tumpukan kosong!\n";
        return;
    }
    cout << "Isi tumpukan piring(atas ke bawah): ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    int pilih, nomor = 1;

    do {
        cout << "\n=== SISTEM TUMPUKAN PIRING ===\n";
        cout << "1. Tambah piring ke tumpukan (Push)\n";
        cout << "2. ambil piring teratas (Pop)\n";
        cout << "3. Lihat piring teratas(Peek)\n";
        cout << "4. Lihat semua piring (Display)\n";
        cout << "5. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        if (pilih == 1)
            push(nomor++);
        else if (pilih == 2)
            pop();
        else if (pilih == 3)
            peek();
        else if (pilih == 4)
            display();

    } while (pilih != 5);

    cout << "Program selesai.\n";
    return 0;
}
