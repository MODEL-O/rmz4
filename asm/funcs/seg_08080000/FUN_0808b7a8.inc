@ FUN_0808b7a8  entry 0x0808b7a8  size 140
.thumb
.org 0x8b7a8
FUN_0808b7a8:
	push {r4, lr}	@ 0008b7a8 10b5
.org 0x8b7aa
	adds r4, r0, #0	@ 0008b7aa 041c
.org 0x8b7ac
	ldrb r0, [r4, #15]	@ 0008b7ac e07b
.org 0x8b7ae
	cmp r0, #0	@ 0008b7ae 0028
.org 0x8b7b0
	bne.n 0x8b7ca	@ 0008b7b0 0bd1
.org 0x8b7b2
	adds r0, r4, #0	@ 0008b7b2 201c
.org 0x8b7b4
	bl 0x8be2c	@ 0008b7b4 00f03afb
.org 0x8b7b8
	ldr r1, [pc, #120]	@ 0008b7b8 1e49
.org 0x8b7ba
	adds r0, r4, #0	@ 0008b7ba 201c
.org 0x8b7bc
	bl 0x1cf00	@ 0008b7bc 91f7a0fb
.org 0x8b7c0
	movs r0, #64	@ 0008b7c0 4020
.org 0x8b7c2
	strb r0, [r4, #18]	@ 0008b7c2 a074
.org 0x8b7c4
	ldrb r0, [r4, #15]	@ 0008b7c4 e07b
.org 0x8b7c6
	adds r0, #1	@ 0008b7c6 0130
.org 0x8b7c8
	strb r0, [r4, #15]	@ 0008b7c8 e073
.org 0x8b7ca
	adds r0, r4, #0	@ 0008b7ca 201c
.org 0x8b7cc
	bl 0x1cff0	@ 0008b7cc 91f710fc
.org 0x8b7d0
	adds r0, r4, #0	@ 0008b7d0 201c
.org 0x8b7d2
	adds r0, #116	@ 0008b7d2 7430
.org 0x8b7d4
	ldr r3, [pc, #96]	@ 0008b7d4 184b
.org 0x8b7d6
	ldrb r1, [r4, #30]	@ 0008b7d6 a17f
.org 0x8b7d8
	lsls r1, r1, #8	@ 0008b7d8 0902
.org 0x8b7da
	adds r2, r4, #0	@ 0008b7da 221c
.org 0x8b7dc
	adds r2, #112	@ 0008b7dc 7032
.org 0x8b7de
	ldrb r2, [r2, #0]	@ 0008b7de 1278
.org 0x8b7e0
	orrs r1, r2	@ 0008b7e0 1143
.org 0x8b7e2
	ldr r2, [pc, #88]	@ 0008b7e2 164a
.org 0x8b7e4
	adds r1, r1, r2	@ 0008b7e4 8918
.org 0x8b7e6
	lsls r1, r1, #2	@ 0008b7e6 8900
.org 0x8b7e8
	adds r1, r1, r3	@ 0008b7e8 c918
.org 0x8b7ea
	adds r2, r4, #0	@ 0008b7ea 221c
.org 0x8b7ec
	adds r2, #113	@ 0008b7ec 7132
.org 0x8b7ee
	ldrb r2, [r2, #0]	@ 0008b7ee 1278
.org 0x8b7f0
	lsls r2, r2, #24	@ 0008b7f0 1206
.org 0x8b7f2
	asrs r2, r2, #24	@ 0008b7f2 1216
.org 0x8b7f4
	ldr r1, [r1, #0]	@ 0008b7f4 0968
.org 0x8b7f6
	lsls r2, r2, #2	@ 0008b7f6 9200
.org 0x8b7f8
	adds r2, r2, r1	@ 0008b7f8 5218
.org 0x8b7fa
	ldr r1, [r2, #0]	@ 0008b7fa 1168
.org 0x8b7fc
	ldrb r2, [r1, #0]	@ 0008b7fc 0a78
.org 0x8b7fe
	lsls r1, r2, #1	@ 0008b7fe 5100
.org 0x8b800
	adds r1, r1, r2	@ 0008b800 8918
.org 0x8b802
	lsls r1, r1, #3	@ 0008b802 c900
.org 0x8b804
	ldr r2, [pc, #56]	@ 0008b804 0e4a
.org 0x8b806
	adds r1, r1, r2	@ 0008b806 8918
.org 0x8b808
	bl 0x5784	@ 0008b808 79f7bcff
.org 0x8b80c
	ldrb r0, [r4, #18]	@ 0008b80c a07c
.org 0x8b80e
	cmp r0, #0	@ 0008b80e 0028
.org 0x8b810
	beq.n 0x8b816	@ 0008b810 01d0
.org 0x8b812
	subs r0, #1	@ 0008b812 0138
.org 0x8b814
	strb r0, [r4, #18]	@ 0008b814 a074
.org 0x8b816
	adds r0, r4, #0	@ 0008b816 201c
.org 0x8b818
	adds r0, #115	@ 0008b818 7330
.org 0x8b81a
	ldrb r0, [r0, #0]	@ 0008b81a 0078
.org 0x8b81c
	cmp r0, #3	@ 0008b81c 0328
.org 0x8b81e
	bne.n 0x8b82e	@ 0008b81e 06d1
.org 0x8b820
	ldrb r1, [r4, #18]	@ 0008b820 a17c
.org 0x8b822
	cmp r1, #0	@ 0008b822 0029
.org 0x8b824
	bne.n 0x8b82e	@ 0008b824 03d1
.org 0x8b826
	movs r0, #1	@ 0008b826 0120
.org 0x8b828
	strb r0, [r4, #13]	@ 0008b828 6073
.org 0x8b82a
	strb r1, [r4, #14]	@ 0008b82a a173
.org 0x8b82c
	strb r1, [r4, #15]	@ 0008b82c e173
.org 0x8b82e
	pop {r4}	@ 0008b82e 10bc
.org 0x8b830
	pop {r0}	@ 0008b830 01bc
.org 0x8b832
	bx r0	@ 0008b832 0047
