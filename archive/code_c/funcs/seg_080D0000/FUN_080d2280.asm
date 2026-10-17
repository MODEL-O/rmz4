; undefined FUN_080d2280(void)
; entry 0x80d2280  size 62 bytes

080D2280: 10b5         push {r4,lr}
080D2282: 041c         add r4,r0,#0x0
080D2284: 4af70afd     bl 0x0801cc9c
080D2288: a17a         ldrb r1,[r4,#0xa]
080D228A: 0120         mov r0,#0x1
080D228C: 0843         orr r0,r1
080D228E: 0221         mov r1,#0x2
080D2290: 0843         orr r0,r1
080D2292: a072         strb r0,[r4,#0xa]
080D2294: 201c         add r0,r4,#0x0
080D2296: 0521         mov r1,#0x5
080D2298: 4af732fe     bl 0x0801cf00
080D229C: 0420         mov r0,#0x4
080D229E: a074         strb r0,[r4,#0x12]
080D22A0: 0749         ldr r1,[0x080d22c0]
080D22A2: 607a         ldrb r0,[r4,#0x9]
080D22A4: 8000         lsl r0,r0,#0x2
080D22A6: 4018         add r0,r0,r1
080D22A8: 0121         mov r1,#0x1
080D22AA: e160         str r1,[r4,#0xc]
080D22AC: 0068         ldr r0,[r0,#0x0]
080D22AE: 4068         ldr r0,[r0,#0x4]
080D22B0: 6061         str r0,[r4,#0x14]
080D22B2: 201c         add r0,r4,#0x0
080D22B4: fff78cfd     bl 0x080d1dd0
080D22B8: 10bc         pop {r4}
080D22BA: 01bc         pop {r0}
080D22BC: 0047         bx r0
