@ FUN_08055784  entry 0x08055784  size 114
.thumb
.org 0x55784
FUN_08055784:
	push {r4, lr}	@ 00055784 10b5
.org 0x55786
	adds r4, r0, #0	@ 00055786 041c
.org 0x55788
	ldrb r0, [r4, #15]	@ 00055788 e07b
.org 0x5578a
	cmp r0, #0	@ 0005578a 0028
.org 0x5578c
	bne.n 0x5579c	@ 0005578c 06d1
.org 0x5578e
	ldr r1, [pc, #104]	@ 0005578e 1a49
.org 0x55790
	adds r0, r4, #0	@ 00055790 201c
.org 0x55792
	bl 0x1cf00	@ 00055792 c7f7b5fb
.org 0x55796
	ldrb r0, [r4, #15]	@ 00055796 e07b
.org 0x55798
	adds r0, #1	@ 00055798 0130
.org 0x5579a
	strb r0, [r4, #15]	@ 0005579a e073
.org 0x5579c
	adds r0, r4, #0	@ 0005579c 201c
.org 0x5579e
	bl 0x1cff0	@ 0005579e c7f727fc
.org 0x557a2
	adds r0, r4, #0	@ 000557a2 201c
.org 0x557a4
	adds r0, #116	@ 000557a4 7430
.org 0x557a6
	ldr r3, [pc, #84]	@ 000557a6 154b
.org 0x557a8
	ldrb r1, [r4, #30]	@ 000557a8 a17f
.org 0x557aa
	lsls r1, r1, #8	@ 000557aa 0902
.org 0x557ac
	adds r2, r4, #0	@ 000557ac 221c
.org 0x557ae
	adds r2, #112	@ 000557ae 7032
.org 0x557b0
	ldrb r2, [r2, #0]	@ 000557b0 1278
.org 0x557b2
	orrs r1, r2	@ 000557b2 1143
.org 0x557b4
	ldr r2, [pc, #72]	@ 000557b4 124a
.org 0x557b6
	adds r1, r1, r2	@ 000557b6 8918
.org 0x557b8
	lsls r1, r1, #2	@ 000557b8 8900
.org 0x557ba
	adds r1, r1, r3	@ 000557ba c918
.org 0x557bc
	adds r2, r4, #0	@ 000557bc 221c
.org 0x557be
	adds r2, #113	@ 000557be 7132
.org 0x557c0
	ldrb r2, [r2, #0]	@ 000557c0 1278
.org 0x557c2
	lsls r2, r2, #24	@ 000557c2 1206
.org 0x557c4
	asrs r2, r2, #24	@ 000557c4 1216
.org 0x557c6
	ldr r1, [r1, #0]	@ 000557c6 0968
.org 0x557c8
	lsls r2, r2, #2	@ 000557c8 9200
.org 0x557ca
	adds r2, r2, r1	@ 000557ca 5218
.org 0x557cc
	ldr r1, [r2, #0]	@ 000557cc 1168
.org 0x557ce
	ldrb r2, [r1, #0]	@ 000557ce 0a78
.org 0x557d0
	lsls r1, r2, #1	@ 000557d0 5100
.org 0x557d2
	adds r1, r1, r2	@ 000557d2 8918
.org 0x557d4
	lsls r1, r1, #3	@ 000557d4 c900
.org 0x557d6
	ldr r2, [pc, #44]	@ 000557d6 0b4a
.org 0x557d8
	adds r1, r1, r2	@ 000557d8 8918
.org 0x557da
	bl 0x5784	@ 000557da aff7d3ff
.org 0x557de
	adds r0, r4, #0	@ 000557de 201c
.org 0x557e0
	adds r0, #115	@ 000557e0 7330
.org 0x557e2
	ldrb r0, [r0, #0]	@ 000557e2 0078
.org 0x557e4
	cmp r0, #3	@ 000557e4 0328
.org 0x557e6
	bne.n 0x557f0	@ 000557e6 03d1
.org 0x557e8
	movs r1, #0	@ 000557e8 0021
.org 0x557ea
	movs r0, #4	@ 000557ea 0420
.org 0x557ec
	strb r0, [r4, #14]	@ 000557ec a073
.org 0x557ee
	strb r1, [r4, #15]	@ 000557ee e173
.org 0x557f0
	pop {r4}	@ 000557f0 10bc
.org 0x557f2
	pop {r0}	@ 000557f2 01bc
.org 0x557f4
	bx r0	@ 000557f4 0047
