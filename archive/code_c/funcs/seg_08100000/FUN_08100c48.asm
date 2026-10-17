; undefined FUN_08100c48(void)
; entry 0x8100c48  size 48 bytes

08100C48: 021c         add r2,r0,#0x0
08100C4A: 8c30         add r0,#0x8c
08100C4C: 0021         mov r1,#0x0
08100C4E: 0160         str r1,[r0,#0x0]
08100C50: 0430         add r0,#0x4
08100C52: 0160         str r1,[r0,#0x0]
08100C54: 0430         add r0,#0x4
08100C56: 0170         strb r1,[r0,#0x0]
08100C58: 917a         ldrb r1,[r2,#0xa]
08100C5A: fb20         mov r0,#0xfb
08100C5C: 0840         and r0,r1
08100C5E: fe21         mov r1,#0xfe
08100C60: 0840         and r0,r1
08100C62: 9072         strb r0,[r2,#0xa]
08100C64: 0449         ldr r1,[0x08100c78]
08100C66: 507a         ldrb r0,[r2,#0x9]
08100C68: 8000         lsl r0,r0,#0x2
08100C6A: 4018         add r0,r0,r1
08100C6C: 0421         mov r1,#0x4
08100C6E: d160         str r1,[r2,#0xc]
08100C70: 0068         ldr r0,[r0,#0x0]
08100C72: 0069         ldr r0,[r0,#0x10]
08100C74: 5061         str r0,[r2,#0x14]
08100C76: 7047         bx lr
