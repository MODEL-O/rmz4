; undefined FUN_08058f70(void)
; entry 0x8058f70  size 20 bytes

08058F70: 00b5         push {lr}
08058F72: 044a         ldr r2,[0x08058f84]
08058F74: 817b         ldrb r1,[r0,#0xe]
08058F76: 8900         lsl r1,r1,#0x2
08058F78: 8918         add r1,r1,r2
08058F7A: 0968         ldr r1,[r1,#0x0]
08058F7C: d0f000f8     bl 0x08128f80
08058F80: 01bc         pop {r0}
08058F82: 0047         bx r0
