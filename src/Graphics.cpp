#include <iostream>
#include <vector>
#include <thread>

class Buffer{
  public:

  Buffer(int w, int h, int initVal) : m_width(w), m_height(h), m_initVal(initVal){
    m_buffer = std::vector<int>(w*h, m_initVal);
  }

  int getWidth() const {
    return m_width;
  }

  int getHeight() const {
    return m_height;
  }

  int getIndex(int width, int height){
    return m_width * height + width;
  }
  
  void setValue(int width, int height, int value){
    m_buffer.at(getIndex(width, height)) = value;
  }

  int getValue(int width, int height){
    return m_buffer.at(getIndex(width, height));
  }

  void clearBuffer(){
          m_buffer = std::vector<int>(m_width * m_height, m_initVal);
  }

  int getInitVal(){
    return m_initVal;
  }

  private:

    int m_width;
    int m_height;
    int m_initVal;
    std::vector<int> m_buffer;
};

class Object : public Buffer{
public:
  Object(int x, int y, int width, int height, int initVal) : m_x(x), m_y(y), Buffer(width, height, initVal) {}
  
  int getXPos() const {
    return m_x;
  }
  int getYPos() const {
    return m_y;
  }

  void setXPos(int x) {
    m_x = x;
  }

  void setYPos(int y) {
    m_y = y;
  }

private:
  int m_x;
  int m_y;
};


class Canvas : public Buffer{
public:
  Canvas(int x, int y, int width, int height) : m_x(x), m_y(y), Buffer(width, height, 46){}

  std::vector<std::reference_wrapper<Object>> objectList{};

  void updateBuffer(){
    for(Object obj : objectList){
      for(int i = obj.getXPos(); i < obj.getXPos() + obj.getHeight(); i++){
        if(i >= getHeight()){break;}
        for(int j = obj.getYPos(); j < obj.getYPos() + obj.getWidth(); j++){
          if(j >= getWidth()){break;}
          int value = obj.getValue(j - obj.getYPos(), i - obj.getXPos());
          if(value > 32){
            setValue(j, i, value);
          }
        }
      }
    }
  }

  void addObject(Object& obj){
    objectList.push_back(obj);
  }

  void removeObject(int index){
    if(index < objectList.size()){
      objectList.erase(objectList.cbegin() + index);
    }
  }
  
  int getXPos() const {
    return m_x;
  }
  int getYPos() const {
    return m_y;
  }

private:
  int m_x;
  int m_y;
};


class Rectangle : public Object{
public:

  Rectangle(int x, int y, int width, int height, int printedChar) : Object(x, y, width, height, printedChar){}

};

class Screensaver : public Object{
public:

  Screensaver(int x, int y, int width, int height, int printedChar, int adder) : Object(x, y, width, height, printedChar), m_s(x), m_t(y), m_adder(adder){
     if(m_s == 23){
      sPlus = -m_adder;
    }else if(m_s == 0){
      sPlus = m_adder;
    }
    if(m_t==79){
      tPlus = -m_adder;
    }else if(m_t == 0){
      tPlus = m_adder;
    }
    m_t+=tPlus;
    m_s+=sPlus;
  }

private:
  int m_adder;
  short sPlus;
  short tPlus;
  int m_t;
  int m_s;
};

class Graphics{
  public:

    void render(Canvas& can){
      can.updateBuffer();
      for(int i = 0; i < can.getHeight(); i++){
        for(int j = 0; j < can.getWidth(); j++){
          std::cout << (char)(can.getValue(j, i));
        }
        std::cout << '\n';
      }
    }
};


int main(){
  using namespace std::literals::chrono_literals;
  Canvas can(0, 0, 80, 24);
  Rectangle rec(10, 10, 5, 5, 64);
  Rectangle rec2(10, 15, 20, 20, 43);
  //std::thread thread(&Buffer::render, sb);
  Graphics g;

  int s = 1;
  can.addObject(rec2);
  can.addObject(rec);
  while (true){
    g.render(can);
    rec.setXPos(s);
    //s++;
    std::this_thread::sleep_for(0.1s);
  }

  /*int s = 2;
  int t = 2;
  short sPlus = 1;
  short tPlus = 1;
  while(true){
    can.addObject(rec);
    g.render(can);
    rec.setXPos(s);
    rec.setYPos(t);

    if(s==23){
      sPlus = -1;
    }else if(s==0){
      sPlus = 1;
    }
    if(t==79){
      tPlus = -1;
    }else if(t==0){
      tPlus = 1;
    }
    t+=tPlus;
    s+=sPlus;*/

    
    std::cout << "___________________" << '\n';
    //thread.join();
    //textbox!!; als parameter den ort, also xy, und den text (textumbruch soll unterstuetzt werden)
    //keyboard eingabe sowie das rendern in einen eigenen thread packen 

}