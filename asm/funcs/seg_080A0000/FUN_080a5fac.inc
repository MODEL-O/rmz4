@ FUN_080a5fac  entry 0x080a5fac  size 108
.thumb
.org 0xa5fac
FUN_080a5fac:
	push {r4, r5, lr}	@ 000a5fac 30b5
.org 0xa5fae
	adds r4, r0, #0	@ 000a5fae 041c
.org 0xa5fb0
	ldrb r5, [r4, #15]	@ 000a5fb0 e57b
.org 0xa5fb2
	cmp r5, #0	@ 000a5fb2 002d
.org 0xa5fb4
	bne.n 0xa5ff6	@ 000a5fb4 1fd1
.org 0xa5fb6
	movs r0, #42	@ 000a5fb6 2a20
.org 0xa5fb8
	bl 0x2b10	@ 000a5fb8 5cf7aafd
.org 0xa5fbc
	adds r1, r4, #0	@ 000a5fbc 211c
.org 0xa5fbe
	adds r1, #84	@ 000a5fbe 5431
.org 0xa5fc0
	movs r0, #1	@ 000a5fc0 0120
.org 0xa5fc2
	bl 0xd0c88	@ 000a5fc2 2af061fe
.org 0xa5fc6
	adds r0, r4, #0	@ 000a5fc6 201c
.org 0xa5fc8
	adds r0, #140	@ 000a5fc8 8c30
.org 0xa5fca
	str r5, [r0, #0]	@ 000a5fca 0560
.org 0xa5fcc
	adds r0, #4	@ 000a5fcc 0430
.org 0xa5fce
	str r5, [r0, #0]	@ 000a5fce 0560
.org 0xa5fd0
	adds r0, #4	@ 000a5fd0 0430
.org 0xa5fd2
	strb r5, [r0, #0]	@ 000a5fd2 0570
.org 0xa5fd4
	ldrb r1, [r4, #10]	@ 000a5fd4 a17a
.org 0xa5fd6
	movs r0, #251	@ 000a5fd6 fb20
.org 0xa5fd8
	ands r0, r1	@ 000a5fd8 0840
.org 0xa5fda
	strb r0, [r4, #10]	@ 000a5fda a072
.org 0xa5fdc
	ldr r1, [pc, #56]	@ 000a5fdc 0e49
.org 0xa5fde
	adds r0, r4, #0	@ 000a5fde 201c
.org 0xa5fe0
	bl 0x1cf00	@ 000a5fe0 76f78eff
.org 0xa5fe4
	adds r0, r4, #0	@ 000a5fe4 201c
.org 0xa5fe6
	movs r1, #5	@ 000a5fe6 0521
.org 0xa5fe8
	bl 0x1d3d0	@ 000a5fe8 77f7f2f9
.org 0xa5fec
	movs r0, #24	@ 000a5fec 1820
.org 0xa5fee
	strb r0, [r4, #18]	@ 000a5fee a074
.org 0xa5ff0
	ldrb r0, [r4, #15]	@ 000a5ff0 e07b
.org 0xa5ff2
	adds r0, #1	@ 000a5ff2 0130
.org 0xa5ff4
	strb r0, [r4, #15]	@ 000a5ff4 e073
.org 0xa5ff6
	adds r0, r4, #0	@ 000a5ff6 201c
.org 0xa5ff8
	bl 0x1cff0	@ 000a5ff8 76f7faff
.org 0xa5ffc
	ldrb r0, [r4, #18]	@ 000a5ffc a07c
.org 0xa5ffe
	subs r0, #1	@ 000a5ffe 0138
.org 0xa6000
	strb r0, [r4, #18]	@ 000a6000 a074
.org 0xa6002
	lsls r0, r0, #24	@ 000a6002 0006
.org 0xa6004
	lsrs r1, r0, #24	@ 000a6004 010e
.org 0xa6006
	cmp r1, #0	@ 000a6006 0029
.org 0xa6008
	bne.n 0xa6012	@ 000a6008 03d1
.org 0xa600a
	movs r0, #1	@ 000a600a 0120
.org 0xa600c
	strb r0, [r4, #13]	@ 000a600c 6073
.org 0xa600e
	strb r1, [r4, #14]	@ 000a600e a173
.org 0xa6010
	strb r1, [r4, #15]	@ 000a6010 e173
.org 0xa6012
	pop {r4, r5}	@ 000a6012 30bc
.org 0xa6014
	pop {r0}	@ 000a6014 01bc
.org 0xa6016
	bx r0	@ 000a6016 0047
