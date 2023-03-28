package pbos;

//class dengan constructor
class transport{
    String nama;
    int nomer;

    // constructor dengan parameter
    transport(String inputNama, int inputNomer){

        nama = inputNama;
        nomer = inputNomer;

        System.out.println(nama);
        System.out.println(nomer);

    }
}

public class constructor {

    public static void main(String[] args) {
        
        transport pesawat = new transport("Garuda", 23);
        transport pesawat2 = new transport("Lion", 45);
    }
}
