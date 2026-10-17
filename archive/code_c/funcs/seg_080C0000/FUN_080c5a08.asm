; undefined FUN_080c5a08(void)
; entry 0x80c5a08  size 20 bytes

080C5A08: 00b5         push {lr}
080C5A0A: 044a         ldr r2,[0x080c5a1c]
080C5A0C: 417b         ldrb r1,[r0,#0xd]
080C5A0E: 8900         lsl r1,r1,#0x2
080C5A10: 8918         add r1,r1,r2
080C5A12: 0968         ldr r1,[r1,#0x0]
080C5A14: 63f0b4fa     bl 0x08128f80
080C5A18: 01bc         pop {r0}
080C5A1A: 0047         bx r0
