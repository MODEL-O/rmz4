; undefined FUN_080c0f38(void)
; entry 0x80c0f38  size 20 bytes

080C0F38: 00b5         push {lr}
080C0F3A: 044a         ldr r2,[0x080c0f4c]
080C0F3C: 417b         ldrb r1,[r0,#0xd]
080C0F3E: 8900         lsl r1,r1,#0x2
080C0F40: 8918         add r1,r1,r2
080C0F42: 0968         ldr r1,[r1,#0x0]
080C0F44: 68f01cf8     bl 0x08128f80
080C0F48: 01bc         pop {r0}
080C0F4A: 0047         bx r0
