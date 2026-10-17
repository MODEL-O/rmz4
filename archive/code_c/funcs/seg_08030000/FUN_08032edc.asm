; undefined FUN_08032edc(void)
; entry 0x8032edc  size 58 bytes

08032EDC: 00b5         push {lr}
08032EDE: 021c         add r2,r0,#0x0
08032EE0: 0949         ldr r1,[0x08032f08]
08032EE2: 5018         add r0,r2,r1
08032EE4: 0378         ldrb r3,[r0,#0x0]
08032EE6: 002b         cmp r3,#0x0
08032EE8: 15d1         bne 0x08032f16
08032EEA: 917f         ldrb r1,[r2,#0x1e]
08032EEC: 0902         lsl r1,r1,#0x8
08032EEE: 101c         add r0,r2,#0x0
08032EF0: 7030         add r0,#0x70
08032EF2: 0078         ldrb r0,[r0,#0x0]
08032EF4: 0843         orr r0,r1
08032EF6: 8021         mov r1,#0x80
08032EF8: 8900         lsl r1,r1,#0x2
08032EFA: 8842         cmp r0,r1
08032EFC: 06d1         bne 0x08032f0c
08032EFE: 5373         strb r3,[r2,#0xd]
08032F00: 9373         strb r3,[r2,#0xe]
08032F02: d373         strb r3,[r2,#0xf]
08032F04: d365         str r3,[r2,#0x5c]
08032F06: 06e0         b 0x08032f16
08032F0C: 0120         mov r0,#0x1
08032F0E: 5073         strb r0,[r2,#0xd]
08032F10: 0220         mov r0,#0x2
08032F12: 9073         strb r0,[r2,#0xe]
08032F14: d373         strb r3,[r2,#0xf]
08032F16: 01bc         pop {r0}
08032F18: 0047         bx r0
