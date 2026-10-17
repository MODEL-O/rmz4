; undefined FUN_08126fb0(void)
; entry 0x8126fb0  size 46 bytes

08126FB0: 00b5         push {lr}
08126FB2: 0a6c         ldr r2,[r1,#0x40]
08126FB4: 1378         ldrb r3,[r2,#0x0]
08126FB6: 002b         cmp r3,#0x0
08126FB8: 02d1         bne 0x08126fc0
08126FBA: 0132         add r2,#0x1
08126FBC: 0a64         str r2,[r1,#0x40]
08126FBE: d0e7         b 0x08126f62
08126FC0: cb78         ldrb r3,[r1,#0x3]
08126FC2: 0133         add r3,#0x1
08126FC4: cb70         strb r3,[r1,#0x3]
08126FC6: 9c46         mov r12,r3
08126FC8: fff7c4ff     bl 0x08126f54
08126FCC: 9c45         cmp r12,r3
08126FCE: 00d2         bcs 0x08126fd2
08126FD0: c7e7         b 0x08126f62
08126FD2: 0023         mov r3,#0x0
08126FD4: cb70         strb r3,[r1,#0x3]
08126FD6: 0532         add r2,#0x5
08126FD8: 0a64         str r2,[r1,#0x40]
08126FDA: 01bc         pop {r0}
08126FDC: 0047         bx r0
