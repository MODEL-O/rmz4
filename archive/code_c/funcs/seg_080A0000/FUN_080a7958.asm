; undefined FUN_080a7958(void)
; entry 0x80a7958  size 34 bytes

080A7958: 00b5         push {lr}
080A795A: c168         ldr r1,[r0,#0xc]
080A795C: ca6a         ldr r2,[r1,#0x2c]
080A795E: c06a         ldr r0,[r0,#0x2c]
080A7960: 816a         ldr r1,[r0,#0x28]
080A7962: 0820         mov r0,#0x8
080A7964: 1056         ldrsb r0,[r2,r0]
080A7966: 0628         cmp r0,#0x6
080A7968: 05d1         bne 0x080a7976
080A796A: 507a         ldrb r0,[r2,#0x9]
080A796C: 2228         cmp r0,#0x22
080A796E: 02d1         bne 0x080a7976
080A7970: bf31         add r1,#0xbf
080A7972: 0120         mov r0,#0x1
080A7974: 0870         strb r0,[r1,#0x0]
080A7976: 01bc         pop {r0}
080A7978: 0047         bx r0
