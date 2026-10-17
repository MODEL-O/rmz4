; undefined FUN_080f73bc(void)
; entry 0x80f73bc  size 70 bytes

080F73BC: 10b5         push {r4,lr}
080F73BE: 041c         add r4,r0,#0x0
080F73C0: e07b         ldrb r0,[r4,#0xf]
080F73C2: 0028         cmp r0,#0x0
080F73C4: 09d1         bne 0x080f73da
080F73C6: 201c         add r0,r4,#0x0
080F73C8: 00f09ef8     bl 0x080f7508
080F73CC: a07a         ldrb r0,[r4,#0xa]
080F73CE: fe21         mov r1,#0xfe
080F73D0: 0140         and r1,r0
080F73D2: a172         strb r1,[r4,#0xa]
080F73D4: e07b         ldrb r0,[r4,#0xf]
080F73D6: 0130         add r0,#0x1
080F73D8: e073         strb r0,[r4,#0xf]
080F73DA: 201c         add r0,r4,#0x0
080F73DC: b430         add r0,#0xb4
080F73DE: 0078         ldrb r0,[r0,#0x0]
080F73E0: 0028         cmp r0,#0x0
080F73E2: 0bd1         bne 0x080f73fc
080F73E4: 0749         ldr r1,[0x080f7404]
080F73E6: 607a         ldrb r0,[r4,#0x9]
080F73E8: 8000         lsl r0,r0,#0x2
080F73EA: 4018         add r0,r0,r1
080F73EC: 0221         mov r1,#0x2
080F73EE: e160         str r1,[r4,#0xc]
080F73F0: 0068         ldr r0,[r0,#0x0]
080F73F2: 8068         ldr r0,[r0,#0x8]
080F73F4: 6061         str r0,[r4,#0x14]
080F73F6: 201c         add r0,r4,#0x0
080F73F8: 00f006f8     bl 0x080f7408
080F73FC: 10bc         pop {r4}
080F73FE: 01bc         pop {r0}
080F7400: 0047         bx r0
