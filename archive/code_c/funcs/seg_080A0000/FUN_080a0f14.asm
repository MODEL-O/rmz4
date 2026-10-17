; undefined FUN_080a0f14(void)
; entry 0x80a0f14  size 20 bytes

080A0F14: 00b5         push {lr}
080A0F16: 044a         ldr r2,[0x080a0f28]
080A0F18: 417b         ldrb r1,[r0,#0xd]
080A0F1A: 8900         lsl r1,r1,#0x2
080A0F1C: 8918         add r1,r1,r2
080A0F1E: 0968         ldr r1,[r1,#0x0]
080A0F20: 88f02ef8     bl 0x08128f80
080A0F24: 01bc         pop {r0}
080A0F26: 0047         bx r0
