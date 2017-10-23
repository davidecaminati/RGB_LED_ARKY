#include "PololuLedStrip.h"
// Create an ledStrip object and specify the pin it will use.
PololuLedStrip<12> ledStrip;
// Create a buffer for holding the colors (3 bytes per color).
#define LED_COUNT 51
rgb_color colors[LED_COUNT];

int red;
int green;
int blue;

int tempo=200;


//int pattern_count;
int   inc = 2;
int   seq = 3;
int  single;

const int pattern_count = (single * seq + 1);
//const int pattern_count = 500;
//rgb_color pattern[99];

/*
// pattern color      R   G   B
rgb_color pattern[pattern_count] = {
// blu-azzurro
                     (rgb_color) {0, 0,   10},
                     (rgb_color) {0, 0,   20},
                     (rgb_color) {0, 0,   30},
                     (rgb_color) {0, 0,   40},
                     (rgb_color) {0, 0,   50},
                     (rgb_color) {0, 0,   60},
                     (rgb_color) {0, 0,   70},
                     (rgb_color) {0, 0,   80},
                     (rgb_color) {0, 0,   90},
                     (rgb_color) {0, 0,   100},
                     (rgb_color) {0, 0,   110},
                     (rgb_color) {0, 0,   120},
                     (rgb_color) {0, 0,   130},
                     (rgb_color) {0, 0,   140},
                     (rgb_color) {0, 0,   150},
                     (rgb_color) {0, 0,   160},
                     (rgb_color) {0, 0,   170},
                     (rgb_color) {0, 0,   180},
                     (rgb_color) {0, 0,   190},
                     (rgb_color) {0, 0,   200},
                     (rgb_color) {0, 0,   210},
                     (rgb_color) {0, 0,   220},
                     (rgb_color) {0, 0,   230},
                     (rgb_color) {0, 0,   240},
                     (rgb_color) {0, 0,   250},
                     
                     (rgb_color) {0, 0,   250},
                     (rgb_color) {0, 10,   250},
                     (rgb_color) {0, 20,   250},
                     (rgb_color) {0, 30,   250},
                     (rgb_color) {0, 40,   250},
                     (rgb_color) {0, 50,   250},
                     (rgb_color) {0, 60,   250},
                     (rgb_color) {0, 70,   250},
                     (rgb_color) {0, 80,   250},
                     (rgb_color) {0, 90,   250},
                     (rgb_color) {0, 100,   250},
                     (rgb_color) {0, 110,   250},
                     (rgb_color) {0, 120,   250},
                     (rgb_color) {0, 130,   250},
                     (rgb_color) {0, 140,   250},
                     (rgb_color) {0, 150,   250},
                     (rgb_color) {0, 160,   250},
                     (rgb_color) {0, 170,   250},
                     (rgb_color) {0, 180,   250},
                     (rgb_color) {0, 190,   250},
                     (rgb_color) {0, 200,   250},
                     (rgb_color) {0, 210,   250},
                     (rgb_color) {0, 220,   250},
                     (rgb_color) {0, 230,   250},
                     (rgb_color) {0, 240,   250},
                     (rgb_color) {0, 255,   250},
                     (rgb_color) {0, 240,  240},
                     (rgb_color) {0, 230,  230},
                     (rgb_color) {0, 220,  220},
                     (rgb_color) {0, 210,  210},
                     (rgb_color) {0, 200,  200},
                     (rgb_color) {0, 190,  190},
                     (rgb_color) {0, 180,  180},
                     (rgb_color) {0, 170,  170},
                     (rgb_color) {0, 160,  160},
                     (rgb_color) {0, 150,  150},
                     (rgb_color) {0, 140,  140},
                     (rgb_color) {0, 130,  130},
                     (rgb_color) {0, 120,  120},
                     (rgb_color) {0, 110,  110},
                     (rgb_color) {0, 100,  100},
                     (rgb_color) {0, 90,   90},
                     (rgb_color) {0, 80,   80},
                     (rgb_color) {0, 70,   70},
                     (rgb_color) {0, 60,   60},
                     (rgb_color) {0, 50,   50},
                     (rgb_color) {0, 40,   40},
                     (rgb_color) {0, 30,   30},
                     (rgb_color) {0, 20,   20},
                     (rgb_color) {0, 10,   10}
}; */
                     
