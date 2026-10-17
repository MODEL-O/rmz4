; undefined FUN_0805ddb4(void)
; entry 0x805ddb4  size 20 bytes

0805DDB4: 00b5         push {lr}
0805DDB6: 044a         ldr r2,[0x0805ddc8]
0805DDB8: 817b         ldrb r1,[r0,#0xe]
0805DDBA: 8900         lsl r1,r1,#0x2
0805DDBC: 8918         add r1,r1,r2
0805DDBE: 0968         ldr r1,[r1,#0x0]
0805DDC0: cbf0def8     bl 0x08128f80
0805DDC4: 01bc         pop {r0}
0805DDC6: 0047         bx r0
