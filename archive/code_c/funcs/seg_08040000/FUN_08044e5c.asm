; undefined FUN_08044e5c(void)
; entry 0x8044e5c  size 48 bytes

08044E5C: 021c         add r2,r0,#0x0
08044E5E: 8c30         add r0,#0x8c
08044E60: 0021         mov r1,#0x0
08044E62: 0160         str r1,[r0,#0x0]
08044E64: 0430         add r0,#0x4
08044E66: 0160         str r1,[r0,#0x0]
08044E68: 0430         add r0,#0x4
08044E6A: 0170         strb r1,[r0,#0x0]
08044E6C: 917a         ldrb r1,[r2,#0xa]
08044E6E: fb20         mov r0,#0xfb
08044E70: 0840         and r0,r1
08044E72: fe21         mov r1,#0xfe
08044E74: 0840         and r0,r1
08044E76: 9072         strb r0,[r2,#0xa]
08044E78: 0449         ldr r1,[0x08044e8c]
08044E7A: 507a         ldrb r0,[r2,#0x9]
08044E7C: 8000         lsl r0,r0,#0x2
08044E7E: 4018         add r0,r0,r1
08044E80: 0421         mov r1,#0x4
08044E82: d160         str r1,[r2,#0xc]
08044E84: 0068         ldr r0,[r0,#0x0]
08044E86: 0069         ldr r0,[r0,#0x10]
08044E88: 5061         str r0,[r2,#0x14]
08044E8A: 7047         bx lr
