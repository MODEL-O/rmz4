; undefined FUN_08049814(void)
; entry 0x8049814  size 20 bytes

08049814: 00b5         push {lr}
08049816: 044a         ldr r2,[0x08049828]
08049818: 017c         ldrb r1,[r0,#0x10]
0804981A: 8900         lsl r1,r1,#0x2
0804981C: 8918         add r1,r1,r2
0804981E: 0968         ldr r1,[r1,#0x0]
08049820: dff0aefb     bl 0x08128f80
08049824: 01bc         pop {r0}
08049826: 0047         bx r0
