; undefined FUN_0811f838(void)
; entry 0x811f838  size 32 bytes

0811F838: 10b5         push {r4,lr}
0811F83A: 041c         add r4,r0,#0x0
0811F83C: 0649         ldr r1,[0x0811f858]
0811F83E: 6078         ldrb r0,[r4,#0x1]
0811F840: 8000         lsl r0,r0,#0x2
0811F842: 4018         add r0,r0,r1
0811F844: 0168         ldr r1,[r0,#0x0]
0811F846: 201c         add r0,r4,#0x0
0811F848: 09f09afb     bl 0x08128f80
0811F84C: 201c         add r0,r4,#0x0
0811F84E: 00f0c3f9     bl 0x0811fbd8
0811F852: 10bc         pop {r4}
0811F854: 01bc         pop {r0}
0811F856: 0047         bx r0
