; undefined FUN_08096224(void)
; entry 0x8096224  size 20 bytes

08096224: 00b5         push {lr}
08096226: 044a         ldr r2,[0x08096238]
08096228: 017c         ldrb r1,[r0,#0x10]
0809622A: 8900         lsl r1,r1,#0x2
0809622C: 8918         add r1,r1,r2
0809622E: 0968         ldr r1,[r1,#0x0]
08096230: 92f0a6fe     bl 0x08128f80
08096234: 01bc         pop {r0}
08096236: 0047         bx r0
