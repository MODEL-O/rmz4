; undefined FUN_080f3f34(void)
; entry 0x80f3f34  size 48 bytes

080F3F34: 10b5         push {r4,lr}
080F3F36: 041c         add r4,r0,#0x0
080F3F38: 28f7b0fe     bl 0x0801cc9c
080F3F3C: 0949         ldr r1,[0x080f3f64]
080F3F3E: 201c         add r0,r4,#0x0
080F3F40: 28f7deff     bl 0x0801cf00
080F3F44: a17a         ldrb r1,[r4,#0xa]
080F3F46: 0120         mov r0,#0x1
080F3F48: 0022         mov r2,#0x0
080F3F4A: 0843         orr r0,r1
080F3F4C: a072         strb r0,[r4,#0xa]
080F3F4E: 201c         add r0,r4,#0x0
080F3F50: b530         add r0,#0xb5
080F3F52: 0270         strb r2,[r0,#0x0]
080F3F54: 0130         add r0,#0x1
080F3F56: 0270         strb r2,[r0,#0x0]
080F3F58: 2534         add r4,#0x25
080F3F5A: 0e20         mov r0,#0xe
080F3F5C: 2070         strb r0,[r4,#0x0]
080F3F5E: 10bc         pop {r4}
080F3F60: 01bc         pop {r0}
080F3F62: 0047         bx r0
