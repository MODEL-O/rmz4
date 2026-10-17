; undefined FUN_0809c5cc(void)
; entry 0x809c5cc  size 50 bytes

0809C5CC: 10b5         push {r4,lr}
0809C5CE: 041c         add r4,r0,#0x0
0809C5D0: 0b49         ldr r1,[0x0809c600]
0809C5D2: 607a         ldrb r0,[r4,#0x9]
0809C5D4: 8000         lsl r0,r0,#0x2
0809C5D6: 4018         add r0,r0,r1
0809C5D8: 0121         mov r1,#0x1
0809C5DA: e160         str r1,[r4,#0xc]
0809C5DC: 0068         ldr r0,[r0,#0x0]
0809C5DE: 4068         ldr r0,[r0,#0x4]
0809C5E0: 6061         str r0,[r4,#0x14]
0809C5E2: 0849         ldr r1,[0x0809c604]
0809C5E4: 207c         ldrb r0,[r4,#0x10]
0809C5E6: 8000         lsl r0,r0,#0x2
0809C5E8: 4018         add r0,r0,r1
0809C5EA: 0168         ldr r1,[r0,#0x0]
0809C5EC: 201c         add r0,r4,#0x0
0809C5EE: 8cf0c7fc     bl 0x08128f80
0809C5F2: 201c         add r0,r4,#0x0
0809C5F4: 00f008f8     bl 0x0809c608
0809C5F8: 10bc         pop {r4}
0809C5FA: 01bc         pop {r0}
0809C5FC: 0047         bx r0
