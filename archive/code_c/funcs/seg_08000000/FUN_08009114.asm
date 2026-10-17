; undefined FUN_08009114(void)
; entry 0x8009114  size 26 bytes

08009114: 00b5         push {lr}
08009116: 0a1c         add r2,r1,#0x0
08009118: 8010         asr r0,r0,#0x2
0800911A: 8021         mov r1,#0x80
0800911C: c900         lsl r1,r1,#0x3
0800911E: 091a         sub r1,r1,r0
08009120: 8a42         cmp r2,r1
08009122: 01db         blt 0x08009128
08009124: 0020         mov r0,#0x0
08009126: 00e0         b 0x0800912a
08009128: d043         mvn r0,r2
0800912A: 02bc         pop {r1}
0800912C: 0847         bx r1
