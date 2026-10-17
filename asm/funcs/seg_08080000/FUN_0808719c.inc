@ FUN_0808719c  entry 0x0808719c  size 110
.thumb
.org 0x8719c
FUN_0808719c:
	push {r4, lr}	@ 0008719c 10b5
.org 0x8719e
	sub sp, #8	@ 0008719e 82b0
.org 0x871a0
	adds r4, r0, #0	@ 000871a0 041c
.org 0x871a2
	adds r0, #140	@ 000871a2 8c30
.org 0x871a4
	ldr r0, [r0, #0]	@ 000871a4 0068
.org 0x871a6
	movs r1, #1	@ 000871a6 0121
.org 0x871a8
	ands r0, r1	@ 000871a8 0840
.org 0x871aa
	cmp r0, #0	@ 000871aa 0028
.org 0x871ac
	beq.n 0x8720a	@ 000871ac 2dd0
.org 0x871ae
	ldr r2, [r4, #44]	@ 000871ae e26a
.org 0x871b0
	cmp r2, #0	@ 000871b0 002a
.org 0x871b2
	bne.n 0x8720a	@ 000871b2 2ad1
.org 0x871b4
	ldr r0, [pc, #48]	@ 000871b4 0c48
.org 0x871b6
	ldr r1, [pc, #52]	@ 000871b6 0d49
.org 0x871b8
	adds r0, r0, r1	@ 000871b8 4018
.org 0x871ba
	ldr r1, [r4, #88]	@ 000871ba a16d
.org 0x871bc
	ldr r0, [r0, #0]	@ 000871bc 0068
.org 0x871be
	cmp r1, r0	@ 000871be 8142
.org 0x871c0
	ble.n 0x871f0	@ 000871c0 16dd
.org 0x871c2
	adds r0, r4, #0	@ 000871c2 201c
.org 0x871c4
	adds r0, #151	@ 000871c4 9730
.org 0x871c6
	ldrb r1, [r0, #0]	@ 000871c6 0178
.org 0x871c8
	movs r0, #240	@ 000871c8 f020
.org 0x871ca
	ands r0, r1	@ 000871ca 0840
.org 0x871cc
	cmp r0, #32	@ 000871cc 2028
.org 0x871ce
	bne.n 0x871f0	@ 000871ce 0fd1
.org 0x871d0
	movs r0, #128	@ 000871d0 8020
.org 0x871d2
	lsls r0, r0, #4	@ 000871d2 0001
.org 0x871d4
	str r0, [sp, #0]	@ 000871d4 0090
.org 0x871d6
	str r2, [sp, #4]	@ 000871d6 0192
.org 0x871d8
	adds r0, r4, #0	@ 000871d8 201c
.org 0x871da
	adds r0, #84	@ 000871da 5430
.org 0x871dc
	mov r1, sp	@ 000871dc 6946
.org 0x871de
	movs r2, #6	@ 000871de 0622
.org 0x871e0
	movs r3, #8	@ 000871e0 0823
.org 0x871e2
	bl 0x88ff0	@ 000871e2 01f005ff
.org 0x871e6
	b.n 0x8720a	@ 000871e6 10e0
.org 0x871e8
	.byte 0xb0,0x0a,0x00,0x02	@ 000871e8 data
.org 0x871ec
	.byte 0x0c,0xc0,0x02,0x00	@ 000871ec data
.org 0x871f0
	ldr r2, [pc, #32]	@ 000871f0 084a
.org 0x871f2
	movs r0, #0	@ 000871f2 0020
.org 0x871f4
	adds r1, r4, #0	@ 000871f4 211c
.org 0x871f6
	bl 0x2adac	@ 000871f6 a3f7d9fd
.org 0x871fa
	str r0, [r4, #44]	@ 000871fa e062
.org 0x871fc
	cmp r0, #0	@ 000871fc 0028
.org 0x871fe
	beq.n 0x8720a	@ 000871fe 04d0
.org 0x87200
	movs r1, #0	@ 00087200 0021
.org 0x87202
	movs r0, #11	@ 00087202 0b20
.org 0x87204
	strb r0, [r4, #13]	@ 00087204 6073
.org 0x87206
	strb r1, [r4, #14]	@ 00087206 a173
.org 0x87208
	strb r1, [r4, #15]	@ 00087208 e173
