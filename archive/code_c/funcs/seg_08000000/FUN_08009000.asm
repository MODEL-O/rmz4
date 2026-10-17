; undefined FUN_08009000(void)
; entry 0x8009000  size 18 bytes

08009000: 00b5         push {lr}
08009002: 4010         asr r0,r0,#0x1
08009004: 8142         cmp r1,r0
08009006: 01db         blt 0x0800900c
08009008: 0020         mov r0,#0x0
0800900A: 00e0         b 0x0800900e
0800900C: c843         mvn r0,r1
0800900E: 02bc         pop {r1}
08009010: 0847         bx r1
