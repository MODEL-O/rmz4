; undefined FUN_0811f7f0(void)
; entry 0x811f7f0  size 66 bytes

0811F7F0: 00b5         push {lr}
0811F7F2: 021c         add r2,r0,#0x0
0811F7F4: 537a         ldrb r3,[r2,#0x9]
0811F7F6: 002b         cmp r3,#0x0
0811F7F8: 19d1         bne 0x0811f82e
0811F7FA: 917a         ldrb r1,[r2,#0xa]
0811F7FC: fe20         mov r0,#0xfe
0811F7FE: 0840         and r0,r1
0811F800: fd21         mov r1,#0xfd
0811F802: 0840         and r0,r1
0811F804: 9072         strb r0,[r2,#0xa]
0811F806: 101c         add r0,r2,#0x0
0811F808: 8c30         add r0,#0x8c
0811F80A: 0360         str r3,[r0,#0x0]
0811F80C: 0430         add r0,#0x4
0811F80E: 0360         str r3,[r0,#0x0]
0811F810: 0430         add r0,#0x4
0811F812: 0370         strb r3,[r0,#0x0]
0811F814: 917a         ldrb r1,[r2,#0xa]
0811F816: fb20         mov r0,#0xfb
0811F818: 0840         and r0,r1
0811F81A: 9072         strb r0,[r2,#0xa]
0811F81C: 0549         ldr r1,[0x0811f834]
0811F81E: 507a         ldrb r0,[r2,#0x9]
0811F820: 8000         lsl r0,r0,#0x2
0811F822: 4018         add r0,r0,r1
0811F824: 0321         mov r1,#0x3
0811F826: d160         str r1,[r2,#0xc]
0811F828: 0068         ldr r0,[r0,#0x0]
0811F82A: c068         ldr r0,[r0,#0xc]
0811F82C: 5061         str r0,[r2,#0x14]
0811F82E: 01bc         pop {r0}
0811F830: 0047         bx r0
