package pbos;

public class ForLoopExample {
    
    public static void main(String[] args) {
        // perulangan untuk mencetak angka dari 1 sampai 5
        for (int i = 0; i <= 5; i++) {
            System.out.println(i);
        }

        // perulangan for untu mencetak bilangan genap  dari  2 sampai 10
        for (int i = 2; i <= 10; i++) {
            System.out.println(i);
            
        }

        // perulangan for untuk mencetak fibonanchi
        int n = 10;
        int a = 0, b = 1;
        System.out.println("Deret fibonanchi");
        for (int i = 1; i <= n; i++){
            System.out.println(a + " ");
            int c = a +b;
            a = b;
            b = c;
            
        }
    }
}

