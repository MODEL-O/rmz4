; undefined FUN_0810c02c(void)
; entry 0x810c02c  size 50 bytes

0810C02C: 00b5         push {lr}
0810C02E: 021c         add r2,r0,#0x0
0810C030: 906a         ldr r0,[r2,#0x28]
0810C032: 0849         ldr r1,[0x0810c054]
0810C034: 4018         add r0,r0,r1
0810C036: 4379         ldrb r3,[r0,#0x5]
0810C038: 022b         cmp r3,#0x2
0810C03A: 0fd1         bne 0x0810c05c
0810C03C: 0649         ldr r1,[0x0810c058]
0810C03E: 507a         ldrb r0,[r2,#0x9]
0810C040: 8000         lsl r0,r0,#0x2
0810C042: 4018         add r0,r0,r1
0810C044: d360         str r3,[r2,#0xc]
0810C046: 0068         ldr r0,[r0,#0x0]
0810C048: 8068         ldr r0,[r0,#0x8]
0810C04A: 5061         str r0,[r2,#0x14]
0810C04C: 101c         add r0,r2,#0x0
0810C04E: fff767fe     bl 0x0810bd20
0810C052: 06e0         b 0x0810c062
0810C05C: 101c         add r0,r2,#0x0
0810C05E: 10f7c7ff     bl 0x0801cff0
0810C062: 01bc         pop {r0}
0810C064: 0047         bx r0
