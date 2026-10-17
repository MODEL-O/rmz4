; undefined FUN_080c53d8(void)
; entry 0x80c53d8  size 20 bytes

080C53D8: 00b5         push {lr}
080C53DA: 826a         ldr r2,[r0,#0x28]
080C53DC: b432         add r2,#0xb4
080C53DE: 1178         ldrb r1,[r2,#0x0]
080C53E0: 0139         sub r1,#0x1
080C53E2: 1170         strb r1,[r2,#0x0]
080C53E4: f8f708f8     bl 0x080bd3f8
080C53E8: 01bc         pop {r0}
080C53EA: 0047         bx r0
