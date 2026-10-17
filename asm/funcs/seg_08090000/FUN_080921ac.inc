@ FUN_080921ac  entry 0x080921ac  size 74
.thumb
.org 0x921ac
FUN_080921ac:
	push {lr}	@ 000921ac 00b5
.org 0x921ae
	adds r2, r0, #0	@ 000921ae 021c
.org 0x921b0
	adds r3, r2, #0	@ 000921b0 131c
.org 0x921b2
	adds r3, #140	@ 000921b2 8c33
.org 0x921b4
	ldr r0, [r3, #0]	@ 000921b4 1868
.org 0x921b6
	movs r1, #128	@ 000921b6 8021
.org 0x921b8
	lsls r1, r1, #2	@ 000921b8 8900
.org 0x921ba
	ands r0, r1	@ 000921ba 0840
.org 0x921bc
	cmp r0, #0	@ 000921bc 0028
.org 0x921be
	beq.n 0x921f4	@ 000921be 19d0
.org 0x921c0
	ldr r1, [pc, #32]	@ 000921c0 0849
.org 0x921c2
	ldrb r0, [r2, #9]	@ 000921c2 507a
.org 0x921c4
	lsls r0, r0, #2	@ 000921c4 8000
.org 0x921c6
	adds r0, r0, r1	@ 000921c6 4018
.org 0x921c8
	movs r1, #2	@ 000921c8 0221
.org 0x921ca
	str r1, [r2, #12]	@ 000921ca d160
.org 0x921cc
	ldr r0, [r0, #0]	@ 000921cc 0068
.org 0x921ce
	ldr r0, [r0, #8]	@ 000921ce 8068
.org 0x921d0
	str r0, [r2, #20]	@ 000921d0 5061
.org 0x921d2
	ldr r1, [r3, #0]	@ 000921d2 1968
.org 0x921d4
	movs r0, #128	@ 000921d4 8020
.org 0x921d6
	lsls r0, r0, #9	@ 000921d6 4002
.org 0x921d8
	ands r1, r0	@ 000921d8 0140
.org 0x921da
	cmp r1, #0	@ 000921da 0029
.org 0x921dc
	beq.n 0x921e8	@ 000921dc 04d0
.org 0x921de
	movs r0, #1	@ 000921de 0120
.org 0x921e0
	strb r0, [r2, #13]	@ 000921e0 5073
.org 0x921e2
	b.n 0x921ea	@ 000921e2 02e0
.org 0x921e4
	.byte 0x40,0xdb,0x85,0x08	@ 000921e4 data
.org 0x921e8
	strb r1, [r2, #13]	@ 000921e8 5173
.org 0x921ea
	adds r0, r2, #0	@ 000921ea 101c
.org 0x921ec
	bl 0x92300	@ 000921ec 00f088f8
.org 0x921f0
	movs r0, #1	@ 000921f0 0120
.org 0x921f2
	b.n 0x921f6	@ 000921f2 00e0
.org 0x921f4
	movs r0, #0	@ 000921f4 0020
