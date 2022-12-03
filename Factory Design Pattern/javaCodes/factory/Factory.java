package javaCodes.factory;

import javaCodes.buttons.Button;

public abstract class Factory {
    public void renderButton(){
        Button button = createButton();
        button.render();
    }
    public abstract Button createButton();
}
