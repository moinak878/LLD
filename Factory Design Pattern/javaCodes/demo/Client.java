package javaCodes.demo;
import javaCodes.factory.*;

public class Client {
    public static void main(String args[]){
        Factory windows = new WindowsFactory();
        windows.renderButton();

        Factory html = new HtmlFactory();
        html.renderButton();
    }
}