/*                     (rgb_color) {0, 33,  255},
                     (rgb_color) {0, 65,  255},
                     (rgb_color) {0, 98,  255},
                     (rgb_color) {0, 127, 255},
                     (rgb_color) {0, 160, 255},
                     (rgb_color) {0, 192, 255},
                     (rgb_color) {0, 222, 255},
                     (rgb_color) {0, 255, 255},
                     (rgb_color) {0, 222, 222},
                     (rgb_color) {0, 192, 192},
                     (rgb_color) {0, 160, 160},
                     (rgb_color) {0, 127, 127},
                     (rgb_color) {0,  98,  98},
                     (rgb_color) {0,  65,  65},
                     (rgb_color) {0,  33,  65},
                     (rgb_color) {0,  16,  16},
                     (rgb_color) {0,  0,    0}  */
  
/*  blu-azzurro-verde
                     (rgb_color) {0, 0,   0},
                     (rgb_color) {0, 0,   16},
                     (rgb_color) {0, 0,   33},
                     (rgb_color) {0, 0,   65},
                     (rgb_color) {0, 0,   80},
                     (rgb_color) {0, 0,   105},
                     (rgb_color) {0, 0,   127},
                     (rgb_color) {0, 0,   160},
                     (rgb_color) {0, 0,   192},
                     (rgb_color) {0, 0,   222},
                     (rgb_color) {0, 0,   255},
                     (rgb_color) {0, 33,  255},
                     (rgb_color) {0, 65,  255},
                     (rgb_color) {0, 98,  255},
                     (rgb_color) {0, 127, 255},
                     (rgb_color) {0, 160, 255},
                     (rgb_color) {0, 192, 255},
                     (rgb_color) {0, 222, 255},
                     (rgb_color) {0, 255, 255},
                     (rgb_color) {0, 222, 207},
                     (rgb_color) {0, 192, 160},
                     (rgb_color) {0, 160, 112},
                     (rgb_color) {0, 127, 90},
                     (rgb_color) {0, 127, 65},
                     (rgb_color) {0, 127, 49},
                     (rgb_color) {0, 127, 33},
                     (rgb_color) {0, 127, 16},
                     (rgb_color) {0, 127,  0},
                     (rgb_color) {0, 160,  0},
                     (rgb_color) {0, 192,  0},
                     (rgb_color) {0, 222,  0},                     
                     (rgb_color) {0, 255,  0},
                     (rgb_color) {0, 222,  0},
                     (rgb_color) {0, 192,  0},
                     (rgb_color) {0, 160,  0},
                     (rgb_color) {0, 127,  0},
                     (rgb_color) {0, 65,   0},
                     (rgb_color) {0, 16,  16},
                     (rgb_color) {0, 0,   65},
                     (rgb_color) {0, 0,  127},
                     (rgb_color) {0, 0,  160},
                     (rgb_color) {0, 0,  192},
                     (rgb_color) {0, 0,  222},
                     (rgb_color) {0, 0,  255},
                     (rgb_color) {0, 0,  222},
                     (rgb_color) {0, 0,  192},
                     (rgb_color) {0, 0,  160},
                     (rgb_color) {0, 0,  127},
                     (rgb_color) {0, 0,  65},
                     (rgb_color) {0, 0,  33}
*/
//                    };
// int pattern_count = sizeof(pattern)/sizeof(pattern[0]);

void setup() { 
  // Davide suggestion
  single  = (int) 255/inc;
  //
  rgb_color pattern[pattern_count];
  
  int r,g,b,i;
  r=0;
  g=0;
  b=0;
  
  for(b=inc, i=0; b<255; b+=inc, i++) {
     pattern[i] = (rgb_color) {r, g, b};
  }
  b -=inc;

//  pattern[i] = (rgb_color) {255, 255, 0};
//  i++;
  
  for(g=inc; g<255; g+=inc, i++) {
     pattern[i] = (rgb_color) {r, g, b};
  }
  g -= inc;

//  pattern[i] = (rgb_color) {255, 0, 0};
//  i++;

  for( ; b>0; b-=inc, g-=inc, i++) {
     pattern[i] = (rgb_color) {r, g, b};
  }
  pattern[i] = (rgb_color) {0, 255, 0};
  i++;

} 

void loop() {
	
  rgb_color pattern[pattern_count];
  
  for (int m =0; m<pattern_count; m++)
   {
   for(int l = 0; l < LED_COUNT; l++ ) {
      int x = ( (l%pattern_count)+m )%pattern_count;
      colors[l] = pattern[x];
   }
   // Write the colors to the LED strip.
   ledStrip.write(colors, LED_COUNT);
   delay(tempo);
  }
}
