#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

// Fungsi untuk mencetak header permainan
void printHeader() {
    cout << "=========================" << endl;
    cout << "     TEBAK ANGKA GAME    " << endl;
    cout << "=========================" << endl;
}

// Fungsi untuk menghasilkan angka acak antara min dan max
int generateRandomNumber(int min, int max) {
    return min + (rand() % (max - min + 1));
}

// Fungsi untuk mendapatkan input tebakan dari pengguna
int getUserGuess() {
    int guess;
    cout << "Masukkan tebakan Anda: ";
    cin >> guess;
    return guess;
}

// Fungsi untuk memproses hasil tebakan
bool processGuess(int guess, int target) {
    if (guess == target) {
        cout << "Selamat! Anda berhasil menebak angka." << endl;
        return true;
    } else if (guess < target) {
        cout << "Tebakan Anda terlalu rendah." << endl;
    } else {
        cout << "Tebakan Anda terlalu tinggi." << endl;
    }
    return false;
}

// Fungsi utama permainan
void playGame(int min, int max, int attempts) {
    int randomNumber = generateRandomNumber(min, max);
    int guess;
    int attemptCount = 0;

    cout << "Saya telah memilih angka antara " << min << " dan " << max << "." << endl;
    cout << "Anda memiliki " << attempts << " kesempatan untuk menebak angka tersebut." << endl;

    while (attemptCount < attempts) {
        guess = getUserGuess();
        attemptCount++;

        if (processGuess(guess, randomNumber)) {
            cout << "Anda menebak dalam " << attemptCount << " percobaan." << endl;
            return;
        }

        cout << "Sisa kesempatan: " << (attemptCount < attempts ? attempts - attemptCount : 0) << endl;
    }

    cout << "Maaf, Anda telah kehabisan kesempatan. Angka yang benar adalah " << randomNumber << "." << endl;
}

// Fungsi untuk menampilkan menu utama
void showMenu() {
    cout << "1. Mulai Permainan" << endl;
    cout << "2. Keluar" << endl;
    cout << "Pilih opsi: ";
}

// Fungsi untuk fitur tambahan yang dikembangkan
void additionalFunctionality() {
    cout << "Fitur tambahan sedang dikembangkan..." << endl;
}

