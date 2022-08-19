package com.internshala.connect4;

import javafx.application.Application;
import javafx.application.Platform;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.Pane;
import javafx.stage.Stage;

public class Main extends Application {

    private Controller controller;

    @Override
    public void start(Stage primaryStage) throws Exception{
        FXMLLoader loader = new FXMLLoader(getClass().getResource("game.fxml"));
        GridPane rootGridPane = loader.load();

        controller = loader.getController();

        //playground
        controller.createPlayground();

        //menuBar
        MenuBar menuBar = createMenu();
        menuBar.prefWidthProperty().bind(primaryStage.widthProperty());

        //attach menuBar in Pane
        Pane menuPan = (Pane) rootGridPane.getChildren().get(0);
        menuPan.getChildren().add(menuBar);

        Scene scene = new Scene(rootGridPane);

        primaryStage.setScene(scene);
        primaryStage.setTitle("Connect Four");
        primaryStage.setResizable(false);
        primaryStage.show();
    }

    //Menu
    private MenuBar createMenu() {

        //FILE MENU --------------------------------------------
        Menu fileMenu = new Menu("File");

        //file menu Iteams
        MenuItem newGame = new MenuItem("New game");
        MenuItem resetGame = new MenuItem("Reset game");
        SeparatorMenuItem separate1 = new SeparatorMenuItem(); //for separation between menuItems
        MenuItem exitGame = new MenuItem("Exit game");
        fileMenu.getItems().addAll(newGame, resetGame, separate1, exitGame);

        //file menu Controls
        newGame.setOnAction(event -> {
            controller.resetGame();
            controller.setDefaultName();
        });
        resetGame.setOnAction(event -> controller.resetGame());
        exitGame.setOnAction(event -> exitGame());

        //HELP MENU --------------------------------------------
        Menu helpMenu = new Menu("Help");

        //help menu Items
        MenuItem aboutGame = new MenuItem("About Connect4");
        SeparatorMenuItem separate2 = new SeparatorMenuItem(); //for separation between menuItems
        MenuItem aboutMe = new MenuItem("About Me");
        helpMenu.getItems().addAll(aboutGame, separate2, aboutMe);

        //help menu Controls
        aboutGame.setOnAction(event -> aboutGame());
        aboutMe.setOnAction(event -> aboutMe());

        //defining MenuBar ----------------------------------------------------------
        MenuBar menuBar = new MenuBar();
        menuBar.getMenus().addAll(fileMenu, helpMenu);

        return menuBar;
    }

    //About me
    private void aboutMe() {
        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setTitle("About the Developer!");
        alert.setHeaderText("PRASANT CHANDRA PODDAR");
        String info = "A developer focused on web/app development experience. Coding have been my passion since the day I started working with computer.\n" +
                "I love to play around codes and create games. Connect4 is one of them. In free time, I like to spend time with nears and dears.";
        alert.setContentText(info);
        alert.show();
    }

    //About game
    private void aboutGame() {
        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setTitle("About Connect Four");
        alert.setHeaderText("How to play?");
        String info = "Connect Four is a two-player connection game in which the players first choose a color and then take turns dropping colored discs from the top into a seven-column, six-row vertically suspended grid. The pieces fall straight down, occupying the next available space within the column. The objective of the game is to be the first to form a horizontal, vertical, or diagonal line of four of one's own discs. Connect Four is a solved game. The first player can always win by playing the right moves.";
        alert.setContentText(info);
        alert.show();
    }

    //Exit game
    private void exitGame() {
        Platform.exit();
        System.exit(0);
    }

    public static void main(String[] args) {
        launch(args);
    }
}
