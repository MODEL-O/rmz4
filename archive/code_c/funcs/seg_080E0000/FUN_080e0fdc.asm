; undefined FUN_080e0fdc(void)
; entry 0x80e0fdc  size 20 bytes

080E0FDC: 00b5         push {lr}
080E0FDE: 044a         ldr r2,[0x080e0ff0]
080E0FE0: 017c         ldrb r1,[r0,#0x10]
080E0FE2: 8900         lsl r1,r1,#0x2
080E0FE4: 8918         add r1,r1,r2
080E0FE6: 0968         ldr r1,[r1,#0x0]
080E0FE8: 47f0caff     bl 0x08128f80
080E0FEC: 01bc         pop {r0}
080E0FEE: 0047         bx r0
