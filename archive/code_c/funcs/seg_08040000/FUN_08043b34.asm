; undefined FUN_08043b34(void)
; entry 0x8043b34  size 48 bytes

08043B34: 021c         add r2,r0,#0x0
08043B36: 8c30         add r0,#0x8c
08043B38: 0021         mov r1,#0x0
08043B3A: 0160         str r1,[r0,#0x0]
08043B3C: 0430         add r0,#0x4
08043B3E: 0160         str r1,[r0,#0x0]
08043B40: 0430         add r0,#0x4
08043B42: 0170         strb r1,[r0,#0x0]
08043B44: 917a         ldrb r1,[r2,#0xa]
08043B46: fb20         mov r0,#0xfb
08043B48: 0840         and r0,r1
08043B4A: fe21         mov r1,#0xfe
08043B4C: 0840         and r0,r1
08043B4E: 9072         strb r0,[r2,#0xa]
08043B50: 0449         ldr r1,[0x08043b64]
08043B52: 507a         ldrb r0,[r2,#0x9]
08043B54: 8000         lsl r0,r0,#0x2
08043B56: 4018         add r0,r0,r1
08043B58: 0421         mov r1,#0x4
08043B5A: d160         str r1,[r2,#0xc]
08043B5C: 0068         ldr r0,[r0,#0x0]
08043B5E: 0069         ldr r0,[r0,#0x10]
08043B60: 5061         str r0,[r2,#0x14]
08043B62: 7047         bx lr
