; undefined FUN_080e1dac(void)
; entry 0x80e1dac  size 20 bytes

080E1DAC: 00b5         push {lr}
080E1DAE: 044a         ldr r2,[0x080e1dc0]
080E1DB0: 017c         ldrb r1,[r0,#0x10]
080E1DB2: 8900         lsl r1,r1,#0x2
080E1DB4: 8918         add r1,r1,r2
080E1DB6: 0968         ldr r1,[r1,#0x0]
080E1DB8: 47f0e2f8     bl 0x08128f80
080E1DBC: 01bc         pop {r0}
080E1DBE: 0047         bx r0
