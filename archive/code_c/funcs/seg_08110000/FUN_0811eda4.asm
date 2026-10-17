; undefined FUN_0811eda4(void)
; entry 0x811eda4  size 32 bytes

0811EDA4: 10b5         push {r4,lr}
0811EDA6: 041c         add r4,r0,#0x0
0811EDA8: 0649         ldr r1,[0x0811edc4]
0811EDAA: 6078         ldrb r0,[r4,#0x1]
0811EDAC: 8000         lsl r0,r0,#0x2
0811EDAE: 4018         add r0,r0,r1
0811EDB0: 0168         ldr r1,[r0,#0x0]
0811EDB2: 201c         add r0,r4,#0x0
0811EDB4: 0af0e4f8     bl 0x08128f80
0811EDB8: 201c         add r0,r4,#0x0
0811EDBA: 00f055fa     bl 0x0811f268
0811EDBE: 10bc         pop {r4}
0811EDC0: 01bc         pop {r0}
0811EDC2: 0047         bx r0
