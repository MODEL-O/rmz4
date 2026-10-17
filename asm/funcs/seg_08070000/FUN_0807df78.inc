@ FUN_0807df78  entry 0x0807df78  size 126
.thumb
.org 0x7df78
FUN_0807df78:
	push {r4, r5, lr}	@ 0007df78 30b5
.org 0x7df7a
	adds r4, r0, #0	@ 0007df7a 041c
.org 0x7df7c
	ldrb r3, [r4, #15]	@ 0007df7c e37b
.org 0x7df7e
	cmp r3, #0	@ 0007df7e 002b
.org 0x7df80
	bne.n 0x7dfa2	@ 0007df80 0fd1
.org 0x7df82
	adds r2, r4, #0	@ 0007df82 221c
.org 0x7df84
	adds r2, #216	@ 0007df84 d832
.org 0x7df86
	ldr r1, [r2, #0]	@ 0007df86 1168
.org 0x7df88
	cmp r1, #0	@ 0007df88 0029
.org 0x7df8a
	beq.n 0x7df94	@ 0007df8a 03d0
.org 0x7df8c
	adds r1, #180	@ 0007df8c b431
.org 0x7df8e
	movs r0, #1	@ 0007df8e 0120
.org 0x7df90
	strb r0, [r1, #0]	@ 0007df90 0870
.org 0x7df92
	str r3, [r2, #0]	@ 0007df92 1360
.org 0x7df94
	adds r0, r4, #0	@ 0007df94 201c
.org 0x7df96
	movs r1, #0	@ 0007df96 0021
.org 0x7df98
	bl 0x7e8c8	@ 0007df98 00f096fc
.org 0x7df9c
	ldrb r0, [r4, #15]	@ 0007df9c e07b
.org 0x7df9e
	adds r0, #1	@ 0007df9e 0130
.org 0x7dfa0
	strb r0, [r4, #15]	@ 0007dfa0 e073
.org 0x7dfa2
	adds r5, r4, #0	@ 0007dfa2 251c
.org 0x7dfa4
	adds r5, #188	@ 0007dfa4 bc35
.org 0x7dfa6
	ldrb r0, [r5, #0]	@ 0007dfa6 2878
.org 0x7dfa8
	cmp r0, #0	@ 0007dfa8 0028
.org 0x7dfaa
	beq.n 0x7dfb2	@ 0007dfaa 02d0
.org 0x7dfac
	adds r0, r4, #0	@ 0007dfac 201c
.org 0x7dfae
	bl 0x1cff0	@ 0007dfae 9ff71ff8
.org 0x7dfb2
	adds r0, r4, #0	@ 0007dfb2 201c
.org 0x7dfb4
	adds r0, #116	@ 0007dfb4 7430
.org 0x7dfb6
	ldr r3, [pc, #64]	@ 0007dfb6 104b
.org 0x7dfb8
	ldr r2, [pc, #64]	@ 0007dfb8 104a
.org 0x7dfba
	ldrb r1, [r5, #0]	@ 0007dfba 2978
.org 0x7dfbc
	lsls r1, r1, #1	@ 0007dfbc 4900
.org 0x7dfbe
	adds r1, r1, r2	@ 0007dfbe 8918
.org 0x7dfc0
	ldrh r2, [r1, #0]	@ 0007dfc0 0a88
.org 0x7dfc2
	lsls r2, r2, #2	@ 0007dfc2 9200
.org 0x7dfc4
	adds r2, r2, r3	@ 0007dfc4 d218
.org 0x7dfc6
	adds r1, r4, #0	@ 0007dfc6 211c
.org 0x7dfc8
	adds r1, #113	@ 0007dfc8 7131
.org 0x7dfca
	ldrb r1, [r1, #0]	@ 0007dfca 0978
.org 0x7dfcc
	lsls r1, r1, #24	@ 0007dfcc 0906
.org 0x7dfce
	asrs r1, r1, #24	@ 0007dfce 0916
.org 0x7dfd0
	ldr r2, [r2, #0]	@ 0007dfd0 1268
.org 0x7dfd2
	lsls r1, r1, #2	@ 0007dfd2 8900
.org 0x7dfd4
	adds r1, r1, r2	@ 0007dfd4 8918
.org 0x7dfd6
	ldr r1, [r1, #0]	@ 0007dfd6 0968
.org 0x7dfd8
	bl 0x5784	@ 0007dfd8 87f7d4fb
.org 0x7dfdc
	adds r0, r4, #0	@ 0007dfdc 201c
.org 0x7dfde
	adds r0, #204	@ 0007dfde cc30
.org 0x7dfe0
	movs r2, #0	@ 0007dfe0 0022
.org 0x7dfe2
	ldrsh r1, [r0, r2]	@ 0007dfe2 815e
.org 0x7dfe4
	cmp r1, #0	@ 0007dfe4 0029
.org 0x7dfe6
	bne.n 0x7dff0	@ 0007dfe6 03d1
.org 0x7dfe8
	ldrb r0, [r4, #14]	@ 0007dfe8 a07b
.org 0x7dfea
	adds r0, #1	@ 0007dfea 0130
.org 0x7dfec
	strb r0, [r4, #14]	@ 0007dfec a073
.org 0x7dfee
	strb r1, [r4, #15]	@ 0007dfee e173
.org 0x7dff0
	pop {r4, r5}	@ 0007dff0 30bc
.org 0x7dff2
	pop {r0}	@ 0007dff2 01bc
.org 0x7dff4
	bx r0	@ 0007dff4 0047
