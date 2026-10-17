; undefined FUN_08101dc8(void)
; entry 0x8101dc8  size 20 bytes

08101DC8: 00b5         push {lr}
08101DCA: 044a         ldr r2,[0x08101ddc]
08101DCC: 017c         ldrb r1,[r0,#0x10]
08101DCE: 8900         lsl r1,r1,#0x2
08101DD0: 8918         add r1,r1,r2
08101DD2: 0968         ldr r1,[r1,#0x0]
08101DD4: 27f0d4f8     bl 0x08128f80
08101DD8: 01bc         pop {r0}
08101DDA: 0047         bx r0
