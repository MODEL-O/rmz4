; undefined FUN_08040208(void)
; entry 0x8040208  size 78 bytes

08040208: 10b5         push {r4,lr}
0804020A: 041c         add r4,r0,#0x0
0804020C: 1249         ldr r1,[0x08040258]
0804020E: 607a         ldrb r0,[r4,#0x9]
08040210: 8000         lsl r0,r0,#0x2
08040212: 4018         add r0,r0,r1
08040214: 0121         mov r1,#0x1
08040216: e160         str r1,[r4,#0xc]
08040218: 0068         ldr r0,[r0,#0x0]
0804021A: 4068         ldr r0,[r0,#0x4]
0804021C: 6061         str r0,[r4,#0x14]
0804021E: 201c         add r0,r4,#0x0
08040220: dcf73cfd     bl 0x0801cc9c
08040224: 201c         add r0,r4,#0x0
08040226: dcf761fe     bl 0x0801ceec
0804022A: a17a         ldrb r1,[r4,#0xa]
0804022C: 0120         mov r0,#0x1
0804022E: 0843         orr r0,r1
08040230: 0221         mov r1,#0x2
08040232: 0843         orr r0,r1
08040234: a072         strb r0,[r4,#0xa]
08040236: 201c         add r0,r4,#0x0
08040238: dcf758fe     bl 0x0801ceec
0804023C: 0749         ldr r1,[0x0804025c]
0804023E: 201c         add r0,r4,#0x0
08040240: dcf75efe     bl 0x0801cf00
08040244: 201c         add r0,r4,#0x0
08040246: dcf7d3fe     bl 0x0801cff0
0804024A: 201c         add r0,r4,#0x0
0804024C: fff782ff     bl 0x08040154
08040250: 10bc         pop {r4}
08040252: 01bc         pop {r0}
08040254: 0047         bx r0
