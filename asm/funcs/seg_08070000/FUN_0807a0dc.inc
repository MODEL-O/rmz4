@ FUN_0807a0dc  entry 0x0807a0dc  size 88
.thumb
.org 0x7a0dc
FUN_0807a0dc:
	push {r4, lr}	@ 0007a0dc 10b5
.org 0x7a0de
	adds r4, r0, #0	@ 0007a0de 041c
.org 0x7a0e0
	ldrb r0, [r4, #14]	@ 0007a0e0 a07b
.org 0x7a0e2
	cmp r0, #0	@ 0007a0e2 0028
.org 0x7a0e4
	bne.n 0x7a108	@ 0007a0e4 10d1
.org 0x7a0e6
	ldrb r0, [r4, #30]	@ 0007a0e6 a07f
.org 0x7a0e8
	lsls r0, r0, #8	@ 0007a0e8 0002
.org 0x7a0ea
	adds r1, r4, #0	@ 0007a0ea 211c
.org 0x7a0ec
	adds r1, #112	@ 0007a0ec 7031
.org 0x7a0ee
	ldrb r1, [r1, #0]	@ 0007a0ee 0978
.org 0x7a0f0
	orrs r0, r1	@ 0007a0f0 0843
.org 0x7a0f2
	ldr r1, [pc, #64]	@ 0007a0f2 1049
.org 0x7a0f4
	cmp r0, r1	@ 0007a0f4 8842
.org 0x7a0f6
	beq.n 0x7a0fe	@ 0007a0f6 02d0
.org 0x7a0f8
	adds r0, r4, #0	@ 0007a0f8 201c
.org 0x7a0fa
	bl 0x1cf00	@ 0007a0fa a2f701ff
.org 0x7a0fe
	ldrb r0, [r4, #14]	@ 0007a0fe a07b
.org 0x7a100
	adds r0, #1	@ 0007a100 0130
.org 0x7a102
	strb r0, [r4, #14]	@ 0007a102 a073
.org 0x7a104
	movs r0, #32	@ 0007a104 2020
.org 0x7a106
	strb r0, [r4, #18]	@ 0007a106 a074
.org 0x7a108
	adds r0, r4, #0	@ 0007a108 201c
.org 0x7a10a
	bl 0x1cff0	@ 0007a10a a2f771ff
.org 0x7a10e
	adds r0, r4, #0	@ 0007a10e 201c
.org 0x7a110
	adds r0, #180	@ 0007a110 b430
.org 0x7a112
	ldr r0, [r0, #28]	@ 0007a112 c069
.org 0x7a114
	ldrb r1, [r0, #13]	@ 0007a114 417b
.org 0x7a116
	cmp r1, #0	@ 0007a116 0029
.org 0x7a118
	bne.n 0x7a12e	@ 0007a118 09d1
.org 0x7a11a
	ldrb r0, [r4, #18]	@ 0007a11a a07c
.org 0x7a11c
	subs r0, #1	@ 0007a11c 0138
.org 0x7a11e
	strb r0, [r4, #18]	@ 0007a11e a074
.org 0x7a120
	lsls r0, r0, #24	@ 0007a120 0006
.org 0x7a122
	lsrs r0, r0, #24	@ 0007a122 000e
.org 0x7a124
	cmp r0, #255	@ 0007a124 ff28
.org 0x7a126
	bne.n 0x7a12e	@ 0007a126 02d1
.org 0x7a128
	movs r0, #2	@ 0007a128 0220
.org 0x7a12a
	strb r0, [r4, #13]	@ 0007a12a 6073
.org 0x7a12c
	strb r1, [r4, #14]	@ 0007a12c a173
.org 0x7a12e
	pop {r4}	@ 0007a12e 10bc
.org 0x7a130
	pop {r0}	@ 0007a130 01bc
.org 0x7a132
	bx r0	@ 0007a132 0047
