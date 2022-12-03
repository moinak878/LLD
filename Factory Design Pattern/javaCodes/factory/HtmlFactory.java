package javaCodes.factory;
import javaCodes.buttons.*;

public class HtmlFactory extends Factory {
    @Override
    public Button createButton(){
        return new HtmlButton();
    }
}
    
