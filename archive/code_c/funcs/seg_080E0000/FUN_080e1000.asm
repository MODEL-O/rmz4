; undefined FUN_080e1000(void)
; entry 0x80e1000  size 30 bytes

080E1000: 00b5         push {lr}
080E1002: 021c         add r2,r0,#0x0
080E1004: 0648         ldr r0,[0x080e1020]
080E1006: 011c         add r1,r0,#0x0
080E1008: 2631         add r1,#0x26
080E100A: 0878         ldrb r0,[r1,#0x0]
080E100C: 0028         cmp r0,#0x0
080E100E: 01d0         beq 0x080e1014
080E1010: ff30         add r0,#0xff
080E1012: 0870         strb r0,[r1,#0x0]
080E1014: 101c         add r0,r2,#0x0
080E1016: eff70bfe     bl 0x080d0c30
080E101A: 01bc         pop {r0}
080E101C: 0047         bx r0
