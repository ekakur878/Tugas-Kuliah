package project.src.com.pbos;

class transportasi{
    String nama;
    String name;
    String nama3;
}

public class tes {

    public static void main(String[] args) {
        
        // membuata object
        transportasi pesawat = new transportasi();
        pesawat.nama = "Garuda";
        pesawat.name = "Mandala";
        pesawat.nama3 = "Sriwijaya";

        System.out.println(pesawat.nama);
        System.out.println(pesawat.name);
        System.out.println(pesawat.nama3);

        transportasi kereta = new transportasi();
        kereta.nama = "Lorena";
        kereta.name = "ANS";
        kereta.nama3 = "Merah Sari";

        System.out.println(kereta.nama);
        System.out.println(kereta.name);
        System.out.println(kereta.nama3);

    }
    
}
