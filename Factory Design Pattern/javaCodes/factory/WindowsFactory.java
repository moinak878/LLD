package javaCodes.factory;
import javaCodes.buttons.*;

public class WindowsFactory extends Factory {
    @Override
    public Button createButton(){
        return new WindowsButton();
    }
}
