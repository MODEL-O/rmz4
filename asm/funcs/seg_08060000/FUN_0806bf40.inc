@ FUN_0806bf40  entry 0x0806bf40  size 166
.thumb
.org 0x6bf40
FUN_0806bf40:
	push {r4, r5, lr}	@ 0006bf40 30b5
.org 0x6bf42
	adds r4, r0, #0	@ 0006bf42 041c
.org 0x6bf44
	ldrb r5, [r4, #14]	@ 0006bf44 a57b
.org 0x6bf46
	cmp r5, #0	@ 0006bf46 002d
.org 0x6bf48
	bne.n 0x6bf68	@ 0006bf48 0ed1
.org 0x6bf4a
	ldr r1, [pc, #88]	@ 0006bf4a 1649
.org 0x6bf4c
	bl 0x1cf00	@ 0006bf4c b0f7d8ff
.org 0x6bf50
	adds r0, r4, #0	@ 0006bf50 201c
.org 0x6bf52
	adds r0, #116	@ 0006bf52 7430
.org 0x6bf54
	ldr r1, [pc, #80]	@ 0006bf54 1449
.org 0x6bf56
	bl 0x5784	@ 0006bf56 99f715fc
.org 0x6bf5a
	str r5, [r4, #96]	@ 0006bf5a 2566
.org 0x6bf5c
	movs r0, #16	@ 0006bf5c 1020
.org 0x6bf5e
	strb r0, [r4, #18]	@ 0006bf5e a074
.org 0x6bf60
	strb r5, [r4, #15]	@ 0006bf60 e573
.org 0x6bf62
	ldrb r0, [r4, #14]	@ 0006bf62 a07b
.org 0x6bf64
	adds r0, #1	@ 0006bf64 0130
.org 0x6bf66
	strb r0, [r4, #14]	@ 0006bf66 a073
.org 0x6bf68
	adds r0, r4, #0	@ 0006bf68 201c
.org 0x6bf6a
	bl 0x1cff0	@ 0006bf6a b1f741f8
.org 0x6bf6e
	adds r2, r4, #0	@ 0006bf6e 221c
.org 0x6bf70
	adds r2, #180	@ 0006bf70 b432
.org 0x6bf72
	ldr r1, [r4, #88]	@ 0006bf72 a16d
.org 0x6bf74
	ldr r0, [r2, #28]	@ 0006bf74 d069
.org 0x6bf76
	cmp r1, r0	@ 0006bf76 8142
.org 0x6bf78
	bge.n 0x6bf8a	@ 0006bf78 07da
.org 0x6bf7a
	ldr r0, [r4, #96]	@ 0006bf7a 206e
.org 0x6bf7c
	adds r1, r1, r0	@ 0006bf7c 0918
.org 0x6bf7e
	str r1, [r4, #88]	@ 0006bf7e a165
.org 0x6bf80
	adds r0, #64	@ 0006bf80 4030
.org 0x6bf82
	str r0, [r4, #96]	@ 0006bf82 2066
.org 0x6bf84
	ldr r0, [r2, #28]	@ 0006bf84 d069
.org 0x6bf86
	cmp r1, r0	@ 0006bf86 8142
.org 0x6bf88
	blt.n 0x6bf8e	@ 0006bf88 01db
.org 0x6bf8a
	ldr r0, [r2, #4]	@ 0006bf8a 5068
.org 0x6bf8c
	str r0, [r2, #28]	@ 0006bf8c d061
.org 0x6bf8e
	ldrb r0, [r4, #15]	@ 0006bf8e e07b
.org 0x6bf90
	cmp r0, #0	@ 0006bf90 0028
.org 0x6bf92
	bne.n 0x6bfb0	@ 0006bf92 0dd1
.org 0x6bf94
	adds r0, r4, #0	@ 0006bf94 201c
.org 0x6bf96
	adds r0, #115	@ 0006bf96 7330
.org 0x6bf98
	ldrb r0, [r0, #0]	@ 0006bf98 0078
.org 0x6bf9a
	cmp r0, #3	@ 0006bf9a 0328
.org 0x6bf9c
	bne.n 0x6bff2	@ 0006bf9c 29d1
.org 0x6bf9e
	ldr r1, [pc, #12]	@ 0006bf9e 0349
.org 0x6bfa0
	b.n 0x6bfc4	@ 0006bfa0 10e0
.org 0x6bfa2
	.byte 0x00	@ 0006bfa2 data
.org 0x6bfa3
	.byte 0x00	@ 0006bfa3 data
.org 0x6bfa4
	.byte 0x0e,0xaa,0x00,0x00	@ 0006bfa4 data
.org 0x6bfa8
	.byte 0xac,0xc1,0x85,0x08	@ 0006bfa8 data
.org 0x6bfac
	.byte 0x01,0xaa,0x00,0x00	@ 0006bfac data
.org 0x6bfb0
	cmp r0, #1	@ 0006bfb0 0128
.org 0x6bfb2
	bne.n 0x6bfdc	@ 0006bfb2 13d1
.org 0x6bfb4
	ldrb r0, [r4, #18]	@ 0006bfb4 a07c
.org 0x6bfb6
	subs r0, #1	@ 0006bfb6 0138
.org 0x6bfb8
	strb r0, [r4, #18]	@ 0006bfb8 a074
.org 0x6bfba
	lsls r0, r0, #24	@ 0006bfba 0006
.org 0x6bfbc
	lsrs r0, r0, #24	@ 0006bfbc 000e
.org 0x6bfbe
	cmp r0, #255	@ 0006bfbe ff28
.org 0x6bfc0
	bne.n 0x6bff2	@ 0006bfc0 17d1
.org 0x6bfc2
	ldr r1, [pc, #20]	@ 0006bfc2 0549
.org 0x6bfc4
	adds r0, r4, #0	@ 0006bfc4 201c
.org 0x6bfc6
	bl 0x1cf00	@ 0006bfc6 b0f79bff
.org 0x6bfca
	adds r0, r4, #0	@ 0006bfca 201c
.org 0x6bfcc
	bl 0x1cff0	@ 0006bfcc b1f710f8
.org 0x6bfd0
	ldrb r0, [r4, #15]	@ 0006bfd0 e07b
.org 0x6bfd2
	adds r0, #1	@ 0006bfd2 0130
.org 0x6bfd4
	strb r0, [r4, #15]	@ 0006bfd4 e073
.org 0x6bfd6
	b.n 0x6bff2	@ 0006bfd6 0ce0
.org 0x6bfd8
	.byte 0x0f,0xaa,0x00,0x00	@ 0006bfd8 data
.org 0x6bfdc
	adds r0, r4, #0	@ 0006bfdc 201c
.org 0x6bfde
	adds r0, #113	@ 0006bfde 7130
.org 0x6bfe0
	ldrb r0, [r0, #0]	@ 0006bfe0 0078
.org 0x6bfe2
	lsls r0, r0, #24	@ 0006bfe2 0006
.org 0x6bfe4
	asrs r0, r0, #24	@ 0006bfe4 0016
