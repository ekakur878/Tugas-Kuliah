package pbos;

import java.util.Scanner;

public class ifelse3 {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);

    System.out.println("masukan angka : ");
    int angka = input.nextInt();

        if (angka > 0 ) {
            System.out.println("Nilai x lebih besar dari 5");
        }
        else {
            System.out.println("Nilai x lebih kecil dari 5");
        }
    }
}
