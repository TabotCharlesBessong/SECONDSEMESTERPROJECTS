import java.util.ArrayList;

public class Structure {
    String name;
    String town;
    int eval;
    int recommendVal;
    public Structure(String name, String town, int eval, int recommendVal){
        this.name = name;
        this.town = town;
        this.eval = eval;
        this.recommendVal = recommendVal;
    }
    public Structure(){
        this("", "", 0, 0);
    }

    static ArrayList<Structure> hotels = new ArrayList<>();
    
}
