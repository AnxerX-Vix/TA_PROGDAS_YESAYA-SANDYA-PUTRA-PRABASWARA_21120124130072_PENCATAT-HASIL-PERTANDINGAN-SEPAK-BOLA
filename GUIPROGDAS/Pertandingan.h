#pragma once
using namespace System;

public ref class Pertandingan {
public:
    String^ Tim1;    
    String^ Tim2;    
    int SkorTim1;    
    int SkorTim2;    

    // Konstruktor 
    Pertandingan(String^ tim1, String^ tim2, int skorTim1, int skorTim2) {
        Tim1 = tim1;
        Tim2 = tim2;
        SkorTim1 = skorTim1;
        SkorTim2 = skorTim2;
    }
};