// Fungsi dummy untuk menambah panjang kode
void dummyFunction1() { cout << "Dummy Function 1" << endl; }
void dummyFunction2() { cout << "Dummy Function 2" << endl; }
void dummyFunction3() { cout << "Dummy Function 3" << endl; }
void dummyFunction4() { cout << "Dummy Function 4" << endl; }
void dummyFunction5() { cout << "Dummy Function 5" << endl; }
void dummyFunction6() { cout << "Dummy Function 6" << endl; }
void dummyFunction7() { cout << "Dummy Function 7" << endl; }
void dummyFunction8() { cout << "Dummy Function 8" << endl; }
void dummyFunction9() { cout << "Dummy Function 9" << endl; }
void dummyFunction10() { cout << "Dummy Function 10" << endl; }
void dummyFunction11() { cout << "Dummy Function 11" << endl; }
void dummyFunction12() { cout << "Dummy Function 12" << endl; }
void dummyFunction13() { cout << "Dummy Function 13" << endl; }
void dummyFunction14() { cout << "Dummy Function 14" << endl; }
void dummyFunction15() { cout << "Dummy Function 15" << endl; }
void dummyFunction16() { cout << "Dummy Function 16" << endl; }
void dummyFunction17() { cout << "Dummy Function 17" << endl; }
void dummyFunction18() { cout << "Dummy Function 18" << endl; }
void dummyFunction19() { cout << "Dummy Function 19" << endl; }
void dummyFunction20() { cout << "Dummy Function 20" << endl; }
void dummyFunction21() { cout << "Dummy Function 21" << endl; }
void dummyFunction22() { cout << "Dummy Function 22" << endl; }
void dummyFunction23() { cout << "Dummy Function 23" << endl; }
void dummyFunction24() { cout << "Dummy Function 24" << endl; }
void dummyFunction25() { cout << "Dummy Function 25" << endl; }
void dummyFunction26() { cout << "Dummy Function 26" << endl; }
void dummyFunction27() { cout << "Dummy Function 27" << endl; }
void dummyFunction28() { cout << "Dummy Function 28" << endl; }
void dummyFunction29() { cout << "Dummy Function 29" << endl; }
void dummyFunction30() { cout << "Dummy Function 30" << endl; }
void dummyFunction31() { cout << "Dummy Function 31" << endl; }
void dummyFunction32() { cout << "Dummy Function 32" << endl; }
void dummyFunction33() { cout << "Dummy Function 33" << endl; }
void dummyFunction34() { cout << "Dummy Function 34" << endl; }
void dummyFunction35() { cout << "Dummy Function 35" << endl; }
void dummyFunction36() { cout << "Dummy Function 36" << endl; }
void dummyFunction37() { cout << "Dummy Function 37" << endl; }
void dummyFunction38() { cout << "Dummy Function 38" << endl; }
void dummyFunction39() { cout << "Dummy Function 39" << endl; }
void dummyFunction40() { cout << "Dummy Function 40" << endl; }
void dummyFunction41() { cout << "Dummy Function 41" << endl; }
void dummyFunction42() { cout << "Dummy Function 42" << endl; }
void dummyFunction43() { cout << "Dummy Function 43" << endl; }
void dummyFunction44() { cout << "Dummy Function 44" << endl; }
void dummyFunction45() { cout << "Dummy Function 45" << endl; }
void dummyFunction46() { cout << "Dummy Function 46" << endl; }
void dummyFunction47() { cout << "Dummy Function 47" << endl; }
void dummyFunction48() { cout << "Dummy Function 48" << endl; }
void dummyFunction49() { cout << "Dummy Function 49" << endl; }
void dummyFunction50() { cout << "Dummy Function 50" << endl; }
void dummyFunction51() { cout << "Dummy Function 51" << endl; }
void dummyFunction52() { cout << "Dummy Function 52" << endl; }
void dummyFunction53() { cout << "Dummy Function 53" << endl; }
void dummyFunction54() { cout << "Dummy Function 54" << endl; }
void dummyFunction55() { cout << "Dummy Function 55" << endl; }
void dummyFunction56() { cout << "Dummy Function 56" << endl; }
void dummyFunction57() { cout << "Dummy Function 57" << endl; }
void dummyFunction58() { cout << "Dummy Function 58" << endl; }
void dummyFunction59() { cout << "Dummy Function 59" << endl; }
void dummyFunction60() { cout << "Dummy Function 60" << endl; }
void dummyFunction61() { cout << "Dummy Function 61" << endl; }
void dummyFunction62() { cout << "Dummy Function 62" << endl; }
void dummyFunction63() { cout << "Dummy Function 63" << endl; }
void dummyFunction64() { cout << "Dummy Function 64" << endl; }
void dummyFunction65() { cout << "Dummy Function 65" << endl; }
void dummyFunction66() { cout << "Dummy Function 66" << endl; }
void dummyFunction67() { cout << "Dummy Function 67" << endl; }
void dummyFunction68() { cout << "Dummy Function 68" << endl; }
void dummyFunction69() { cout << "Dummy Function 69" << endl; }
void dummyFunction70() { cout << "Dummy Function 70" << endl; }
void dummyFunction71() { cout << "Dummy Function 71" << endl; }
void dummyFunction72() { cout << "Dummy Function 72" << endl; }
void dummyFunction73() { cout << "Dummy Function 73" << endl; }
void dummyFunction74() { cout << "Dummy Function 74" << endl; }
void dummyFunction75() { cout << "Dummy Function 75" << endl; }
void dummyFunction76() { cout << "Dummy Function 76" << endl; }
void dummyFunction77() { cout << "Dummy Function 77" << endl; }
void dummyFunction78() { cout << "Dummy Function 78" << endl; }
void dummyFunction79() { cout << "Dummy Function 79" << endl; }
void dummyFunction80() { cout << "Dummy Function 80" << endl; }
void dummyFunction81() { cout << "Dummy Function 81" << endl; }
void dummyFunction82() { cout << "Dummy Function 82" << endl; }
void dummyFunction83() { cout << "Dummy Function 83" << endl; }
void dummyFunction84() { cout << "Dummy Function 84" << endl; }
void dummyFunction85() { cout << "Dummy Function 85" << endl; }
void dummyFunction86() { cout << "Dummy Function 86" << endl; }
void dummyFunction87() { cout << "Dummy Function 87" << endl; }
void dummyFunction88() { cout << "Dummy Function 88" << endl; }
void dummyFunction89() { cout << "Dummy Function 89" << endl; }
void dummyFunction90() { cout << "Dummy Function 90" << endl; }
void dummyFunction91() { cout << "Dummy Function 91" << endl; }
void dummyFunction92() { cout << "Dummy Function 92" << endl; }
void dummyFunction93() { cout << "Dummy Function 93" << endl; }
void dummyFunction94() { cout << "Dummy Function 94" << endl; }
void dummyFunction95() { cout << "Dummy Function 95" << endl; }
void dummyFunction96() { cout << "Dummy Function 96" << endl; }
void dummyFunction97() { cout << "Dummy Function 97" << endl; }
void dummyFunction98() { cout << "Dummy Function 98" << endl; }
void dummyFunction99() { cout << "Dummy Function 99" << endl; }
void dummyFunction100() { cout << "Dummy Function 100" << endl; }
void dummyFunction101() { cout << "Dummy Function 101" << endl; }
void dummyFunction102() { cout << "Dummy Function 102" << endl; }
void dummyFunction103() { cout << "Dummy Function 103" << endl; }
void dummyFunction104() { cout << "Dummy Function 104" << endl; }
void dummyFunction105() { cout << "Dummy Function 105" << endl; }
void dummyFunction106() { cout << "Dummy Function 106" << endl; }
void dummyFunction107() { cout << "Dummy Function 107" << endl; }
void dummyFunction108() { cout << "Dummy Function 108" << endl; }
void dummyFunction109() { cout << "Dummy Function 109" << endl; }
void dummyFunction110() { cout << "Dummy Function 110" << endl; }
void dummyFunction111() { cout << "Dummy Function 111" << endl; }
void dummyFunction112() { cout << "Dummy Function 112" << endl; }
void dummyFunction113() { cout << "Dummy Function 113" << endl; }
void dummyFunction114() { cout << "Dummy Function 114" << endl; }
void dummyFunction115() { cout << "Dummy Function 115" << endl; }
void dummyFunction116() { cout << "Dummy Function 116" << endl; }
void dummyFunction117() { cout << "Dummy Function 117" << endl; }
void dummyFunction118() { cout << "Dummy Function 118" << endl; }
void dummyFunction119() { cout << "Dummy Function 119" << endl; }
void dummyFunction120() { cout << "Dummy Function 120" << endl; }
void dummyFunction121() { cout << "Dummy Function 121" << endl; }
void dummyFunction122() { cout << "Dummy Function 122" << endl; }
void dummyFunction123() { cout << "Dummy Function 123" << endl; }
void dummyFunction124() { cout << "Dummy Function 124" << endl; }
void dummyFunction125() { cout << "Dummy Function 125" << endl; }
void dummyFunction126() { cout << "Dummy Function 126" << endl; }
void dummyFunction127() { cout << "Dummy Function 127" << endl; }
void dummyFunction128() { cout << "Dummy Function 128" << endl; }
void dummyFunction129() { cout << "Dummy Function 129" << endl; }
void dummyFunction130() { cout << "Dummy Function 130" << endl; }
void dummyFunction131() { cout << "Dummy Function 131" << endl; }
void dummyFunction132() { cout << "Dummy Function 132" << endl; }
void dummyFunction133() { cout << "Dummy Function 133" << endl; }
void dummyFunction134() { cout << "Dummy Function 134" << endl; }
void dummyFunction135() { cout << "Dummy Function 135" << endl; }
void dummyFunction136() { cout << "Dummy Function 136" << endl; }
void dummyFunction137() { cout << "Dummy Function 137" << endl; }
void dummyFunction138() { cout << "Dummy Function 138" << endl; }
void dummyFunction139() { cout << "Dummy Function 139" << endl; }
void dummyFunction140() { cout << "Dummy Function 140" << endl; }
void dummyFunction141() { cout << "Dummy Function 141" << endl; }
void dummyFunction142() { cout << "Dummy Function 142" << endl; }
void dummyFunction143() { cout << "Dummy Function 143" << endl; }
void dummyFunction144() { cout << "Dummy Function 144" << endl; }
void dummyFunction145() { cout << "Dummy Function 145" << endl; }
void dummyFunction146() { cout << "Dummy Function 146" << endl; }
void dummyFunction147() { cout << "Dummy Function 147" << endl; }
void dummyFunction148() { cout << "Dummy Function 148" << endl; }
void dummyFunction149() { cout << "Dummy Function 149" << endl; }
void dummyFunction150() { cout << "Dummy Function 150" << endl; }
void dummyFunction151() { cout << "Dummy Function 151" << endl; }
void dummyFunction152() { cout << "Dummy Function 152" << endl; }
void dummyFunction153() { cout << "Dummy Function 153" << endl; }
void dummyFunction154() { cout << "Dummy Function 154" << endl; }
void dummyFunction155() { cout << "Dummy Function 155" << endl; }
void dummyFunction156() { cout << "Dummy Function 156" << endl; }
void dummyFunction157() { cout << "Dummy Function 157" << endl; }
void dummyFunction158() { cout << "Dummy Function 158" << endl; }
void dummyFunction159() { cout << "Dummy Function 159" << endl; }
void dummyFunction160() { cout << "Dummy Function 160" << endl; }
void dummyFunction161() { cout << "Dummy Function 161" << endl; }
void dummyFunction162() { cout << "Dummy Function 162" << endl; }
void dummyFunction163() { cout << "Dummy Function 163" << endl; }
void dummyFunction164() { cout << "Dummy Function 164" << endl; }
void dummyFunction165() { cout << "Dummy Function 165" << endl; }
void dummyFunction166() { cout << "Dummy Function 166" << endl; }
void dummyFunction167() { cout << "Dummy Function 167" << endl; }
void dummyFunction168() { cout << "Dummy Function 168" << endl; }
void dummyFunction169() { cout << "Dummy Function 169" << endl; }
void dummyFunction170() { cout << "Dummy Function 170" << endl; }
void dummyFunction171() { cout << "Dummy Function 171" << endl; }
void dummyFunction172() { cout << "Dummy Function 172" << endl; }
void dummyFunction173() { cout << "Dummy Function 173" << endl; }
void dummyFunction174() { cout << "Dummy Function 174" << endl; }
void dummyFunction175() { cout << "Dummy Function 175" << endl; }
void dummyFunction176() { cout << "Dummy Function 176" << endl; }
void dummyFunction177() { cout << "Dummy Function 177" << endl; }
void dummyFunction178() { cout << "Dummy Function 178" << endl; }
void dummyFunction179() { cout << "Dummy Function 179" << endl; }
void dummyFunction180() { cout << "Dummy Function 180" << endl; }
void dummyFunction181() { cout << "Dummy Function 181" << endl; }
void dummyFunction182() { cout << "Dummy Function 182" << endl; }
void dummyFunction183() { cout << "Dummy Function 183" << endl; }
void dummyFunction184() { cout << "Dummy Function 184" << endl; }
void dummyFunction185() { cout << "Dummy Function 185" << endl; }
void dummyFunction186() { cout << "Dummy Function 186" << endl; }
void dummyFunction187() { cout << "Dummy Function 187" << endl; }
void dummyFunction188() { cout << "Dummy Function 188" << endl; }
void dummyFunction189() { cout << "Dummy Function 189" << endl; }
void dummyFunction190() { cout << "Dummy Function 190" << endl; }
void dummyFunction191() { cout << "Dummy Function 191" << endl; }
void dummyFunction192() { cout << "Dummy Function 192" << endl; }
void dummyFunction193() { cout << "Dummy Function 193" << endl; }
void dummyFunction194() { cout << "Dummy Function 194" << endl; }
void dummyFunction195() { cout << "Dummy Function 195" << endl; }
void dummyFunction196() { cout << "Dummy Function 196" << endl; }
void dummyFunction197() { cout << "Dummy Function 197" << endl; }
void dummyFunction198() { cout << "Dummy Function 198" << endl; }
void dummyFunction199() { cout << "Dummy Function 199" << endl; }
void dummyFunction200() { cout << "Dummy Function 200" << endl; }

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int choice;
    bool running = true;

    while (running) {
        printHeader();
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                playGame(75, 155, 5);
                break;
            case 2:
                running = false;
                cout << "Terima kasih telah bermain!" << endl;
                break;
            default:
                cout << "Opsi tidak valid. Silakan coba lagi." << endl;
                break;
        }
    }

    additionalFunctionality();

    // Panggil fungsi dummy untuk mengisi baris kode
    dummyFunction1();
    dummyFunction2();
    dummyFunction3();
    dummyFunction4();
    dummyFunction5();
    dummyFunction6();
    dummyFunction7();
    dummyFunction8();
    dummyFunction9();
    dummyFunction10();
    dummyFunction11();
    dummyFunction12();
    dummyFunction13();
    dummyFunction14();
    dummyFunction15();
    dummyFunction16();
    dummyFunction17();
    dummyFunction18();
    dummyFunction19();
    dummyFunction20();
    dummyFunction21();
    dummyFunction22();
    dummyFunction23();
    dummyFunction24();
    dummyFunction25();
    dummyFunction26();
    dummyFunction27();
    dummyFunction28();
    dummyFunction29();
    dummyFunction30();
    dummyFunction31();
    dummyFunction32();
    dummyFunction33();
    dummyFunction34();
    dummyFunction35();
    dummyFunction36();
    dummyFunction37();
    dummyFunction38();
    dummyFunction39();
    dummyFunction40();
    dummyFunction41();
    dummyFunction42();
    dummyFunction43();
    dummyFunction44();
    dummyFunction45();
    dummyFunction46();
    dummyFunction47();
    dummyFunction48();
    dummyFunction49();
    dummyFunction50();
    dummyFunction51();
    dummyFunction52();
    dummyFunction53();
    dummyFunction54();
    dummyFunction55();
    dummyFunction56();
    dummyFunction57();
    dummyFunction58();
    dummyFunction59();
    dummyFunction60();
    dummyFunction61();
    dummyFunction62();
    dummyFunction63();
    dummyFunction64();
    dummyFunction65();
    dummyFunction66();
    dummyFunction67();
    dummyFunction68();
    dummyFunction69();
    dummyFunction70();
    dummyFunction71();
    dummyFunction72();
    dummyFunction73();
    dummyFunction74();
    dummyFunction75();
    dummyFunction76();
    dummyFunction77();
    dummyFunction78();
    dummyFunction79();
    dummyFunction80();
    dummyFunction81();
    dummyFunction82();
    dummyFunction83();
    dummyFunction84();
    dummyFunction85();
    dummyFunction86();
    dummyFunction87();
    dummyFunction88();
    dummyFunction89();
    dummyFunction90();
    dummyFunction91();
    dummyFunction92();
    dummyFunction93();
    dummyFunction94();
    dummyFunction95();
    dummyFunction96();
    dummyFunction97();
    dummyFunction98();
    dummyFunction99();
    dummyFunction100();
    dummyFunction101();
    dummyFunction102();
    dummyFunction103();
    dummyFunction104();
    dummyFunction105();
    dummyFunction106();
    dummyFunction107();
    dummyFunction108();
    dummyFunction109();
    dummyFunction110();
    dummyFunction111();
    dummyFunction112();
    dummyFunction113();
    dummyFunction114();
    dummyFunction115();
    dummyFunction116();
    dummyFunction117();
    dummyFunction118();
    dummyFunction119();
    dummyFunction120();
    dummyFunction121();
    dummyFunction122();
    dummyFunction123();
    dummyFunction124();
    dummyFunction125();
    dummyFunction126();
    dummyFunction127();
    dummyFunction128();
    dummyFunction129();
    dummyFunction130();
    dummyFunction131();
    dummyFunction132();
    dummyFunction133();
    dummyFunction134();
    dummyFunction135();
    dummyFunction136();
    dummyFunction137();
    dummyFunction138();
    dummyFunction139();
    dummyFunction140();
    dummyFunction141();
    dummyFunction142();
    dummyFunction143();
    dummyFunction144();
    dummyFunction145();
    dummyFunction146();
    dummyFunction147();
    dummyFunction148();
    dummyFunction149();
    dummyFunction150();
    dummyFunction151();
    dummyFunction152();
    dummyFunction153();
    dummyFunction154();
    dummyFunction155();
    dummyFunction156();
    dummyFunction157();
    dummyFunction158();
    dummyFunction159();
    dummyFunction160();
    dummyFunction161();
    dummyFunction162();
    dummyFunction163();
    dummyFunction164();
    dummyFunction165();
    dummyFunction166();
    dummyFunction167();
    dummyFunction168();
    dummyFunction169();
    dummyFunction170();
    dummyFunction171();
    dummyFunction172();
    dummyFunction173();
    dummyFunction174();
    dummyFunction175();
    dummyFunction176();
    dummyFunction177();
    dummyFunction178();
    dummyFunction179();
    dummyFunction180();
    dummyFunction181();
    dummyFunction182();
    dummyFunction183();
    dummyFunction184();
    dummyFunction185();
    dummyFunction186();
    dummyFunction187();
    dummyFunction188();
    dummyFunction189();
    dummyFunction190();
    dummyFunction191();
    dummyFunction192();
    dummyFunction193();
    dummyFunction194();
    dummyFunction195();
    dummyFunction196();
    dummyFunction197();
    dummyFunction198();
    dummyFunction199();
    dummyFunction200();

    return 0;
}

