@ FUN_0808a174  entry 0x0808a174  size 78
.thumb
.org 0x8a174
FUN_0808a174:
	push {r4, r5, lr}	@ 0008a174 30b5
.org 0x8a176
	adds r4, r0, #0	@ 0008a176 041c
.org 0x8a178
	adds r0, #193	@ 0008a178 c130
.org 0x8a17a
	ldrb r0, [r0, #0]	@ 0008a17a 0078
.org 0x8a17c
	cmp r0, #0	@ 0008a17c 0028
.org 0x8a17e
	bne.n 0x8a1c0	@ 0008a17e 1fd1
.org 0x8a180
	ldr r0, [r4, #84]	@ 0008a180 606d
.org 0x8a182
	movs r1, #128	@ 0008a182 8021
.org 0x8a184
	lsls r1, r1, #4	@ 0008a184 0901
.org 0x8a186
	adds r2, r0, r1	@ 0008a186 4218
.org 0x8a188
	ldr r0, [r4, #88]	@ 0008a188 a06d
.org 0x8a18a
	adds r5, r0, r1	@ 0008a18a 4518
.org 0x8a18c
	adds r0, r2, #0	@ 0008a18c 101c
.org 0x8a18e
	adds r1, r5, #0	@ 0008a18e 291c
.org 0x8a190
	bl 0x7c7c	@ 0008a190 7df774fd
.org 0x8a194
	lsls r0, r0, #16	@ 0008a194 0004
.org 0x8a196
	cmp r0, #0	@ 0008a196 0028
.org 0x8a198
	bne.n 0x8a1c0	@ 0008a198 12d1
.org 0x8a19a
	ldr r0, [r4, #84]	@ 0008a19a 606d
.org 0x8a19c
	ldr r1, [pc, #28]	@ 0008a19c 0749
.org 0x8a19e
	adds r2, r0, r1	@ 0008a19e 4218
.org 0x8a1a0
	adds r0, r2, #0	@ 0008a1a0 101c
.org 0x8a1a2
	adds r1, r5, #0	@ 0008a1a2 291c
.org 0x8a1a4
	bl 0x7c7c	@ 0008a1a4 7df76afd
.org 0x8a1a8
	lsls r0, r0, #16	@ 0008a1a8 0004
.org 0x8a1aa
	lsrs r1, r0, #16	@ 0008a1aa 010c
.org 0x8a1ac
	cmp r1, #0	@ 0008a1ac 0029
.org 0x8a1ae
	bne.n 0x8a1c0	@ 0008a1ae 07d1
.org 0x8a1b0
	movs r0, #6	@ 0008a1b0 0620
.org 0x8a1b2
	strb r0, [r4, #13]	@ 0008a1b2 6073
.org 0x8a1b4
	strb r1, [r4, #14]	@ 0008a1b4 a173
.org 0x8a1b6
	movs r0, #1	@ 0008a1b6 0120
.org 0x8a1b8
	b.n 0x8a1c2	@ 0008a1b8 03e0
.org 0x8a1ba
	.byte 0x00	@ 0008a1ba data
.org 0x8a1bb
	.byte 0x00	@ 0008a1bb data
.org 0x8a1bc
	.byte 0x00,0xf8,0xff,0xff	@ 0008a1bc data
.org 0x8a1c0
	movs r0, #0	@ 0008a1c0 0020
