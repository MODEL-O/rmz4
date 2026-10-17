; undefined FUN_0804a264(void)
; entry 0x804a264  size 40 bytes

0804A264: 00b5         push {lr}
0804A266: bdf709fd     bl 0x08007c7c
0804A26A: 0004         lsl r0,r0,#0x10
0804A26C: 000c         lsr r0,r0,#0x10
0804A26E: 011c         add r1,r0,#0x0
0804A270: 0f20         mov r0,#0xf
0804A272: 0840         and r0,r1
0804A274: 0f28         cmp r0,#0xf
0804A276: 06d0         beq 0x0804a286
0804A278: 8020         mov r0,#0x80
0804A27A: 0002         lsl r0,r0,#0x8
0804A27C: 0840         and r0,r1
0804A27E: 0028         cmp r0,#0x0
0804A280: 01d1         bne 0x0804a286
0804A282: 081c         add r0,r1,#0x0
0804A284: 00e0         b 0x0804a288
0804A286: 0020         mov r0,#0x0
0804A288: 02bc         pop {r1}
0804A28A: 0847         bx r1
