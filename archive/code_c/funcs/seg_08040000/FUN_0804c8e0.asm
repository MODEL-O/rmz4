; undefined FUN_0804c8e0(void)
; entry 0x804c8e0  size 80 bytes

0804C8E0: 30b5         push {r4,r5,lr}
0804C8E2: 041c         add r4,r0,#0x0
0804C8E4: 1249         ldr r1,[0x0804c930]
0804C8E6: 607a         ldrb r0,[r4,#0x9]
0804C8E8: 8000         lsl r0,r0,#0x2
0804C8EA: 4018         add r0,r0,r1
0804C8EC: 0121         mov r1,#0x1
0804C8EE: e160         str r1,[r4,#0xc]
0804C8F0: 0068         ldr r0,[r0,#0x0]
0804C8F2: 4068         ldr r0,[r0,#0x4]
0804C8F4: 6061         str r0,[r4,#0x14]
0804C8F6: 201c         add r0,r4,#0x0
0804C8F8: d0f7d0f9     bl 0x0801cc9c
0804C8FC: 201c         add r0,r4,#0x0
0804C8FE: d0f7f5fa     bl 0x0801ceec
0804C902: a17a         ldrb r1,[r4,#0xa]
0804C904: 0120         mov r0,#0x1
0804C906: 0025         mov r5,#0x0
0804C908: 0843         orr r0,r1
0804C90A: 0221         mov r1,#0x2
0804C90C: 0843         orr r0,r1
0804C90E: a072         strb r0,[r4,#0xa]
0804C910: 0849         ldr r1,[0x0804c934]
0804C912: 201c         add r0,r4,#0x0
0804C914: d0f7f4fa     bl 0x0801cf00
0804C918: 201c         add r0,r4,#0x0
0804C91A: d0f769fb     bl 0x0801cff0
0804C91E: 2566         str r5,[r4,#0x60]
0804C920: 4020         mov r0,#0x40
0804C922: a074         strb r0,[r4,#0x12]
0804C924: 201c         add r0,r4,#0x0
0804C926: fff7fffe     bl 0x0804c728
0804C92A: 30bc         pop {r4,r5}
0804C92C: 01bc         pop {r0}
0804C92E: 0047         bx r0
