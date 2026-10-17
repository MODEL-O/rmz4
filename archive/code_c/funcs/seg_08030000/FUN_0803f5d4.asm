; undefined FUN_0803f5d4(void)
; entry 0x803f5d4  size 48 bytes

0803F5D4: 021c         add r2,r0,#0x0
0803F5D6: 8c30         add r0,#0x8c
0803F5D8: 0021         mov r1,#0x0
0803F5DA: 0160         str r1,[r0,#0x0]
0803F5DC: 0430         add r0,#0x4
0803F5DE: 0160         str r1,[r0,#0x0]
0803F5E0: 0430         add r0,#0x4
0803F5E2: 0170         strb r1,[r0,#0x0]
0803F5E4: 917a         ldrb r1,[r2,#0xa]
0803F5E6: fb20         mov r0,#0xfb
0803F5E8: 0840         and r0,r1
0803F5EA: fe21         mov r1,#0xfe
0803F5EC: 0840         and r0,r1
0803F5EE: 9072         strb r0,[r2,#0xa]
0803F5F0: 0449         ldr r1,[0x0803f604]
0803F5F2: 507a         ldrb r0,[r2,#0x9]
0803F5F4: 8000         lsl r0,r0,#0x2
0803F5F6: 4018         add r0,r0,r1
0803F5F8: 0421         mov r1,#0x4
0803F5FA: d160         str r1,[r2,#0xc]
0803F5FC: 0068         ldr r0,[r0,#0x0]
0803F5FE: 0069         ldr r0,[r0,#0x10]
0803F600: 5061         str r0,[r2,#0x14]
0803F602: 7047         bx lr
