; undefined FUN_0810bb00(void)
; entry 0x810bb00  size 70 bytes

0810BB00: 00b5         push {lr}
0810BB02: 021c         add r2,r0,#0x0
0810BB04: 936a         ldr r3,[r2,#0x28]
0810BB06: 507c         ldrb r0,[r2,#0x11]
0810BB08: 0028         cmp r0,#0x0
0810BB0A: 11d0         beq 0x0810bb30
0810BB0C: 9878         ldrb r0,[r3,#0x2]
0810BB0E: 0228         cmp r0,#0x2
0810BB10: 04d0         beq 0x0810bb1c
0810BB12: 917a         ldrb r1,[r2,#0xa]
0810BB14: fe20         mov r0,#0xfe
0810BB16: 0840         and r0,r1
0810BB18: 9072         strb r0,[r2,#0xa]
0810BB1A: 14e0         b 0x0810bb46
0810BB1C: 917a         ldrb r1,[r2,#0xa]
0810BB1E: 0120         mov r0,#0x1
0810BB20: 0843         orr r0,r1
0810BB22: 9072         strb r0,[r2,#0xa]
0810BB24: 0149         ldr r1,[0x0810bb2c]
0810BB26: 5818         add r0,r3,r1
0810BB28: c078         ldrb r0,[r0,#0x3]
0810BB2A: 04e0         b 0x0810bb36
0810BB30: 0649         ldr r1,[0x0810bb4c]
0810BB32: 5818         add r0,r3,r1
0810BB34: 0078         ldrb r0,[r0,#0x0]
0810BB36: 4003         lsl r0,r0,#0xd
0810BB38: 8021         mov r1,#0x80
0810BB3A: 8901         lsl r1,r1,#0x6
0810BB3C: 4018         add r0,r0,r1
0810BB3E: 9065         str r0,[r2,#0x58]
0810BB40: 101c         add r0,r2,#0x0
0810BB42: 11f755fa     bl 0x0801cff0
0810BB46: 01bc         pop {r0}
0810BB48: 0047         bx r0
