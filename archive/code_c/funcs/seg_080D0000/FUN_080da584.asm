; undefined FUN_080da584(void)
; entry 0x80da584  size 72 bytes

080DA584: 10b5         push {r4,lr}
080DA586: 041c         add r4,r0,#0x0
080DA588: 42f788fb     bl 0x0801cc9c
080DA58C: a17a         ldrb r1,[r4,#0xa]
080DA58E: 0120         mov r0,#0x1
080DA590: 0843         orr r0,r1
080DA592: 0221         mov r1,#0x2
080DA594: 0843         orr r0,r1
080DA596: a072         strb r0,[r4,#0xa]
080DA598: 221c         add r2,r4,#0x0
080DA59A: 4932         add r2,#0x49
080DA59C: 1078         ldrb r0,[r2,#0x0]
080DA59E: 0c21         mov r1,#0xc
080DA5A0: 0843         orr r0,r1
080DA5A2: 1070         strb r0,[r2,#0x0]
080DA5A4: b821         mov r1,#0xb8
080DA5A6: 8901         lsl r1,r1,#0x6
080DA5A8: 201c         add r0,r4,#0x0
080DA5AA: 42f7a9fc     bl 0x0801cf00
080DA5AE: 0749         ldr r1,[0x080da5cc]
080DA5B0: 607a         ldrb r0,[r4,#0x9]
080DA5B2: 8000         lsl r0,r0,#0x2
080DA5B4: 4018         add r0,r0,r1
080DA5B6: 0121         mov r1,#0x1
080DA5B8: e160         str r1,[r4,#0xc]
080DA5BA: 0068         ldr r0,[r0,#0x0]
080DA5BC: 4068         ldr r0,[r0,#0x4]
080DA5BE: 6061         str r0,[r4,#0x14]
080DA5C0: 201c         add r0,r4,#0x0
080DA5C2: 00f005f8     bl 0x080da5d0
080DA5C6: 10bc         pop {r4}
080DA5C8: 01bc         pop {r0}
080DA5CA: 0047         bx r0
