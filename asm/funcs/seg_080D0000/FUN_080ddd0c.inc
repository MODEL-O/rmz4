@ FUN_080ddd0c  entry 0x080ddd0c  size 56
.thumb
.org 0xddd0c
FUN_080ddd0c:
	push {r4, lr}	@ 000ddd0c 10b5
.org 0xddd0e
	adds r4, r0, #0	@ 000ddd0e 041c
.org 0xddd10
	bl 0x1cff0	@ 000ddd10 3ff76ef9
.org 0xddd14
	ldr r0, [r4, #84]	@ 000ddd14 606d
.org 0xddd16
	ldr r1, [r4, #92]	@ 000ddd16 e16d
.org 0xddd18
	adds r0, r0, r1	@ 000ddd18 4018
.org 0xddd1a
	str r0, [r4, #84]	@ 000ddd1a 6065
.org 0xddd1c
	ldr r0, [r4, #100]	@ 000ddd1c 606e
.org 0xddd1e
	adds r1, r1, r0	@ 000ddd1e 0918
.org 0xddd20
	str r1, [r4, #92]	@ 000ddd20 e165
.org 0xddd22
	cmp r1, #0	@ 000ddd22 0029
.org 0xddd24
	bne.n 0xddd3e	@ 000ddd24 0bd1
.org 0xddd26
	ldr r1, [pc, #28]	@ 000ddd26 0749
.org 0xddd28
	ldrb r0, [r4, #9]	@ 000ddd28 607a
.org 0xddd2a
	lsls r0, r0, #2	@ 000ddd2a 8000
.org 0xddd2c
	adds r0, r0, r1	@ 000ddd2c 4018
.org 0xddd2e
	movs r1, #2	@ 000ddd2e 0221
.org 0xddd30
	str r1, [r4, #12]	@ 000ddd30 e160
.org 0xddd32
	ldr r0, [r0, #0]	@ 000ddd32 0068
.org 0xddd34
	ldr r0, [r0, #8]	@ 000ddd34 8068
.org 0xddd36
	str r0, [r4, #20]	@ 000ddd36 6061
.org 0xddd38
	adds r0, r4, #0	@ 000ddd38 201c
.org 0xddd3a
	bl 0xdd6e0	@ 000ddd3a fff7d1fc
.org 0xddd3e
	pop {r4}	@ 000ddd3e 10bc
.org 0xddd40
	pop {r0}	@ 000ddd40 01bc
.org 0xddd42
	bx r0	@ 000ddd42 0047
