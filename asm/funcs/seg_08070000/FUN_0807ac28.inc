@ FUN_0807ac28  entry 0x0807ac28  size 150
.thumb
.org 0x7ac28
FUN_0807ac28:
	push {r4, r5, lr}	@ 0007ac28 30b5
.org 0x7ac2a
	adds r4, r0, #0	@ 0007ac2a 041c
.org 0x7ac2c
	ldrb r5, [r4, #14]	@ 0007ac2c a57b
.org 0x7ac2e
	cmp r5, #0	@ 0007ac2e 002d
.org 0x7ac30
	bne.n 0x7ac54	@ 0007ac30 10d1
.org 0x7ac32
	ldr r1, [pc, #56]	@ 0007ac32 0e49
.org 0x7ac34
	bl 0x1cf00	@ 0007ac34 a2f764f9
.org 0x7ac38
	movs r0, #171	@ 0007ac38 ab20
.org 0x7ac3a
	lsls r0, r0, #1	@ 0007ac3a 4000
.org 0x7ac3c
	bl 0x2b10	@ 0007ac3c 87f768ff
.org 0x7ac40
	adds r1, r4, #0	@ 0007ac40 211c
.org 0x7ac42
	adds r1, #214	@ 0007ac42 d631
.org 0x7ac44
	movs r0, #1	@ 0007ac44 0120
.org 0x7ac46
	strb r0, [r1, #0]	@ 0007ac46 0870
.org 0x7ac48
	movs r0, #155	@ 0007ac48 9b20
.org 0x7ac4a
	strb r0, [r4, #18]	@ 0007ac4a a074
.org 0x7ac4c
	strb r5, [r4, #15]	@ 0007ac4c e573
.org 0x7ac4e
	ldrb r0, [r4, #14]	@ 0007ac4e a07b
.org 0x7ac50
	adds r0, #1	@ 0007ac50 0130
.org 0x7ac52
	strb r0, [r4, #14]	@ 0007ac52 a073
.org 0x7ac54
	adds r0, r4, #0	@ 0007ac54 201c
.org 0x7ac56
	bl 0x1cff0	@ 0007ac56 a2f7cbf9
.org 0x7ac5a
	ldrb r0, [r4, #15]	@ 0007ac5a e07b
.org 0x7ac5c
	cmp r0, #1	@ 0007ac5c 0128
.org 0x7ac5e
	beq.n 0x7ac8c	@ 0007ac5e 15d0
.org 0x7ac60
	cmp r0, #1	@ 0007ac60 0128
.org 0x7ac62
	bgt.n 0x7ac70	@ 0007ac62 05dc
.org 0x7ac64
	cmp r0, #0	@ 0007ac64 0028
.org 0x7ac66
	beq.n 0x7ac76	@ 0007ac66 06d0
.org 0x7ac68
	b.n 0x7acc8	@ 0007ac68 2ee0
.org 0x7ac6a
	.byte 0x00	@ 0007ac6a data
.org 0x7ac6b
	.byte 0x00	@ 0007ac6b data
.org 0x7ac6c
	.byte 0x02,0xb1,0x00,0x00	@ 0007ac6c data
.org 0x7ac70
	cmp r0, #2	@ 0007ac70 0228
.org 0x7ac72
	beq.n 0x7acb0	@ 0007ac72 1dd0
.org 0x7ac74
	b.n 0x7acc8	@ 0007ac74 28e0
.org 0x7ac76
	adds r0, r4, #0	@ 0007ac76 201c
.org 0x7ac78
	adds r0, #180	@ 0007ac78 b430
.org 0x7ac7a
	ldr r0, [r0, #28]	@ 0007ac7a c069
.org 0x7ac7c
	ldrb r0, [r0, #13]	@ 0007ac7c 407b
.org 0x7ac7e
	cmp r0, #3	@ 0007ac7e 0328
.org 0x7ac80
	bls.n 0x7acc8	@ 0007ac80 22d9
.org 0x7ac82
	ldr r1, [pc, #4]	@ 0007ac82 0149
.org 0x7ac84
	b.n 0x7ac98	@ 0007ac84 08e0
.org 0x7ac86
	.byte 0x00	@ 0007ac86 data
.org 0x7ac87
	.byte 0x00	@ 0007ac87 data
.org 0x7ac88
	.byte 0x03,0xb1,0x00,0x00	@ 0007ac88 data
.org 0x7ac8c
	adds r0, r4, #0	@ 0007ac8c 201c
.org 0x7ac8e
	adds r0, #115	@ 0007ac8e 7330
.org 0x7ac90
	ldrb r0, [r0, #0]	@ 0007ac90 0078
.org 0x7ac92
	cmp r0, #3	@ 0007ac92 0328
.org 0x7ac94
	bne.n 0x7acc8	@ 0007ac94 18d1
.org 0x7ac96
	ldr r1, [pc, #20]	@ 0007ac96 0549
.org 0x7ac98
	adds r0, r4, #0	@ 0007ac98 201c
.org 0x7ac9a
	bl 0x1cf00	@ 0007ac9a a2f731f9
.org 0x7ac9e
	adds r0, r4, #0	@ 0007ac9e 201c
.org 0x7aca0
	bl 0x1cff0	@ 0007aca0 a2f7a6f9
.org 0x7aca4
	ldrb r0, [r4, #15]	@ 0007aca4 e07b
.org 0x7aca6
	adds r0, #1	@ 0007aca6 0130
.org 0x7aca8
	strb r0, [r4, #15]	@ 0007aca8 e073
.org 0x7acaa
	b.n 0x7acc8	@ 0007acaa 0de0
.org 0x7acac
	.byte 0x01,0xb1,0x00,0x00	@ 0007acac data
.org 0x7acb0
	adds r0, r4, #0	@ 0007acb0 201c
.org 0x7acb2
	adds r0, #180	@ 0007acb2 b430
.org 0x7acb4
	ldr r0, [r0, #28]	@ 0007acb4 c069
.org 0x7acb6
	ldrb r1, [r0, #13]	@ 0007acb6 417b
.org 0x7acb8
	cmp r1, #0	@ 0007acb8 0029
.org 0x7acba
	bne.n 0x7acc8	@ 0007acba 05d1
.org 0x7acbc
	adds r0, r4, #0	@ 0007acbc 201c
