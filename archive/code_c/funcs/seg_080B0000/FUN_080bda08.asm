; undefined FUN_080bda08(void)
; entry 0x80bda08  size 20 bytes

080BDA08: 00b5         push {lr}
080BDA0A: 044a         ldr r2,[0x080bda1c]
080BDA0C: 017c         ldrb r1,[r0,#0x10]
080BDA0E: 8900         lsl r1,r1,#0x2
080BDA10: 8918         add r1,r1,r2
080BDA12: 0968         ldr r1,[r1,#0x0]
080BDA14: 6bf0b4fa     bl 0x08128f80
080BDA18: 01bc         pop {r0}
080BDA1A: 0047         bx r0
