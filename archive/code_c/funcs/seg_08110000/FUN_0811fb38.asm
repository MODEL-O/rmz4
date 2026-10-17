; undefined FUN_0811fb38(void)
; entry 0x811fb38  size 50 bytes

0811FB38: 10b5         push {r4,lr}
0811FB3A: 041c         add r4,r0,#0x0
0811FB3C: 2f20         mov r0,#0x2f
0811FB3E: e2f671fd     bl 0x08002624
0811FB42: 9520         mov r0,#0x95
0811FB44: e3f60af8     bl 0x08002b5c
0811FB48: 084a         ldr r2,[0x0811fb6c]
0811FB4A: 1188         ldrh r1,[r2,#0x0]
0811FB4C: 0848         ldr r0,[0x0811fb70]
0811FB4E: 0840         and r0,r1
0811FB50: 0021         mov r1,#0x0
0811FB52: 1080         strh r0,[r2,#0x0]
0811FB54: 0748         ldr r0,[0x0811fb74]
0811FB56: 0180         strh r1,[r0,#0x0]
0811FB58: 0748         ldr r0,[0x0811fb78]
0811FB5A: 2418         add r4,r4,r0
0811FB5C: 0120         mov r0,#0x1
0811FB5E: 6071         strb r0,[r4,#0x5]
0811FB60: e1f6f8fb     bl 0x08001354
0811FB64: 10bc         pop {r4}
0811FB66: 01bc         pop {r0}
0811FB68: 0047         bx r0
