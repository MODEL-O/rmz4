@ FUN_08071af4  entry 0x08071af4  size 88
.thumb
.org 0x71af4
FUN_08071af4:
	push {r4, r5, r6, r7, lr}	@ 00071af4 f0b5
.org 0x71af6
	adds r4, r0, #0	@ 00071af6 041c
.org 0x71af8
	ldrb r0, [r4, #10]	@ 00071af8 a07a
.org 0x71afa
	lsrs r5, r0, #4	@ 00071afa 0509
.org 0x71afc
	movs r6, #1	@ 00071afc 0126
.org 0x71afe
	ands r5, r6	@ 00071afe 3540
.org 0x71b00
	adds r0, r4, #0	@ 00071b00 201c
.org 0x71b02
	adds r0, #180	@ 00071b02 b430
.org 0x71b04
	ldr r0, [r0, #0]	@ 00071b04 0068
.org 0x71b06
	adds r0, #180	@ 00071b06 b430
.org 0x71b08
	movs r7, #0	@ 00071b08 0027
.org 0x71b0a
	strb r6, [r0, #0]	@ 00071b0a 0670
.org 0x71b0c
	adds r0, r4, #0	@ 00071b0c 201c
.org 0x71b0e
	bl 0x73e00	@ 00071b0e 02f077f9
.org 0x71b12
	adds r1, r4, #0	@ 00071b12 211c
.org 0x71b14
	adds r1, #195	@ 00071b14 c331
.org 0x71b16
	strb r0, [r1, #0]	@ 00071b16 0870
.org 0x71b18
	movs r2, #0	@ 00071b18 0022
.org 0x71b1a
	ldr r0, [pc, #20]	@ 00071b1a 0548
.org 0x71b1c
	ldr r0, [r0, #0]	@ 00071b1c 0068
.org 0x71b1e
	ldr r1, [r4, #84]	@ 00071b1e 616d
.org 0x71b20
	ldr r0, [r0, #84]	@ 00071b20 406d
.org 0x71b22
	cmp r1, r0	@ 00071b22 8142
.org 0x71b24
	bge.n 0x71b28	@ 00071b24 00da
.org 0x71b26
	movs r2, #1	@ 00071b26 0122
.org 0x71b28
	cmp r2, r5	@ 00071b28 aa42
.org 0x71b2a
	beq.n 0x71b34	@ 00071b2a 03d0
.org 0x71b2c
	strb r6, [r4, #14]	@ 00071b2c a673
.org 0x71b2e
	b.n 0x71b38	@ 00071b2e 03e0
.org 0x71b30
	.byte 0xf0,0xdb,0x02,0x02	@ 00071b30 data
.org 0x71b34
	movs r0, #3	@ 00071b34 0320
.org 0x71b36
	strb r0, [r4, #14]	@ 00071b36 a073
.org 0x71b38
	strb r7, [r4, #15]	@ 00071b38 e773
.org 0x71b3a
	ldr r0, [pc, #20]	@ 00071b3a 0548
.org 0x71b3c
	ldrb r1, [r4, #13]	@ 00071b3c 617b
.org 0x71b3e
	lsls r1, r1, #2	@ 00071b3e 8900
.org 0x71b40
	adds r1, r1, r0	@ 00071b40 0918
.org 0x71b42
	ldr r1, [r1, #0]	@ 00071b42 0968
.org 0x71b44
	adds r0, r4, #0	@ 00071b44 201c
.org 0x71b46
	bl 0x128f80	@ 00071b46 b7f01bfa
.org 0x71b4a
	pop {r4, r5, r6, r7}	@ 00071b4a f0bc
