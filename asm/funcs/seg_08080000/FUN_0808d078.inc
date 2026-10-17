@ FUN_0808d078  entry 0x0808d078  size 82
.thumb
.org 0x8d078
FUN_0808d078:
	push {r4, r5, r6, lr}	@ 0008d078 70b5
.org 0x8d07a
	adds r4, r0, #0	@ 0008d07a 041c
.org 0x8d07c
	ldr r5, [r4, #44]	@ 0008d07c e56a
.org 0x8d07e
	adds r2, r5, #0	@ 0008d07e 2a1c
.org 0x8d080
	adds r2, #180	@ 0008d080 b432
.org 0x8d082
	ldr r6, [pc, #72]	@ 0008d082 124e
.org 0x8d084
	ldr r0, [r6, #0]	@ 0008d084 3068
.org 0x8d086
	ldr r0, [r0, #84]	@ 0008d086 406d
.org 0x8d088
	ldr r1, [r5, #84]	@ 0008d088 696d
.org 0x8d08a
	subs r0, r0, r1	@ 0008d08a 401a
.org 0x8d08c
	str r0, [r2, #0]	@ 0008d08c 1060
.org 0x8d08e
	ldr r0, [r4, #20]	@ 0008d08e 6069
.org 0x8d090
	movs r1, #1	@ 0008d090 0121
.org 0x8d092
	ands r0, r1	@ 0008d092 0840
.org 0x8d094
	cmp r0, #0	@ 0008d094 0028
.org 0x8d096
	beq.n 0x8d0c4	@ 0008d096 15d0
.org 0x8d098
	movs r0, #56	@ 0008d098 3820
.org 0x8d09a
	bl 0x6984	@ 0008d09a 79f773fc
.org 0x8d09e
	ldr r1, [r4, #20]	@ 0008d09e 6169
.org 0x8d0a0
	movs r0, #128	@ 0008d0a0 8020
.org 0x8d0a2
	lsls r0, r0, #2	@ 0008d0a2 8000
.org 0x8d0a4
	ands r0, r1	@ 0008d0a4 0840
.org 0x8d0a6
	cmp r0, #0	@ 0008d0a6 0028
.org 0x8d0a8
	beq.n 0x8d0c4	@ 0008d0a8 0cd0
.org 0x8d0aa
	movs r0, #128	@ 0008d0aa 8020
.org 0x8d0ac
	lsls r0, r0, #10	@ 0008d0ac 8002
.org 0x8d0ae
	ands r1, r0	@ 0008d0ae 0140
.org 0x8d0b0
	cmp r1, #0	@ 0008d0b0 0029
.org 0x8d0b2
	beq.n 0x8d0c4	@ 0008d0b2 07d0
.org 0x8d0b4
	ldr r0, [r6, #0]	@ 0008d0b4 3068
.org 0x8d0b6
	cmp r0, #0	@ 0008d0b6 0028
.org 0x8d0b8
	beq.n 0x8d0c4	@ 0008d0b8 04d0
.org 0x8d0ba
	movs r1, #6	@ 0008d0ba 0621
.org 0x8d0bc
	movs r2, #1	@ 0008d0bc 0122
.org 0x8d0be
	bl 0x3a578	@ 0008d0be adf75bfa
.org 0x8d0c2
	strb r0, [r5, #19]	@ 0008d0c2 e874
.org 0x8d0c4
	pop {r4, r5, r6}	@ 0008d0c4 70bc
.org 0x8d0c6
	pop {r0}	@ 0008d0c6 01bc
.org 0x8d0c8
	bx r0	@ 0008d0c8 0047
