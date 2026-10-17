; undefined FUN_080ecf58(void)
; entry 0x80ecf58  size 62 bytes

080ECF58: 021c         add r2,r0,#0x0
080ECF5A: 917a         ldrb r1,[r2,#0xa]
080ECF5C: fe20         mov r0,#0xfe
080ECF5E: 0840         and r0,r1
080ECF60: 0021         mov r1,#0x0
080ECF62: 9072         strb r0,[r2,#0xa]
080ECF64: 101c         add r0,r2,#0x0
080ECF66: 8c30         add r0,#0x8c
080ECF68: 0160         str r1,[r0,#0x0]
080ECF6A: 0430         add r0,#0x4
080ECF6C: 0160         str r1,[r0,#0x0]
080ECF6E: 0430         add r0,#0x4
080ECF70: 0170         strb r1,[r0,#0x0]
080ECF72: 917a         ldrb r1,[r2,#0xa]
080ECF74: fb20         mov r0,#0xfb
080ECF76: 0840         and r0,r1
080ECF78: 9072         strb r0,[r2,#0xa]
080ECF7A: d17a         ldrb r1,[r2,#0xb]
080ECF7C: f720         mov r0,#0xf7
080ECF7E: 0840         and r0,r1
080ECF80: d072         strb r0,[r2,#0xb]
080ECF82: 0549         ldr r1,[0x080ecf98]
080ECF84: 507a         ldrb r0,[r2,#0x9]
080ECF86: 8000         lsl r0,r0,#0x2
080ECF88: 4018         add r0,r0,r1
080ECF8A: 0421         mov r1,#0x4
080ECF8C: d160         str r1,[r2,#0xc]
080ECF8E: 0068         ldr r0,[r0,#0x0]
080ECF90: 0069         ldr r0,[r0,#0x10]
080ECF92: 5061         str r0,[r2,#0x14]
080ECF94: 7047         bx lr
