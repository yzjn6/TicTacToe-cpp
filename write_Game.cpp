#include "TicTacToe.h"

class save{
private:
    struct scores {
    int p1;
    int p2;
    int draw;
    };
    vector<struct scores> records;

public:
    void read_records(){
        ifstream fp;
        fp.open("data.dat", ios::in);
        char buff[256];
        while (fp.getline(buff, sizeof(buff))) {
            struct scores any;
            sscanf_s(buff, "%d %d %d", &any.p1, &any.p2, &any.draw);
            records.push_back(any);
        }
        fp.close();
    }
    void write_file(){
        fstream f;
        f.open("data.dat", ios::out);
        
    }
    vector<struct scores> show(){
        return records;
    }
};