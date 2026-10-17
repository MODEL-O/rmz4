; undefined FUN_080edb6c(void)
; entry 0x80edb6c  size 28 bytes

080EDB6C: 00b5         push {lr}
080EDB6E: 064a         ldr r2,[0x080edb88]
080EDB70: 417a         ldrb r1,[r0,#0x9]
080EDB72: 8900         lsl r1,r1,#0x2
080EDB74: 8918         add r1,r1,r2
080EDB76: 0222         mov r2,#0x2
080EDB78: c260         str r2,[r0,#0xc]
080EDB7A: 0968         ldr r1,[r1,#0x0]
080EDB7C: 8968         ldr r1,[r1,#0x8]
080EDB7E: 4161         str r1,[r0,#0x14]
080EDB80: fff72efe     bl 0x080ed7e0
080EDB84: 01bc         pop {r0}
080EDB86: 0047         bx r0
