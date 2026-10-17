; undefined FUN_08078678(void)
; entry 0x8078678  size 30 bytes

08078678: 10b5         push {r4,lr}
0807867A: 041c         add r4,r0,#0x0
0807867C: 00f0f8fd     bl 0x08079270
08078680: 0549         ldr r1,[0x08078698]
08078682: 607b         ldrb r0,[r4,#0xd]
08078684: 8000         lsl r0,r0,#0x2
08078686: 4018         add r0,r0,r1
08078688: 0168         ldr r1,[r0,#0x0]
0807868A: 201c         add r0,r4,#0x0
0807868C: b0f078fc     bl 0x08128f80
08078690: 10bc         pop {r4}
08078692: 01bc         pop {r0}
08078694: 0047         bx r0
