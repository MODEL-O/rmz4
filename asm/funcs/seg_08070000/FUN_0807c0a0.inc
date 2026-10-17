@ FUN_0807c0a0  entry 0x0807c0a0  size 108
.thumb
.org 0x7c0a0
FUN_0807c0a0:
	push {r4, r5, lr}	@ 0007c0a0 30b5
.org 0x7c0a2
	adds r4, r0, #0	@ 0007c0a2 041c
.org 0x7c0a4
	ldrb r0, [r4, #15]	@ 0007c0a4 e07b
.org 0x7c0a6
	cmp r0, #0	@ 0007c0a6 0028
.org 0x7c0a8
	bne.n 0x7c0b8	@ 0007c0a8 06d1
.org 0x7c0aa
	adds r0, r4, #0	@ 0007c0aa 201c
.org 0x7c0ac
	movs r1, #11	@ 0007c0ac 0b21
.org 0x7c0ae
	bl 0x7e8c8	@ 0007c0ae 02f00bfc
.org 0x7c0b2
	ldrb r0, [r4, #15]	@ 0007c0b2 e07b
.org 0x7c0b4
	adds r0, #1	@ 0007c0b4 0130
.org 0x7c0b6
	strb r0, [r4, #15]	@ 0007c0b6 e073
.org 0x7c0b8
	adds r5, r4, #0	@ 0007c0b8 251c
.org 0x7c0ba
	adds r5, #188	@ 0007c0ba bc35
.org 0x7c0bc
	ldrb r0, [r5, #0]	@ 0007c0bc 2878
.org 0x7c0be
	cmp r0, #0	@ 0007c0be 0028
.org 0x7c0c0
	beq.n 0x7c0c8	@ 0007c0c0 02d0
.org 0x7c0c2
	adds r0, r4, #0	@ 0007c0c2 201c
.org 0x7c0c4
	bl 0x1cff0	@ 0007c0c4 a0f794ff
.org 0x7c0c8
	adds r0, r4, #0	@ 0007c0c8 201c
.org 0x7c0ca
	adds r0, #116	@ 0007c0ca 7430
.org 0x7c0cc
	ldr r3, [pc, #60]	@ 0007c0cc 0f4b
.org 0x7c0ce
	ldr r2, [pc, #64]	@ 0007c0ce 104a
.org 0x7c0d0
	ldrb r1, [r5, #0]	@ 0007c0d0 2978
.org 0x7c0d2
	lsls r1, r1, #1	@ 0007c0d2 4900
.org 0x7c0d4
	adds r1, r1, r2	@ 0007c0d4 8918
.org 0x7c0d6
	ldrh r2, [r1, #0]	@ 0007c0d6 0a88
.org 0x7c0d8
	lsls r2, r2, #2	@ 0007c0d8 9200
.org 0x7c0da
	adds r2, r2, r3	@ 0007c0da d218
.org 0x7c0dc
	adds r1, r4, #0	@ 0007c0dc 211c
.org 0x7c0de
	adds r1, #113	@ 0007c0de 7131
.org 0x7c0e0
	ldrb r1, [r1, #0]	@ 0007c0e0 0978
.org 0x7c0e2
	lsls r1, r1, #24	@ 0007c0e2 0906
.org 0x7c0e4
	asrs r1, r1, #24	@ 0007c0e4 0916
.org 0x7c0e6
	ldr r2, [r2, #0]	@ 0007c0e6 1268
.org 0x7c0e8
	lsls r1, r1, #2	@ 0007c0e8 8900
.org 0x7c0ea
	adds r1, r1, r2	@ 0007c0ea 8918
.org 0x7c0ec
	ldr r1, [r1, #0]	@ 0007c0ec 0968
.org 0x7c0ee
	bl 0x5784	@ 0007c0ee 89f749fb
.org 0x7c0f2
	adds r0, r4, #0	@ 0007c0f2 201c
.org 0x7c0f4
	adds r0, #115	@ 0007c0f4 7330
.org 0x7c0f6
	ldrb r0, [r0, #0]	@ 0007c0f6 0078
.org 0x7c0f8
	cmp r0, #3	@ 0007c0f8 0328
.org 0x7c0fa
	bne.n 0x7c106	@ 0007c0fa 04d1
.org 0x7c0fc
	ldrb r0, [r4, #14]	@ 0007c0fc a07b
.org 0x7c0fe
	adds r0, #1	@ 0007c0fe 0130
.org 0x7c100
	movs r1, #0	@ 0007c100 0021
.org 0x7c102
	strb r0, [r4, #14]	@ 0007c102 a073
.org 0x7c104
	strb r1, [r4, #15]	@ 0007c104 e173
.org 0x7c106
	pop {r4, r5}	@ 0007c106 30bc
.org 0x7c108
	pop {r0}	@ 0007c108 01bc
.org 0x7c10a
	bx r0	@ 0007c10a 0047
