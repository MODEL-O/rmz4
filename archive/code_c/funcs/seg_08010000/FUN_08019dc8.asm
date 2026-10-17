; undefined FUN_08019dc8(void)
; entry 0x8019dc8  size 28 bytes

08019DC8: 00b5         push {lr}
08019DCA: 011c         add r1,r0,#0x0
08019DCC: 8a7b         ldrb r2,[r1,#0xe]
08019DCE: 002a         cmp r2,#0x0
08019DD0: 06d1         bne 0x08019de0
08019DD2: f020         mov r0,#0xf0
08019DD4: 8000         lsl r0,r0,#0x2
08019DD6: 0865         str r0,[r1,#0x50]
08019DD8: 8020         mov r0,#0x80
08019DDA: 8864         str r0,[r1,#0x48]
08019DDC: 501c         add r0,r2,#0x1
08019DDE: 8873         strb r0,[r1,#0xe]
08019DE0: 01bc         pop {r0}
08019DE2: 0047         bx r0
