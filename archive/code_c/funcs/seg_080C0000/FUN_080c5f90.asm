; undefined FUN_080c5f90(void)
; entry 0x80c5f90  size 20 bytes

080C5F90: 00b5         push {lr}
080C5F92: 826a         ldr r2,[r0,#0x28]
080C5F94: b432         add r2,#0xb4
080C5F96: 1188         ldrh r1,[r2,#0x0]
080C5F98: 0139         sub r1,#0x1
080C5F9A: 1180         strh r1,[r2,#0x0]
080C5F9C: f7f72cfa     bl 0x080bd3f8
080C5FA0: 01bc         pop {r0}
080C5FA2: 0047         bx r0
