; undefined FUN_08128ab8(void)
; entry 0x8128ab8  size 26 bytes

08128AB8: 00b5         push {lr}
08128ABA: 0a6c         ldr r2,[r1,#0x40]
08128ABC: 1378         ldrb r3,[r2,#0x0]
08128ABE: 0132         add r2,#0x1
08128AC0: 0a64         str r2,[r1,#0x40]
08128AC2: 044a         ldr r2,[0x08128ad4]
08128AC4: 9b00         lsl r3,r3,#0x2
08128AC6: 9b18         add r3,r3,r2
08128AC8: 1a68         ldr r2,[r3,#0x0]
08128ACA: 00f05bfa     bl 0x08128f84
08128ACE: 01bc         pop {r0}
08128AD0: 0047         bx r0
