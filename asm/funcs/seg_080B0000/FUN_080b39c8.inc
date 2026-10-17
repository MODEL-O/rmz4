@ FUN_080b39c8  entry 0x080b39c8  size 80
.thumb
.org 0xb39c8
FUN_080b39c8:
	push {r4, r5, r6, lr}	@ 000b39c8 70b5
.org 0xb39ca
	adds r4, r0, #0	@ 000b39ca 041c
.org 0xb39cc
	ldr r0, [r4, #20]	@ 000b39cc 6069
.org 0xb39ce
	movs r6, #1	@ 000b39ce 0126
.org 0xb39d0
	ands r0, r6	@ 000b39d0 3040
.org 0xb39d2
	cmp r0, #0	@ 000b39d2 0028
.org 0xb39d4
	beq.n 0xb3a12	@ 000b39d4 1dd0
.org 0xb39d6
	ldr r5, [r4, #44]	@ 000b39d6 e56a
.org 0xb39d8
	movs r0, #30	@ 000b39d8 1e20
.org 0xb39da
	bl 0x6984	@ 000b39da 52f7d3ff
.org 0xb39de
	ldr r1, [r4, #20]	@ 000b39de 6169
.org 0xb39e0
	movs r0, #128	@ 000b39e0 8020
.org 0xb39e2
	lsls r0, r0, #2	@ 000b39e2 8000
.org 0xb39e4
	ands r0, r1	@ 000b39e4 0840
.org 0xb39e6
	cmp r0, #0	@ 000b39e6 0028
.org 0xb39e8
	beq.n 0xb3a0a	@ 000b39e8 0fd0
.org 0xb39ea
	movs r0, #128	@ 000b39ea 8020
.org 0xb39ec
	lsls r0, r0, #10	@ 000b39ec 8002
.org 0xb39ee
	ands r1, r0	@ 000b39ee 0140
.org 0xb39f0
	cmp r1, #0	@ 000b39f0 0029
.org 0xb39f2
	beq.n 0xb3a0a	@ 000b39f2 0ad0
.org 0xb39f4
	adds r0, r5, #0	@ 000b39f4 281c
.org 0xb39f6
	adds r0, #180	@ 000b39f6 b430
.org 0xb39f8
	strb r6, [r0, #0]	@ 000b39f8 0670
.org 0xb39fa
	ldr r0, [pc, #28]	@ 000b39fa 0748
.org 0xb39fc
	ldr r0, [r0, #0]	@ 000b39fc 0068
.org 0xb39fe
	cmp r0, #0	@ 000b39fe 0028
.org 0xb3a00
	beq.n 0xb3a0a	@ 000b3a00 03d0
.org 0xb3a02
	movs r1, #6	@ 000b3a02 0621
.org 0xb3a04
	movs r2, #9	@ 000b3a04 0922
.org 0xb3a06
	bl 0x3a578	@ 000b3a06 86f7b7fd
.org 0xb3a0a
	movs r1, #0	@ 000b3a0a 0021
.org 0xb3a0c
	movs r0, #4	@ 000b3a0c 0420
.org 0xb3a0e
	strb r0, [r5, #13]	@ 000b3a0e 6873
.org 0xb3a10
	strb r1, [r5, #14]	@ 000b3a10 a973
.org 0xb3a12
	pop {r4, r5, r6}	@ 000b3a12 70bc
.org 0xb3a14
	pop {r0}	@ 000b3a14 01bc
.org 0xb3a16
	bx r0	@ 000b3a16 0047
