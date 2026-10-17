@ FUN_080fb298  entry 0x080fb298  size 102
.thumb
.org 0xfb298
FUN_080fb298:
	push {r4, lr}	@ 000fb298 10b5
.org 0xfb29a
	adds r4, r0, #0	@ 000fb29a 041c
.org 0xfb29c
	adds r0, #140	@ 000fb29c 8c30
.org 0xfb29e
	ldr r0, [r0, #0]	@ 000fb29e 0068
.org 0xfb2a0
	movs r1, #128	@ 000fb2a0 8021
.org 0xfb2a2
	lsls r1, r1, #2	@ 000fb2a2 8900
.org 0xfb2a4
	ands r0, r1	@ 000fb2a4 0840
.org 0xfb2a6
	cmp r0, #0	@ 000fb2a6 0028
.org 0xfb2a8
	beq.n 0xfb2c8	@ 000fb2a8 0ed0
.org 0xfb2aa
	ldr r1, [pc, #24]	@ 000fb2aa 0649
.org 0xfb2ac
	ldrb r0, [r4, #9]	@ 000fb2ac 607a
.org 0xfb2ae
	lsls r0, r0, #2	@ 000fb2ae 8000
.org 0xfb2b0
	adds r0, r0, r1	@ 000fb2b0 4018
.org 0xfb2b2
	movs r1, #2	@ 000fb2b2 0221
.org 0xfb2b4
	str r1, [r4, #12]	@ 000fb2b4 e160
.org 0xfb2b6
	ldr r0, [r0, #0]	@ 000fb2b6 0068
.org 0xfb2b8
	ldr r0, [r0, #8]	@ 000fb2b8 8068
.org 0xfb2ba
	str r0, [r4, #20]	@ 000fb2ba 6061
.org 0xfb2bc
	adds r0, r4, #0	@ 000fb2bc 201c
.org 0xfb2be
	bl 0xfb308	@ 000fb2be 00f023f8
.org 0xfb2c2
	b.n 0xfb300	@ 000fb2c2 1de0
.org 0xfb2c4
	.byte 0xfc,0x92,0x86,0x08	@ 000fb2c4 data
.org 0xfb2c8
	adds r0, r4, #0	@ 000fb2c8 201c
.org 0xfb2ca
	bl 0xfb630	@ 000fb2ca 00f0b1f9
.org 0xfb2ce
	adds r0, r4, #0	@ 000fb2ce 201c
.org 0xfb2d0
	adds r0, #192	@ 000fb2d0 c030
.org 0xfb2d2
	ldr r0, [r0, #0]	@ 000fb2d2 0068
.org 0xfb2d4
	cmp r0, #0	@ 000fb2d4 0028
.org 0xfb2d6
	bne.n 0xfb2f4	@ 000fb2d6 0dd1
.org 0xfb2d8
	ldr r0, [pc, #20]	@ 000fb2d8 0548
.org 0xfb2da
	ldrb r1, [r4, #13]	@ 000fb2da 617b
.org 0xfb2dc
	lsls r1, r1, #2	@ 000fb2dc 8900
.org 0xfb2de
	adds r1, r1, r0	@ 000fb2de 0918
.org 0xfb2e0
	ldr r1, [r1, #0]	@ 000fb2e0 0968
.org 0xfb2e2
	adds r0, r4, #0	@ 000fb2e2 201c
.org 0xfb2e4
	bl 0x128f80	@ 000fb2e4 2df04cfe
.org 0xfb2e8
	adds r0, r4, #0	@ 000fb2e8 201c
.org 0xfb2ea
	bl 0x1cff0	@ 000fb2ea 21f781fe
.org 0xfb2ee
	b.n 0xfb300	@ 000fb2ee 07e0
.org 0xfb2f0
	.byte 0x54,0xa9,0x86,0x08	@ 000fb2f0 data
.org 0xfb2f4
	adds r0, r4, #0	@ 000fb2f4 201c
.org 0xfb2f6
	bl 0xfb6b4	@ 000fb2f6 00f0ddf9
.org 0xfb2fa
	adds r0, r4, #0	@ 000fb2fa 201c
.org 0xfb2fc
	bl 0x1d1f4	@ 000fb2fc 21f77aff
