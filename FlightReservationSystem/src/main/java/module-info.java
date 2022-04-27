module reservation.flight.flightreservationsystem {
    requires javafx.controls;
    requires javafx.fxml;


    opens reservation.flight.flightreservationsystem to javafx.fxml;
    exports reservation.flight.flightreservationsystem;
}