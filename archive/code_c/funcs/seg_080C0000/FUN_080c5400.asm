; undefined FUN_080c5400(void)
; entry 0x80c5400  size 68 bytes

080C5400: 30b5         push {r4,r5,lr}
080C5402: 051c         add r5,r0,#0x0
080C5404: 0906         lsl r1,r1,#0x18
080C5406: 0c0e         lsr r4,r1,#0x18
080C5408: 0e48         ldr r0,[0x080c5444]
080C540A: 0068         ldr r0,[r0,#0x0]
080C540C: 40f778f8     bl 0x08005500
080C5410: 031c         add r3,r0,#0x0
080C5412: 002b         cmp r3,#0x0
080C5414: 12d0         beq 0x080c543c
080C5416: 191c         add r1,r3,#0x0
080C5418: 2531         add r1,#0x25
080C541A: 0022         mov r2,#0x0
080C541C: 0820         mov r0,#0x8
080C541E: 0870         strb r0,[r1,#0x0]
080C5420: 0949         ldr r1,[0x080c5448]
080C5422: 1820         mov r0,#0x18
080C5424: 5872         strb r0,[r3,#0x9]
080C5426: 086e         ldr r0,[r1,#0x60]
080C5428: 0068         ldr r0,[r0,#0x0]
080C542A: 5861         str r0,[r3,#0x14]
080C542C: 0020         mov r0,#0x0
080C542E: 1a84         strh r2,[r3,#0x20]
080C5430: 191c         add r1,r3,#0x0
080C5432: 2231         add r1,#0x22
080C5434: 0870         strb r0,[r1,#0x0]
080C5436: 9d62         str r5,[r3,#0x28]
080C5438: 1874         strb r0,[r3,#0x10]
080C543A: 5c74         strb r4,[r3,#0x11]
080C543C: 181c         add r0,r3,#0x0
080C543E: 30bc         pop {r4,r5}
080C5440: 02bc         pop {r1}
080C5442: 0847         bx r1
