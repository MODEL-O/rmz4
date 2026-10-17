; undefined FUN_080c9b8c(void)
; entry 0x80c9b8c  size 48 bytes

080C9B8C: 021c         add r2,r0,#0x0
080C9B8E: 8c30         add r0,#0x8c
080C9B90: 0021         mov r1,#0x0
080C9B92: 0160         str r1,[r0,#0x0]
080C9B94: 0430         add r0,#0x4
080C9B96: 0160         str r1,[r0,#0x0]
080C9B98: 0430         add r0,#0x4
080C9B9A: 0170         strb r1,[r0,#0x0]
080C9B9C: 917a         ldrb r1,[r2,#0xa]
080C9B9E: fb20         mov r0,#0xfb
080C9BA0: 0840         and r0,r1
080C9BA2: fe21         mov r1,#0xfe
080C9BA4: 0840         and r0,r1
080C9BA6: 9072         strb r0,[r2,#0xa]
080C9BA8: 0449         ldr r1,[0x080c9bbc]
080C9BAA: 507a         ldrb r0,[r2,#0x9]
080C9BAC: 8000         lsl r0,r0,#0x2
080C9BAE: 4018         add r0,r0,r1
080C9BB0: 0421         mov r1,#0x4
080C9BB2: d160         str r1,[r2,#0xc]
080C9BB4: 0068         ldr r0,[r0,#0x0]
080C9BB6: 0069         ldr r0,[r0,#0x10]
080C9BB8: 5061         str r0,[r2,#0x14]
080C9BBA: 7047         bx lr
