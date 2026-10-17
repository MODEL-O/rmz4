; undefined FUN_08009088(void)
; entry 0x8009088  size 26 bytes

08009088: 00b5         push {lr}
0800908A: 0a1c         add r2,r1,#0x0
0800908C: 4010         asr r0,r0,#0x1
0800908E: 8021         mov r1,#0x80
08009090: 4901         lsl r1,r1,#0x5
08009092: 091a         sub r1,r1,r0
08009094: 8a42         cmp r2,r1
08009096: 01db         blt 0x0800909c
08009098: 0020         mov r0,#0x0
0800909A: 00e0         b 0x0800909e
0800909C: d043         mvn r0,r2
0800909E: 02bc         pop {r1}
080090A0: 0847         bx r1
