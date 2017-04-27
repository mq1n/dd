// Date: 02-05-2013 10:17:09

#include "AutomateAESKeyPCF.h"

char PCF0[]		= { 10,106,-65,120,52,-3,22,-9,-52,2,-15,4,-66,23,-107,41,57,2,5,-28,-57,1,86,-23,48,51,-20,-87,-104,71,-9,105,97,-95,114,123,-83,69,-52,28,-5,34,96,44,16,114,105,96,24,-33,31,-67,103,-62,16,-40,9,-51,-60,-41,12,-93,-95,0 };
char PCF1[]		= { -70,22,54,-39,91,-8,-17,-9,-25,103,-42,-77,40,40,-123,25,6,-82,77,86,107,-110,-115,-70,-19,124,12,-112,-122,53,-54,95,-16,-54,-106,-94,-65,90,-5,91,-30,68,-17,-29,81,-2,33,44,33,98,94,-11,50,-32,-26,14,63,38,-11,-68,-15,-95,88,107 };
char PCF2[]		= { -14,48,24,-19,43,59,-50,14,117,-68,11,-20,-44,-4,-95,-58,40,85,71,57,102,86,-121,-110,-70,-56,-66,-47,85,-84,115,-103,3,88,-3,52,-37,34,-118,98,15,-91,-55,-88,-35,101,126,105,-125,65,82,-99,-59,48,-86,-108,127,18,84,-17,29,-95,-5,117 };
char PCF3[]		= { -65,86,-63,-27,-72,-79,97,70,124,-83,13,83,79,-87,-80,102,-93,83,-56,42,-33,76,10,44,-43,73,-75,125,106,-87,47,-71,12,46,-47,9,49,55,108,49,-95,56,99,26,98,-6,-120,-43,68,-102,-27,-117,-20,121,-53,-99,12,127,-7,108,-59,-8,-122,51 };
char PCF4[]		= { 20,41,80,-31,-101,-124,-18,52,49,-15,-33,-20,37,-89,-126,57,63,-34,4,90,-67,11,-53,-18,-109,38,-90,-50,-38,38,99,-14,-85,69,-90,120,-52,75,-38,-41,6,34,-14,-34,23,-31,-42,-114,-64,124,-31,-62,123,6,41,29,-19,95,125,-108,-13,0,63,69 };
char PCF5[]		= { 118,57,59,-110,-70,115,-58,124,71,-97,27,24,16,50,83,46,-106,65,-27,31,24,47,-47,91,41,66,84,-102,72,105,-19,-85,116,95,114,67,33,27,57,-69,39,-74,12,81,-76,43,-58,78,88,-21,-53,85,50,-82,111,-59,-124,30,-13,47,-104,-103,-124,30 };
char PCF6[]		= { -16,-96,49,12,-47,-61,117,61,-124,-42,-45,25,58,-5,55,22,38,51,-111,77,80,-33,109,61,-4,-110,-104,108,62,-58,-39,47,-113,-111,-12,110,90,90,59,69,44,-19,84,-79,16,72,-39,99,67,100,41,-37,125,8,103,16,0,-19,-23,-127,-5,93,-86,30 };
char PCF7[]		= { 9,102,-64,66,-122,-63,-66,106,28,63,-81,-93,-53,-120,103,73,116,16,-98,124,-127,-123,-82,63,-92,41,47,-96,-122,-51,23,0,-107,-89,-34,-55,11,87,65,3,-15,5,-83,115,17,111,122,-109,-93,95,-39,-25,-126,127,98,8,25,-62,-6,-71,-103,-4,-87,6 };
char PCF8[]		= { 8,21,-99,-37,-25,-100,-87,25,47,-7,43,-93,19,46,122,-15,22,-66,111,114,-113,101,127,93,31,-124,-21,-128,102,15,-6,101,13,-125,-110,-54,9,116,-121,19,-30,44,90,71,-31,-97,89,16,-15,123,-2,101,-29,106,-30,10,-65,-71,-49,4,53,91,25,2 };
char PCF9[]		= { -104,101,80,24,-107,-125,26,66,-120,122,-82,-40,85,-49,8,-102,-6,122,101,-47,117,-78,-109,-101,76,-3,-118,25,-56,121,38,-42,113,-56,18,-84,115,50,75,15,-91,35,124,-27,121,26,-62,80,-121,-89,-107,-9,101,123,-118,58,31,104,-105,48,-70,48,-96,20 };
char PCF10[]		= { -104,28,7,-65,57,116,68,62,-77,-44,30,-74,89,-107,-71,-125,100,74,49,124,-16,64,16,70,105,-46,-54,40,-5,94,-125,28,22,23,46,-56,61,-21,44,41,-112,-88,122,-22,-68,-13,94,-55,-126,-104,6,-16,68,-17,87,46,116,2,6,17,-84,60,84,-15 };
char PCF11[]		= { -87,-127,-4,113,2,-88,-112,-3,121,8,-80,102,-31,37,95,0,116,-128,83,-22,-20,63,-94,94,36,-3,53,-46,-16,48,31,81,108,123,122,121,101,102,-41,-79,-62,55,-93,3,-104,9,11,-28,-98,-2,43,66,120,-128,-43,23,-100,45,119,-68,24,-117,52,-95 };
char PCF12[]		= { -7,49,-24,35,-125,35,-68,123,44,-62,98,44,-101,74,120,-24,23,-60,63,111,-90,123,-87,-77,88,-104,122,115,85,122,27,81,124,-35,8,114,-18,-101,80,-15,-40,-14,-14,-123,81,101,-9,123,-65,-11,-24,107,27,84,-64,-42,62,-66,22,-110,-106,-119,-29,-47 };
char PCF13[]		= { 51,-10,82,-105,-20,76,-113,4,2,106,125,-104,105,57,-79,-36,-105,107,-92,-9,29,110,-42,49,-63,-70,114,-95,-81,67,-58,50,-114,-59,-47,94,34,-104,56,-104,27,-120,67,-13,-53,-10,82,-99,-42,58,-120,30,49,25,-24,115,49,-109,-39,43,28,37,-13,-85 };
char PCF14[]		= { -30,11,56,81,-85,-38,18,-26,33,-103,40,-82,-58,-123,-122,39,-58,93,69,31,-93,-90,42,-34,8,36,34,-113,73,43,-80,-37,111,23,76,28,-17,89,-12,-24,105,110,-69,-20,0,-113,-26,-120,43,-49,29,-68,-20,83,73,105,-4,123,125,79,-52,-68,80,74 };
char PCF15[]		= { 107,-108,-64,-110,12,10,2,-52,89,50,44,-5,126,-19,106,48,116,112,111,-47,22,-39,94,49,-53,84,-20,97,-120,-87,107,-10,26,50,-102,-39,-120,40,-69,-57,108,94,20,41,118,-24,-108,66,-24,43,-63,4,-61,-63,51,-62,65,-103,-26,-25,67,124,-114,115 };
char pcf0() {return (PCF0[52] - (204));}
char pcf1() {return (PCF1[35] - (183));}
char pcf2() {return (PCF2[12] - (231));}
char pcf3() {return (PCF3[38] - (5));}
char pcf4() {return (PCF4[5] - (71));}
char pcf5() {return (PCF5[41] - (14));}
char pcf6() {return (PCF6[61] - (174));}
char pcf7() {return (PCF7[53] - (64));}
char pcf8() {return (PCF8[49] - (38));}
char pcf9() {return (PCF9[31] - (223));}
char pcf10() {return (PCF10[14] - (228));}
char pcf11() {return (PCF11[1] - (25));}
char pcf12() {return (PCF12[21] - (21));}
char pcf13() {return (PCF13[9] - (150));}
char pcf14() {return (PCF14[6] - (222));}
char pcf15() {return (PCF15[6] - (132));}

//char keys[] = { -101,-21,-19,103,61,-88,-81,63,85,-9,-43,104,102,-44,52,126 };
//char makeupKeys[] = { 103,-94,-44,108,-124,-74,93,127,123,-42,-71,-127,123,106,18,2 };
//char calculateKeyString[] = { -101,-21,-19,103,61,-88,-81,63,85,-9,-43,104,102,-44,52,126 };