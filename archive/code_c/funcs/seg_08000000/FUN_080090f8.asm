; undefined FUN_080090f8(void)
; entry 0x80090f8  size 26 bytes

080090F8: 00b5         push {lr}
080090FA: 0a1c         add r2,r1,#0x0
080090FC: 8010         asr r0,r0,#0x2
080090FE: 8021         mov r1,#0x80
08009100: 0901         lsl r1,r1,#0x4
08009102: 091a         sub r1,r1,r0
08009104: 8a42         cmp r2,r1
08009106: 01db         blt 0x0800910c
08009108: 0020         mov r0,#0x0
0800910A: 00e0         b 0x0800910e
0800910C: d043         mvn r0,r2
0800910E: 02bc         pop {r1}
08009110: 0847         bx r1
