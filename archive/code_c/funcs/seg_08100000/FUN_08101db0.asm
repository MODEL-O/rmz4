; undefined FUN_08101db0(void)
; entry 0x8101db0  size 20 bytes

08101DB0: 00b5         push {lr}
08101DB2: 044a         ldr r2,[0x08101dc4]
08101DB4: 017c         ldrb r1,[r0,#0x10]
08101DB6: 8900         lsl r1,r1,#0x2
08101DB8: 8918         add r1,r1,r2
08101DBA: 0968         ldr r1,[r1,#0x0]
08101DBC: 27f0e0f8     bl 0x08128f80
08101DC0: 01bc         pop {r0}
08101DC2: 0047         bx r0
