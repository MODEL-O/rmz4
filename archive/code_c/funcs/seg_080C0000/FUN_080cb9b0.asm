; undefined FUN_080cb9b0(void)
; entry 0x80cb9b0  size 20 bytes

080CB9B0: 00b5         push {lr}
080CB9B2: 044a         ldr r2,[0x080cb9c4]
080CB9B4: 017c         ldrb r1,[r0,#0x10]
080CB9B6: 8900         lsl r1,r1,#0x2
080CB9B8: 8918         add r1,r1,r2
080CB9BA: 0968         ldr r1,[r1,#0x0]
080CB9BC: 5df0e0fa     bl 0x08128f80
080CB9C0: 01bc         pop {r0}
080CB9C2: 0047         bx r0
