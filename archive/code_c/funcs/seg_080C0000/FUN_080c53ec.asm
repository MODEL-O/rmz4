; undefined FUN_080c53ec(void)
; entry 0x80c53ec  size 20 bytes

080C53EC: 00b5         push {lr}
080C53EE: 826a         ldr r2,[r0,#0x28]
080C53F0: b832         add r2,#0xb8
080C53F2: 1178         ldrb r1,[r2,#0x0]
080C53F4: 0139         sub r1,#0x1
080C53F6: 1170         strb r1,[r2,#0x0]
080C53F8: f7f7feff     bl 0x080bd3f8
080C53FC: 01bc         pop {r0}
080C53FE: 0047         bx r0
