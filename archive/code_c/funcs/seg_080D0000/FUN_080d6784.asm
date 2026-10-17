; undefined FUN_080d6784(void)
; entry 0x80d6784  size 64 bytes

080D6784: 30b5         push {r4,r5,lr}
080D6786: 051c         add r5,r0,#0x0
080D6788: 0906         lsl r1,r1,#0x18
080D678A: 0c0e         lsr r4,r1,#0x18
080D678C: 0d48         ldr r0,[0x080d67c4]
080D678E: 0068         ldr r0,[r0,#0x0]
080D6790: 2ef7b6fe     bl 0x08005500
080D6794: 031c         add r3,r0,#0x0
080D6796: 002b         cmp r3,#0x0
080D6798: 11d0         beq 0x080d67be
080D679A: 191c         add r1,r3,#0x0
080D679C: 2531         add r1,#0x25
080D679E: 0022         mov r2,#0x0
080D67A0: 0120         mov r0,#0x1
080D67A2: 0870         strb r0,[r1,#0x0]
080D67A4: 0849         ldr r1,[0x080d67c8]
080D67A6: 1520         mov r0,#0x15
080D67A8: 5872         strb r0,[r3,#0x9]
080D67AA: 486d         ldr r0,[r1,#0x54]
080D67AC: 0068         ldr r0,[r0,#0x0]
080D67AE: 5861         str r0,[r3,#0x14]
080D67B0: 0020         mov r0,#0x0
080D67B2: 1a84         strh r2,[r3,#0x20]
080D67B4: 191c         add r1,r3,#0x0
080D67B6: 2231         add r1,#0x22
080D67B8: 0870         strb r0,[r1,#0x0]
080D67BA: 9d62         str r5,[r3,#0x28]
080D67BC: dc74         strb r4,[r3,#0x13]
080D67BE: 30bc         pop {r4,r5}
080D67C0: 01bc         pop {r0}
080D67C2: 0047         bx r0
