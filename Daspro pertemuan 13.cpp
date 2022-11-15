#include <iostream>

using namespace std;

/**
 * Ardian ingin membeli permen. Dia memiliki uang 5000. Dia membeli permen dengan ketentuan berikut:
 * 1. Jika harga permen 1000, ia beli 3 permen.
 * 2. Jika harga permen 500, ia beli sampai uang habis.
 * 3. Jika harga permen 300, maka ia hitung dulu uang yang dimiliki dalam kelipatan 300 (mencetak di layar 300, 600, 900, ...) sampai uang yang dimiliki
 * 
 * Berapakah permen yang didapat oleh Ardian?
 **/

int main()
{
    while (true) {
        int cash, price, buyAmount;
        buyAmount = 0;
        cash = 5000;
        cout << "Harga Permen:";
        cin >> price;

        if (price == 1000) {
            buyAmount = 3;
        } else if (price == 500) {
            buyAmount = cash / price;
        } else if (price == 300) {
            int i = 0;
            while (i * price < cash) {
                cout << i * price << endl;
                i++;
            }
            buyAmount = i - 1;
        }
        
        cout << "Ardian membeli " << buyAmount << " permen\n\n";
    }
    return 0;
}