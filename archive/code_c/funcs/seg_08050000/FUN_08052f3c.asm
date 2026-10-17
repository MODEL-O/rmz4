; undefined FUN_08052f3c(void)
; entry 0x8052f3c  size 54 bytes

08052F3C: 10b5         push {r4,lr}
08052F3E: 041c         add r4,r0,#0x0
08052F40: a07b         ldrb r0,[r4,#0xe]
08052F42: 0028         cmp r0,#0x0
08052F44: 06d1         bne 0x08052f54
08052F46: 0b49         ldr r1,[0x08052f74]
08052F48: 201c         add r0,r4,#0x0
08052F4A: c9f7d9ff     bl 0x0801cf00
08052F4E: a07b         ldrb r0,[r4,#0xe]
08052F50: 0130         add r0,#0x1
08052F52: a073         strb r0,[r4,#0xe]
08052F54: 201c         add r0,r4,#0x0
08052F56: caf74bf8     bl 0x0801cff0
08052F5A: 201c         add r0,r4,#0x0
08052F5C: 7330         add r0,#0x73
08052F5E: 0078         ldrb r0,[r0,#0x0]
08052F60: 0328         cmp r0,#0x3
08052F62: 03d1         bne 0x08052f6c
08052F64: 0021         mov r1,#0x0
08052F66: 0420         mov r0,#0x4
08052F68: 6073         strb r0,[r4,#0xd]
08052F6A: a173         strb r1,[r4,#0xe]
08052F6C: 10bc         pop {r4}
08052F6E: 01bc         pop {r0}
08052F70: 0047         bx r0
