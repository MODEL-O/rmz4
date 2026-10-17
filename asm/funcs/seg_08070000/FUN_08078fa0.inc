@ FUN_08078fa0  entry 0x08078fa0  size 58
.thumb
.org 0x78fa0
FUN_08078fa0:
	push {r4, r5, lr}	@ 00078fa0 30b5
.org 0x78fa2
	adds r4, r0, #0	@ 00078fa2 041c
.org 0x78fa4
	adds r5, r4, #0	@ 00078fa4 251c
.org 0x78fa6
	adds r5, #212	@ 00078fa6 d435
.org 0x78fa8
	ldrh r0, [r5, #0]	@ 00078fa8 2888
.org 0x78faa
	adds r0, #1	@ 00078faa 0130
.org 0x78fac
	strh r0, [r5, #0]	@ 00078fac 2880
.org 0x78fae
	lsls r0, r0, #16	@ 00078fae 0004
.org 0x78fb0
	lsrs r0, r0, #16	@ 00078fb0 000c
.org 0x78fb2
	cmp r0, #104	@ 00078fb2 6828
.org 0x78fb4
	bhi.n 0x78fc0	@ 00078fb4 04d8
.org 0x78fb6
	adds r0, r4, #0	@ 00078fb6 201c
.org 0x78fb8
	adds r0, #214	@ 00078fb8 d630
.org 0x78fba
	ldrb r0, [r0, #0]	@ 00078fba 0078
.org 0x78fbc
	cmp r0, #3	@ 00078fbc 0328
.org 0x78fbe
	beq.n 0x78fd4	@ 00078fbe 09d0
.org 0x78fc0
	movs r0, #200	@ 00078fc0 c820
.org 0x78fc2
	lsls r0, r0, #1	@ 00078fc2 4000
.org 0x78fc4
	bl 0x2b10	@ 00078fc4 89f7a4fd
.org 0x78fc8
	adds r1, r4, #0	@ 00078fc8 211c
.org 0x78fca
	adds r1, #214	@ 00078fca d631
.org 0x78fcc
	movs r0, #3	@ 00078fcc 0320
.org 0x78fce
	strb r0, [r1, #0]	@ 00078fce 0870
.org 0x78fd0
	movs r0, #0	@ 00078fd0 0020
.org 0x78fd2
	strh r0, [r5, #0]	@ 00078fd2 2880
.org 0x78fd4
	pop {r4, r5}	@ 00078fd4 30bc
.org 0x78fd6
	pop {r0}	@ 00078fd6 01bc
.org 0x78fd8
	bx r0	@ 00078fd8 0047
