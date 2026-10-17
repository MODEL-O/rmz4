; undefined FUN_080c6434(void)
; entry 0x80c6434  size 68 bytes

080C6434: 30b5         push {r4,r5,lr}
080C6436: 041c         add r4,r0,#0x0
080C6438: 0906         lsl r1,r1,#0x18
080C643A: 0d0e         lsr r5,r1,#0x18
080C643C: 0e48         ldr r0,[0x080c6478]
080C643E: 0068         ldr r0,[r0,#0x0]
080C6440: 3ff75ef8     bl 0x08005500
080C6444: 031c         add r3,r0,#0x0
080C6446: 002b         cmp r3,#0x0
080C6448: 13d0         beq 0x080c6472
080C644A: 191c         add r1,r3,#0x0
080C644C: 2531         add r1,#0x25
080C644E: 0022         mov r2,#0x0
080C6450: 0820         mov r0,#0x8
080C6452: 0870         strb r0,[r1,#0x0]
080C6454: 0949         ldr r1,[0x080c647c]
080C6456: 1a20         mov r0,#0x1a
080C6458: 5872         strb r0,[r3,#0x9]
080C645A: 886e         ldr r0,[r1,#0x68]
080C645C: 0068         ldr r0,[r0,#0x0]
080C645E: 5861         str r0,[r3,#0x14]
080C6460: 0020         mov r0,#0x0
080C6462: 1a84         strh r2,[r3,#0x20]
080C6464: 191c         add r1,r3,#0x0
080C6466: 2231         add r1,#0x22
080C6468: 0870         strb r0,[r1,#0x0]
080C646A: 9c62         str r4,[r3,#0x28]
080C646C: 0520         mov r0,#0x5
080C646E: 1874         strb r0,[r3,#0x10]
080C6470: 5d74         strb r5,[r3,#0x11]
080C6472: 30bc         pop {r4,r5}
080C6474: 01bc         pop {r0}
080C6476: 0047         bx r0
