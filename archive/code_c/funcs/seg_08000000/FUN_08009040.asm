; undefined FUN_08009040(void)
; entry 0x8009040  size 24 bytes

08009040: 00b5         push {lr}
08009042: 8010         asr r0,r0,#0x2
08009044: 8022         mov r2,#0x80
08009046: d200         lsl r2,r2,#0x3
08009048: 8018         add r0,r0,r2
0800904A: 8142         cmp r1,r0
0800904C: 01db         blt 0x08009052
0800904E: 0020         mov r0,#0x0
08009050: 00e0         b 0x08009054
08009052: c843         mvn r0,r1
08009054: 02bc         pop {r1}
08009056: 0847         bx r1
