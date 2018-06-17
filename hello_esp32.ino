#include                              <U8g2lib.h>

U8G2_SSD1306_128X64_NONAME_F_HW_I2C   u8g2(U8G2_R0, 16, 15, 4);

void setup()
{
  u8g2.begin();
  u8g2.setFont(u8g2_font_6x10_tf);
  u8g2.setFontRefHeightExtendedText();
  u8g2.setDrawColor(1);
  u8g2.setFontPosTop();
  u8g2.setFontDirection(0);
}

void  loop()
{
  u8g2.clearBuffer();

  char    chBuffer[128];

  u8g2.drawStr(0,0,"wubba lubba dub dub");
 
  u8g2.sendBuffer();
  delay(2000);
}
