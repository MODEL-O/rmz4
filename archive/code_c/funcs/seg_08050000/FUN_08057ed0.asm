; undefined FUN_08057ed0(void)
; entry 0x8057ed0  size 20 bytes

08057ED0: 00b5         push {lr}
08057ED2: 044a         ldr r2,[0x08057ee4]
08057ED4: 817b         ldrb r1,[r0,#0xe]
08057ED6: 8900         lsl r1,r1,#0x2
08057ED8: 8918         add r1,r1,r2
08057EDA: 0968         ldr r1,[r1,#0x0]
08057EDC: d1f050f8     bl 0x08128f80
08057EE0: 01bc         pop {r0}
08057EE2: 0047         bx r0
