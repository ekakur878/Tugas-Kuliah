package com.pbos;

public class Main_sayuran
{
    public static void main(String[] args) {
    
        Sayuran sayur = new Sayuran ("wortel", "sayur",200);
        Sayuran buah  = new Sayuran ("Tomat", "buah", 500);

        sayur.displaysayur();
        buah.displaysayur();

    }
}