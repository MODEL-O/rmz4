; undefined FUN_081046cc(void)
; entry 0x81046cc  size 48 bytes

081046CC: 10b5         push {r4,lr}
081046CE: 041c         add r4,r0,#0x0
081046D0: 18f7e4fa     bl 0x0801cc9c
081046D4: a17a         ldrb r1,[r4,#0xa]
081046D6: 0120         mov r0,#0x1
081046D8: 0843         orr r0,r1
081046DA: 0221         mov r1,#0x2
081046DC: 0843         orr r0,r1
081046DE: a072         strb r0,[r4,#0xa]
081046E0: 0648         ldr r0,[0x081046fc]
081046E2: 2066         str r0,[r4,#0x60]
081046E4: 0649         ldr r1,[0x08104700]
081046E6: 201c         add r0,r4,#0x0
081046E8: 18f70afc     bl 0x0801cf00
081046EC: 4934         add r4,#0x49
081046EE: 2078         ldrb r0,[r4,#0x0]
081046F0: 0c21         mov r1,#0xc
081046F2: 0843         orr r0,r1
081046F4: 2070         strb r0,[r4,#0x0]
081046F6: 10bc         pop {r4}
081046F8: 01bc         pop {r0}
081046FA: 0047         bx r0
