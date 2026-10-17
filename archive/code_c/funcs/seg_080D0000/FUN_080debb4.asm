; undefined FUN_080debb4(void)
; entry 0x80debb4  size 20 bytes

080DEBB4: 00b5         push {lr}
080DEBB6: 826a         ldr r2,[r0,#0x28]
080DEBB8: b632         add r2,#0xb6
080DEBBA: 1178         ldrb r1,[r2,#0x0]
080DEBBC: 0139         sub r1,#0x1
080DEBBE: 1170         strb r1,[r2,#0x0]
080DEBC0: f2f736f8     bl 0x080d0c30
080DEBC4: 01bc         pop {r0}
080DEBC6: 0047         bx r0
