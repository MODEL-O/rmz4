; undefined FUN_08102670(void)
; entry 0x8102670  size 32 bytes

08102670: 10b5         push {r4,lr}
08102672: 041c         add r4,r0,#0x0
08102674: 0649         ldr r1,[0x08102690]
08102676: 207c         ldrb r0,[r4,#0x10]
08102678: 8000         lsl r0,r0,#0x2
0810267A: 4018         add r0,r0,r1
0810267C: 0168         ldr r1,[r0,#0x0]
0810267E: 201c         add r0,r4,#0x0
08102680: 26f07efc     bl 0x08128f80
08102684: 0020         mov r0,#0x0
08102686: 6073         strb r0,[r4,#0xd]
08102688: a073         strb r0,[r4,#0xe]
0810268A: 10bc         pop {r4}
0810268C: 01bc         pop {r0}
0810268E: 0047         bx r0
