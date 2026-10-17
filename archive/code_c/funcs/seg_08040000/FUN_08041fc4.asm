; undefined FUN_08041fc4(void)
; entry 0x8041fc4  size 50 bytes

08041FC4: 10b5         push {r4,lr}
08041FC6: 041c         add r4,r0,#0x0
08041FC8: 0b49         ldr r1,[0x08041ff8]
08041FCA: 607a         ldrb r0,[r4,#0x9]
08041FCC: 8000         lsl r0,r0,#0x2
08041FCE: 4018         add r0,r0,r1
08041FD0: 0121         mov r1,#0x1
08041FD2: e160         str r1,[r4,#0xc]
08041FD4: 0068         ldr r0,[r0,#0x0]
08041FD6: 4068         ldr r0,[r0,#0x4]
08041FD8: 6061         str r0,[r4,#0x14]
08041FDA: 0849         ldr r1,[0x08041ffc]
08041FDC: 207c         ldrb r0,[r4,#0x10]
08041FDE: 8000         lsl r0,r0,#0x2
08041FE0: 4018         add r0,r0,r1
08041FE2: 0168         ldr r1,[r0,#0x0]
08041FE4: 201c         add r0,r4,#0x0
08041FE6: e6f0cbff     bl 0x08128f80
08041FEA: 201c         add r0,r4,#0x0
08041FEC: 00f008f8     bl 0x08042000
08041FF0: 10bc         pop {r4}
08041FF2: 01bc         pop {r0}
08041FF4: 0047         bx r0
