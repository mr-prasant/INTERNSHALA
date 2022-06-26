package com.internshala.javafx;

import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.*;

import java.net.URL;
import java.util.ResourceBundle;

public class Controller implements Initializable {
    @FXML
    public Label welcomeLabel;

    @FXML
    public ChoiceBox<String> choiceBox;

    @FXML
    public TextField userInput;

    @FXML
    public Button convertButton;

    private  boolean isC_TO_F = true;
    private static String C_TO_F_TEXT = "Celsius  to fahrenheit";
    private static String F_TO_C_TEXT = "Fahrenheit to celsius";

    @Override
    public void initialize(URL location, ResourceBundle resources) {
        choiceBox.getItems().add(C_TO_F_TEXT);
        choiceBox.getItems().add(F_TO_C_TEXT);
        choiceBox.setValue(C_TO_F_TEXT);

        choiceBox.getSelectionModel().selectedItemProperty().addListener((observable, oldValue, newValue) ->{
            if(newValue.equals(C_TO_F_TEXT)) {
                isC_TO_F = true;
            } else {
                isC_TO_F = false;
            }
        });

        convertButton.setOnAction(event -> {
            convert();
        });
    }

    private void convert() {
        float getValue = 0.0f;

        try{
            getValue = Float.parseFloat(userInput.getText());
        } catch (Exception e) {
            warnUser();
            return;
        }


        float newTemp = 0.0f;
        if(isC_TO_F) {
            newTemp = (getValue * 9 / 5) + 32;
        } else {
            newTemp = (getValue - 32) * 5 / 9;
        }

        display(newTemp);
    }

    private void warnUser() {
        Alert alert = new Alert(Alert.AlertType.ERROR);
        alert.setTitle("Error Occurred");
        alert.setHeaderText("Invalid temperature enterd!");
        alert.setContentText("Please enter a valid temperature!");
        alert.show();
    }

    private void display(float newTemp) {
        String unit = isC_TO_F? " F" : " C";
        System.out.println("The converted temperature is: " + newTemp + unit);

        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setTitle("Result");
        alert.setContentText("The converted temperature is: " + newTemp + unit);
        alert.show();
    }
}
