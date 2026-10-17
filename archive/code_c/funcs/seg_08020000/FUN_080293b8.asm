; undefined FUN_080293b8(void)
; entry 0x80293b8  size 60 bytes

080293B8: 30b5         push {r4,r5,lr}
080293BA: 041c         add r4,r0,#0x0
080293BC: 2569         ldr r5,[r4,#0x10]
080293BE: e068         ldr r0,[r4,#0xc]
080293C0: 4078         ldrb r0,[r0,#0x1]
080293C2: 0028         cmp r0,#0x0
080293C4: 06d1         bne 0x080293d4
080293C6: 0248         ldr r0,[0x080293d0]
080293C8: 00f0eefb     bl 0x08029ba8
080293CC: 14e0         b 0x080293f8
080293D4: 0748         ldr r0,[0x080293f4]
080293D6: 00f003fc     bl 0x08029be0
080293DA: 0128         cmp r0,#0x1
080293DC: 0cd1         bne 0x080293f8
080293DE: e068         ldr r0,[r4,#0xc]
080293E0: 0838         sub r0,#0x8
080293E2: e060         str r0,[r4,#0xc]
080293E4: 002d         cmp r5,#0x0
080293E6: 02d0         beq 0x080293ee
080293E8: 281c         add r0,r5,#0x0
080293EA: 02f0e7f9     bl 0x0802b7bc
080293EE: 0120         mov r0,#0x1
080293F0: 03e0         b 0x080293fa
080293F8: 0020         mov r0,#0x0
080293FA: 30bc         pop {r4,r5}
080293FC: 02bc         pop {r1}
080293FE: 0847         bx r1
