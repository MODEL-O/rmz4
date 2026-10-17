; undefined FUN_080cb544(void)
; entry 0x80cb544  size 20 bytes

080CB544: 00b5         push {lr}
080CB546: 044a         ldr r2,[0x080cb558]
080CB548: 017c         ldrb r1,[r0,#0x10]
080CB54A: 8900         lsl r1,r1,#0x2
080CB54C: 8918         add r1,r1,r2
080CB54E: 0968         ldr r1,[r1,#0x0]
080CB550: 5df016fd     bl 0x08128f80
080CB554: 01bc         pop {r0}
080CB556: 0047         bx r0
