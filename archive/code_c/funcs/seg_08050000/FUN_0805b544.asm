; undefined FUN_0805b544(void)
; entry 0x805b544  size 20 bytes

0805B544: 00b5         push {lr}
0805B546: 044a         ldr r2,[0x0805b558]
0805B548: 817b         ldrb r1,[r0,#0xe]
0805B54A: 8900         lsl r1,r1,#0x2
0805B54C: 8918         add r1,r1,r2
0805B54E: 0968         ldr r1,[r1,#0x0]
0805B550: cdf016fd     bl 0x08128f80
0805B554: 01bc         pop {r0}
0805B556: 0047         bx r0
