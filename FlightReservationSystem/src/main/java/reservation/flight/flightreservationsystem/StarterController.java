package reservation.flight.flightreservationsystem;

import javafx.fxml.FXML;
import javafx.scene.control.Label;


public class StarterController {
    @FXML
    private Label welcomeText;

    @FXML
    protected void onHelloButtonClick() {
        welcomeText.setText("Welcome to JavaFX Application!");
    }
}