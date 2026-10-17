; undefined FUN_08096014(void)
; entry 0x8096014  size 20 bytes

08096014: 00b5         push {lr}
08096016: 044a         ldr r2,[0x08096028]
08096018: 417b         ldrb r1,[r0,#0xd]
0809601A: 8900         lsl r1,r1,#0x2
0809601C: 8918         add r1,r1,r2
0809601E: 0968         ldr r1,[r1,#0x0]
08096020: 92f0aeff     bl 0x08128f80
08096024: 01bc         pop {r0}
08096026: 0047         bx r0
