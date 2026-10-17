@ FUN_0807cbb8  entry 0x0807cbb8  size 108
.thumb
.org 0x7cbb8
FUN_0807cbb8:
	push {r4, r5, lr}	@ 0007cbb8 30b5
.org 0x7cbba
	adds r4, r0, #0	@ 0007cbba 041c
.org 0x7cbbc
	ldrb r0, [r4, #15]	@ 0007cbbc e07b
.org 0x7cbbe
	cmp r0, #0	@ 0007cbbe 0028
.org 0x7cbc0
	bne.n 0x7cbd0	@ 0007cbc0 06d1
.org 0x7cbc2
	adds r0, r4, #0	@ 0007cbc2 201c
.org 0x7cbc4
	movs r1, #24	@ 0007cbc4 1821
.org 0x7cbc6
	bl 0x7e8c8	@ 0007cbc6 01f07ffe
.org 0x7cbca
	ldrb r0, [r4, #15]	@ 0007cbca e07b
.org 0x7cbcc
	adds r0, #1	@ 0007cbcc 0130
.org 0x7cbce
	strb r0, [r4, #15]	@ 0007cbce e073
.org 0x7cbd0
	adds r5, r4, #0	@ 0007cbd0 251c
.org 0x7cbd2
	adds r5, #188	@ 0007cbd2 bc35
.org 0x7cbd4
	ldrb r0, [r5, #0]	@ 0007cbd4 2878
.org 0x7cbd6
	cmp r0, #0	@ 0007cbd6 0028
.org 0x7cbd8
	beq.n 0x7cbe0	@ 0007cbd8 02d0
.org 0x7cbda
	adds r0, r4, #0	@ 0007cbda 201c
.org 0x7cbdc
	bl 0x1cff0	@ 0007cbdc a0f708fa
.org 0x7cbe0
	adds r0, r4, #0	@ 0007cbe0 201c
.org 0x7cbe2
	adds r0, #116	@ 0007cbe2 7430
.org 0x7cbe4
	ldr r3, [pc, #60]	@ 0007cbe4 0f4b
.org 0x7cbe6
	ldr r2, [pc, #64]	@ 0007cbe6 104a
.org 0x7cbe8
	ldrb r1, [r5, #0]	@ 0007cbe8 2978
.org 0x7cbea
	lsls r1, r1, #1	@ 0007cbea 4900
.org 0x7cbec
	adds r1, r1, r2	@ 0007cbec 8918
.org 0x7cbee
	ldrh r2, [r1, #0]	@ 0007cbee 0a88
.org 0x7cbf0
	lsls r2, r2, #2	@ 0007cbf0 9200
.org 0x7cbf2
	adds r2, r2, r3	@ 0007cbf2 d218
.org 0x7cbf4
	adds r1, r4, #0	@ 0007cbf4 211c
.org 0x7cbf6
	adds r1, #113	@ 0007cbf6 7131
.org 0x7cbf8
	ldrb r1, [r1, #0]	@ 0007cbf8 0978
.org 0x7cbfa
	lsls r1, r1, #24	@ 0007cbfa 0906
.org 0x7cbfc
	asrs r1, r1, #24	@ 0007cbfc 0916
.org 0x7cbfe
	ldr r2, [r2, #0]	@ 0007cbfe 1268
.org 0x7cc00
	lsls r1, r1, #2	@ 0007cc00 8900
.org 0x7cc02
	adds r1, r1, r2	@ 0007cc02 8918
.org 0x7cc04
	ldr r1, [r1, #0]	@ 0007cc04 0968
.org 0x7cc06
	bl 0x5784	@ 0007cc06 88f7bdfd
.org 0x7cc0a
	adds r0, r4, #0	@ 0007cc0a 201c
.org 0x7cc0c
	adds r0, #115	@ 0007cc0c 7330
.org 0x7cc0e
	ldrb r0, [r0, #0]	@ 0007cc0e 0078
.org 0x7cc10
	cmp r0, #3	@ 0007cc10 0328
.org 0x7cc12
	bne.n 0x7cc1e	@ 0007cc12 04d1
.org 0x7cc14
	ldrb r0, [r4, #14]	@ 0007cc14 a07b
.org 0x7cc16
	adds r0, #1	@ 0007cc16 0130
.org 0x7cc18
	movs r1, #0	@ 0007cc18 0021
.org 0x7cc1a
	strb r0, [r4, #14]	@ 0007cc1a a073
.org 0x7cc1c
	strb r1, [r4, #15]	@ 0007cc1c e173
.org 0x7cc1e
	pop {r4, r5}	@ 0007cc1e 30bc
.org 0x7cc20
	pop {r0}	@ 0007cc20 01bc
.org 0x7cc22
	bx r0	@ 0007cc22 0047
