; undefined FUN_080a1600(void)
; entry 0x80a1600  size 20 bytes

080A1600: 00b5         push {lr}
080A1602: 044a         ldr r2,[0x080a1614]
080A1604: 417b         ldrb r1,[r0,#0xd]
080A1606: 8900         lsl r1,r1,#0x2
080A1608: 8918         add r1,r1,r2
080A160A: 0968         ldr r1,[r1,#0x0]
080A160C: 87f0b8fc     bl 0x08128f80
080A1610: 01bc         pop {r0}
080A1612: 0047         bx r0
