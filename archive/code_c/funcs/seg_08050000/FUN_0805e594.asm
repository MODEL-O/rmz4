; undefined FUN_0805e594(void)
; entry 0x805e594  size 20 bytes

0805E594: 00b5         push {lr}
0805E596: 044a         ldr r2,[0x0805e5a8]
0805E598: 817b         ldrb r1,[r0,#0xe]
0805E59A: 8900         lsl r1,r1,#0x2
0805E59C: 8918         add r1,r1,r2
0805E59E: 0968         ldr r1,[r1,#0x0]
0805E5A0: caf0eefc     bl 0x08128f80
0805E5A4: 01bc         pop {r0}
0805E5A6: 0047         bx r0
