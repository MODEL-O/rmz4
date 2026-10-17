; undefined FUN_0804c890(void)
; entry 0x804c890  size 72 bytes

0804C890: 10b5         push {r4,lr}
0804C892: 041c         add r4,r0,#0x0
0804C894: 1049         ldr r1,[0x0804c8d8]
0804C896: 607a         ldrb r0,[r4,#0x9]
0804C898: 8000         lsl r0,r0,#0x2
0804C89A: 4018         add r0,r0,r1
0804C89C: 0121         mov r1,#0x1
0804C89E: e160         str r1,[r4,#0xc]
0804C8A0: 0068         ldr r0,[r0,#0x0]
0804C8A2: 4068         ldr r0,[r0,#0x4]
0804C8A4: 6061         str r0,[r4,#0x14]
0804C8A6: 201c         add r0,r4,#0x0
0804C8A8: d0f7f8f9     bl 0x0801cc9c
0804C8AC: 201c         add r0,r4,#0x0
0804C8AE: d0f71dfb     bl 0x0801ceec
0804C8B2: a17a         ldrb r1,[r4,#0xa]
0804C8B4: 0120         mov r0,#0x1
0804C8B6: 0843         orr r0,r1
0804C8B8: 0221         mov r1,#0x2
0804C8BA: 0843         orr r0,r1
0804C8BC: a072         strb r0,[r4,#0xa]
0804C8BE: 0749         ldr r1,[0x0804c8dc]
0804C8C0: 201c         add r0,r4,#0x0
0804C8C2: d0f71dfb     bl 0x0801cf00
0804C8C6: 201c         add r0,r4,#0x0
0804C8C8: d0f792fb     bl 0x0801cff0
0804C8CC: 201c         add r0,r4,#0x0
0804C8CE: fff72bff     bl 0x0804c728
0804C8D2: 10bc         pop {r4}
0804C8D4: 01bc         pop {r0}
0804C8D6: 0047         bx r0
