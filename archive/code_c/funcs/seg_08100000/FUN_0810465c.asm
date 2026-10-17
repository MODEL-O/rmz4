; undefined FUN_0810465c(void)
; entry 0x810465c  size 50 bytes

0810465C: 10b5         push {r4,lr}
0810465E: 041c         add r4,r0,#0x0
08104660: 18f71cfb     bl 0x0801cc9c
08104664: a17a         ldrb r1,[r4,#0xa]
08104666: 0120         mov r0,#0x1
08104668: 0843         orr r0,r1
0810466A: 0221         mov r1,#0x2
0810466C: 0843         orr r0,r1
0810466E: a072         strb r0,[r4,#0xa]
08104670: 0748         ldr r0,[0x08104690]
08104672: 2066         str r0,[r4,#0x60]
08104674: db21         mov r1,#0xdb
08104676: 0902         lsl r1,r1,#0x8
08104678: 201c         add r0,r4,#0x0
0810467A: 18f741fc     bl 0x0801cf00
0810467E: 4934         add r4,#0x49
08104680: 2078         ldrb r0,[r4,#0x0]
08104682: 0c21         mov r1,#0xc
08104684: 0843         orr r0,r1
08104686: 2070         strb r0,[r4,#0x0]
08104688: 10bc         pop {r4}
0810468A: 01bc         pop {r0}
0810468C: 0047         bx r0
