; undefined FUN_0810b0e0(void)
; entry 0x810b0e0  size 70 bytes

0810B0E0: 70b5         push {r4,r5,r6,lr}
0810B0E2: 061c         add r6,r0,#0x0
0810B0E4: 0906         lsl r1,r1,#0x18
0810B0E6: 0d0e         lsr r5,r1,#0x18
0810B0E8: 1206         lsl r2,r2,#0x18
0810B0EA: 140e         lsr r4,r2,#0x18
0810B0EC: 0e48         ldr r0,[0x0810b128]
0810B0EE: 0068         ldr r0,[r0,#0x0]
0810B0F0: faf606fa     bl 0x08005500
0810B0F4: 031c         add r3,r0,#0x0
0810B0F6: 002b         cmp r3,#0x0
0810B0F8: 12d0         beq 0x0810b120
0810B0FA: 191c         add r1,r3,#0x0
0810B0FC: 2531         add r1,#0x25
0810B0FE: 0022         mov r2,#0x0
0810B100: 1020         mov r0,#0x10
0810B102: 0870         strb r0,[r1,#0x0]
0810B104: 0949         ldr r1,[0x0810b12c]
0810B106: 0520         mov r0,#0x5
0810B108: 5872         strb r0,[r3,#0x9]
0810B10A: 4869         ldr r0,[r1,#0x14]
0810B10C: 0068         ldr r0,[r0,#0x0]
0810B10E: 5861         str r0,[r3,#0x14]
0810B110: 0020         mov r0,#0x0
0810B112: 1a84         strh r2,[r3,#0x20]
0810B114: 191c         add r1,r3,#0x0
0810B116: 2231         add r1,#0x22
0810B118: 0870         strb r0,[r1,#0x0]
0810B11A: 9e62         str r6,[r3,#0x28]
0810B11C: 1d74         strb r5,[r3,#0x10]
0810B11E: 5c74         strb r4,[r3,#0x11]
0810B120: 70bc         pop {r4,r5,r6}
0810B122: 01bc         pop {r0}
0810B124: 0047         bx r0
