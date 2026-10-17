@ FUN_080c1b28  entry 0x080c1b28  size 70
.thumb
.org 0xc1b28
FUN_080c1b28:
	push {r4, r5, lr}	@ 000c1b28 30b5
.org 0xc1b2a
	adds r5, r0, #0	@ 000c1b2a 051c
.org 0xc1b2c
	ldr r0, [pc, #64]	@ 000c1b2c 1048
.org 0xc1b2e
	ldr r0, [r0, #0]	@ 000c1b2e 0068
.org 0xc1b30
	bl 0x5500	@ 000c1b30 43f7e6fc
.org 0xc1b34
	adds r4, r0, #0	@ 000c1b34 041c
.org 0xc1b36
	cmp r4, #0	@ 000c1b36 002c
.org 0xc1b38
	beq.n 0xc1b68	@ 000c1b38 16d0
.org 0xc1b3a
	adds r1, r4, #0	@ 000c1b3a 211c
.org 0xc1b3c
	adds r1, #37	@ 000c1b3c 2531
.org 0xc1b3e
	movs r3, #0	@ 000c1b3e 0023
.org 0xc1b40
	movs r0, #8	@ 000c1b40 0820
.org 0xc1b42
	strb r0, [r1, #0]	@ 000c1b42 0870
.org 0xc1b44
	ldr r1, [pc, #44]	@ 000c1b44 0b49
.org 0xc1b46
	movs r0, #14	@ 000c1b46 0e20
.org 0xc1b48
	strb r0, [r4, #9]	@ 000c1b48 6072
.org 0xc1b4a
	ldr r0, [r1, #56]	@ 000c1b4a 886b
.org 0xc1b4c
	ldr r0, [r0, #0]	@ 000c1b4c 0068
.org 0xc1b4e
	str r0, [r4, #20]	@ 000c1b4e 6061
.org 0xc1b50
	movs r2, #0	@ 000c1b50 0022
.org 0xc1b52
	strh r3, [r4, #32]	@ 000c1b52 2384
.org 0xc1b54
	adds r0, r4, #0	@ 000c1b54 201c
.org 0xc1b56
	adds r0, #34	@ 000c1b56 2230
.org 0xc1b58
	strb r2, [r0, #0]	@ 000c1b58 0270
.org 0xc1b5a
	ldr r0, [r5, #0]	@ 000c1b5a 2868
.org 0xc1b5c
	ldr r1, [r5, #4]	@ 000c1b5c 6968
.org 0xc1b5e
	str r0, [r4, #84]	@ 000c1b5e 6065
.org 0xc1b60
	str r1, [r4, #88]	@ 000c1b60 a165
.org 0xc1b62
	movs r0, #3	@ 000c1b62 0320
.org 0xc1b64
	strb r0, [r4, #16]	@ 000c1b64 2074
.org 0xc1b66
	strb r2, [r4, #17]	@ 000c1b66 6274
.org 0xc1b68
	pop {r4, r5}	@ 000c1b68 30bc
.org 0xc1b6a
	pop {r0}	@ 000c1b6a 01bc
.org 0xc1b6c
	bx r0	@ 000c1b6c 0047
