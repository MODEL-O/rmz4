; undefined FUN_08099f68(void)
; entry 0x8099f68  size 50 bytes

08099F68: 10b5         push {r4,lr}
08099F6A: 041c         add r4,r0,#0x0
08099F6C: 0b49         ldr r1,[0x08099f9c]
08099F6E: 207c         ldrb r0,[r4,#0x10]
08099F70: 8000         lsl r0,r0,#0x2
08099F72: 4018         add r0,r0,r1
08099F74: 0168         ldr r1,[r0,#0x0]
08099F76: 201c         add r0,r4,#0x0
08099F78: 8ff002f8     bl 0x08128f80
08099F7C: 0849         ldr r1,[0x08099fa0]
08099F7E: 607a         ldrb r0,[r4,#0x9]
08099F80: 8000         lsl r0,r0,#0x2
08099F82: 4018         add r0,r0,r1
08099F84: 0121         mov r1,#0x1
08099F86: e160         str r1,[r4,#0xc]
08099F88: 0068         ldr r0,[r0,#0x0]
08099F8A: 4068         ldr r0,[r0,#0x4]
08099F8C: 6061         str r0,[r4,#0x14]
08099F8E: 201c         add r0,r4,#0x0
08099F90: 00f008f8     bl 0x08099fa4
08099F94: 10bc         pop {r4}
08099F96: 01bc         pop {r0}
08099F98: 0047         bx r0
