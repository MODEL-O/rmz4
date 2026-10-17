; undefined FUN_080f9a70(void)
; entry 0x80f9a70  size 20 bytes

080F9A70: 00b5         push {lr}
080F9A72: 044a         ldr r2,[0x080f9a84]
080F9A74: 417b         ldrb r1,[r0,#0xd]
080F9A76: 8900         lsl r1,r1,#0x2
080F9A78: 8918         add r1,r1,r2
080F9A7A: 0968         ldr r1,[r1,#0x0]
080F9A7C: 2ff080fa     bl 0x08128f80
080F9A80: 01bc         pop {r0}
080F9A82: 0047         bx r0
