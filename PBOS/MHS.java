// package pbos;

public class MHS {

    // deklarasi
    private String name;
    private String nim;
    private int age;

    // konstruktor
    public MHS(String name, String nim, int age){
        this.name = name;
        this.nim = nim;
        this.age = age;
    }

    // getter dan setter
    public String getName(){
        return name;
    }

    public void setName(String name){
        this.name = name;
    }

    public String getNim(){
        return nim;
    }

    public void setNim(String nim){
        this.nim = nim;
    }    
    
    public int getAge(){
        return age;
    }

    public void setAge(int age){
        this.age = age;
    }


    // Methode menampilkan
    public void displayMHS(){
        System.out.println("Nama: " + name);
        System.out.println("NIM: " + nim);
        System.out.println("Age: " + age);
    }

}

