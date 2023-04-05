package com.pbos;

public class NestedIfExample {

    public static void main(String[] args) {
        
        int x = 10;
        int y = 5;

        if (x > y) {
            System.out.println("Nilai x lebih besar dari y");

            if (x>15){
                System.out.println("x lebih besar dari 15");
            }
            else {
                System.out.println("x kurang dari sama dengan 15");
            }

        }
        else {
            System.out.println("y lebih besar dari x");
        }
    }
    
}
