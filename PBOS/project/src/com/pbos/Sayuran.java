package project.src.com.pbos;


public class Sayuran
{
    // deklarasi
    private String nama;
    private String jenis;
    private double harga;

    // konstruktor
    public Sayuran (String nama, String jenis, double harga)
    {
        this.nama = nama;
        this.jenis = jenis;
        this.harga  = harga;
    }

    // getter dan setter
    public String getNama(){
        return nama;
    }

    public void setNama(String nama){
        this.nama = nama;
    }

    public String getJenis(){
        return jenis;
    }

    public void setJenis(String jenis){
        this.jenis = jenis;
    }    
    
    public double getHarga(){
        return harga;
    }

    public void setHarga(double  harga){
        this.harga = harga;
    }


    // Methode menampilkan
    public void displaysayur(){
        System.out.println("Nama: " + nama);
        System.out.println("Jenis: " + jenis);
        System.out.println("harga: " + harga);
    }
}