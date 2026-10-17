; undefined FUN_08054930(void)
; entry 0x8054930  size 20 bytes

08054930: 00b5         push {lr}
08054932: 044a         ldr r2,[0x08054944]
08054934: 817b         ldrb r1,[r0,#0xe]
08054936: 8900         lsl r1,r1,#0x2
08054938: 8918         add r1,r1,r2
0805493A: 0968         ldr r1,[r1,#0x0]
0805493C: d4f020fb     bl 0x08128f80
08054940: 01bc         pop {r0}
08054942: 0047         bx r0
