; undefined FUN_0806f0e0(void)
; entry 0x806f0e0  size 64 bytes

0806F0E0: 00b5         push {lr}
0806F0E2: c26a         ldr r2,[r0,#0x2c]
0806F0E4: c168         ldr r1,[r0,#0xc]
0806F0E6: c96a         ldr r1,[r1,#0x2c]
0806F0E8: 4069         ldr r0,[r0,#0x14]
0806F0EA: 0123         mov r3,#0x1
0806F0EC: 1840         and r0,r3
0806F0EE: 0028         cmp r0,#0x0
0806F0F0: 14d0         beq 0x0806f11c
0806F0F2: 486d         ldr r0,[r1,#0x54]
0806F0F4: 516d         ldr r1,[r2,#0x54]
0806F0F6: 8842         cmp r0,r1
0806F0F8: 04da         bge 0x0806f104
0806F0FA: 111c         add r1,r2,#0x0
0806F0FC: c231         add r1,#0xc2
0806F0FE: 0020         mov r0,#0x0
0806F100: 0870         strb r0,[r1,#0x0]
0806F102: 0be0         b 0x0806f11c
0806F104: 8142         cmp r1,r0
0806F106: 06db         blt 0x0806f116
0806F108: 0023         mov r3,#0x0
0806F10A: 0548         ldr r0,[0x0806f120]
0806F10C: 0068         ldr r0,[r0,#0x0]
0806F10E: 406d         ldr r0,[r0,#0x54]
0806F110: 8142         cmp r1,r0
0806F112: 00da         bge 0x0806f116
0806F114: 0123         mov r3,#0x1
0806F116: 101c         add r0,r2,#0x0
0806F118: c230         add r0,#0xc2
0806F11A: 0370         strb r3,[r0,#0x0]
0806F11C: 01bc         pop {r0}
0806F11E: 0047         bx r0
