@ FUN_0808e184  entry 0x0808e184  size 58
.thumb
.org 0x8e184
FUN_0808e184:
	push {lr}	@ 0008e184 00b5
.org 0x8e186
	adds r2, r0, #0	@ 0008e186 021c
.org 0x8e188
	ldr r0, [r2, #40]	@ 0008e188 906a
.org 0x8e18a
	ldrb r0, [r0, #12]	@ 0008e18a 007b
.org 0x8e18c
	cmp r0, #1	@ 0008e18c 0128
.org 0x8e18e
	bls.n 0x8e1b0	@ 0008e18e 0fd9
.org 0x8e190
	ldr r1, [pc, #24]	@ 0008e190 0649
.org 0x8e192
	ldrb r0, [r2, #9]	@ 0008e192 507a
.org 0x8e194
	lsls r0, r0, #2	@ 0008e194 8000
.org 0x8e196
	adds r0, r0, r1	@ 0008e196 4018
.org 0x8e198
	movs r1, #2	@ 0008e198 0221
.org 0x8e19a
	str r1, [r2, #12]	@ 0008e19a d160
.org 0x8e19c
	ldr r0, [r0, #0]	@ 0008e19c 0068
.org 0x8e19e
	ldr r0, [r0, #8]	@ 0008e19e 8068
.org 0x8e1a0
	str r0, [r2, #20]	@ 0008e1a0 5061
.org 0x8e1a2
	adds r0, r2, #0	@ 0008e1a2 101c
.org 0x8e1a4
	bl 0x8e6e0	@ 0008e1a4 00f09cfa
.org 0x8e1a8
	b.n 0x8e1c0	@ 0008e1a8 0ae0
.org 0x8e1aa
	.byte 0x00	@ 0008e1aa data
.org 0x8e1ab
	.byte 0x00	@ 0008e1ab data
.org 0x8e1ac
	.byte 0x40,0xdb,0x85,0x08	@ 0008e1ac data
.org 0x8e1b0
	ldr r0, [pc, #16]	@ 0008e1b0 0448
.org 0x8e1b2
	ldrb r1, [r2, #13]	@ 0008e1b2 517b
.org 0x8e1b4
	lsls r1, r1, #2	@ 0008e1b4 8900
.org 0x8e1b6
	adds r1, r1, r0	@ 0008e1b6 0918
.org 0x8e1b8
	ldr r1, [r1, #0]	@ 0008e1b8 0968
.org 0x8e1ba
	adds r0, r2, #0	@ 0008e1ba 101c
.org 0x8e1bc
	bl 0x128f80	@ 0008e1bc 9af0e0fe
