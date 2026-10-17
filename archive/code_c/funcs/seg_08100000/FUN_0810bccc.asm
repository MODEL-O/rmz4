; undefined FUN_0810bccc(void)
; entry 0x810bccc  size 50 bytes

0810BCCC: 10b5         push {r4,lr}
0810BCCE: 041c         add r4,r0,#0x0
0810BCD0: 0b49         ldr r1,[0x0810bd00]
0810BCD2: 207c         ldrb r0,[r4,#0x10]
0810BCD4: 8000         lsl r0,r0,#0x2
0810BCD6: 4018         add r0,r0,r1
0810BCD8: 0168         ldr r1,[r0,#0x0]
0810BCDA: 201c         add r0,r4,#0x0
0810BCDC: 1df050f9     bl 0x08128f80
0810BCE0: 0849         ldr r1,[0x0810bd04]
0810BCE2: 607a         ldrb r0,[r4,#0x9]
0810BCE4: 8000         lsl r0,r0,#0x2
0810BCE6: 4018         add r0,r0,r1
0810BCE8: 0121         mov r1,#0x1
0810BCEA: e160         str r1,[r4,#0xc]
0810BCEC: 0068         ldr r0,[r0,#0x0]
0810BCEE: 4068         ldr r0,[r0,#0x4]
0810BCF0: 6061         str r0,[r4,#0x14]
0810BCF2: 201c         add r0,r4,#0x0
0810BCF4: 00f008f8     bl 0x0810bd08
0810BCF8: 10bc         pop {r4}
0810BCFA: 01bc         pop {r0}
0810BCFC: 0047         bx r0
