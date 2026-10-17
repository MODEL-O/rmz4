@ FUN_0807ba1c  entry 0x0807ba1c  size 146
.thumb
.org 0x7ba1c
FUN_0807ba1c:
	push {r4, r5, lr}	@ 0007ba1c 30b5
.org 0x7ba1e
	adds r4, r0, #0	@ 0007ba1e 041c
.org 0x7ba20
	ldrb r0, [r4, #10]	@ 0007ba20 a07a
.org 0x7ba22
	lsrs r5, r0, #4	@ 0007ba22 0509
.org 0x7ba24
	movs r0, #1	@ 0007ba24 0120
.org 0x7ba26
	ands r5, r0	@ 0007ba26 0540
.org 0x7ba28
	ldrb r0, [r4, #15]	@ 0007ba28 e07b
.org 0x7ba2a
	cmp r0, #0	@ 0007ba2a 0028
.org 0x7ba2c
	bne.n 0x7ba52	@ 0007ba2c 11d1
.org 0x7ba2e
	movs r0, #161	@ 0007ba2e a120
.org 0x7ba30
	lsls r0, r0, #1	@ 0007ba30 4000
.org 0x7ba32
	bl 0x2b10	@ 0007ba32 87f76df8
.org 0x7ba36
	adds r0, r4, #0	@ 0007ba36 201c
.org 0x7ba38
	movs r1, #6	@ 0007ba38 0621
.org 0x7ba3a
	bl 0x7e8c8	@ 0007ba3a 02f045ff
.org 0x7ba3e
	adds r0, r5, #1	@ 0007ba3e 681c
.org 0x7ba40
	movs r1, #1	@ 0007ba40 0121
.org 0x7ba42
	ands r0, r1	@ 0007ba42 0840
.org 0x7ba44
	lsls r0, r0, #1	@ 0007ba44 4000
.org 0x7ba46
	subs r0, #1	@ 0007ba46 0138
.org 0x7ba48
	lsls r0, r0, #9	@ 0007ba48 4002
.org 0x7ba4a
	str r0, [r4, #92]	@ 0007ba4a e065
.org 0x7ba4c
	ldrb r0, [r4, #15]	@ 0007ba4c e07b
.org 0x7ba4e
	adds r0, #1	@ 0007ba4e 0130
.org 0x7ba50
	strb r0, [r4, #15]	@ 0007ba50 e073
.org 0x7ba52
	adds r5, r4, #0	@ 0007ba52 251c
.org 0x7ba54
	adds r5, #188	@ 0007ba54 bc35
.org 0x7ba56
	ldrb r0, [r5, #0]	@ 0007ba56 2878
.org 0x7ba58
	cmp r0, #0	@ 0007ba58 0028
.org 0x7ba5a
	beq.n 0x7ba62	@ 0007ba5a 02d0
.org 0x7ba5c
	adds r0, r4, #0	@ 0007ba5c 201c
.org 0x7ba5e
	bl 0x1cff0	@ 0007ba5e a1f7c7fa
.org 0x7ba62
	adds r0, r4, #0	@ 0007ba62 201c
.org 0x7ba64
	adds r0, #116	@ 0007ba64 7430
.org 0x7ba66
	ldr r3, [pc, #72]	@ 0007ba66 124b
.org 0x7ba68
	ldr r2, [pc, #72]	@ 0007ba68 124a
.org 0x7ba6a
	ldrb r1, [r5, #0]	@ 0007ba6a 2978
.org 0x7ba6c
	lsls r1, r1, #1	@ 0007ba6c 4900
.org 0x7ba6e
	adds r1, r1, r2	@ 0007ba6e 8918
.org 0x7ba70
	ldrh r2, [r1, #0]	@ 0007ba70 0a88
.org 0x7ba72
	lsls r2, r2, #2	@ 0007ba72 9200
.org 0x7ba74
	adds r2, r2, r3	@ 0007ba74 d218
.org 0x7ba76
	adds r1, r4, #0	@ 0007ba76 211c
.org 0x7ba78
	adds r1, #113	@ 0007ba78 7131
.org 0x7ba7a
	ldrb r1, [r1, #0]	@ 0007ba7a 0978
.org 0x7ba7c
	lsls r1, r1, #24	@ 0007ba7c 0906
.org 0x7ba7e
	asrs r1, r1, #24	@ 0007ba7e 0916
.org 0x7ba80
	ldr r2, [r2, #0]	@ 0007ba80 1268
.org 0x7ba82
	lsls r1, r1, #2	@ 0007ba82 8900
.org 0x7ba84
	adds r1, r1, r2	@ 0007ba84 8918
.org 0x7ba86
	ldr r1, [r1, #0]	@ 0007ba86 0968
.org 0x7ba88
	bl 0x5784	@ 0007ba88 89f77cfe
.org 0x7ba8c
	ldr r0, [r4, #84]	@ 0007ba8c 606d
.org 0x7ba8e
	ldr r1, [r4, #92]	@ 0007ba8e e16d
.org 0x7ba90
	adds r0, r0, r1	@ 0007ba90 4018
.org 0x7ba92
	str r0, [r4, #84]	@ 0007ba92 6065
.org 0x7ba94
	adds r0, r4, #0	@ 0007ba94 201c
.org 0x7ba96
	adds r0, #115	@ 0007ba96 7330
.org 0x7ba98
	ldrb r0, [r0, #0]	@ 0007ba98 0078
.org 0x7ba9a
	cmp r0, #3	@ 0007ba9a 0328
.org 0x7ba9c
	bne.n 0x7baa8	@ 0007ba9c 04d1
.org 0x7ba9e
	ldrb r0, [r4, #14]	@ 0007ba9e a07b
.org 0x7baa0
	adds r0, #1	@ 0007baa0 0130
.org 0x7baa2
	movs r1, #0	@ 0007baa2 0021
.org 0x7baa4
	strb r0, [r4, #14]	@ 0007baa4 a073
.org 0x7baa6
	strb r1, [r4, #15]	@ 0007baa6 e173
.org 0x7baa8
	pop {r4, r5}	@ 0007baa8 30bc
.org 0x7baaa
	pop {r0}	@ 0007baaa 01bc
.org 0x7baac
	bx r0	@ 0007baac 0047
