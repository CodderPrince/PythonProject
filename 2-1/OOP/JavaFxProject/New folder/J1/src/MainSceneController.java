import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.TextField;
import javafx.stage.Stage;

public class MainSceneController {

    @FXML
    private TextField tiTle;

    @FXML
    void btnOkClicked(ActionEvent event) {

        Stage mainWindow = (Stage) tiTle.getScene().getWindow();
        String title = tiTle.getText();
        mainWindow.setTitle(title);
    }

}
