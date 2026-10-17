@ FUN_080a20b8  entry 0x080a20b8  size 76
.thumb
.org 0xa20b8
FUN_080a20b8:
	push {r4, r5, r6, lr}	@ 000a20b8 70b5
.org 0xa20ba
	adds r1, r0, #0	@ 000a20ba 011c
.org 0xa20bc
	movs r5, #0	@ 000a20bc 0025
.org 0xa20be
	adds r4, r1, #0	@ 000a20be 0c1c
.org 0xa20c0
	adds r4, #181	@ 000a20c0 b534
.org 0xa20c2
	movs r6, #1	@ 000a20c2 0126
.org 0xa20c4
	adds r2, r4, #0	@ 000a20c4 221c
.org 0xa20c6
	ldrb r0, [r4, #0]	@ 000a20c6 2078
.org 0xa20c8
	asrs r0, r5	@ 000a20c8 2841
.org 0xa20ca
	ands r0, r6	@ 000a20ca 3040
.org 0xa20cc
	cmp r0, #0	@ 000a20cc 0028
.org 0xa20ce
	bne.n 0xa20ea	@ 000a20ce 0cd1
.org 0xa20d0
	adds r0, r1, #0	@ 000a20d0 081c
.org 0xa20d2
	adds r0, #180	@ 000a20d2 b430
.org 0xa20d4
	ldrb r2, [r0, #0]	@ 000a20d4 0278
.org 0xa20d6
	subs r0, #96	@ 000a20d6 6038
.org 0xa20d8
	adds r1, r5, #0	@ 000a20d8 291c
.org 0xa20da
	bl 0xca948	@ 000a20da 28f035fc
.org 0xa20de
	adds r0, r6, #0	@ 000a20de 301c
.org 0xa20e0
	lsls r0, r5	@ 000a20e0 a840
.org 0xa20e2
	ldrb r1, [r4, #0]	@ 000a20e2 2178
.org 0xa20e4
	orrs r0, r1	@ 000a20e4 0843
.org 0xa20e6
	strb r0, [r4, #0]	@ 000a20e6 2070
.org 0xa20e8
	b.n 0xa20fe	@ 000a20e8 09e0
.org 0xa20ea
	adds r0, r5, #1	@ 000a20ea 681c
.org 0xa20ec
	lsls r0, r0, #24	@ 000a20ec 0006
.org 0xa20ee
	lsrs r5, r0, #24	@ 000a20ee 050e
.org 0xa20f0
	cmp r5, #7	@ 000a20f0 072d
.org 0xa20f2
	bls.n 0xa20c6	@ 000a20f2 e8d9
.org 0xa20f4
	ldrb r0, [r2, #0]	@ 000a20f4 1078
.org 0xa20f6
	cmp r0, #255	@ 000a20f6 ff28
.org 0xa20f8
	bne.n 0xa20fe	@ 000a20f8 01d1
.org 0xa20fa
	movs r0, #0	@ 000a20fa 0020
.org 0xa20fc
	strb r0, [r2, #0]	@ 000a20fc 1070
.org 0xa20fe
	pop {r4, r5, r6}	@ 000a20fe 70bc
.org 0xa2100
	pop {r0}	@ 000a2100 01bc
.org 0xa2102
	bx r0	@ 000a2102 0047
