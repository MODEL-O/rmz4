; undefined FUN_080c7e38(void)
; entry 0x80c7e38  size 70 bytes

080C7E38: 30b5         push {r4,r5,lr}
080C7E3A: 041c         add r4,r0,#0x0
080C7E3C: 0906         lsl r1,r1,#0x18
080C7E3E: 0d0e         lsr r5,r1,#0x18
080C7E40: 0f48         ldr r0,[0x080c7e80]
080C7E42: 0068         ldr r0,[r0,#0x0]
080C7E44: 3df75cfb     bl 0x08005500
080C7E48: 031c         add r3,r0,#0x0
080C7E4A: 002b         cmp r3,#0x0
080C7E4C: 13d0         beq 0x080c7e76
080C7E4E: 191c         add r1,r3,#0x0
080C7E50: 2531         add r1,#0x25
080C7E52: 0022         mov r2,#0x0
080C7E54: 0820         mov r0,#0x8
080C7E56: 0870         strb r0,[r1,#0x0]
080C7E58: 0a49         ldr r1,[0x080c7e84]
080C7E5A: 1d20         mov r0,#0x1d
080C7E5C: 5872         strb r0,[r3,#0x9]
080C7E5E: 486f         ldr r0,[r1,#0x74]
080C7E60: 0068         ldr r0,[r0,#0x0]
080C7E62: 5861         str r0,[r3,#0x14]
080C7E64: 0020         mov r0,#0x0
080C7E66: 1a84         strh r2,[r3,#0x20]
080C7E68: 191c         add r1,r3,#0x0
080C7E6A: 2231         add r1,#0x22
080C7E6C: 0870         strb r0,[r1,#0x0]
080C7E6E: 9c62         str r4,[r3,#0x28]
080C7E70: 0120         mov r0,#0x1
080C7E72: 1874         strb r0,[r3,#0x10]
080C7E74: 5d74         strb r5,[r3,#0x11]
080C7E76: 181c         add r0,r3,#0x0
080C7E78: 30bc         pop {r4,r5}
080C7E7A: 02bc         pop {r1}
080C7E7C: 0847         bx r1
