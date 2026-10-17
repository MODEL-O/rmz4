; undefined FUN_08019ec8(void)
; entry 0x8019ec8  size 26 bytes

08019EC8: 00b5         push {lr}
08019ECA: 011c         add r1,r0,#0x0
08019ECC: 8a7b         ldrb r2,[r1,#0xe]
08019ECE: 002a         cmp r2,#0x0
08019ED0: 05d1         bne 0x08019ede
08019ED2: f020         mov r0,#0xf0
08019ED4: 0865         str r0,[r1,#0x50]
08019ED6: 8020         mov r0,#0x80
08019ED8: 8864         str r0,[r1,#0x48]
08019EDA: 501c         add r0,r2,#0x1
08019EDC: 8873         strb r0,[r1,#0xe]
08019EDE: 01bc         pop {r0}
08019EE0: 0047         bx r0
