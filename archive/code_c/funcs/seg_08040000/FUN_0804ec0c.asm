; undefined FUN_0804ec0c(void)
; entry 0x804ec0c  size 48 bytes

0804EC0C: 021c         add r2,r0,#0x0
0804EC0E: 8c30         add r0,#0x8c
0804EC10: 0021         mov r1,#0x0
0804EC12: 0160         str r1,[r0,#0x0]
0804EC14: 0430         add r0,#0x4
0804EC16: 0160         str r1,[r0,#0x0]
0804EC18: 0430         add r0,#0x4
0804EC1A: 0170         strb r1,[r0,#0x0]
0804EC1C: 917a         ldrb r1,[r2,#0xa]
0804EC1E: fb20         mov r0,#0xfb
0804EC20: 0840         and r0,r1
0804EC22: fe21         mov r1,#0xfe
0804EC24: 0840         and r0,r1
0804EC26: 9072         strb r0,[r2,#0xa]
0804EC28: 0449         ldr r1,[0x0804ec3c]
0804EC2A: 507a         ldrb r0,[r2,#0x9]
0804EC2C: 8000         lsl r0,r0,#0x2
0804EC2E: 4018         add r0,r0,r1
0804EC30: 0421         mov r1,#0x4
0804EC32: d160         str r1,[r2,#0xc]
0804EC34: 0068         ldr r0,[r0,#0x0]
0804EC36: 0069         ldr r0,[r0,#0x10]
0804EC38: 5061         str r0,[r2,#0x14]
0804EC3A: 7047         bx lr
