package com.pbos;

import javax.swing.*;

public class VisualCalculate {
    public static void main(String[] args){
    String panjangString = JOptionPane.showInputDialog("Masukan Panjang Persegi Panjang = ");
    String lebarString = JOptionPane.showInputDialog("Masukan Lebar Persegi Panjang = ");
    
    double p = Double.parseDouble(panjangString);
    double l = Double.parseDouble(lebarString);
    
    double luas = p * l;
    
    JOptionPane.showMessageDialog(null, "Luas Persegi adalah = " + luas);
}    
}