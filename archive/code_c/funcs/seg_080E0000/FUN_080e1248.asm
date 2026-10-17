; undefined FUN_080e1248(void)
; entry 0x80e1248  size 20 bytes

080E1248: 00b5         push {lr}
080E124A: 044a         ldr r2,[0x080e125c]
080E124C: 017c         ldrb r1,[r0,#0x10]
080E124E: 8900         lsl r1,r1,#0x2
080E1250: 8918         add r1,r1,r2
080E1252: 0968         ldr r1,[r1,#0x0]
080E1254: 47f094fe     bl 0x08128f80
080E1258: 01bc         pop {r0}
080E125A: 0047         bx r0
