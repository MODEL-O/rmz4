; undefined FUN_0805380c(void)
; entry 0x805380c  size 68 bytes

0805380C: 10b5         push {r4,lr}
0805380E: 041c         add r4,r0,#0x0
08053810: e07b         ldrb r0,[r4,#0xf]
08053812: 0028         cmp r0,#0x0
08053814: 0dd1         bne 0x08053832
08053816: 201c         add r0,r4,#0x0
08053818: c030         add r0,#0xc0
0805381A: 0068         ldr r0,[r0,#0x0]
0805381C: b430         add r0,#0xb4
0805381E: 0121         mov r1,#0x1
08053820: 0170         strb r1,[r0,#0x0]
08053822: b621         mov r1,#0xb6
08053824: 0902         lsl r1,r1,#0x8
08053826: 201c         add r0,r4,#0x0
08053828: c9f76afb     bl 0x0801cf00
0805382C: e07b         ldrb r0,[r4,#0xf]
0805382E: 0130         add r0,#0x1
08053830: e073         strb r0,[r4,#0xf]
08053832: 201c         add r0,r4,#0x0
08053834: c9f7dcfb     bl 0x0801cff0
08053838: 201c         add r0,r4,#0x0
0805383A: c030         add r0,#0xc0
0805383C: 0068         ldr r0,[r0,#0x0]
0805383E: 417b         ldrb r1,[r0,#0xd]
08053840: 0229         cmp r1,#0x2
08053842: 02d1         bne 0x0805384a
08053844: 0020         mov r0,#0x0
08053846: a173         strb r1,[r4,#0xe]
08053848: e073         strb r0,[r4,#0xf]
0805384A: 10bc         pop {r4}
0805384C: 01bc         pop {r0}
0805384E: 0047         bx r0
