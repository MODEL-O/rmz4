; undefined FUN_080622d4(void)
; entry 0x80622d4  size 20 bytes

080622D4: 00b5         push {lr}
080622D6: 044a         ldr r2,[0x080622e8]
080622D8: 817b         ldrb r1,[r0,#0xe]
080622DA: 8900         lsl r1,r1,#0x2
080622DC: 8918         add r1,r1,r2
080622DE: 0968         ldr r1,[r1,#0x0]
080622E0: c6f04efe     bl 0x08128f80
080622E4: 01bc         pop {r0}
080622E6: 0047         bx r0
