; undefined FUN_080090c0(void)
; entry 0x80090c0  size 26 bytes

080090C0: 00b5         push {lr}
080090C2: 0a1c         add r2,r1,#0x0
080090C4: 8010         asr r0,r0,#0x2
080090C6: 8021         mov r1,#0x80
080090C8: 4901         lsl r1,r1,#0x5
080090CA: 091a         sub r1,r1,r0
080090CC: 8a42         cmp r2,r1
080090CE: 01db         blt 0x080090d4
080090D0: 0020         mov r0,#0x0
080090D2: 00e0         b 0x080090d6
080090D4: d043         mvn r0,r2
080090D6: 02bc         pop {r1}
080090D8: 0847         bx r1
