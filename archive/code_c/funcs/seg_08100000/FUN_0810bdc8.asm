; undefined FUN_0810bdc8(void)
; entry 0x810bdc8  size 50 bytes

0810BDC8: 00b5         push {lr}
0810BDCA: 021c         add r2,r0,#0x0
0810BDCC: 906a         ldr r0,[r2,#0x28]
0810BDCE: 0849         ldr r1,[0x0810bdf0]
0810BDD0: 4018         add r0,r0,r1
0810BDD2: 4379         ldrb r3,[r0,#0x5]
0810BDD4: 022b         cmp r3,#0x2
0810BDD6: 0fd1         bne 0x0810bdf8
0810BDD8: 0649         ldr r1,[0x0810bdf4]
0810BDDA: 507a         ldrb r0,[r2,#0x9]
0810BDDC: 8000         lsl r0,r0,#0x2
0810BDDE: 4018         add r0,r0,r1
0810BDE0: d360         str r3,[r2,#0xc]
0810BDE2: 0068         ldr r0,[r0,#0x0]
0810BDE4: 8068         ldr r0,[r0,#0x8]
0810BDE6: 5061         str r0,[r2,#0x14]
0810BDE8: 101c         add r0,r2,#0x0
0810BDEA: fff799ff     bl 0x0810bd20
0810BDEE: 06e0         b 0x0810bdfe
0810BDF8: 101c         add r0,r2,#0x0
0810BDFA: 11f7f9f8     bl 0x0801cff0
0810BDFE: 01bc         pop {r0}
0810BE00: 0047         bx r0
