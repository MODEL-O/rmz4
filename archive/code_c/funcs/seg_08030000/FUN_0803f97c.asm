; undefined FUN_0803f97c(void)
; entry 0x803f97c  size 48 bytes

0803F97C: 021c         add r2,r0,#0x0
0803F97E: 8c30         add r0,#0x8c
0803F980: 0021         mov r1,#0x0
0803F982: 0160         str r1,[r0,#0x0]
0803F984: 0430         add r0,#0x4
0803F986: 0160         str r1,[r0,#0x0]
0803F988: 0430         add r0,#0x4
0803F98A: 0170         strb r1,[r0,#0x0]
0803F98C: 917a         ldrb r1,[r2,#0xa]
0803F98E: fb20         mov r0,#0xfb
0803F990: 0840         and r0,r1
0803F992: fe21         mov r1,#0xfe
0803F994: 0840         and r0,r1
0803F996: 9072         strb r0,[r2,#0xa]
0803F998: 0449         ldr r1,[0x0803f9ac]
0803F99A: 507a         ldrb r0,[r2,#0x9]
0803F99C: 8000         lsl r0,r0,#0x2
0803F99E: 4018         add r0,r0,r1
0803F9A0: 0421         mov r1,#0x4
0803F9A2: d160         str r1,[r2,#0xc]
0803F9A4: 0068         ldr r0,[r0,#0x0]
0803F9A6: 0069         ldr r0,[r0,#0x10]
0803F9A8: 5061         str r0,[r2,#0x14]
0803F9AA: 7047         bx lr
