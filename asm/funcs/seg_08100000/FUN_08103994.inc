@ FUN_08103994  entry 0x08103994  size 70
.thumb
.org 0x103994
FUN_08103994:
	push {r4, r5, lr}	@ 00103994 30b5
.org 0x103996
	adds r5, r0, #0	@ 00103996 051c
.org 0x103998
	movs r0, #193	@ 00103998 c120
.org 0x10399a
	lsls r0, r0, #1	@ 0010399a 4000
.org 0x10399c
	bl 0x2b10	@ 0010399c fff6b8f8
.org 0x1039a0
	movs r4, #0	@ 001039a0 0024
.org 0x1039a2
	lsls r1, r4, #3	@ 001039a2 e100
.org 0x1039a4
	subs r1, r1, r4	@ 001039a4 091b
.org 0x1039a6
	lsls r1, r1, #2	@ 001039a6 8900
.org 0x1039a8
	ldr r0, [pc, #48]	@ 001039a8 0c48
.org 0x1039aa
	adds r1, r1, r0	@ 001039aa 0918
.org 0x1039ac
	adds r0, r5, #0	@ 001039ac 281c
.org 0x1039ae
	adds r0, #84	@ 001039ae 5430
.org 0x1039b0
	movs r2, #0	@ 001039b0 0022
.org 0x1039b2
	movs r3, #0	@ 001039b2 0023
.org 0x1039b4
	bl 0xe3db4	@ 001039b4 e0f7fef9
.org 0x1039b8
	adds r0, r4, #1	@ 001039b8 601c
.org 0x1039ba
	lsls r0, r0, #24	@ 001039ba 0006
.org 0x1039bc
	lsrs r4, r0, #24	@ 001039bc 040e
.org 0x1039be
	cmp r4, #9	@ 001039be 092c
.org 0x1039c0
	bls.n 0x1039a2	@ 001039c0 efd9
.org 0x1039c2
	ldr r1, [pc, #28]	@ 001039c2 0749
.org 0x1039c4
	ldrb r0, [r5, #9]	@ 001039c4 687a
.org 0x1039c6
	lsls r0, r0, #2	@ 001039c6 8000
.org 0x1039c8
	adds r0, r0, r1	@ 001039c8 4018
.org 0x1039ca
	movs r1, #4	@ 001039ca 0421
.org 0x1039cc
	str r1, [r5, #12]	@ 001039cc e960
.org 0x1039ce
	ldr r0, [r0, #0]	@ 001039ce 0068
.org 0x1039d0
	ldr r0, [r0, #16]	@ 001039d0 0069
.org 0x1039d2
	str r0, [r5, #20]	@ 001039d2 6861
.org 0x1039d4
	pop {r4, r5}	@ 001039d4 30bc
.org 0x1039d6
	pop {r0}	@ 001039d6 01bc
.org 0x1039d8
	bx r0	@ 001039d8 0047
