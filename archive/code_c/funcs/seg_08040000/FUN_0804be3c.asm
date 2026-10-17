; undefined FUN_0804be3c(void)
; entry 0x804be3c  size 64 bytes

0804BE3C: 10b5         push {r4,lr}
0804BE3E: 041c         add r4,r0,#0x0
0804BE40: d1f7d6f8     bl 0x0801cff0
0804BE44: 606d         ldr r0,[r4,#0x54]
0804BE46: e16d         ldr r1,[r4,#0x5c]
0804BE48: 4018         add r0,r0,r1
0804BE4A: 6065         str r0,[r4,#0x54]
0804BE4C: a06d         ldr r0,[r4,#0x58]
0804BE4E: 216e         ldr r1,[r4,#0x60]
0804BE50: 4018         add r0,r0,r1
0804BE52: a065         str r0,[r4,#0x58]
0804BE54: 201c         add r0,r4,#0x0
0804BE56: 7330         add r0,#0x73
0804BE58: 0078         ldrb r0,[r0,#0x0]
0804BE5A: 0328         cmp r0,#0x3
0804BE5C: 0bd1         bne 0x0804be76
0804BE5E: 0749         ldr r1,[0x0804be7c]
0804BE60: 607a         ldrb r0,[r4,#0x9]
0804BE62: 8000         lsl r0,r0,#0x2
0804BE64: 4018         add r0,r0,r1
0804BE66: 0221         mov r1,#0x2
0804BE68: e160         str r1,[r4,#0xc]
0804BE6A: 0068         ldr r0,[r0,#0x0]
0804BE6C: 8068         ldr r0,[r0,#0x8]
0804BE6E: 6061         str r0,[r4,#0x14]
0804BE70: 201c         add r0,r4,#0x0
0804BE72: 00f005f8     bl 0x0804be80
0804BE76: 10bc         pop {r4}
0804BE78: 01bc         pop {r0}
0804BE7A: 0047         bx r0
