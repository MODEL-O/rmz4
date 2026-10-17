@ FUN_08047f78  entry 0x08047f78  size 130
.thumb
.org 0x47f78
FUN_08047f78:
	push {r4, r5, lr}	@ 00047f78 30b5
.org 0x47f7a
	adds r4, r0, #0	@ 00047f7a 041c
.org 0x47f7c
	lsls r1, r1, #24	@ 00047f7c 0906
.org 0x47f7e
	lsrs r5, r1, #24	@ 00047f7e 0d0e
.org 0x47f80
	ldr r0, [pc, #60]	@ 00047f80 0f48
.org 0x47f82
	ldr r0, [r0, #0]	@ 00047f82 0068
.org 0x47f84
	bl 0x5500	@ 00047f84 bdf7bcfa
.org 0x47f88
	adds r2, r0, #0	@ 00047f88 021c
.org 0x47f8a
	cmp r2, #0	@ 00047f8a 002a
.org 0x47f8c
	beq.n 0x48002	@ 00047f8c 39d0
.org 0x47f8e
	adds r0, r4, #0	@ 00047f8e 201c
.org 0x47f90
	adds r0, #248	@ 00047f90 f830
.org 0x47f92
	ldrb r0, [r0, #0]	@ 00047f92 0078
.org 0x47f94
	cmp r0, #2	@ 00047f94 0228
.org 0x47f96
	bne.n 0x47fd0	@ 00047f96 1bd1
.org 0x47f98
	ldr r1, [pc, #40]	@ 00047f98 0a49
.org 0x47f9a
	movs r0, #30	@ 00047f9a 1e20
.org 0x47f9c
	strb r0, [r2, #9]	@ 00047f9c 5072
.org 0x47f9e
	ldr r0, [r1, #120]	@ 00047f9e 886f
.org 0x47fa0
	ldr r0, [r0, #0]	@ 00047fa0 0068
.org 0x47fa2
	str r0, [r2, #20]	@ 00047fa2 5061
.org 0x47fa4
	ldrb r1, [r2, #11]	@ 00047fa4 d17a
.org 0x47fa6
	movs r0, #191	@ 00047fa6 bf20
.org 0x47fa8
	ands r0, r1	@ 00047fa8 0840
.org 0x47faa
	strb r0, [r2, #11]	@ 00047faa d072
.org 0x47fac
	adds r1, r2, #0	@ 00047fac 111c
.org 0x47fae
	adds r1, #37	@ 00047fae 2531
.org 0x47fb0
	movs r0, #16	@ 00047fb0 1020
.org 0x47fb2
	strb r0, [r1, #0]	@ 00047fb2 0870
.org 0x47fb4
	ldr r0, [pc, #16]	@ 00047fb4 0448
.org 0x47fb6
	ldrh r0, [r0, #0]	@ 00047fb6 0088
.org 0x47fb8
	strh r0, [r2, #32]	@ 00047fb8 1084
.org 0x47fba
	ldr r0, [pc, #16]	@ 00047fba 0448
.org 0x47fbc
	ldrb r0, [r0, #0]	@ 00047fbc 0078
.org 0x47fbe
	b.n 0x47ff6	@ 00047fbe 1ae0
.org 0x47fc0
	.byte 0x88,0xed,0x02,0x02	@ 00047fc0 data
.org 0x47fc4
	.byte 0xf8,0x39,0x85,0x08	@ 00047fc4 data
.org 0x47fc8
	.byte 0xfc,0x36,0x85,0x08	@ 00047fc8 data
.org 0x47fcc
	.byte 0x04,0x37,0x85,0x08	@ 00047fcc data
.org 0x47fd0
	ldr r1, [pc, #56]	@ 00047fd0 0e49
.org 0x47fd2
	movs r0, #30	@ 00047fd2 1e20
.org 0x47fd4
	strb r0, [r2, #9]	@ 00047fd4 5072
.org 0x47fd6
	ldr r0, [r1, #120]	@ 00047fd6 886f
.org 0x47fd8
	ldr r0, [r0, #0]	@ 00047fd8 0068
.org 0x47fda
	str r0, [r2, #20]	@ 00047fda 5061
.org 0x47fdc
	ldrb r1, [r2, #11]	@ 00047fdc d17a
.org 0x47fde
	movs r0, #191	@ 00047fde bf20
.org 0x47fe0
	ands r0, r1	@ 00047fe0 0840
.org 0x47fe2
	strb r0, [r2, #11]	@ 00047fe2 d072
.org 0x47fe4
	adds r1, r2, #0	@ 00047fe4 111c
.org 0x47fe6
	adds r1, #37	@ 00047fe6 2531
.org 0x47fe8
	movs r0, #16	@ 00047fe8 1020
.org 0x47fea
	strb r0, [r1, #0]	@ 00047fea 0870
.org 0x47fec
	ldr r0, [pc, #32]	@ 00047fec 0848
.org 0x47fee
	ldrh r0, [r0, #2]	@ 00047fee 4088
.org 0x47ff0
	strh r0, [r2, #32]	@ 00047ff0 1084
.org 0x47ff2
	ldr r0, [pc, #32]	@ 00047ff2 0848
.org 0x47ff4
	ldrb r0, [r0, #1]	@ 00047ff4 4078
.org 0x47ff6
	subs r1, #3	@ 00047ff6 0339
.org 0x47ff8
	strb r0, [r1, #0]	@ 00047ff8 0870
