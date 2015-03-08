// * These objects define the patterns for your LED CUBE. 
// * In the table[][]= {element_1,element_2,element_3,element_4},
// *
// * The element_1(HEX Value) controls the bottom layer of LED Cube
// * The element_2(HEX Value) controls the middle layer of LED Cube
// * The element_3(HEX Value) controls the top layer of LED Cube
// * The element_4(HEX Value) controls the speed and brightness. 
// *      Example:0x02ff, 
// *             02 controls the speed (delay time)
// *             ff is LED brightness; you can modify the value range 0~255. 
// *
// * Common Hex values for Rows:
// * 
// *    0x007 = Lights LED Row 1-2-3
// *    0x038 = Lights LED Row 4-5-6
// *    0x1c0 = Lights LED Row 7-8-9
// *    0x049 = Lights LED Row 1-4-7
// *    0x092 = Lights LED Row 2-5-8
// *    0x124 = Lights LED Row 3-6-9
// *    0x111 = Lights Diagonal LED Row 1-5-9
// *    0x054 = Lights Diagonal LED Row 3-5-7
// *
// *    0x1ff = Lights the entire level
// ***********************************************************************************************************
       
 #define steps 128

unsigned int table[][4]={
//         Merry-go-round

                               {0x038,0x038,0x038,0x01ff}, // Lights 4-5-6 on all three levels
                               {0x111,0x111,0x111,0x01ff}, // Lights 1-5-9 on all three levels
                               {0x092,0x092,0x092,0x01ff}, // Lights 2-5-8 on all three levels                            
                               {0x054,0x054,0x054,0x01ff}, // Lights 3-5-7 on all three levels
                               {0x038,0x038,0x038,0x01ff},
                               {0x111,0x111,0x111,0x01ff},
                               {0x092,0x092,0x092,0x01ff},                             
                               {0x054,0x054,0x054,0x01ff},                               
                               {0x038,0x038,0x038,0x01ff},
                               {0x111,0x111,0x111,0x01ff},
                               {0x092,0x092,0x092,0x01ff},                             
                               {0x054,0x054,0x054,0x01ff},
                               {0x038,0x038,0x038,0x01ff},
                               {0x111,0x111,0x111,0x01ff},
                               {0x092,0x092,0x092,0x01ff},                             
                               {0x054,0x054,0x054,0x01ff}, 
 
//         Merry-go-round 2

                               {0x000,0x000,0x038,0x02ff}, // Lights 4-5-6 on all three levels
                               {0x000,0x000,0x111,0x02ff}, // Lights 1-5-9 on all three levels
                               {0x000,0x038,0x092,0x02ff}, // Lights 2-5-8 on all three levels                            
                               {0x000,0x111,0x054,0x02ff}, // Lights 3-5-7 on all three levels
                               {0x000,0x092,0x038,0x02ff},
                               {0x038,0x054,0x111,0x02ff},
                               {0x111,0x038,0x092,0x02ff},                             
                               {0x092,0x111,0x054,0x02ff},                               
                               {0x054,0x092,0x038,0x02ff},
                               {0x038,0x054,0x111,0x02ff},
                               {0x111,0x038,0x092,0x02ff},                             
                               {0x092,0x111,0x054,0x02ff},
                               {0x054,0x092,0x038,0x02ff},
                               {0x038,0x054,0x000,0x02ff},
                               {0x111,0x038,0x000,0x02ff},                             
                               {0x092,0x000,0x000,0x02ff},  
 
 
//         Ferris Wheel 1
                               {0x000,0x1ff,0x000,0x02ff}, // Lights all LEDs on middle level
                               {0x007,0x038,0x1c0,0x02ff}, // Lights 1-2-3 on base level, LEDs 4-5-6 on middle level, and LEDs 7-8-9 on top level
                               {0x038,0x038,0x038,0x02ff}, // Lights 4-5-6 on all three levels
                               {0x1c0,0x038,0x007,0x02ff}, // Lights 7-8-9 on base level, LEDs 4-5-6 on middle level, and LEDs 1-2-3 on top level
                               {0x000,0x1ff,0x000,0x02ff},
                               {0x007,0x038,0x1c0,0x02ff}, 
                               {0x038,0x038,0x038,0x02ff},
                               {0x1c0,0x038,0x007,0x02ff},
                               {0x000,0x1ff,0x000,0x02ff},
                               {0x007,0x038,0x1c0,0x02ff}, 
                               {0x038,0x038,0x038,0x02ff},
                               {0x1c0,0x038,0x007,0x02ff},
                               {0x000,0x1ff,0x000,0x02ff},
                               {0x007,0x038,0x1c0,0x02ff}, 
                               {0x038,0x038,0x038,0x02ff},
                               {0x1c0,0x038,0x007,0x02ff}, 
                               
//         Ferris Wheel 2

                               {0x092,0x092,0x092,0x02ff}, // Lights 2-5-8 on all three levels
                               {0x124,0x092,0x049,0x02ff}, // Lights 3-6-9 on base level, LEDs 2-5-8 on middle level, and LEDs 1-4-7 on top level
                               {0x000,0x1ff,0x000,0x02ff}, // Lights all LEDs on middle level
                               {0x049,0x092,0x124,0x02ff}, // Lights 1-4-7 on base level, LEDs 2-5-8 on middle level, and LEDs 3-6-9 on top level
                               {0x092,0x092,0x092,0x02ff}, 
                               {0x124,0x092,0x049,0x02ff},                                
                               {0x000,0x1ff,0x000,0x02ff},                               
                               {0x049,0x092,0x124,0x02ff}, 
                               {0x092,0x092,0x092,0x02ff}, 
                               {0x124,0x092,0x049,0x02ff},                                
                               {0x000,0x1ff,0x000,0x02ff},                               
                               {0x049,0x092,0x124,0x02ff}, 
                               {0x092,0x092,0x092,0x02ff}, 
                               {0x124,0x092,0x049,0x02ff},                                
                               {0x000,0x1ff,0x000,0x02ff},                               
                               {0x049,0x092,0x124,0x02ff},       
                              
//         Elevator

                               {0x1ff,0x000,0x000,0x06ff}, // Lights all LEDs on base level
                               {0x000,0x1ff,0x000,0x06ff}, // Lights all LEDs on middle level                               
                               {0x000,0x000,0x1ff,0x06ff}, // Lights all LEDs on top level                              
                               {0x000,0x000,0x1ff,0x06ff}, 
                               {0x000,0x000,0x1ff,0x06ff},                                
                               {0x000,0x000,0x1ff,0x06ff},                               
                               {0x000,0x000,0x1ff,0x06ff}, 
                               {0x000,0x000,0x1ff,0x06ff},                                
                               {0x000,0x000,0x1ff,0x06ff},                               
                               {0x000,0x1ff,0x000,0x06ff}, 
                               {0x000,0x000,0x1ff,0x06ff},                                
                               {0x000,0x1ff,0x000,0x06ff},                               
                               {0x1ff,0x000,0x000,0x06ff}, 
                               {0x000,0x1ff,0x000,0x06ff},                                
                               {0x000,0x000,0x1ff,0x06ff},                               
                               {0x000,0x1ff,0x000,0x06ff},                                


//         Spiral
                               {0x007,0x007,0x007,0x06ff}, // Lights 1-2-3 on all three levels
                               {0x111,0x111,0x111,0x02ff}, // Lights 1-5-9 on all three levels
                               {0x049,0x049,0x049,0x06ff}, // Lights 1-4-7 on all three levels                              
                               {0x054,0x054,0x054,0x02ff}, // Lights 3-5-7 on all three levels
                               {0x1c0,0x1c0,0x1c0,0x06ff}, // Lights 7-8-9 on all three levels
                               {0x111,0x111,0x111,0x02ff},
                               {0x124,0x124,0x124,0x06ff}, // Lights 3-6-9 on all three levels                               
                               {0x054,0x054,0x054,0x02ff}, 
 
                               {0x007,0x007,0x007,0x06ff}, 
                               {0x111,0x111,0x111,0x02ff},
                               {0x049,0x049,0x049,0x06ff},                               
                               {0x054,0x054,0x054,0x02ff},
                               {0x1c0,0x1c0,0x1c0,0x06ff},
                               {0x111,0x111,0x111,0x02ff},
                               {0x124,0x124,0x124,0x06ff},                                
                               {0x054,0x054,0x054,0x02ff},                     

//         Sweeper
                               {0x007,0x007,0x007,0x06ff}, // Lights 1-2-3 on all three levels
                               {0x038,0x038,0x038,0x06ff}, // Lights 4-5-6 on all three levels
                               {0x1c0,0x1c0,0x1c0,0x06ff}, // Lights 7-8-9 on all three levels
                               {0x111,0x111,0x111,0x02ff}, // Lights 1-5-9 on all three levels
                               {0x124,0x124,0x124,0x06ff}, // Lights 3-6-9 on all three levels                               
                               {0x092,0x092,0x092,0x06ff}, // Lights 2-5-8 on all three levels
                               {0x049,0x049,0x049,0x06ff}, // Lights 1-4-7 on all three levels                              
                               {0x111,0x111,0x111,0x02ff}, // Lights 1-5-9 on all three levels
                              {0x007,0x007,0x007,0x06ff}, // Lights 1-2-3 on all three levels
                               {0x038,0x038,0x038,0x06ff}, // Lights 4-5-6 on all three levels
                               {0x1c0,0x1c0,0x1c0,0x06ff}, // Lights 7-8-9 on all three levels
                              {0x111,0x111,0x111,0x02ff}, // Lights 1-5-9 on all three levels
                               {0x124,0x124,0x124,0x06ff}, // Lights 3-6-9 on all three levels                               
                               {0x092,0x092,0x092,0x06ff}, // Lights 2-5-8 on all three levels
                               {0x049,0x049,0x049,0x06ff}, // Lights 1-4-7 on all three levels                              
                               {0x111,0x111,0x111,0x02ff}, // Lights 1-5-9 on all three levels        

//         Raindrops
                               {0x000,0x000,0x001,0x02ff}, 
                               {0x000,0x001,0x010,0x02ff}, 
                               {0x001,0x010,0x100,0x02ff}, 
                               {0x010,0x100,0x010,0x02ff}, 
                               {0x100,0x010,0x020,0x02ff}, 
                               {0x010,0x020,0x001,0x02ff}, 
                               {0x020,0x001,0x010,0x02ff}, 
                               {0x001,0x010,0x004,0x02ff}, 
 
                               {0x010,0x004,0x001,0x02ff}, 
                               {0x004,0x001,0x010,0x02ff}, 
                               {0x001,0x010,0x000,0x02ff}, 
                               {0x010,0x000,0x100,0x02ff}, 
                               {0x000,0x100,0x050,0x02ff}, 
                               {0x100,0x050,0x001,0x02ff}, 
                               {0x050,0x001,0x000,0x02ff}, 
                               {0x001,0x000,0x000,0x02ff},                              
                               
};


