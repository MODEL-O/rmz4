@ FUN_0809bf30  entry 0x0809bf30  size 110
.thumb
.org 0x9bf30
FUN_0809bf30:
	push {r4, r5, lr}	@ 0009bf30 30b5
.org 0x9bf32
	sub sp, #4	@ 0009bf32 81b0
.org 0x9bf34
	adds r4, r0, #0	@ 0009bf34 041c
.org 0x9bf36
	ldr r1, [pc, #104]	@ 0009bf36 1a49
.org 0x9bf38
	mov r0, sp	@ 0009bf38 6846
.org 0x9bf3a
	movs r2, #4	@ 0009bf3a 0422
.org 0x9bf3c
	bl 0x129258	@ 0009bf3c 8df08cf9
.org 0x9bf40
	ldrb r5, [r4, #17]	@ 0009bf40 657c
.org 0x9bf42
	ldrb r0, [r4, #15]	@ 0009bf42 e07b
.org 0x9bf44
	cmp r0, #0	@ 0009bf44 0028
.org 0x9bf46
	bne.n 0x9bf56	@ 0009bf46 06d1
.org 0x9bf48
	adds r1, r4, #0	@ 0009bf48 211c
.org 0x9bf4a
	adds r1, #189	@ 0009bf4a bd31
.org 0x9bf4c
	movs r0, #1	@ 0009bf4c 0120
.org 0x9bf4e
	strb r0, [r1, #0]	@ 0009bf4e 0870
.org 0x9bf50
	ldrb r0, [r4, #15]	@ 0009bf50 e07b
.org 0x9bf52
	adds r0, #1	@ 0009bf52 0130
.org 0x9bf54
	strb r0, [r4, #15]	@ 0009bf54 e073
.org 0x9bf56
	adds r0, r4, #0	@ 0009bf56 201c
.org 0x9bf58
	bl 0x1cff0	@ 0009bf58 81f74af8
.org 0x9bf5c
	adds r0, r4, #0	@ 0009bf5c 201c
.org 0x9bf5e
	adds r0, #116	@ 0009bf5e 7430
.org 0x9bf60
	ldr r3, [pc, #64]	@ 0009bf60 104b
.org 0x9bf62
	mov r2, sp	@ 0009bf62 6a46
.org 0x9bf64
	adds r1, r2, r5	@ 0009bf64 5119
.org 0x9bf66
	ldrb r2, [r1, #0]	@ 0009bf66 0a78
.org 0x9bf68
	lsls r2, r2, #2	@ 0009bf68 9200
.org 0x9bf6a
	adds r2, r2, r3	@ 0009bf6a d218
.org 0x9bf6c
	adds r1, r4, #0	@ 0009bf6c 211c
.org 0x9bf6e
	adds r1, #113	@ 0009bf6e 7131
.org 0x9bf70
	ldrb r1, [r1, #0]	@ 0009bf70 0978
.org 0x9bf72
	lsls r1, r1, #24	@ 0009bf72 0906
.org 0x9bf74
	asrs r1, r1, #24	@ 0009bf74 0916
.org 0x9bf76
	ldr r2, [r2, #0]	@ 0009bf76 1268
.org 0x9bf78
	lsls r1, r1, #2	@ 0009bf78 8900
.org 0x9bf7a
	adds r1, r1, r2	@ 0009bf7a 8918
.org 0x9bf7c
	ldr r1, [r1, #0]	@ 0009bf7c 0968
.org 0x9bf7e
	bl 0x5784	@ 0009bf7e 69f701fc
.org 0x9bf82
	adds r0, r4, #0	@ 0009bf82 201c
.org 0x9bf84
	adds r0, #188	@ 0009bf84 bc30
.org 0x9bf86
	ldrb r0, [r0, #0]	@ 0009bf86 0078
.org 0x9bf88
	cmp r0, #0	@ 0009bf88 0028
.org 0x9bf8a
	beq.n 0x9bf96	@ 0009bf8a 04d0
.org 0x9bf8c
	movs r1, #0	@ 0009bf8c 0021
.org 0x9bf8e
	movs r0, #3	@ 0009bf8e 0320
.org 0x9bf90
	strb r0, [r4, #13]	@ 0009bf90 6073
.org 0x9bf92
	strb r1, [r4, #14]	@ 0009bf92 a173
.org 0x9bf94
	strb r1, [r4, #15]	@ 0009bf94 e173
.org 0x9bf96
	add sp, #4	@ 0009bf96 01b0
.org 0x9bf98
	pop {r4, r5}	@ 0009bf98 30bc
.org 0x9bf9a
	pop {r0}	@ 0009bf9a 01bc
.org 0x9bf9c
	bx r0	@ 0009bf9c 0047
