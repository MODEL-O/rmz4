; undefined FUN_080a5a70(void)
; entry 0x80a5a70  size 20 bytes

080A5A70: 00b5         push {lr}
080A5A72: 044a         ldr r2,[0x080a5a84]
080A5A74: 017c         ldrb r1,[r0,#0x10]
080A5A76: 8900         lsl r1,r1,#0x2
080A5A78: 8918         add r1,r1,r2
080A5A7A: 0968         ldr r1,[r1,#0x0]
080A5A7C: 83f080fa     bl 0x08128f80
080A5A80: 01bc         pop {r0}
080A5A82: 0047         bx r0
