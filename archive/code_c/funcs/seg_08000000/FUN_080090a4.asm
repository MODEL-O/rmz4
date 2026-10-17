; undefined FUN_080090a4(void)
; entry 0x80090a4  size 26 bytes

080090A4: 00b5         push {lr}
080090A6: 0a1c         add r2,r1,#0x0
080090A8: 4010         asr r0,r0,#0x1
080090AA: 8021         mov r1,#0x80
080090AC: 4901         lsl r1,r1,#0x5
080090AE: 091a         sub r1,r1,r0
080090B0: 8a42         cmp r2,r1
080090B2: 01db         blt 0x080090b8
080090B4: 0020         mov r0,#0x0
080090B6: 00e0         b 0x080090ba
080090B8: d043         mvn r0,r2
080090BA: 02bc         pop {r1}
080090BC: 0847         bx r1
