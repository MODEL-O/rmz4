; undefined FUN_08009058(void)
; entry 0x8009058  size 24 bytes

08009058: 00b5         push {lr}
0800905A: 8010         asr r0,r0,#0x2
0800905C: 8022         mov r2,#0x80
0800905E: 1201         lsl r2,r2,#0x4
08009060: 8018         add r0,r0,r2
08009062: 8142         cmp r1,r0
08009064: 01db         blt 0x0800906a
08009066: 0020         mov r0,#0x0
08009068: 00e0         b 0x0800906c
0800906A: c843         mvn r0,r1
0800906C: 02bc         pop {r1}
0800906E: 0847         bx r1
