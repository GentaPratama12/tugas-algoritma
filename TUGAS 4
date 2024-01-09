#include <iostream>
using namespace std;

int main()
{
    int karakter;
    int pilihan;
    int health = 100;

    cout << "Selamat datang di game sederhana!" << endl;
    cout << endl;
    cout << "Pilih karakter Anda:" << endl;
    cout << "1. Kesatria" << endl;
    cout << "2. Pemanah" << endl;
    cout << "3. Medis" << endl;
    cout << "Pilihan: ";
    cin >> karakter;

    switch (karakter) {
        case 1:
            cout << "Anda memilih Kesatria." << endl;
            break;
        case 2:
            cout << "Anda memilih Pemanah." << endl;
            break;
        case 3:
            cout << "Anda memilih Medis." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            return 0;
    }

    do {
    	cout << endl;
        cout << "Pilihan tindakan:" << endl;
        cout << "1. Serang (-10 HP)" << endl;
        cout << "2. Memulihkan (+10 HP)" << endl;
        cout << "3. Beli Senjata" << endl;
        cout << "Pilihan: ";
        cout << endl;
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                health -= 10;
                cout << "Anda diserang! HP Anda sekarang: " << health << endl;
                break;
            case 2:
                health += 10;
                cout << "Anda berhasil memulihkan diri,HP Anda sekarang: " << health << endl;
                break;
            case 3:
                int senjata;
                cout << "List senjata yang tersedia:" << endl;
                cout << "1. Panah" << endl;
                cout << "2. Pedang" << endl;
                cout << "Pilihan senjata: ";
                cin >> senjata;

                switch (senjata) {
                    case 1:
                        cout << "Anda membeli panah." << endl;
                        break;
                    case 2:
                        cout << "Anda membeli pedang." << endl;
                        break;
                    default:
                        cout << "Pilihan senjata tidak valid." << endl;
                }
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (health > 0);

    cout << "Game selesai. Terima kasih telah bermain!" << endl;

	return 0;
}
