package clubmanagementsystem;

public class Students {
    private String club;
    private String name;
    private String id;
    private String email;
    private String phone;

    public Students(String club, String name, String id, String email, String phone) {
        this.club = club;
        this.name = name;
        this.id = id;
        this.email = email;
        this.phone = phone;
    }

    public String getClub() {
        return club;
    }

    public String getName() {
        return name;
    }

    public String getId() {
        return id;
    }

    public String getEmail() {
        return email;
    }

    public String getPhone() {
        return phone;
    }
}
