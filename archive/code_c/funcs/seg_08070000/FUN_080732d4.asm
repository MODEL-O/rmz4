; undefined FUN_080732d4(void)
; entry 0x80732d4  size 20 bytes

080732D4: 00b5         push {lr}
080732D6: 044a         ldr r2,[0x080732e8]
080732D8: 417b         ldrb r1,[r0,#0xd]
080732DA: 8900         lsl r1,r1,#0x2
080732DC: 8918         add r1,r1,r2
080732DE: 0968         ldr r1,[r1,#0x0]
080732E0: b5f04efe     bl 0x08128f80
080732E4: 01bc         pop {r0}
080732E6: 0047         bx r0