void setup() { 
  Serial.begin(9200);  
  for(int a=2;a<=13;a++)
    pinMode(a, OUTPUT); 
}

void animate(unsigned int* sequence) {
  for(int i=0;i<33;i++) {
    digitalWrite(2,(sequence[i%3]&0x1));
    digitalWrite(4,(sequence[i%3]&0x2));   
    digitalWrite(7,(sequence[i%3]&0x4));
    digitalWrite(8,(sequence[i%3]&0x8));
    digitalWrite(9,(sequence[i%3]&0x10));   
    digitalWrite(10,(sequence[i%3]&0x20)); 
    digitalWrite(11,(sequence[i%3]&0x40));
    digitalWrite(12,(sequence[i%3]&0x80));   
    digitalWrite(13,((sequence[i%3]&0x100)>>1));
    if(i%3==0)
      analogWrite(3,(0xff-(sequence[3]&0xff)));  
    else if(i%3==1)
      analogWrite(5,(0xff-(sequence[3]&0xff)));        
    else if(i%3==2)
      analogWrite(6,(0xff-(sequence[3]&0xff)));        
    delay(2); 
    digitalWrite(3,1); 
    digitalWrite(5,1);
    digitalWrite(6,1);        
  }        
}

void loop() {
    for(int s=0;s<steps;s++) {
      for(int b=0;b<(table[s][3]>>8);b++) {
          animate(table[s]);             
      }          
    }   
}
