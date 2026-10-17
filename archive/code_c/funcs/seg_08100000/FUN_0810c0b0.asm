; undefined FUN_0810c0b0(void)
; entry 0x810c0b0  size 50 bytes

0810C0B0: 00b5         push {lr}
0810C0B2: 021c         add r2,r0,#0x0
0810C0B4: 906a         ldr r0,[r2,#0x28]
0810C0B6: 0849         ldr r1,[0x0810c0d8]
0810C0B8: 4018         add r0,r0,r1
0810C0BA: 4379         ldrb r3,[r0,#0x5]
0810C0BC: 022b         cmp r3,#0x2
0810C0BE: 0fd1         bne 0x0810c0e0
0810C0C0: 0649         ldr r1,[0x0810c0dc]
0810C0C2: 507a         ldrb r0,[r2,#0x9]
0810C0C4: 8000         lsl r0,r0,#0x2
0810C0C6: 4018         add r0,r0,r1
0810C0C8: d360         str r3,[r2,#0xc]
0810C0CA: 0068         ldr r0,[r0,#0x0]
0810C0CC: 8068         ldr r0,[r0,#0x8]
0810C0CE: 5061         str r0,[r2,#0x14]
0810C0D0: 101c         add r0,r2,#0x0
0810C0D2: fff725fe     bl 0x0810bd20
0810C0D6: 06e0         b 0x0810c0e6
0810C0E0: 101c         add r0,r2,#0x0
0810C0E2: 10f785ff     bl 0x0801cff0
0810C0E6: 01bc         pop {r0}
0810C0E8: 0047         bx r0
