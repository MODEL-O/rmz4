; undefined FUN_0810ada0(void)
; entry 0x810ada0  size 62 bytes

0810ADA0: 00b5         push {lr}
0810ADA2: 021c         add r2,r0,#0x0
0810ADA4: 906a         ldr r0,[r2,#0x28]
0810ADA6: 0949         ldr r1,[0x0810adcc]
0810ADA8: 4018         add r0,r0,r1
0810ADAA: 4079         ldrb r0,[r0,#0x5]
0810ADAC: 0028         cmp r0,#0x0
0810ADAE: 11d0         beq 0x0810add4
0810ADB0: 0749         ldr r1,[0x0810add0]
0810ADB2: 507a         ldrb r0,[r2,#0x9]
0810ADB4: 8000         lsl r0,r0,#0x2
0810ADB6: 4018         add r0,r0,r1
0810ADB8: 0221         mov r1,#0x2
0810ADBA: d160         str r1,[r2,#0xc]
0810ADBC: 0068         ldr r0,[r0,#0x0]
0810ADBE: 8068         ldr r0,[r0,#0x8]
0810ADC0: 5061         str r0,[r2,#0x14]
0810ADC2: 101c         add r0,r2,#0x0
0810ADC4: 00f012f8     bl 0x0810adec
0810ADC8: 0ce0         b 0x0810ade4
0810ADD4: 0448         ldr r0,[0x0810ade8]
0810ADD6: 117c         ldrb r1,[r2,#0x10]
0810ADD8: 8900         lsl r1,r1,#0x2
0810ADDA: 0918         add r1,r1,r0
0810ADDC: 0968         ldr r1,[r1,#0x0]
0810ADDE: 101c         add r0,r2,#0x0
0810ADE0: 1ef0cef8     bl 0x08128f80
0810ADE4: 01bc         pop {r0}
0810ADE6: 0047         bx r0
