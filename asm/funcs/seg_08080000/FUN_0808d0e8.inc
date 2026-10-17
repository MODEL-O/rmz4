@ FUN_0808d0e8  entry 0x0808d0e8  size 78
.thumb
.org 0x8d0e8
FUN_0808d0e8:
	push {r4, lr}	@ 0008d0e8 10b5
.org 0x8d0ea
	adds r4, r0, #0	@ 0008d0ea 041c
.org 0x8d0ec
	ldrb r0, [r4, #14]	@ 0008d0ec a07b
.org 0x8d0ee
	cmp r0, #0	@ 0008d0ee 0028
.org 0x8d0f0
	beq.n 0x8d0f8	@ 0008d0f0 02d0
.org 0x8d0f2
	cmp r0, #1	@ 0008d0f2 0128
.org 0x8d0f4
	beq.n 0x8d116	@ 0008d0f4 0fd0
.org 0x8d0f6
	b.n 0x8d130	@ 0008d0f6 1be0
.org 0x8d0f8
	adds r0, r4, #0	@ 0008d0f8 201c
.org 0x8d0fa
	adds r0, #116	@ 0008d0fa 7430
.org 0x8d0fc
	ldr r1, [pc, #56]	@ 0008d0fc 0e49
.org 0x8d0fe
	bl 0x5784	@ 0008d0fe 78f741fb
.org 0x8d102
	movs r1, #148	@ 0008d102 9421
.org 0x8d104
	lsls r1, r1, #6	@ 0008d104 8901
.org 0x8d106
	adds r0, r4, #0	@ 0008d106 201c
.org 0x8d108
	bl 0x1cf00	@ 0008d108 8ff7fafe
.org 0x8d10c
	movs r0, #30	@ 0008d10c 1e20
.org 0x8d10e
	strb r0, [r4, #18]	@ 0008d10e a074
.org 0x8d110
	ldrb r0, [r4, #14]	@ 0008d110 a07b
.org 0x8d112
	adds r0, #1	@ 0008d112 0130
.org 0x8d114
	strb r0, [r4, #14]	@ 0008d114 a073
.org 0x8d116
	adds r0, r4, #0	@ 0008d116 201c
.org 0x8d118
	bl 0x1cff0	@ 0008d118 8ff76aff
.org 0x8d11c
	ldrb r0, [r4, #18]	@ 0008d11c a07c
.org 0x8d11e
	subs r0, #1	@ 0008d11e 0138
.org 0x8d120
	strb r0, [r4, #18]	@ 0008d120 a074
.org 0x8d122
	lsls r0, r0, #24	@ 0008d122 0006
.org 0x8d124
	lsrs r1, r0, #24	@ 0008d124 010e
.org 0x8d126
	cmp r1, #0	@ 0008d126 0029
.org 0x8d128
	bne.n 0x8d130	@ 0008d128 02d1
.org 0x8d12a
	movs r0, #1	@ 0008d12a 0120
.org 0x8d12c
	strb r0, [r4, #13]	@ 0008d12c 6073
.org 0x8d12e
	strb r1, [r4, #14]	@ 0008d12e a173
.org 0x8d130
	pop {r4}	@ 0008d130 10bc
.org 0x8d132
	pop {r0}	@ 0008d132 01bc
.org 0x8d134
	bx r0	@ 0008d134 0047
