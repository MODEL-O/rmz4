; undefined FUN_080b772c(void)
; entry 0x80b772c  size 72 bytes

080B772C: 70b5         push {r4,r5,r6,lr}
080B772E: 041c         add r4,r0,#0x0
080B7730: 6069         ldr r0,[r4,#0x14]
080B7732: 0126         mov r6,#0x1
080B7734: 3040         and r0,r6
080B7736: 0028         cmp r0,#0x0
080B7738: 19d0         beq 0x080b776e
080B773A: e56a         ldr r5,[r4,#0x2c]
080B773C: 0a20         mov r0,#0xa
080B773E: 4ff721f9     bl 0x08006984
080B7742: 6169         ldr r1,[r4,#0x14]
080B7744: 8020         mov r0,#0x80
080B7746: 8000         lsl r0,r0,#0x2
080B7748: 0840         and r0,r1
080B774A: 0028         cmp r0,#0x0
080B774C: 0fd0         beq 0x080b776e
080B774E: 8020         mov r0,#0x80
080B7750: 8002         lsl r0,r0,#0xa
080B7752: 0140         and r1,r0
080B7754: 0029         cmp r1,#0x0
080B7756: 0ad0         beq 0x080b776e
080B7758: 281c         add r0,r5,#0x0
080B775A: b630         add r0,#0xb6
080B775C: 0670         strb r6,[r0,#0x0]
080B775E: 0548         ldr r0,[0x080b7774]
080B7760: 0068         ldr r0,[r0,#0x0]
080B7762: 0028         cmp r0,#0x0
080B7764: 03d0         beq 0x080b776e
080B7766: 0621         mov r1,#0x6
080B7768: 0722         mov r2,#0x7
080B776A: 82f705ff     bl 0x0803a578
080B776E: 70bc         pop {r4,r5,r6}
080B7770: 01bc         pop {r0}
080B7772: 0047         bx r0
