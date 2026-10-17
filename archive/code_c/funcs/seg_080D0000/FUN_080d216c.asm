; undefined FUN_080d216c(void)
; entry 0x80d216c  size 58 bytes

080D216C: 10b5         push {r4,lr}
080D216E: 041c         add r4,r0,#0x0
080D2170: 4af794fd     bl 0x0801cc9c
080D2174: a17a         ldrb r1,[r4,#0xa]
080D2176: 0120         mov r0,#0x1
080D2178: 0843         orr r0,r1
080D217A: 0221         mov r1,#0x2
080D217C: 0843         orr r0,r1
080D217E: a072         strb r0,[r4,#0xa]
080D2180: 201c         add r0,r4,#0x0
080D2182: 0921         mov r1,#0x9
080D2184: 4af7bcfe     bl 0x0801cf00
080D2188: 0749         ldr r1,[0x080d21a8]
080D218A: 607a         ldrb r0,[r4,#0x9]
080D218C: 8000         lsl r0,r0,#0x2
080D218E: 4018         add r0,r0,r1
080D2190: 0121         mov r1,#0x1
080D2192: e160         str r1,[r4,#0xc]
080D2194: 0068         ldr r0,[r0,#0x0]
080D2196: 4068         ldr r0,[r0,#0x4]
080D2198: 6061         str r0,[r4,#0x14]
080D219A: 201c         add r0,r4,#0x0
080D219C: fff718fe     bl 0x080d1dd0
080D21A0: 10bc         pop {r4}
080D21A2: 01bc         pop {r0}
080D21A4: 0047         bx r0
