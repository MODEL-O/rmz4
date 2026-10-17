; undefined FUN_0809cde0(void)
; entry 0x809cde0  size 50 bytes

0809CDE0: 10b5         push {r4,lr}
0809CDE2: 041c         add r4,r0,#0x0
0809CDE4: 0b49         ldr r1,[0x0809ce14]
0809CDE6: 607a         ldrb r0,[r4,#0x9]
0809CDE8: 8000         lsl r0,r0,#0x2
0809CDEA: 4018         add r0,r0,r1
0809CDEC: 0121         mov r1,#0x1
0809CDEE: e160         str r1,[r4,#0xc]
0809CDF0: 0068         ldr r0,[r0,#0x0]
0809CDF2: 4068         ldr r0,[r0,#0x4]
0809CDF4: 6061         str r0,[r4,#0x14]
0809CDF6: 0849         ldr r1,[0x0809ce18]
0809CDF8: 207c         ldrb r0,[r4,#0x10]
0809CDFA: 8000         lsl r0,r0,#0x2
0809CDFC: 4018         add r0,r0,r1
0809CDFE: 0168         ldr r1,[r0,#0x0]
0809CE00: 201c         add r0,r4,#0x0
0809CE02: 8cf0bdf8     bl 0x08128f80
0809CE06: 201c         add r0,r4,#0x0
0809CE08: 00f008f8     bl 0x0809ce1c
0809CE0C: 10bc         pop {r4}
0809CE0E: 01bc         pop {r0}
0809CE10: 0047         bx r0
