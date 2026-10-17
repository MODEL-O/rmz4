; undefined FUN_0805a2dc(void)
; entry 0x805a2dc  size 20 bytes

0805A2DC: 00b5         push {lr}
0805A2DE: 044a         ldr r2,[0x0805a2f0]
0805A2E0: 817b         ldrb r1,[r0,#0xe]
0805A2E2: 8900         lsl r1,r1,#0x2
0805A2E4: 8918         add r1,r1,r2
0805A2E6: 0968         ldr r1,[r1,#0x0]
0805A2E8: cef04afe     bl 0x08128f80
0805A2EC: 01bc         pop {r0}
0805A2EE: 0047         bx r0
