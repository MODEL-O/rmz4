; undefined FUN_0805ea1c(void)
; entry 0x805ea1c  size 20 bytes

0805EA1C: 00b5         push {lr}
0805EA1E: 044a         ldr r2,[0x0805ea30]
0805EA20: 417b         ldrb r1,[r0,#0xd]
0805EA22: 8900         lsl r1,r1,#0x2
0805EA24: 8918         add r1,r1,r2
0805EA26: 0968         ldr r1,[r1,#0x0]
0805EA28: caf0aafa     bl 0x08128f80
0805EA2C: 01bc         pop {r0}
0805EA2E: 0047         bx r0
