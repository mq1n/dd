// Date 2013-05-02 16:25:17 +0700
// String N/A
// Checksum ee1f4a87f4c1a2517af054b28dae6465
#include <stdlib.h>

#include "hashKey.h"
int m_hash=13;
int get1_hash(void){return 123;}
int get2_hash(void){return 70;}
int get3_hash(void){return 84;}
int get4_hash(void){return 132;}
int get5_hash(void){return 65;}
int get6_hash(void){return 122;}
int get7_hash(void){return 85;}
int get8_hash(void){return 85;}
int get9_hash(void){return 85;}
int get10_hash(void){return 134;}
int get11_hash(void){return 90;}
int get12_hash(void){return 116;}
int get13_hash(void){return 132;}
int get14_hash(void){return 96;}
int get15_hash(void){return 122;}
int get16_hash(void){return 68;}
int get17_hash(void){return 91;}
int get18_hash(void){return -48;}
int get19_hash(void){return -93;}
int get20_hash(void){return -113;}
int get21_hash(void){return -29;}
int get22_hash(void){return 97;}
int get23_hash(void){return 111;}
int get24_hash(void){return -55;}
int get25_hash(void){return -76;}
int get26_hash(void){return -78;}
int get27_hash(void){return -66;}
int get28_hash(void){return -111;}
int get29_hash(void){return -91;}
int get30_hash(void){return 32;}
int get31_hash(void){return -17;}
int get32_hash(void){return 94;}
int get33_hash(void){return -105;}
int get34_hash(void){return 80;}
int get35_hash(void){return -91;}
int get36_hash(void){return 14;}
int get37_hash(void){return -95;}
int get38_hash(void){return 106;}
int get39_hash(void){return -30;}
int get40_hash(void){return -28;}
int get41_hash(void){return 81;}
int get42_hash(void){return -110;}
int get43_hash(void){return -108;}
int get44_hash(void){return 78;}
int get45_hash(void){return -85;}
int get46_hash(void){return -19;}
int get47_hash(void){return 80;}
int get48_hash(void){return 105;}
int get49_hash(void){return 120;}
int get50_hash(void){return -112;}
int get51_hash(void){return 77;}
int get52_hash(void){return -11;}
int get53_hash(void){return 118;}
int get54_hash(void){return -10;}
int get55_hash(void){return -16;}
int get56_hash(void){return 84;}
int get57_hash(void){return 58;}
int get58_hash(void){return -20;}
int get59_hash(void){return 64;}
int get60_hash(void){return -87;}
int get61_hash(void){return -97;}
int get62_hash(void){return -42;}
int get63_hash(void){return 123;}
int get64_hash(void){return -110;}
int get65_hash(void){return 116;}
int get66_hash(void){return -45;}
int get67_hash(void){return 115;}
int get68_hash(void){return -17;}
int get69_hash(void){return -43;}
int get70_hash(void){return 47;}
int get71_hash(void){return 20;}
int get72_hash(void){return -12;}
int get73_hash(void){return 92;}
int get74_hash(void){return -29;}
int get75_hash(void){return -49;}
int get76_hash(void){return 90;}
int get77_hash(void){return -23;}
int get78_hash(void){return 40;}
int get79_hash(void){return -46;}
int get80_hash(void){return 115;}
int get81_hash(void){return 26;}
int get82_hash(void){return 5;}
int get83_hash(void){return -72;}
int get84_hash(void){return -88;}
int get85_hash(void){return 49;}
int get86_hash(void){return 40;}
int get87_hash(void){return -125;}
int get88_hash(void){return -21;}
int get89_hash(void){return -122;}
int get90_hash(void){return -63;}
int get91_hash(void){return 13;}
int get92_hash(void){return 115;}
int get93_hash(void){return -14;}
int get94_hash(void){return -117;}
int get95_hash(void){return -36;}
int get96_hash(void){return 99;}
char *getkeyKey_hash(void) {
    int keyKeyLen = 16;
    char *keyKey = (char*)malloc(sizeof(char) * (keyKeyLen + 1));
    keyKey[0] = get1_hash()-m_hash;
    keyKey[1] = get2_hash()-m_hash;
    keyKey[2] = get3_hash()-m_hash;
    keyKey[3] = get4_hash()-m_hash;
    keyKey[4] = get5_hash()-m_hash;
    keyKey[5] = get6_hash()-m_hash;
    keyKey[6] = get7_hash()-m_hash;
    keyKey[7] = get8_hash()-m_hash;
    keyKey[8] = get9_hash()-m_hash;
    keyKey[9] = get10_hash()-m_hash;
    keyKey[10] = get11_hash()-m_hash;
    keyKey[11] = get12_hash()-m_hash;
    keyKey[12] = get13_hash()-m_hash;
    keyKey[13] = get14_hash()-m_hash;
    keyKey[14] = get15_hash()-m_hash;
    keyKey[15] = get16_hash()-m_hash;
    keyKey[16] = '\0';
    return keyKey;
}
char *getEncryptedKey_hash(void) {
    int encryptedKeyLen = 32;
    char *encryptedKey = (char*)malloc(sizeof(char) * (encryptedKeyLen + 1));
    encryptedKey[0] = get17_hash();
    encryptedKey[1] = get18_hash();
    encryptedKey[2] = get19_hash();
    encryptedKey[3] = get20_hash();
    encryptedKey[4] = get21_hash();
    encryptedKey[5] = get22_hash();
    encryptedKey[6] = get23_hash();
    encryptedKey[7] = get24_hash();
    encryptedKey[8] = get25_hash();
    encryptedKey[9] = get26_hash();
    encryptedKey[10] = get27_hash();
    encryptedKey[11] = get28_hash();
    encryptedKey[12] = get29_hash();
    encryptedKey[13] = get30_hash();
    encryptedKey[14] = get31_hash();
    encryptedKey[15] = get32_hash();
    encryptedKey[16] = get33_hash();
    encryptedKey[17] = get34_hash();
    encryptedKey[18] = get35_hash();
    encryptedKey[19] = get36_hash();
    encryptedKey[20] = get37_hash();
    encryptedKey[21] = get38_hash();
    encryptedKey[22] = get39_hash();
    encryptedKey[23] = get40_hash();
    encryptedKey[24] = get41_hash();
    encryptedKey[25] = get42_hash();
    encryptedKey[26] = get43_hash();
    encryptedKey[27] = get44_hash();
    encryptedKey[28] = get45_hash();
    encryptedKey[29] = get46_hash();
    encryptedKey[30] = get47_hash();
    encryptedKey[31] = get48_hash();
    encryptedKey[32] = '\0';
    return encryptedKey;
}
char *getEncryptedUrlChecksum_hash(void) {
    int encryptedUrlChecksumLen = 48;
    char *encryptedUrlChecksum = (char*)malloc(sizeof(char) * (encryptedUrlChecksumLen + 1));
    encryptedUrlChecksum[0] = get49_hash();
    encryptedUrlChecksum[1] = get50_hash();
    encryptedUrlChecksum[2] = get51_hash();
    encryptedUrlChecksum[3] = get52_hash();
    encryptedUrlChecksum[4] = get53_hash();
    encryptedUrlChecksum[5] = get54_hash();
    encryptedUrlChecksum[6] = get55_hash();
    encryptedUrlChecksum[7] = get56_hash();
    encryptedUrlChecksum[8] = get57_hash();
    encryptedUrlChecksum[9] = get58_hash();
    encryptedUrlChecksum[10] = get59_hash();
    encryptedUrlChecksum[11] = get60_hash();
    encryptedUrlChecksum[12] = get61_hash();
    encryptedUrlChecksum[13] = get62_hash();
    encryptedUrlChecksum[14] = get63_hash();
    encryptedUrlChecksum[15] = get64_hash();
    encryptedUrlChecksum[16] = get65_hash();
    encryptedUrlChecksum[17] = get66_hash();
    encryptedUrlChecksum[18] = get67_hash();
    encryptedUrlChecksum[19] = get68_hash();
    encryptedUrlChecksum[20] = get69_hash();
    encryptedUrlChecksum[21] = get70_hash();
    encryptedUrlChecksum[22] = get71_hash();
    encryptedUrlChecksum[23] = get72_hash();
    encryptedUrlChecksum[24] = get73_hash();
    encryptedUrlChecksum[25] = get74_hash();
    encryptedUrlChecksum[26] = get75_hash();
    encryptedUrlChecksum[27] = get76_hash();
    encryptedUrlChecksum[28] = get77_hash();
    encryptedUrlChecksum[29] = get78_hash();
    encryptedUrlChecksum[30] = get79_hash();
    encryptedUrlChecksum[31] = get80_hash();
    encryptedUrlChecksum[32] = get81_hash();
    encryptedUrlChecksum[33] = get82_hash();
    encryptedUrlChecksum[34] = get83_hash();
    encryptedUrlChecksum[35] = get84_hash();
    encryptedUrlChecksum[36] = get85_hash();
    encryptedUrlChecksum[37] = get86_hash();
    encryptedUrlChecksum[38] = get87_hash();
    encryptedUrlChecksum[39] = get88_hash();
    encryptedUrlChecksum[40] = get89_hash();
    encryptedUrlChecksum[41] = get90_hash();
    encryptedUrlChecksum[42] = get91_hash();
    encryptedUrlChecksum[43] = get92_hash();
    encryptedUrlChecksum[44] = get93_hash();
    encryptedUrlChecksum[45] = get94_hash();
    encryptedUrlChecksum[46] = get95_hash();
    encryptedUrlChecksum[47] = get96_hash();
    encryptedUrlChecksum[48] = '\0';
    return encryptedUrlChecksum;
}
int* getFirst48_hash(void) {
    int resultLen = 48;
    int *result = (int*)malloc(sizeof(int) * (resultLen + 1));
    result[0] = get1_hash()-m_hash;
    result[1] = get2_hash()-m_hash;
    result[2] = get3_hash()-m_hash;
    result[3] = get4_hash()-m_hash;
    result[4] = get5_hash()-m_hash;
    result[5] = get6_hash()-m_hash;
    result[6] = get7_hash()-m_hash;
    result[7] = get8_hash()-m_hash;
    result[8] = get9_hash()-m_hash;
    result[9] = get10_hash()-m_hash;
    result[10] = get11_hash()-m_hash;
    result[11] = get12_hash()-m_hash;
    result[12] = get13_hash()-m_hash;
    result[13] = get14_hash()-m_hash;
    result[14] = get15_hash()-m_hash;
    result[15] = get16_hash()-m_hash;
    result[16] = get17_hash()-m_hash;
    result[17] = get18_hash()-m_hash;
    result[18] = get19_hash()-m_hash;
    result[19] = get20_hash()-m_hash;
    result[20] = get21_hash()-m_hash;
    result[21] = get22_hash()-m_hash;
    result[22] = get23_hash()-m_hash;
    result[23] = get24_hash()-m_hash;
    result[24] = get25_hash()-m_hash;
    result[25] = get26_hash()-m_hash;
    result[26] = get27_hash()-m_hash;
    result[27] = get28_hash()-m_hash;
    result[28] = get29_hash()-m_hash;
    result[29] = get30_hash()-m_hash;
    result[30] = get31_hash()-m_hash;
    result[31] = get32_hash()-m_hash;
    result[32] = get33_hash()-m_hash;
    result[33] = get34_hash()-m_hash;
    result[34] = get35_hash()-m_hash;
    result[35] = get36_hash()-m_hash;
    result[36] = get37_hash()-m_hash;
    result[37] = get38_hash()-m_hash;
    result[38] = get39_hash()-m_hash;
    result[39] = get40_hash()-m_hash;
    result[40] = get41_hash()-m_hash;
    result[41] = get42_hash()-m_hash;
    result[42] = get43_hash()-m_hash;
    result[43] = get44_hash()-m_hash;
    result[44] = get45_hash()-m_hash;
    result[45] = get46_hash()-m_hash;
    result[46] = get47_hash()-m_hash;
    result[47] = get48_hash()-m_hash;
    result[48] = '\0';
    return result;
}
int* getLast48_hash(void) {
    int resultLen = 48;
    int *result = (int*)malloc(sizeof(int) * (resultLen + 1));
    result[0] = get49_hash()-m_hash;
    result[1] = get50_hash()-m_hash;
    result[2] = get51_hash()-m_hash;
    result[3] = get52_hash()-m_hash;
    result[4] = get53_hash()-m_hash;
    result[5] = get54_hash()-m_hash;
    result[6] = get55_hash()-m_hash;
    result[7] = get56_hash()-m_hash;
    result[8] = get57_hash()-m_hash;
    result[9] = get58_hash()-m_hash;
    result[10] = get59_hash()-m_hash;
    result[11] = get60_hash()-m_hash;
    result[12] = get61_hash()-m_hash;
    result[13] = get62_hash()-m_hash;
    result[14] = get63_hash()-m_hash;
    result[15] = get64_hash()-m_hash;
    result[16] = get65_hash()-m_hash;
    result[17] = get66_hash()-m_hash;
    result[18] = get67_hash()-m_hash;
    result[19] = get68_hash()-m_hash;
    result[20] = get69_hash()-m_hash;
    result[21] = get70_hash()-m_hash;
    result[22] = get71_hash()-m_hash;
    result[23] = get72_hash()-m_hash;
    result[24] = get73_hash()-m_hash;
    result[25] = get74_hash()-m_hash;
    result[26] = get75_hash()-m_hash;
    result[27] = get76_hash()-m_hash;
    result[28] = get77_hash()-m_hash;
    result[29] = get78_hash()-m_hash;
    result[30] = get79_hash()-m_hash;
    result[31] = get80_hash()-m_hash;
    result[32] = get81_hash()-m_hash;
    result[33] = get82_hash()-m_hash;
    result[34] = get83_hash()-m_hash;
    result[35] = get84_hash()-m_hash;
    result[36] = get85_hash()-m_hash;
    result[37] = get86_hash()-m_hash;
    result[38] = get87_hash()-m_hash;
    result[39] = get88_hash()-m_hash;
    result[40] = get89_hash()-m_hash;
    result[41] = get90_hash()-m_hash;
    result[42] = get91_hash()-m_hash;
    result[43] = get92_hash()-m_hash;
    result[44] = get93_hash()-m_hash;
    result[45] = get94_hash()-m_hash;
    result[46] = get95_hash()-m_hash;
    result[47] = get96_hash()-m_hash;
    result[48] = '\0';
    return result;
}