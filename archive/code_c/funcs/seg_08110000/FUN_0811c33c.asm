; undefined FUN_0811c33c(void)
; entry 0x811c33c  size 32 bytes

0811C33C: 10b5         push {r4,lr}
0811C33E: 041c         add r4,r0,#0x0
0811C340: 0649         ldr r1,[0x0811c35c]
0811C342: 6078         ldrb r0,[r4,#0x1]
0811C344: 8000         lsl r0,r0,#0x2
0811C346: 4018         add r0,r0,r1
0811C348: 0168         ldr r1,[r0,#0x0]
0811C34A: 201c         add r0,r4,#0x0
0811C34C: 0cf018fe     bl 0x08128f80
0811C350: 201c         add r0,r4,#0x0
0811C352: 00f009fa     bl 0x0811c768
0811C356: 10bc         pop {r4}
0811C358: 01bc         pop {r0}
0811C35A: 0047         bx r0
