@ FUN_080ddb04  entry 0x080ddb04  size 108
.thumb
.org 0xddb04
FUN_080ddb04:
	push {r4, lr}	@ 000ddb04 10b5
.org 0xddb06
	adds r4, r0, #0	@ 000ddb06 041c
.org 0xddb08
	bl 0x1cc9c	@ 000ddb08 3ff7c8f8
.org 0xddb0c
	ldrb r1, [r4, #10]	@ 000ddb0c a17a
.org 0xddb0e
	movs r0, #1	@ 000ddb0e 0120
.org 0xddb10
	orrs r0, r1	@ 000ddb10 0843
.org 0xddb12
	movs r1, #2	@ 000ddb12 0221
.org 0xddb14
	orrs r0, r1	@ 000ddb14 0843
.org 0xddb16
	strb r0, [r4, #10]	@ 000ddb16 a072
.org 0xddb18
	ldrb r0, [r4, #17]	@ 000ddb18 607c
.org 0xddb1a
	cmp r0, #0	@ 000ddb1a 0028
.org 0xddb1c
	beq.n 0xddb2c	@ 000ddb1c 06d0
.org 0xddb1e
	ldr r1, [pc, #8]	@ 000ddb1e 0249
.org 0xddb20
	adds r0, r4, #0	@ 000ddb20 201c
.org 0xddb22
	bl 0x1cf00	@ 000ddb22 3ff7edf9
.org 0xddb26
	b.n 0xddb34	@ 000ddb26 05e0
.org 0xddb28
	.byte 0x0e,0xc9,0x00,0x00	@ 000ddb28 data
.org 0xddb2c
	ldr r1, [pc, #24]	@ 000ddb2c 0649
.org 0xddb2e
	adds r0, r4, #0	@ 000ddb2e 201c
.org 0xddb30
	bl 0x1cf00	@ 000ddb30 3ff7e6f9
.org 0xddb34
	adds r0, r4, #0	@ 000ddb34 201c
.org 0xddb36
	bl 0x1cff0	@ 000ddb36 3ff75bfa
.org 0xddb3a
	ldrb r1, [r4, #10]	@ 000ddb3a a17a
.org 0xddb3c
	movs r0, #16	@ 000ddb3c 1020
.org 0xddb3e
	ands r0, r1	@ 000ddb3e 0840
.org 0xddb40
	cmp r0, #0	@ 000ddb40 0028
.org 0xddb42
	bne.n 0xddb50	@ 000ddb42 05d1
.org 0xddb44
	ldr r0, [pc, #4]	@ 000ddb44 0148
.org 0xddb46
	b.n 0xddb54	@ 000ddb46 05e0
.org 0xddb48
	.byte 0x05,0xc9,0x00,0x00	@ 000ddb48 data
.org 0xddb4c
	.byte 0x80,0xfe,0xff,0xff	@ 000ddb4c data
.org 0xddb50
	movs r0, #192	@ 000ddb50 c020
.org 0xddb52
	lsls r0, r0, #1	@ 000ddb52 4000
.org 0xddb54
	str r0, [r4, #92]	@ 000ddb54 e065
.org 0xddb56
	ldr r0, [pc, #36]	@ 000ddb56 0948
.org 0xddb58
	str r0, [r4, #96]	@ 000ddb58 2066
.org 0xddb5a
	movs r0, #16	@ 000ddb5a 1020
.org 0xddb5c
	strb r0, [r4, #18]	@ 000ddb5c a074
.org 0xddb5e
	ldr r1, [pc, #32]	@ 000ddb5e 0849
.org 0xddb60
	ldrb r0, [r4, #9]	@ 000ddb60 607a
.org 0xddb62
	lsls r0, r0, #2	@ 000ddb62 8000
.org 0xddb64
	adds r0, r0, r1	@ 000ddb64 4018
.org 0xddb66
	movs r1, #1	@ 000ddb66 0121
.org 0xddb68
	str r1, [r4, #12]	@ 000ddb68 e160
.org 0xddb6a
	ldr r0, [r0, #0]	@ 000ddb6a 0068
.org 0xddb6c
	ldr r0, [r0, #4]	@ 000ddb6c 4068
.org 0xddb6e
	str r0, [r4, #20]	@ 000ddb6e 6061
