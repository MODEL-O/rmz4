; undefined FUN_0804d2a0(void)
; entry 0x804d2a0  size 48 bytes

0804D2A0: 021c         add r2,r0,#0x0
0804D2A2: 8c30         add r0,#0x8c
0804D2A4: 0021         mov r1,#0x0
0804D2A6: 0160         str r1,[r0,#0x0]
0804D2A8: 0430         add r0,#0x4
0804D2AA: 0160         str r1,[r0,#0x0]
0804D2AC: 0430         add r0,#0x4
0804D2AE: 0170         strb r1,[r0,#0x0]
0804D2B0: 917a         ldrb r1,[r2,#0xa]
0804D2B2: fb20         mov r0,#0xfb
0804D2B4: 0840         and r0,r1
0804D2B6: fe21         mov r1,#0xfe
0804D2B8: 0840         and r0,r1
0804D2BA: 9072         strb r0,[r2,#0xa]
0804D2BC: 0449         ldr r1,[0x0804d2d0]
0804D2BE: 507a         ldrb r0,[r2,#0x9]
0804D2C0: 8000         lsl r0,r0,#0x2
0804D2C2: 4018         add r0,r0,r1
0804D2C4: 0421         mov r1,#0x4
0804D2C6: d160         str r1,[r2,#0xc]
0804D2C8: 0068         ldr r0,[r0,#0x0]
0804D2CA: 0069         ldr r0,[r0,#0x10]
0804D2CC: 5061         str r0,[r2,#0x14]
0804D2CE: 7047         bx lr
