#include <gui/main_screen/MainView.hpp>

MainView::MainView():dx(2), dy(-1),tickCounter(0)
{ 
 //moveCar(redcar.getX(),(int16_t)240);
   // resetCar();
}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

void MainView:: rightFunction(){

    int currX = image1.getX() + 10;
    int currY = image1.getY() ;

  //  image1.setVisible(true);
    image1.setXY(currX, currY);
   // image1.setVisible(true);
    Background.invalidate();
    image1.invalidate();
}
void MainView:: leftFunction(){
    int currX = image1.getX() - 10;
    int currY = image1.getY() ;
    image1.moveTo(currX, currY);
   // image1.setVisible(true);
    Background.invalidate();
    image1.invalidate();
}

void MainView:: moveCar(int16_t x,int16_t y){
    redcar.moveTo(x,y);
    redcar.invalidate();
}
void MainView:: resetCar(){
    redcar.moveTo(150,-36);
    redcar.invalidate();
}

void MainView::handleTickEvent(){
    tickCounter++;
    if(redcar.getY()<240){
         moveCar(redcar.getX(),redcar.getY()+tickCounter/10);
   
    }else{
        tickCounter=0;
         resetCar();
    }
  

}