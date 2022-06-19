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

    int currX = image1.getX() + 47;
    int currY = image1.getY() ;

  //  image1.setVisible(true);
    image1.moveTo(currX, currY);
   // image1.setVisible(true);
  //  Background.invalidate();
    image1.invalidate();
}
void MainView:: leftFunction(){
    int currX = image1.getX() - 47;
    int currY = image1.getY() ;
    image1.moveTo(currX, currY);
   // image1.setVisible(true);
  //  Background.invalidate();
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
    if(GameState){
    if(redcar.getY()<240){
         moveCar(redcar.getX(),redcar.getY()+tickCounter/10);
   
    }else{
        tickCounter=0;
         resetCar();
    }
    if(isTouching(image1.getX(),image1.getY(),redcar.getX(),redcar.getY())){
        GameState=false;
    }
    }

  


}
bool MainView::isTouching(int16_t ball_x, int16_t ball_y, int16_t paddle_x, int16_t paddle_y){
   return (abs(ball_x-paddle_x)<35)&&(abs(ball_y-paddle_y)<73);
}
void MainView::startGame(){
    this->GameState=true;
}