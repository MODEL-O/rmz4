; undefined FUN_080e126c(void)
; entry 0x80e126c  size 30 bytes

080E126C: 00b5         push {lr}
080E126E: 021c         add r2,r0,#0x0
080E1270: 0648         ldr r0,[0x080e128c]
080E1272: 011c         add r1,r0,#0x0
080E1274: 2631         add r1,#0x26
080E1276: 0878         ldrb r0,[r1,#0x0]
080E1278: 0028         cmp r0,#0x0
080E127A: 01d0         beq 0x080e1280
080E127C: ff30         add r0,#0xff
080E127E: 0870         strb r0,[r1,#0x0]
080E1280: 101c         add r0,r2,#0x0
080E1282: eff7d5fc     bl 0x080d0c30
080E1286: 01bc         pop {r0}
080E1288: 0047         bx r0
