@ FUN_080b20c4  entry 0x080b20c4  size 78
.thumb
.org 0xb20c4
FUN_080b20c4:
	push {r4, r5, lr}	@ 000b20c4 30b5
.org 0xb20c6
	adds r5, r0, #0	@ 000b20c6 051c
.org 0xb20c8
	adds r4, r5, #0	@ 000b20c8 2c1c
.org 0xb20ca
	adds r4, #192	@ 000b20ca c034
.org 0xb20cc
	ldr r0, [r4, #0]	@ 000b20cc 2068
.org 0xb20ce
	cmp r0, #0	@ 000b20ce 0028
.org 0xb20d0
	bne.n 0xb210c	@ 000b20d0 1cd1
.org 0xb20d2
	adds r0, r5, #0	@ 000b20d2 281c
.org 0xb20d4
	adds r0, #140	@ 000b20d4 8c30
.org 0xb20d6
	ldr r0, [r0, #0]	@ 000b20d6 0068
.org 0xb20d8
	movs r1, #1	@ 000b20d8 0121
.org 0xb20da
	ands r0, r1	@ 000b20da 0840
.org 0xb20dc
	cmp r0, #0	@ 000b20dc 0028
.org 0xb20de
	beq.n 0xb210c	@ 000b20de 15d0
.org 0xb20e0
	ldr r2, [pc, #48]	@ 000b20e0 0c4a
.org 0xb20e2
	movs r0, #0	@ 000b20e2 0020
.org 0xb20e4
	adds r1, r5, #0	@ 000b20e4 291c
.org 0xb20e6
	bl 0x2adac	@ 000b20e6 78f761fe
.org 0xb20ea
	str r0, [r4, #0]	@ 000b20ea 2060
.org 0xb20ec
	cmp r0, #0	@ 000b20ec 0028
.org 0xb20ee
	beq.n 0xb210c	@ 000b20ee 0dd0
.org 0xb20f0
	adds r0, r5, #0	@ 000b20f0 281c
.org 0xb20f2
	adds r0, #116	@ 000b20f2 7430
.org 0xb20f4
	ldr r1, [pc, #32]	@ 000b20f4 0849
.org 0xb20f6
	bl 0x5784	@ 000b20f6 53f745fb
.org 0xb20fa
	ldr r4, [pc, #32]	@ 000b20fa 084c
.org 0xb20fc
	adds r0, r5, #0	@ 000b20fc 281c
.org 0xb20fe
	adds r1, r4, #0	@ 000b20fe 211c
.org 0xb2100
	bl 0x1cf00	@ 000b2100 6af7fefe
.org 0xb2104
	adds r0, r5, #0	@ 000b2104 281c
.org 0xb2106
	adds r1, r4, #0	@ 000b2106 211c
.org 0xb2108
	bl 0x1cf00	@ 000b2108 6af7fafe
.org 0xb210c
	pop {r4, r5}	@ 000b210c 30bc
.org 0xb210e
	pop {r0}	@ 000b210e 01bc
.org 0xb2110
	bx r0	@ 000b2110 0047
