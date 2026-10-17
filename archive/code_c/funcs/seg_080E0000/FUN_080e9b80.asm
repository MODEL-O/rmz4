; undefined FUN_080e9b80(void)
; entry 0x80e9b80  size 48 bytes

080E9B80: 021c         add r2,r0,#0x0
080E9B82: 8c30         add r0,#0x8c
080E9B84: 0021         mov r1,#0x0
080E9B86: 0160         str r1,[r0,#0x0]
080E9B88: 0430         add r0,#0x4
080E9B8A: 0160         str r1,[r0,#0x0]
080E9B8C: 0430         add r0,#0x4
080E9B8E: 0170         strb r1,[r0,#0x0]
080E9B90: 917a         ldrb r1,[r2,#0xa]
080E9B92: fb20         mov r0,#0xfb
080E9B94: 0840         and r0,r1
080E9B96: fe21         mov r1,#0xfe
080E9B98: 0840         and r0,r1
080E9B9A: 9072         strb r0,[r2,#0xa]
080E9B9C: 0449         ldr r1,[0x080e9bb0]
080E9B9E: 507a         ldrb r0,[r2,#0x9]
080E9BA0: 8000         lsl r0,r0,#0x2
080E9BA2: 4018         add r0,r0,r1
080E9BA4: 0421         mov r1,#0x4
080E9BA6: d160         str r1,[r2,#0xc]
080E9BA8: 0068         ldr r0,[r0,#0x0]
080E9BAA: 0069         ldr r0,[r0,#0x10]
080E9BAC: 5061         str r0,[r2,#0x14]
080E9BAE: 7047         bx lr
