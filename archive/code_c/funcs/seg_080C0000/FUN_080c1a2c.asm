; undefined FUN_080c1a2c(void)
; entry 0x80c1a2c  size 66 bytes

080C1A2C: 30b5         push {r4,r5,lr}
080C1A2E: 051c         add r5,r0,#0x0
080C1A30: 0906         lsl r1,r1,#0x18
080C1A32: 0c0e         lsr r4,r1,#0x18
080C1A34: 0e48         ldr r0,[0x080c1a70]
080C1A36: 0068         ldr r0,[r0,#0x0]
080C1A38: 43f762fd     bl 0x08005500
080C1A3C: 031c         add r3,r0,#0x0
080C1A3E: 002b         cmp r3,#0x0
080C1A40: 12d0         beq 0x080c1a68
080C1A42: 191c         add r1,r3,#0x0
080C1A44: 2531         add r1,#0x25
080C1A46: 0022         mov r2,#0x0
080C1A48: 0820         mov r0,#0x8
080C1A4A: 0870         strb r0,[r1,#0x0]
080C1A4C: 0949         ldr r1,[0x080c1a74]
080C1A4E: 0e20         mov r0,#0xe
080C1A50: 5872         strb r0,[r3,#0x9]
080C1A52: 886b         ldr r0,[r1,#0x38]
080C1A54: 0068         ldr r0,[r0,#0x0]
080C1A56: 5861         str r0,[r3,#0x14]
080C1A58: 0020         mov r0,#0x0
080C1A5A: 1a84         strh r2,[r3,#0x20]
080C1A5C: 191c         add r1,r3,#0x0
080C1A5E: 2231         add r1,#0x22
080C1A60: 0870         strb r0,[r1,#0x0]
080C1A62: 9d62         str r5,[r3,#0x28]
080C1A64: 1874         strb r0,[r3,#0x10]
080C1A66: 5c74         strb r4,[r3,#0x11]
080C1A68: 30bc         pop {r4,r5}
080C1A6A: 01bc         pop {r0}
080C1A6C: 0047         bx r0
