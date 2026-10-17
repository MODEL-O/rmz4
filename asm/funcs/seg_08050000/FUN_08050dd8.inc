@ FUN_08050dd8  entry 0x08050dd8  size 92
.thumb
.org 0x50dd8
FUN_08050dd8:
	push {r4, lr}	@ 00050dd8 10b5
.org 0x50dda
	adds r4, r0, #0	@ 00050dda 041c
.org 0x50ddc
	ldrb r0, [r4, #14]	@ 00050ddc a07b
.org 0x50dde
	cmp r0, #0	@ 00050dde 0028
.org 0x50de0
	bne.n 0x50e20	@ 00050de0 1ed1
.org 0x50de2
	ldr r1, [pc, #24]	@ 00050de2 0649
.org 0x50de4
	adds r0, r4, #0	@ 00050de4 201c
.org 0x50de6
	bl 0x1cf00	@ 00050de6 ccf78bf8
.org 0x50dea
	ldr r0, [pc, #20]	@ 00050dea 0548
.org 0x50dec
	ldrh r0, [r0, #0]	@ 00050dec 0088
.org 0x50dee
	cmp r0, #6	@ 00050dee 0628
.org 0x50df0
	bne.n 0x50e04	@ 00050df0 08d1
.org 0x50df2
	movs r0, #226	@ 00050df2 e220
.org 0x50df4
	bl 0x2b10	@ 00050df4 b1f78cfe
.org 0x50df8
	b.n 0x50e0a	@ 00050df8 07e0
.org 0x50dfa
	.byte 0x00	@ 00050dfa data
.org 0x50dfb
	.byte 0x00	@ 00050dfb data
.org 0x50dfc
	.byte 0x18,0xa1,0x00,0x00	@ 00050dfc data
.org 0x50e00
	.byte 0x10,0xe9,0x02,0x02	@ 00050e00 data
.org 0x50e04
	movs r0, #227	@ 00050e04 e320
.org 0x50e06
	bl 0x2b10	@ 00050e06 b1f783fe
.org 0x50e0a
	adds r1, r4, #0	@ 00050e0a 211c
.org 0x50e0c
	adds r1, #180	@ 00050e0c b431
.org 0x50e0e
	ldr r0, [r1, #0]	@ 00050e0e 0868
.org 0x50e10
	str r0, [r4, #84]	@ 00050e10 6065
.org 0x50e12
	ldr r0, [r1, #4]	@ 00050e12 4868
.org 0x50e14
	str r0, [r4, #88]	@ 00050e14 a065
.org 0x50e16
	movs r0, #4	@ 00050e16 0420
.org 0x50e18
	strb r0, [r4, #18]	@ 00050e18 a074
.org 0x50e1a
	ldrb r0, [r4, #14]	@ 00050e1a a07b
.org 0x50e1c
	adds r0, #1	@ 00050e1c 0130
.org 0x50e1e
	strb r0, [r4, #14]	@ 00050e1e a073
.org 0x50e20
	adds r0, r4, #0	@ 00050e20 201c
.org 0x50e22
	bl 0x1cff0	@ 00050e22 ccf7e5f8
.org 0x50e26
	ldr r0, [pc, #24]	@ 00050e26 0648
.org 0x50e28
	ldrb r0, [r0, #18]	@ 00050e28 807c
.org 0x50e2a
	movs r1, #1	@ 00050e2a 0121
.org 0x50e2c
	ands r1, r0	@ 00050e2c 0140
.org 0x50e2e
	cmp r1, #0	@ 00050e2e 0029
.org 0x50e30
	bne.n 0x50e38	@ 00050e30 02d1
.org 0x50e32
	movs r0, #3	@ 00050e32 0320
