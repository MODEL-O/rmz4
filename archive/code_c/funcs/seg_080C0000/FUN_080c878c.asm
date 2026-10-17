; undefined FUN_080c878c(void)
; entry 0x80c878c  size 20 bytes

080C878C: 00b5         push {lr}
080C878E: 044a         ldr r2,[0x080c87a0]
080C8790: 017c         ldrb r1,[r0,#0x10]
080C8792: 8900         lsl r1,r1,#0x2
080C8794: 8918         add r1,r1,r2
080C8796: 0968         ldr r1,[r1,#0x0]
080C8798: 60f0f2fb     bl 0x08128f80
080C879C: 01bc         pop {r0}
080C879E: 0047         bx r0
