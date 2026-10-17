; undefined FUN_08009014(void)
; entry 0x8009014  size 24 bytes

08009014: 00b5         push {lr}
08009016: 4010         asr r0,r0,#0x1
08009018: 8022         mov r2,#0x80
0800901A: 1201         lsl r2,r2,#0x4
0800901C: 8018         add r0,r0,r2
0800901E: 8142         cmp r1,r0
08009020: 01db         blt 0x08009026
08009022: 0020         mov r0,#0x0
08009024: 00e0         b 0x08009028
08009026: c843         mvn r0,r1
08009028: 02bc         pop {r1}
0800902A: 0847         bx r1
