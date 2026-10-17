@ FUN_0811cb30  entry 0x0811cb30  size 650
.thumb
.org 0x11cb30
FUN_0811cb30:
	push {r4, r5, r6, r7, lr}	@ 0011cb30 f0b5
.org 0x11cb32
	mov r7, r9	@ 0011cb32 4f46
.org 0x11cb34
	mov r6, r8	@ 0011cb34 4646
.org 0x11cb36
	push {r6, r7}	@ 0011cb36 c0b4
.org 0x11cb38
	adds r6, r0, #0	@ 0011cb38 061c
.org 0x11cb3a
	bl 0x11d380	@ 0011cb3a 00f021fc
.org 0x11cb3e
	movs r4, #0	@ 0011cb3e 0024
.org 0x11cb40
	ldr r7, [pc, #8]	@ 0011cb40 024f
.org 0x11cb42
	ldr r0, [pc, #12]	@ 0011cb42 0348
.org 0x11cb44
	adds r0, r0, r7	@ 0011cb44 c019
.org 0x11cb46
	mov r8, r0	@ 0011cb46 8046
.org 0x11cb48
	ldr r5, [pc, #8]	@ 0011cb48 024d
.org 0x11cb4a
	b.n 0x11cb78	@ 0011cb4a 15e0
.org 0x11cb4c
	.byte 0xf8,0xcf,0x86,0x08	@ 0011cb4c data
.org 0x11cb50
	.byte 0xbe,0x03,0x00,0x00	@ 0011cb50 data
.org 0x11cb54
	.byte 0x5f,0x0e,0x01,0x09	@ 0011cb54 data
.org 0x11cb58
	ldrb r0, [r1, #0]	@ 0011cb58 0878
.org 0x11cb5a
	movs r1, #140	@ 0011cb5a 8c21
.org 0x11cb5c
	lsls r1, r1, #1	@ 0011cb5c 4900
.org 0x11cb5e
	adds r0, r0, r1	@ 0011cb5e 4018
.org 0x11cb60
	lsls r0, r0, #1	@ 0011cb60 4000
.org 0x11cb62
	adds r0, r0, r7	@ 0011cb62 c019
.org 0x11cb64
	ldrh r0, [r0, #0]	@ 0011cb64 0088
.org 0x11cb66
	adds r0, r0, r5	@ 0011cb66 4019
.org 0x11cb68
	lsls r2, r4, #1	@ 0011cb68 6200
.org 0x11cb6a
	adds r2, #2	@ 0011cb6a 0232
.org 0x11cb6c
	movs r1, #2	@ 0011cb6c 0221
.org 0x11cb6e
	bl 0x10d85c	@ 0011cb6e f0f775fe
.org 0x11cb72
	adds r0, r4, #1	@ 0011cb72 601c
.org 0x11cb74
	lsls r0, r0, #24	@ 0011cb74 0006
.org 0x11cb76
	lsrs r4, r0, #24	@ 0011cb76 040e
.org 0x11cb78
	cmp r4, #6	@ 0011cb78 062c
.org 0x11cb7a
	bhi.n 0x11cb9a	@ 0011cb7a 0ed8
.org 0x11cb7c
	ldr r2, [pc, #84]	@ 0011cb7c 154a
.org 0x11cb7e
	adds r0, r6, r2	@ 0011cb7e b018
.org 0x11cb80
	adds r1, r0, r4	@ 0011cb80 0119
.org 0x11cb82
	ldrb r0, [r1, #0]	@ 0011cb82 0878
.org 0x11cb84
	cmp r0, #255	@ 0011cb84 ff28
.org 0x11cb86
	bne.n 0x11cb58	@ 0011cb86 e7d1
.org 0x11cb88
	cmp r4, #0	@ 0011cb88 002c
.org 0x11cb8a
	bne.n 0x11cb9a	@ 0011cb8a 06d1
.org 0x11cb8c
	mov r1, r8	@ 0011cb8c 4146
.org 0x11cb8e
	ldrh r0, [r1, #0]	@ 0011cb8e 0888
.org 0x11cb90
	adds r0, r0, r5	@ 0011cb90 4019
.org 0x11cb92
	movs r1, #2	@ 0011cb92 0221
.org 0x11cb94
	movs r2, #2	@ 0011cb94 0222
.org 0x11cb96
	bl 0x10d85c	@ 0011cb96 f0f761fe
.org 0x11cb9a
	adds r0, r6, #0	@ 0011cb9a 301c
.org 0x11cb9c
	bl 0x11d514	@ 0011cb9c 00f0bafc
.org 0x11cba0
	ldrb r0, [r6, #3]	@ 0011cba0 f078
.org 0x11cba2
	cmp r0, #4	@ 0011cba2 0428
.org 0x11cba4
	bne.n 0x11cc0e	@ 0011cba4 33d1
.org 0x11cba6
	movs r4, #0	@ 0011cba6 0024
.org 0x11cba8
	ldr r2, [pc, #44]	@ 0011cba8 0b4a
.org 0x11cbaa
	adds r2, r2, r6	@ 0011cbaa 9219
.org 0x11cbac
	mov r8, r2	@ 0011cbac 9046
.org 0x11cbae
	ldr r7, [pc, #44]	@ 0011cbae 0b4f
.org 0x11cbb0
	ldr r0, [pc, #44]	@ 0011cbb0 0b48
.org 0x11cbb2
	adds r0, r0, r7	@ 0011cbb2 c019
.org 0x11cbb4
	mov r9, r0	@ 0011cbb4 8146
.org 0x11cbb6
	ldr r5, [pc, #44]	@ 0011cbb6 0b4d
.org 0x11cbb8
	mov r2, r8	@ 0011cbb8 4246
.org 0x11cbba
	adds r1, r2, r4	@ 0011cbba 1119
.org 0x11cbbc
	ldrb r0, [r1, #0]	@ 0011cbbc 0878
.org 0x11cbbe
	cmp r0, #255	@ 0011cbbe ff28
.org 0x11cbc0
	bne.n 0x11cbe8	@ 0011cbc0 12d1
.org 0x11cbc2
	mov r1, r9	@ 0011cbc2 4946
.org 0x11cbc4
	ldrh r0, [r1, #0]	@ 0011cbc4 0888
.org 0x11cbc6
	adds r0, r0, r5	@ 0011cbc6 4019
.org 0x11cbc8
	lsls r2, r4, #1	@ 0011cbc8 6200
.org 0x11cbca
	adds r2, #6	@ 0011cbca 0632
.org 0x11cbcc
	movs r1, #17	@ 0011cbcc 1121
.org 0x11cbce
	bl 0x10d85c	@ 0011cbce f0f745fe
.org 0x11cbd2
	b.n 0x11cc02	@ 0011cbd2 16e0
.org 0x11cbd4
	.byte 0xd2,0x0d,0x00,0x00	@ 0011cbd4 data
.org 0x11cbd8
	.byte 0xdd,0x0d,0x00,0x00	@ 0011cbd8 data
.org 0x11cbdc
	.byte 0xf8,0xcf,0x86,0x08	@ 0011cbdc data
.org 0x11cbe0
	.byte 0xbe,0x03,0x00,0x00	@ 0011cbe0 data
.org 0x11cbe4
	.byte 0x5f,0x0e,0x01,0x09	@ 0011cbe4 data
.org 0x11cbe8
	ldrb r0, [r1, #0]	@ 0011cbe8 0878
.org 0x11cbea
	movs r2, #140	@ 0011cbea 8c22
.org 0x11cbec
	lsls r2, r2, #1	@ 0011cbec 5200
.org 0x11cbee
	adds r0, r0, r2	@ 0011cbee 8018
.org 0x11cbf0
	lsls r0, r0, #1	@ 0011cbf0 4000
.org 0x11cbf2
	adds r0, r0, r7	@ 0011cbf2 c019
.org 0x11cbf4
	ldrh r0, [r0, #0]	@ 0011cbf4 0088
.org 0x11cbf6
	adds r0, r0, r5	@ 0011cbf6 4019
.org 0x11cbf8
	lsls r2, r4, #1	@ 0011cbf8 6200
.org 0x11cbfa
	adds r2, #6	@ 0011cbfa 0632
.org 0x11cbfc
	movs r1, #17	@ 0011cbfc 1121
.org 0x11cbfe
	bl 0x10d85c	@ 0011cbfe f0f72dfe
.org 0x11cc02
	adds r0, r4, #1	@ 0011cc02 601c
.org 0x11cc04
	lsls r0, r0, #24	@ 0011cc04 0006
.org 0x11cc06
	lsrs r4, r0, #24	@ 0011cc06 040e
.org 0x11cc08
	cmp r4, #3	@ 0011cc08 032c
.org 0x11cc0a
	bls.n 0x11cbb8	@ 0011cc0a d5d9
.org 0x11cc0c
	b.n 0x11cc70	@ 0011cc0c 30e0
.org 0x11cc0e
	movs r4, #0	@ 0011cc0e 0024
.org 0x11cc10
	ldr r0, [pc, #40]	@ 0011cc10 0a48
.org 0x11cc12
	adds r0, r0, r6	@ 0011cc12 8019
.org 0x11cc14
	mov r8, r0	@ 0011cc14 8046
.org 0x11cc16
	ldr r7, [pc, #40]	@ 0011cc16 0a4f
.org 0x11cc18
	ldr r1, [pc, #40]	@ 0011cc18 0a49
.org 0x11cc1a
	adds r1, r1, r7	@ 0011cc1a c919
.org 0x11cc1c
	mov r9, r1	@ 0011cc1c 8946
.org 0x11cc1e
	ldr r5, [pc, #40]	@ 0011cc1e 0a4d
.org 0x11cc20
	mov r2, r8	@ 0011cc20 4246
.org 0x11cc22
	adds r1, r2, r4	@ 0011cc22 1119
.org 0x11cc24
	ldrb r0, [r1, #0]	@ 0011cc24 0878
.org 0x11cc26
	cmp r0, #255	@ 0011cc26 ff28
.org 0x11cc28
	bne.n 0x11cc4c	@ 0011cc28 10d1
.org 0x11cc2a
	mov r1, r9	@ 0011cc2a 4946
.org 0x11cc2c
	ldrh r0, [r1, #0]	@ 0011cc2c 0888
.org 0x11cc2e
	adds r0, r0, r5	@ 0011cc2e 4019
.org 0x11cc30
	lsls r2, r4, #1	@ 0011cc30 6200
.org 0x11cc32
	adds r2, #6	@ 0011cc32 0632
.org 0x11cc34
	movs r1, #17	@ 0011cc34 1121
.org 0x11cc36
	bl 0x10d85c	@ 0011cc36 f0f711fe
.org 0x11cc3a
	b.n 0x11cc66	@ 0011cc3a 14e0
.org 0x11cc3c
	.byte 0xd9,0x0d,0x00,0x00	@ 0011cc3c data
.org 0x11cc40
	.byte 0xf8,0xcf,0x86,0x08	@ 0011cc40 data
.org 0x11cc44
	.byte 0xbe,0x03,0x00,0x00	@ 0011cc44 data
.org 0x11cc48
	.byte 0x5f,0x0e,0x01,0x09	@ 0011cc48 data
.org 0x11cc4c
	ldrb r0, [r1, #0]	@ 0011cc4c 0878
.org 0x11cc4e
	movs r2, #140	@ 0011cc4e 8c22
.org 0x11cc50
	lsls r2, r2, #1	@ 0011cc50 5200
.org 0x11cc52
	adds r0, r0, r2	@ 0011cc52 8018
.org 0x11cc54
	lsls r0, r0, #1	@ 0011cc54 4000
.org 0x11cc56
	adds r0, r0, r7	@ 0011cc56 c019
.org 0x11cc58
	ldrh r0, [r0, #0]	@ 0011cc58 0088
.org 0x11cc5a
	adds r0, r0, r5	@ 0011cc5a 4019
.org 0x11cc5c
	lsls r2, r4, #1	@ 0011cc5c 6200
.org 0x11cc5e
	adds r2, #6	@ 0011cc5e 0632
.org 0x11cc60
	movs r1, #17	@ 0011cc60 1121
.org 0x11cc62
	bl 0x10d85c	@ 0011cc62 f0f7fbfd
.org 0x11cc66
	adds r0, r4, #1	@ 0011cc66 601c
.org 0x11cc68
	lsls r0, r0, #24	@ 0011cc68 0006
.org 0x11cc6a
	lsrs r4, r0, #24	@ 0011cc6a 040e
.org 0x11cc6c
	cmp r4, #3	@ 0011cc6c 032c
.org 0x11cc6e
	bls.n 0x11cc20	@ 0011cc6e d7d9
.org 0x11cc70
	ldrb r0, [r6, #3]	@ 0011cc70 f078
.org 0x11cc72
	cmp r0, #1	@ 0011cc72 0128
.org 0x11cc74
	bne.n 0x11cc88	@ 0011cc74 08d1
.org 0x11cc76
	ldr r0, [pc, #8]	@ 0011cc76 0248
.org 0x11cc78
	ldr r1, [pc, #8]	@ 0011cc78 0249
.org 0x11cc7a
	adds r0, r0, r1	@ 0011cc7a 4018
.org 0x11cc7c
	b.n 0x11ce0a	@ 0011cc7c c5e0
.org 0x11cc7e
	.byte 0x00	@ 0011cc7e data
.org 0x11cc7f
	.byte 0x00	@ 0011cc7f data
.org 0x11cc80
	.byte 0xf8,0xcf,0x86,0x08	@ 0011cc80 data
.org 0x11cc84
	.byte 0xca,0x03,0x00,0x00	@ 0011cc84 data
.org 0x11cc88
	movs r7, #0	@ 0011cc88 0027
.org 0x11cc8a
	cmp r0, #4	@ 0011cc8a 0428
.org 0x11cc8c
	bne.n 0x11cd08	@ 0011cc8c 3cd1
.org 0x11cc8e
	ldr r2, [pc, #48]	@ 0011cc8e 0c4a
.org 0x11cc90
	adds r1, r6, r2	@ 0011cc90 b118
.org 0x11cc92
	movs r0, #1	@ 0011cc92 0120
.org 0x11cc94
	strb r0, [r1, #25]	@ 0011cc94 4876
.org 0x11cc96
	ldrb r0, [r1, #21]	@ 0011cc96 487d
.org 0x11cc98
	cmp r0, #255	@ 0011cc98 ff28
.org 0x11cc9a
	bne.n 0x11cccc	@ 0011cc9a 17d1
.org 0x11cc9c
	ldr r5, [pc, #36]	@ 0011cc9c 094d
.org 0x11cc9e
	movs r1, #143	@ 0011cc9e 8f21
.org 0x11cca0
	lsls r1, r1, #2	@ 0011cca0 8900
.org 0x11cca2
	adds r0, r5, r1	@ 0011cca2 6818
.org 0x11cca4
	ldrh r0, [r0, #0]	@ 0011cca4 0088
.org 0x11cca6
	ldr r4, [pc, #32]	@ 0011cca6 084c
.org 0x11cca8
	adds r0, r0, r4	@ 0011cca8 0019
.org 0x11ccaa
	movs r1, #17	@ 0011ccaa 1121
.org 0x11ccac
	movs r2, #1	@ 0011ccac 0122
.org 0x11ccae
	bl 0x10d85c	@ 0011ccae f0f7d5fd
.org 0x11ccb2
	movs r2, #242	@ 0011ccb2 f222
.org 0x11ccb4
	lsls r2, r2, #2	@ 0011ccb4 9200
.org 0x11ccb6
	adds r0, r5, r2	@ 0011ccb6 a818
.org 0x11ccb8
	ldrh r0, [r0, #0]	@ 0011ccb8 0088
.org 0x11ccba
	adds r0, r0, r4	@ 0011ccba 0019
.org 0x11ccbc
	b.n 0x11ccf0	@ 0011ccbc 18e0
.org 0x11ccbe
	.byte 0x00	@ 0011ccbe data
.org 0x11ccbf
	.byte 0x00	@ 0011ccbf data
.org 0x11ccc0
	.byte 0xcc,0x0d,0x00,0x00	@ 0011ccc0 data
.org 0x11ccc4
	.byte 0xf8,0xcf,0x86,0x08	@ 0011ccc4 data
.org 0x11ccc8
	.byte 0x5f,0x0e,0x01,0x09	@ 0011ccc8 data
.org 0x11cccc
	ldr r4, [pc, #44]	@ 0011cccc 0b4c
.org 0x11ccce
	ldrb r0, [r1, #21]	@ 0011ccce 487d
.org 0x11ccd0
	movs r1, #200	@ 0011ccd0 c821
.org 0x11ccd2
	lsls r1, r1, #1	@ 0011ccd2 4900
.org 0x11ccd4
	adds r0, r0, r1	@ 0011ccd4 4018
.org 0x11ccd6
	lsls r0, r0, #1	@ 0011ccd6 4000
.org 0x11ccd8
	adds r0, r0, r4	@ 0011ccd8 0019
.org 0x11ccda
	ldrh r0, [r0, #0]	@ 0011ccda 0088
.org 0x11ccdc
	ldr r5, [pc, #32]	@ 0011ccdc 084d
.org 0x11ccde
	adds r0, r0, r5	@ 0011ccde 4019
.org 0x11cce0
	movs r1, #17	@ 0011cce0 1121
.org 0x11cce2
	movs r2, #1	@ 0011cce2 0122
.org 0x11cce4
	bl 0x10d85c	@ 0011cce4 f0f7bafd
.org 0x11cce8
	ldr r2, [pc, #24]	@ 0011cce8 064a
.org 0x11ccea
	adds r4, r4, r2	@ 0011ccea a418
.org 0x11ccec
	ldrh r0, [r4, #0]	@ 0011ccec 2088
.org 0x11ccee
	adds r0, r0, r5	@ 0011ccee 4019
.org 0x11ccf0
	movs r1, #17	@ 0011ccf0 1121
.org 0x11ccf2
	movs r2, #15	@ 0011ccf2 0f22
.org 0x11ccf4
	bl 0x10d85c	@ 0011ccf4 f0f7b2fd
.org 0x11ccf8
	b.n 0x11cdbc	@ 0011ccf8 60e0
.org 0x11ccfa
	.byte 0x00	@ 0011ccfa data
.org 0x11ccfb
	.byte 0x00	@ 0011ccfb data
.org 0x11ccfc
	.byte 0xf8,0xcf,0x86,0x08	@ 0011ccfc data
.org 0x11cd00
	.byte 0x5f,0x0e,0x01,0x09	@ 0011cd00 data
.org 0x11cd04
	.byte 0xc6,0x03,0x00,0x00	@ 0011cd04 data
.org 0x11cd08
	ldr r0, [pc, #32]	@ 0011cd08 0848
.org 0x11cd0a
	adds r1, r6, r0	@ 0011cd0a 3118
.org 0x11cd0c
	ldrb r0, [r1, #14]	@ 0011cd0c 887b
.org 0x11cd0e
	cmp r0, #255	@ 0011cd0e ff28
.org 0x11cd10
	bne.n 0x11cd38	@ 0011cd10 12d1
.org 0x11cd12
	ldr r0, [pc, #28]	@ 0011cd12 0748
.org 0x11cd14
	movs r1, #240	@ 0011cd14 f021
.org 0x11cd16
	lsls r1, r1, #2	@ 0011cd16 8900
.org 0x11cd18
	adds r0, r0, r1	@ 0011cd18 4018
.org 0x11cd1a
	ldrh r0, [r0, #0]	@ 0011cd1a 0088
.org 0x11cd1c
	ldr r1, [pc, #20]	@ 0011cd1c 0549
.org 0x11cd1e
	adds r0, r0, r1	@ 0011cd1e 4018
.org 0x11cd20
	movs r1, #17	@ 0011cd20 1121
.org 0x11cd22
	movs r2, #15	@ 0011cd22 0f22
.org 0x11cd24
	bl 0x10d85c	@ 0011cd24 f0f79afd
.org 0x11cd28
	movs r7, #1	@ 0011cd28 0127
.org 0x11cd2a
	b.n 0x11cdbc	@ 0011cd2a 47e0
.org 0x11cd2c
	.byte 0xcc,0x0d,0x00,0x00	@ 0011cd2c data
.org 0x11cd30
	.byte 0xf8,0xcf,0x86,0x08	@ 0011cd30 data
.org 0x11cd34
	.byte 0x5f,0x0e,0x01,0x09	@ 0011cd34 data
.org 0x11cd38
	movs r4, #1	@ 0011cd38 0124
.org 0x11cd3a
	strb r4, [r1, #25]	@ 0011cd3a 4c76
.org 0x11cd3c
	ldr r2, [pc, #140]	@ 0011cd3c 234a
.org 0x11cd3e
	adds r0, r6, r2	@ 0011cd3e b018
.org 0x11cd40
	bl 0x11d718	@ 0011cd40 00f0eafc
.org 0x11cd44
	lsls r1, r0, #24	@ 0011cd44 0106
.org 0x11cd46
	lsrs r2, r1, #24	@ 0011cd46 0a0e
.org 0x11cd48
	cmp r2, #255	@ 0011cd48 ff2a
.org 0x11cd4a
	beq.n 0x11cd92	@ 0011cd4a 22d0
.org 0x11cd4c
	ldr r0, [pc, #128]	@ 0011cd4c 2048
.org 0x11cd4e
	ldr r0, [r0, #0]	@ 0011cd4e 0068
.org 0x11cd50
	lsrs r1, r1, #26	@ 0011cd50 890e
.org 0x11cd52
	adds r0, r0, r1	@ 0011cd52 4018
.org 0x11cd54
	ldrb r1, [r0, #0]	@ 0011cd54 0178
.org 0x11cd56
	movs r0, #3	@ 0011cd56 0320
.org 0x11cd58
	ands r0, r2	@ 0011cd58 1040
.org 0x11cd5a
	adds r0, #4	@ 0011cd5a 0430
.org 0x11cd5c
	asrs r1, r0	@ 0011cd5c 0141
.org 0x11cd5e
	ands r1, r4	@ 0011cd5e 2140
.org 0x11cd60
	cmp r1, #0	@ 0011cd60 0029
.org 0x11cd62
	beq.n 0x11cd92	@ 0011cd62 16d0
.org 0x11cd64
	ldr r4, [pc, #108]	@ 0011cd64 1b4c
.org 0x11cd66
	movs r1, #200	@ 0011cd66 c821
.org 0x11cd68
	lsls r1, r1, #1	@ 0011cd68 4900
.org 0x11cd6a
	adds r0, r2, r1	@ 0011cd6a 5018
.org 0x11cd6c
	lsls r0, r0, #1	@ 0011cd6c 4000
.org 0x11cd6e
	adds r0, r0, r4	@ 0011cd6e 0019
.org 0x11cd70
	ldrh r0, [r0, #0]	@ 0011cd70 0088
.org 0x11cd72
	ldr r5, [pc, #100]	@ 0011cd72 194d
.org 0x11cd74
	adds r0, r0, r5	@ 0011cd74 4019
.org 0x11cd76
	movs r1, #17	@ 0011cd76 1121
.org 0x11cd78
	movs r2, #1	@ 0011cd78 0122
.org 0x11cd7a
	bl 0x10d85c	@ 0011cd7a f0f76ffd
.org 0x11cd7e
	movs r2, #241	@ 0011cd7e f122
.org 0x11cd80
	lsls r2, r2, #2	@ 0011cd80 9200
.org 0x11cd82
	adds r4, r4, r2	@ 0011cd82 a418
.org 0x11cd84
	ldrh r0, [r4, #0]	@ 0011cd84 2088
.org 0x11cd86
	adds r0, r0, r5	@ 0011cd86 4019
.org 0x11cd88
	movs r1, #17	@ 0011cd88 1121
.org 0x11cd8a
	movs r2, #15	@ 0011cd8a 0f22
.org 0x11cd8c
	bl 0x10d85c	@ 0011cd8c f0f766fd
.org 0x11cd90
	movs r7, #2	@ 0011cd90 0227
.org 0x11cd92
	cmp r7, #0	@ 0011cd92 002f
.org 0x11cd94
	bne.n 0x11cdbc	@ 0011cd94 12d1
.org 0x11cd96
	ldr r4, [pc, #60]	@ 0011cd96 0f4c
.org 0x11cd98
	movs r1, #239	@ 0011cd98 ef21
.org 0x11cd9a
	lsls r1, r1, #2	@ 0011cd9a 8900
.org 0x11cd9c
	adds r0, r4, r1	@ 0011cd9c 6018
.org 0x11cd9e
	ldrh r0, [r0, #0]	@ 0011cd9e 0088
.org 0x11cda0
	ldr r5, [pc, #52]	@ 0011cda0 0d4d
.org 0x11cda2
	adds r0, r0, r5	@ 0011cda2 4019
.org 0x11cda4
	movs r1, #17	@ 0011cda4 1121
.org 0x11cda6
	movs r2, #1	@ 0011cda6 0122
.org 0x11cda8
	bl 0x10d85c	@ 0011cda8 f0f758fd
.org 0x11cdac
	ldr r2, [pc, #44]	@ 0011cdac 0b4a
.org 0x11cdae
	adds r4, r4, r2	@ 0011cdae a418
.org 0x11cdb0
	ldrh r0, [r4, #0]	@ 0011cdb0 2088
.org 0x11cdb2
	adds r0, r0, r5	@ 0011cdb2 4019
.org 0x11cdb4
	movs r1, #17	@ 0011cdb4 1121
.org 0x11cdb6
	movs r2, #15	@ 0011cdb6 0f22
.org 0x11cdb8
	bl 0x10d85c	@ 0011cdb8 f0f750fd
