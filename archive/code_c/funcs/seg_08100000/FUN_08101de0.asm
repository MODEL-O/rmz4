; undefined FUN_08101de0(void)
; entry 0x8101de0  size 20 bytes

08101DE0: 00b5         push {lr}
08101DE2: 044a         ldr r2,[0x08101df4]
08101DE4: 017c         ldrb r1,[r0,#0x10]
08101DE6: 8900         lsl r1,r1,#0x2
08101DE8: 8918         add r1,r1,r2
08101DEA: 0968         ldr r1,[r1,#0x0]
08101DEC: 27f0c8f8     bl 0x08128f80
08101DF0: 01bc         pop {r0}
08101DF2: 0047         bx r0
