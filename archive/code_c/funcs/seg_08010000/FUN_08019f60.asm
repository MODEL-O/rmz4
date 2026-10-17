; undefined FUN_08019f60(void)
; entry 0x8019f60  size 28 bytes

08019F60: 00b5         push {lr}
08019F62: 011c         add r1,r0,#0x0
08019F64: 8a7b         ldrb r2,[r1,#0xe]
08019F66: 002a         cmp r2,#0x0
08019F68: 06d1         bne 0x08019f78
08019F6A: b420         mov r0,#0xb4
08019F6C: 4000         lsl r0,r0,#0x1
08019F6E: c864         str r0,[r1,#0x4c]
08019F70: c020         mov r0,#0xc0
08019F72: 4864         str r0,[r1,#0x44]
08019F74: 501c         add r0,r2,#0x1
08019F76: 8873         strb r0,[r1,#0xe]
08019F78: 01bc         pop {r0}
08019F7A: 0047         bx r0
