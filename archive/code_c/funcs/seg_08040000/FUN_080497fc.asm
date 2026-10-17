; undefined FUN_080497fc(void)
; entry 0x80497fc  size 20 bytes

080497FC: 00b5         push {lr}
080497FE: 044a         ldr r2,[0x08049810]
08049800: 017c         ldrb r1,[r0,#0x10]
08049802: 8900         lsl r1,r1,#0x2
08049804: 8918         add r1,r1,r2
08049806: 0968         ldr r1,[r1,#0x0]
08049808: dff0bafb     bl 0x08128f80
0804980C: 01bc         pop {r0}
0804980E: 0047         bx r0
