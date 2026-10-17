; undefined FUN_0811d9cc(void)
; entry 0x811d9cc  size 32 bytes

0811D9CC: 10b5         push {r4,lr}
0811D9CE: 041c         add r4,r0,#0x0
0811D9D0: 0649         ldr r1,[0x0811d9ec]
0811D9D2: 6078         ldrb r0,[r4,#0x1]
0811D9D4: 8000         lsl r0,r0,#0x2
0811D9D6: 4018         add r0,r0,r1
0811D9D8: 0168         ldr r1,[r0,#0x0]
0811D9DA: 201c         add r0,r4,#0x0
0811D9DC: 0bf0d0fa     bl 0x08128f80
0811D9E0: 201c         add r0,r4,#0x0
0811D9E2: 01f073f8     bl 0x0811eacc
0811D9E6: 10bc         pop {r4}
0811D9E8: 01bc         pop {r0}
0811D9EA: 0047         bx r0
