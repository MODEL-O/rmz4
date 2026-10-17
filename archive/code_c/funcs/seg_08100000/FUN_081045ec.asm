; undefined FUN_081045ec(void)
; entry 0x81045ec  size 50 bytes

081045EC: 10b5         push {r4,lr}
081045EE: 041c         add r4,r0,#0x0
081045F0: 18f754fb     bl 0x0801cc9c
081045F4: a17a         ldrb r1,[r4,#0xa]
081045F6: 0120         mov r0,#0x1
081045F8: 0843         orr r0,r1
081045FA: 0221         mov r1,#0x2
081045FC: 0843         orr r0,r1
081045FE: a072         strb r0,[r4,#0xa]
08104600: 0748         ldr r0,[0x08104620]
08104602: 2066         str r0,[r4,#0x60]
08104604: d921         mov r1,#0xd9
08104606: 0902         lsl r1,r1,#0x8
08104608: 201c         add r0,r4,#0x0
0810460A: 18f779fc     bl 0x0801cf00
0810460E: 4934         add r4,#0x49
08104610: 2078         ldrb r0,[r4,#0x0]
08104612: 0c21         mov r1,#0xc
08104614: 0843         orr r0,r1
08104616: 2070         strb r0,[r4,#0x0]
08104618: 10bc         pop {r4}
0810461A: 01bc         pop {r0}
0810461C: 0047         bx r0
