; undefined FUN_080c4bd4(void)
; entry 0x80c4bd4  size 68 bytes

080C4BD4: 30b5         push {r4,r5,lr}
080C4BD6: 051c         add r5,r0,#0x0
080C4BD8: 0906         lsl r1,r1,#0x18
080C4BDA: 0c0e         lsr r4,r1,#0x18
080C4BDC: 0e48         ldr r0,[0x080c4c18]
080C4BDE: 0068         ldr r0,[r0,#0x0]
080C4BE0: 40f78efc     bl 0x08005500
080C4BE4: 031c         add r3,r0,#0x0
080C4BE6: 002b         cmp r3,#0x0
080C4BE8: 12d0         beq 0x080c4c10
080C4BEA: 191c         add r1,r3,#0x0
080C4BEC: 2531         add r1,#0x25
080C4BEE: 0022         mov r2,#0x0
080C4BF0: 0820         mov r0,#0x8
080C4BF2: 0870         strb r0,[r1,#0x0]
080C4BF4: 0949         ldr r1,[0x080c4c1c]
080C4BF6: 1720         mov r0,#0x17
080C4BF8: 5872         strb r0,[r3,#0x9]
080C4BFA: c86d         ldr r0,[r1,#0x5c]
080C4BFC: 0068         ldr r0,[r0,#0x0]
080C4BFE: 5861         str r0,[r3,#0x14]
080C4C00: 0020         mov r0,#0x0
080C4C02: 1a84         strh r2,[r3,#0x20]
080C4C04: 191c         add r1,r3,#0x0
080C4C06: 2231         add r1,#0x22
080C4C08: 0870         strb r0,[r1,#0x0]
080C4C0A: 9d62         str r5,[r3,#0x28]
080C4C0C: 1874         strb r0,[r3,#0x10]
080C4C0E: 5c74         strb r4,[r3,#0x11]
080C4C10: 181c         add r0,r3,#0x0
080C4C12: 30bc         pop {r4,r5}
080C4C14: 02bc         pop {r1}
080C4C16: 0847         bx r1
