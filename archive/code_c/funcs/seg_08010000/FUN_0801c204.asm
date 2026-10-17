; undefined FUN_0801c204(void)
; entry 0x801c204  size 32 bytes

0801C204: 00b5         push {lr}
0801C206: 6830         add r0,#0x68
0801C208: 0188         ldrh r1,[r0,#0x0]
0801C20A: 0139         sub r1,#0x1
0801C20C: 0180         strh r1,[r0,#0x0]
0801C20E: 0904         lsl r1,r1,#0x10
0801C210: 0029         cmp r1,#0x0
0801C212: 05d1         bne 0x0801c220
0801C214: 0349         ldr r1,[0x0801c224]
0801C216: 0448         ldr r0,[0x0801c228]
0801C218: 0918         add r1,r1,r0
0801C21A: 0878         ldrb r0,[r1,#0x0]
0801C21C: 0130         add r0,#0x1
0801C21E: 0870         strb r0,[r1,#0x0]
0801C220: 01bc         pop {r0}
0801C222: 0047         bx r0
