package com.pbos;


public class MHS1 {

    public static void main(String[] args) {

        // Objeck Mahasiswa
        MHS MHS1 = new MHS("Eka Kurniawan", "1462200171", 23);
        // Methode display
        MHS1.displayMHS();
        
        // Ubah nilai atribut
        MHS1.setName("Eka Kurniawan");
        MHS1.setNim("1462200171");
        MHS1.setAge(23);
        
        // menampilkan data setelah di rubah
        MHS1.displayMHS();
    }
    
}
