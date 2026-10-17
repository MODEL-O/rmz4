; undefined FUN_080ccf4c(void)
; entry 0x80ccf4c  size 72 bytes

080CCF4C: 30b5         push {r4,r5,lr}
080CCF4E: 051c         add r5,r0,#0x0
080CCF50: 0906         lsl r1,r1,#0x18
080CCF52: 0c0e         lsr r4,r1,#0x18
080CCF54: 0f48         ldr r0,[0x080ccf94]
080CCF56: 0068         ldr r0,[r0,#0x0]
080CCF58: 38f7d2fa     bl 0x08005500
080CCF5C: 031c         add r3,r0,#0x0
080CCF5E: 002b         cmp r3,#0x0
080CCF60: 15d0         beq 0x080ccf8e
080CCF62: 191c         add r1,r3,#0x0
080CCF64: 2531         add r1,#0x25
080CCF66: 0022         mov r2,#0x0
080CCF68: 0820         mov r0,#0x8
080CCF6A: 0870         strb r0,[r1,#0x0]
080CCF6C: 0a48         ldr r0,[0x080ccf98]
080CCF6E: 2d21         mov r1,#0x2d
080CCF70: 5972         strb r1,[r3,#0x9]
080CCF72: b430         add r0,#0xb4
080CCF74: 0068         ldr r0,[r0,#0x0]
080CCF76: 0068         ldr r0,[r0,#0x0]
080CCF78: 5861         str r0,[r3,#0x14]
080CCF7A: 0020         mov r0,#0x0
080CCF7C: 1a84         strh r2,[r3,#0x20]
080CCF7E: 191c         add r1,r3,#0x0
080CCF80: 2231         add r1,#0x22
080CCF82: 0870         strb r0,[r1,#0x0]
080CCF84: 2868         ldr r0,[r5,#0x0]
080CCF86: 6968         ldr r1,[r5,#0x4]
080CCF88: 5865         str r0,[r3,#0x54]
080CCF8A: 9965         str r1,[r3,#0x58]
080CCF8C: 1c74         strb r4,[r3,#0x10]
080CCF8E: 30bc         pop {r4,r5}
080CCF90: 01bc         pop {r0}
080CCF92: 0047         bx r0
