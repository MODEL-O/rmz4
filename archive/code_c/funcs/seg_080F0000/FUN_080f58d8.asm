; undefined FUN_080f58d8(void)
; entry 0x80f58d8  size 50 bytes

080F58D8: 10b5         push {r4,lr}
080F58DA: 041c         add r4,r0,#0x0
080F58DC: 0b49         ldr r1,[0x080f590c]
080F58DE: 207c         ldrb r0,[r4,#0x10]
080F58E0: 8000         lsl r0,r0,#0x2
080F58E2: 4018         add r0,r0,r1
080F58E4: 0168         ldr r1,[r0,#0x0]
080F58E6: 201c         add r0,r4,#0x0
080F58E8: 33f04afb     bl 0x08128f80
080F58EC: 0849         ldr r1,[0x080f5910]
080F58EE: 607a         ldrb r0,[r4,#0x9]
080F58F0: 8000         lsl r0,r0,#0x2
080F58F2: 4018         add r0,r0,r1
080F58F4: 0121         mov r1,#0x1
080F58F6: e160         str r1,[r4,#0xc]
080F58F8: 0068         ldr r0,[r0,#0x0]
080F58FA: 4068         ldr r0,[r0,#0x4]
080F58FC: 6061         str r0,[r4,#0x14]
080F58FE: 201c         add r0,r4,#0x0
080F5900: 00f008f8     bl 0x080f5914
080F5904: 10bc         pop {r4}
080F5906: 01bc         pop {r0}
080F5908: 0047         bx r0
