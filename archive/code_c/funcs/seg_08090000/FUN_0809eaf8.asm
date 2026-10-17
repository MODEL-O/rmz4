; undefined FUN_0809eaf8(void)
; entry 0x809eaf8  size 60 bytes

0809EAF8: 30b5         push {r4,r5,lr}
0809EAFA: 041c         add r4,r0,#0x0
0809EAFC: a56a         ldr r5,[r4,#0x28]
0809EAFE: 0d49         ldr r1,[0x0809eb34]
0809EB00: 607a         ldrb r0,[r4,#0x9]
0809EB02: 8000         lsl r0,r0,#0x2
0809EB04: 4018         add r0,r0,r1
0809EB06: 0121         mov r1,#0x1
0809EB08: e160         str r1,[r4,#0xc]
0809EB0A: 0068         ldr r0,[r0,#0x0]
0809EB0C: 4068         ldr r0,[r0,#0x4]
0809EB0E: 6061         str r0,[r4,#0x14]
0809EB10: a17a         ldrb r1,[r4,#0xa]
0809EB12: 0120         mov r0,#0x1
0809EB14: 0843         orr r0,r1
0809EB16: 0221         mov r1,#0x2
0809EB18: 0843         orr r0,r1
0809EB1A: a072         strb r0,[r4,#0xa]
0809EB1C: 201c         add r0,r4,#0x0
0809EB1E: 7ef7bdf8     bl 0x0801cc9c
0809EB22: e17a         ldrb r1,[r4,#0xb]
0809EB24: 1020         mov r0,#0x10
0809EB26: 0843         orr r0,r1
0809EB28: e072         strb r0,[r4,#0xb]
0809EB2A: 287f         ldrb r0,[r5,#0x1c]
0809EB2C: 6077         strb r0,[r4,#0x1d]
0809EB2E: 30bc         pop {r4,r5}
0809EB30: 01bc         pop {r0}
0809EB32: 0047         bx r0
