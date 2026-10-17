; undefined FUN_080f5778(void)
; entry 0x80f5778  size 44 bytes

080F5778: 00b5         push {lr}
080F577A: 021c         add r2,r0,#0x0
080F577C: 5069         ldr r0,[r2,#0x14]
080F577E: 0421         mov r1,#0x4
080F5780: 0840         and r0,r1
080F5782: 0028         cmp r0,#0x0
080F5784: 0cd0         beq 0x080f57a0
080F5786: d068         ldr r0,[r2,#0xc]
080F5788: c16a         ldr r1,[r0,#0x2c]
080F578A: d26a         ldr r2,[r2,#0x2c]
080F578C: 0820         mov r0,#0x8
080F578E: 0856         ldrsb r0,[r1,r0]
080F5790: 0028         cmp r0,#0x0
080F5792: 05d1         bne 0x080f57a0
080F5794: 487a         ldrb r0,[r1,#0x9]
080F5796: 0028         cmp r0,#0x0
080F5798: 02d1         bne 0x080f57a0
080F579A: 101c         add r0,r2,#0x0
080F579C: bc30         add r0,#0xbc
080F579E: 0160         str r1,[r0,#0x0]
080F57A0: 01bc         pop {r0}
080F57A2: 0047         bx r0
