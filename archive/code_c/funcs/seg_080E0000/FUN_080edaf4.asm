; undefined FUN_080edaf4(void)
; entry 0x80edaf4  size 52 bytes

080EDAF4: 10b5         push {r4,lr}
080EDAF6: 041c         add r4,r0,#0x0
080EDAF8: a17a         ldrb r1,[r4,#0xa]
080EDAFA: 0120         mov r0,#0x1
080EDAFC: 0843         orr r0,r1
080EDAFE: 0221         mov r1,#0x2
080EDB00: 0843         orr r0,r1
080EDB02: a072         strb r0,[r4,#0xa]
080EDB04: 201c         add r0,r4,#0x0
080EDB06: 2ff7c9f8     bl 0x0801cc9c
080EDB0A: 0749         ldr r1,[0x080edb28]
080EDB0C: 607a         ldrb r0,[r4,#0x9]
080EDB0E: 8000         lsl r0,r0,#0x2
080EDB10: 4018         add r0,r0,r1
080EDB12: 0121         mov r1,#0x1
080EDB14: e160         str r1,[r4,#0xc]
080EDB16: 0068         ldr r0,[r0,#0x0]
080EDB18: 4068         ldr r0,[r0,#0x4]
080EDB1A: 6061         str r0,[r4,#0x14]
080EDB1C: 201c         add r0,r4,#0x0
080EDB1E: fff753fe     bl 0x080ed7c8
080EDB22: 10bc         pop {r4}
080EDB24: 01bc         pop {r0}
080EDB26: 0047         bx r0
