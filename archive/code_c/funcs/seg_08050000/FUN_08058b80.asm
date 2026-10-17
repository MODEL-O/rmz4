; undefined FUN_08058b80(void)
; entry 0x8058b80  size 20 bytes

08058B80: 00b5         push {lr}
08058B82: 044a         ldr r2,[0x08058b94]
08058B84: 817b         ldrb r1,[r0,#0xe]
08058B86: 8900         lsl r1,r1,#0x2
08058B88: 8918         add r1,r1,r2
08058B8A: 0968         ldr r1,[r1,#0x0]
08058B8C: d0f0f8f9     bl 0x08128f80
08058B90: 01bc         pop {r0}
08058B92: 0047         bx r0
