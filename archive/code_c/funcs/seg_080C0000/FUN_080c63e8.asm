; undefined FUN_080c63e8(void)
; entry 0x80c63e8  size 68 bytes

080C63E8: 30b5         push {r4,r5,lr}
080C63EA: 041c         add r4,r0,#0x0
080C63EC: 0906         lsl r1,r1,#0x18
080C63EE: 0d0e         lsr r5,r1,#0x18
080C63F0: 0e48         ldr r0,[0x080c642c]
080C63F2: 0068         ldr r0,[r0,#0x0]
080C63F4: 3ff784f8     bl 0x08005500
080C63F8: 031c         add r3,r0,#0x0
080C63FA: 002b         cmp r3,#0x0
080C63FC: 13d0         beq 0x080c6426
080C63FE: 191c         add r1,r3,#0x0
080C6400: 2531         add r1,#0x25
080C6402: 0022         mov r2,#0x0
080C6404: 0820         mov r0,#0x8
080C6406: 0870         strb r0,[r1,#0x0]
080C6408: 0949         ldr r1,[0x080c6430]
080C640A: 1a20         mov r0,#0x1a
080C640C: 5872         strb r0,[r3,#0x9]
080C640E: 886e         ldr r0,[r1,#0x68]
080C6410: 0068         ldr r0,[r0,#0x0]
080C6412: 5861         str r0,[r3,#0x14]
080C6414: 0020         mov r0,#0x0
080C6416: 1a84         strh r2,[r3,#0x20]
080C6418: 191c         add r1,r3,#0x0
080C641A: 2231         add r1,#0x22
080C641C: 0870         strb r0,[r1,#0x0]
080C641E: 9c62         str r4,[r3,#0x28]
080C6420: 0420         mov r0,#0x4
080C6422: 1874         strb r0,[r3,#0x10]
080C6424: 5d74         strb r5,[r3,#0x11]
080C6426: 30bc         pop {r4,r5}
080C6428: 01bc         pop {r0}
080C642A: 0047         bx r0
