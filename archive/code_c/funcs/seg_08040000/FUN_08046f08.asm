; undefined FUN_08046f08(void)
; entry 0x8046f08  size 48 bytes

08046F08: 021c         add r2,r0,#0x0
08046F0A: 8c30         add r0,#0x8c
08046F0C: 0021         mov r1,#0x0
08046F0E: 0160         str r1,[r0,#0x0]
08046F10: 0430         add r0,#0x4
08046F12: 0160         str r1,[r0,#0x0]
08046F14: 0430         add r0,#0x4
08046F16: 0170         strb r1,[r0,#0x0]
08046F18: 917a         ldrb r1,[r2,#0xa]
08046F1A: fb20         mov r0,#0xfb
08046F1C: 0840         and r0,r1
08046F1E: fe21         mov r1,#0xfe
08046F20: 0840         and r0,r1
08046F22: 9072         strb r0,[r2,#0xa]
08046F24: 0449         ldr r1,[0x08046f38]
08046F26: 507a         ldrb r0,[r2,#0x9]
08046F28: 8000         lsl r0,r0,#0x2
08046F2A: 4018         add r0,r0,r1
08046F2C: 0421         mov r1,#0x4
08046F2E: d160         str r1,[r2,#0xc]
08046F30: 0068         ldr r0,[r0,#0x0]
08046F32: 0069         ldr r0,[r0,#0x10]
08046F34: 5061         str r0,[r2,#0x14]
08046F36: 7047         bx lr
