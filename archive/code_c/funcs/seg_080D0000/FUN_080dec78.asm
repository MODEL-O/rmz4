; undefined FUN_080dec78(void)
; entry 0x80dec78  size 70 bytes

080DEC78: 30b5         push {r4,r5,lr}
080DEC7A: 041c         add r4,r0,#0x0
080DEC7C: 0d1c         add r5,r1,#0x0
080DEC7E: 1048         ldr r0,[0x080decc0]
080DEC80: 0068         ldr r0,[r0,#0x0]
080DEC82: 26f73dfc     bl 0x08005500
080DEC86: 031c         add r3,r0,#0x0
080DEC88: 002b         cmp r3,#0x0
080DEC8A: 15d0         beq 0x080decb8
080DEC8C: 191c         add r1,r3,#0x0
080DEC8E: 2531         add r1,#0x25
080DEC90: 0022         mov r2,#0x0
080DEC92: 0120         mov r0,#0x1
080DEC94: 0870         strb r0,[r1,#0x0]
080DEC96: 0b48         ldr r0,[0x080decc4]
080DEC98: 3321         mov r1,#0x33
080DEC9A: 5972         strb r1,[r3,#0x9]
080DEC9C: cc30         add r0,#0xcc
080DEC9E: 0068         ldr r0,[r0,#0x0]
080DECA0: 0068         ldr r0,[r0,#0x0]
080DECA2: 5861         str r0,[r3,#0x14]
080DECA4: 0021         mov r1,#0x0
080DECA6: 1a84         strh r2,[r3,#0x20]
080DECA8: 181c         add r0,r3,#0x0
080DECAA: 2230         add r0,#0x22
080DECAC: 0170         strb r1,[r0,#0x0]
080DECAE: 9c62         str r4,[r3,#0x28]
080DECB0: dd62         str r5,[r3,#0x2c]
080DECB2: 0220         mov r0,#0x2
080DECB4: 1874         strb r0,[r3,#0x10]
080DECB6: 5974         strb r1,[r3,#0x11]
080DECB8: 30bc         pop {r4,r5}
080DECBA: 01bc         pop {r0}
080DECBC: 0047         bx r0
