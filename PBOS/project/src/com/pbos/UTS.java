package com.pbos;
import java.util.Scanner; 
public class UTS {
   
    public static double  celciusToFahreinheit(double  value){
        return  (9 / 5) * value + 32;
    }
    
    public static double  celciusToKelvin(double  value){
        return  value + 273.15;
    }
    
    public static double  celciusToReamur(double value){
        return  (4 * value) /5;
    }
    
    

    public static void main(String args[]) {
        Scanner input = new Scanner (System.in);
        
        System.out.println("Importkan Suhu Celcius : ");
        double convert = input.nextDouble();
        
        
        System.out.println("In fahreinheit: " + celciusToFahreinheit(convert));
        System.out.println("In Reamur: " + celciusToReamur(convert));
        System.out.println("In Kelvin: " + celciusToKelvin(convert));
    }
}
