@ FUN_0810a168  entry 0x0810a168  size 72
.thumb
.org 0x10a168
FUN_0810a168:
	push {r4, lr}	@ 0010a168 10b5
.org 0x10a16a
	adds r4, r0, #0	@ 0010a16a 041c
.org 0x10a16c
	ldr r0, [r4, #84]	@ 0010a16c 606d
.org 0x10a16e
	ldr r1, [r4, #88]	@ 0010a16e a16d
.org 0x10a170
	bl 0x7c7c	@ 0010a170 fdf684fd
.org 0x10a174
	lsls r0, r0, #16	@ 0010a174 0004
.org 0x10a176
	lsrs r2, r0, #16	@ 0010a176 020c
.org 0x10a178
	movs r1, #15	@ 0010a178 0f21
.org 0x10a17a
	ands r1, r2	@ 0010a17a 1140
.org 0x10a17c
	cmp r1, #15	@ 0010a17c 0f29
.org 0x10a17e
	beq.n 0x10a1a4	@ 0010a17e 11d0
.org 0x10a180
	movs r0, #128	@ 0010a180 8020
.org 0x10a182
	lsls r0, r0, #8	@ 0010a182 0002
.org 0x10a184
	ands r0, r2	@ 0010a184 1040
.org 0x10a186
	cmp r0, #0	@ 0010a186 0028
.org 0x10a188
	bne.n 0x10a1a4	@ 0010a188 0cd1
.org 0x10a18a
	cmp r1, #0	@ 0010a18a 0029
.org 0x10a18c
	beq.n 0x10a192	@ 0010a18c 01d0
.org 0x10a18e
	movs r0, #1	@ 0010a18e 0120
.org 0x10a190
	b.n 0x10a1ae	@ 0010a190 0de0
.org 0x10a192
	ldr r0, [pc, #20]	@ 0010a192 0548
.org 0x10a194
	adds r1, r4, #0	@ 0010a194 211c
.org 0x10a196
	adds r1, #84	@ 0010a196 5431
.org 0x10a198
	bl 0x1fb14	@ 0010a198 15f7bcfc
.org 0x10a19c
	movs r1, #128	@ 0010a19c 8021
.org 0x10a19e
	lsls r1, r1, #5	@ 0010a19e 4901
.org 0x10a1a0
	cmp r0, r1	@ 0010a1a0 8842
.org 0x10a1a2
	bhi.n 0x10a1ac	@ 0010a1a2 03d8
.org 0x10a1a4
	movs r0, #0	@ 0010a1a4 0020
.org 0x10a1a6
	b.n 0x10a1ae	@ 0010a1a6 02e0
.org 0x10a1a8
	.byte 0xf8,0xe9,0x02,0x02	@ 0010a1a8 data
.org 0x10a1ac
	movs r0, #2	@ 0010a1ac 0220
.org 0x10a1ae
	pop {r4}	@ 0010a1ae 10bc
