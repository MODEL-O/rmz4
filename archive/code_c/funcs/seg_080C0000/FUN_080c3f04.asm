; undefined FUN_080c3f04(void)
; entry 0x80c3f04  size 64 bytes

080C3F04: 10b5         push {r4,lr}
080C3F06: 041c         add r4,r0,#0x0
080C3F08: 0e48         ldr r0,[0x080c3f44]
080C3F0A: 0068         ldr r0,[r0,#0x0]
080C3F0C: 41f7f8fa     bl 0x08005500
080C3F10: 031c         add r3,r0,#0x0
080C3F12: 002b         cmp r3,#0x0
080C3F14: 12d0         beq 0x080c3f3c
080C3F16: 191c         add r1,r3,#0x0
080C3F18: 2531         add r1,#0x25
080C3F1A: 0022         mov r2,#0x0
080C3F1C: 0820         mov r0,#0x8
080C3F1E: 0870         strb r0,[r1,#0x0]
080C3F20: 0949         ldr r1,[0x080c3f48]
080C3F22: 1520         mov r0,#0x15
080C3F24: 5872         strb r0,[r3,#0x9]
080C3F26: 486d         ldr r0,[r1,#0x54]
080C3F28: 0068         ldr r0,[r0,#0x0]
080C3F2A: 5861         str r0,[r3,#0x14]
080C3F2C: 0020         mov r0,#0x0
080C3F2E: 1a84         strh r2,[r3,#0x20]
080C3F30: 191c         add r1,r3,#0x0
080C3F32: 2231         add r1,#0x22
080C3F34: 0870         strb r0,[r1,#0x0]
080C3F36: 9c62         str r4,[r3,#0x28]
080C3F38: 0120         mov r0,#0x1
080C3F3A: 1874         strb r0,[r3,#0x10]
080C3F3C: 181c         add r0,r3,#0x0
080C3F3E: 10bc         pop {r4}
080C3F40: 02bc         pop {r1}
080C3F42: 0847         bx r1
