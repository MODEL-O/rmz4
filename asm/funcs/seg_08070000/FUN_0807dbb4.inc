@ FUN_0807dbb4  entry 0x0807dbb4  size 236
.thumb
.org 0x7dbb4
FUN_0807dbb4:
	push {r4, r5, r6, lr}	@ 0007dbb4 70b5
.org 0x7dbb6
	sub sp, #8	@ 0007dbb6 82b0
.org 0x7dbb8
	adds r5, r0, #0	@ 0007dbb8 051c
.org 0x7dbba
	ldrb r0, [r5, #15]	@ 0007dbba e87b
.org 0x7dbbc
	cmp r0, #0	@ 0007dbbc 0028
.org 0x7dbbe
	bne.n 0x7dbdc	@ 0007dbbe 0dd1
.org 0x7dbc0
	ldr r0, [pc, #220]	@ 0007dbc0 3748
.org 0x7dbc2
	bl 0x2b10	@ 0007dbc2 84f7a5ff
.org 0x7dbc6
	adds r0, r5, #0	@ 0007dbc6 281c
.org 0x7dbc8
	movs r1, #27	@ 0007dbc8 1b21
.org 0x7dbca
	bl 0x7e8c8	@ 0007dbca 00f07dfe
.org 0x7dbce
	movs r0, #64	@ 0007dbce 4020
.org 0x7dbd0
	strb r0, [r5, #18]	@ 0007dbd0 a874
.org 0x7dbd2
	movs r0, #1	@ 0007dbd2 0120
.org 0x7dbd4
	strb r0, [r5, #19]	@ 0007dbd4 e874
.org 0x7dbd6
	ldrb r0, [r5, #15]	@ 0007dbd6 e87b
.org 0x7dbd8
	adds r0, #1	@ 0007dbd8 0130
.org 0x7dbda
	strb r0, [r5, #15]	@ 0007dbda e873
.org 0x7dbdc
	adds r4, r5, #0	@ 0007dbdc 2c1c
.org 0x7dbde
	adds r4, #188	@ 0007dbde bc34
.org 0x7dbe0
	ldrb r0, [r4, #0]	@ 0007dbe0 2078
.org 0x7dbe2
	cmp r0, #0	@ 0007dbe2 0028
.org 0x7dbe4
	beq.n 0x7dbec	@ 0007dbe4 02d0
.org 0x7dbe6
	adds r0, r5, #0	@ 0007dbe6 281c
.org 0x7dbe8
	bl 0x1cff0	@ 0007dbe8 9ff702fa
.org 0x7dbec
	adds r0, r5, #0	@ 0007dbec 281c
.org 0x7dbee
	adds r0, #116	@ 0007dbee 7430
.org 0x7dbf0
	ldr r3, [pc, #176]	@ 0007dbf0 2c4b
.org 0x7dbf2
	ldr r2, [pc, #180]	@ 0007dbf2 2d4a
.org 0x7dbf4
	ldrb r1, [r4, #0]	@ 0007dbf4 2178
.org 0x7dbf6
	lsls r1, r1, #1	@ 0007dbf6 4900
.org 0x7dbf8
	adds r1, r1, r2	@ 0007dbf8 8918
.org 0x7dbfa
	ldrh r2, [r1, #0]	@ 0007dbfa 0a88
.org 0x7dbfc
	lsls r2, r2, #2	@ 0007dbfc 9200
.org 0x7dbfe
	adds r2, r2, r3	@ 0007dbfe d218
.org 0x7dc00
	adds r1, r5, #0	@ 0007dc00 291c
.org 0x7dc02
	adds r1, #113	@ 0007dc02 7131
.org 0x7dc04
	ldrb r1, [r1, #0]	@ 0007dc04 0978
.org 0x7dc06
	lsls r1, r1, #24	@ 0007dc06 0906
.org 0x7dc08
	asrs r1, r1, #24	@ 0007dc08 0916
.org 0x7dc0a
	ldr r2, [r2, #0]	@ 0007dc0a 1268
.org 0x7dc0c
	lsls r1, r1, #2	@ 0007dc0c 8900
.org 0x7dc0e
	adds r1, r1, r2	@ 0007dc0e 8918
.org 0x7dc10
	ldr r1, [r1, #0]	@ 0007dc10 0968
.org 0x7dc12
	bl 0x5784	@ 0007dc12 87f7b7fd
.org 0x7dc16
	ldrb r0, [r5, #18]	@ 0007dc16 a87c
.org 0x7dc18
	cmp r0, #0	@ 0007dc18 0028
.org 0x7dc1a
	beq.n 0x7dc20	@ 0007dc1a 01d0
.org 0x7dc1c
	subs r0, #1	@ 0007dc1c 0138
.org 0x7dc1e
	strb r0, [r5, #18]	@ 0007dc1e a874
.org 0x7dc20
	ldrb r0, [r5, #19]	@ 0007dc20 e87c
.org 0x7dc22
	ldrb r1, [r5, #18]	@ 0007dc22 a97c
.org 0x7dc24
	cmp r0, #0	@ 0007dc24 0028
.org 0x7dc26
	beq.n 0x7dc8c	@ 0007dc26 31d0
.org 0x7dc28
	cmp r1, #32	@ 0007dc28 2029
.org 0x7dc2a
	bhi.n 0x7dc8c	@ 0007dc2a 2fd8
.org 0x7dc2c
	adds r6, r5, #0	@ 0007dc2c 2e1c
.org 0x7dc2e
	adds r6, #216	@ 0007dc2e d836
.org 0x7dc30
	ldr r0, [r6, #0]	@ 0007dc30 3068
.org 0x7dc32
	cmp r0, #0	@ 0007dc32 0028
.org 0x7dc34
	bne.n 0x7dc86	@ 0007dc34 27d1
.org 0x7dc36
	ldr r0, [pc, #116]	@ 0007dc36 1d48
.org 0x7dc38
	ldr r1, [pc, #116]	@ 0007dc38 1d49
.org 0x7dc3a
	movs r4, #184	@ 0007dc3a b824
.org 0x7dc3c
	lsls r4, r4, #1	@ 0007dc3c 6400
.org 0x7dc3e
	adds r1, r1, r4	@ 0007dc3e 0919
.org 0x7dc40
	ldrh r1, [r1, #0]	@ 0007dc40 0988
.org 0x7dc42
	ldrh r2, [r0, #6]	@ 0007dc42 c288
.org 0x7dc44
	lsrs r2, r2, #6	@ 0007dc44 9209
.org 0x7dc46
	subs r1, r1, r2	@ 0007dc46 891a
.org 0x7dc48
	lsls r1, r1, #5	@ 0007dc48 4901
.org 0x7dc4a
	movs r2, #128	@ 0007dc4a 8022
.org 0x7dc4c
	lsls r2, r2, #9	@ 0007dc4c 5202
.org 0x7dc4e
	adds r1, r1, r2	@ 0007dc4e 8918
.org 0x7dc50
	bl 0x1d30	@ 0007dc50 84f76ef8
.org 0x7dc54
	ldr r0, [pc, #92]	@ 0007dc54 1748
.org 0x7dc56
	ldr r1, [pc, #96]	@ 0007dc56 1849
.org 0x7dc58
	adds r1, r1, r4	@ 0007dc58 0919
.org 0x7dc5a
	ldrh r1, [r1, #0]	@ 0007dc5a 0988
.org 0x7dc5c
	ldrb r2, [r0, #7]	@ 0007dc5c c279
.org 0x7dc5e
	subs r1, r1, r2	@ 0007dc5e 891a
.org 0x7dc60
	lsls r1, r1, #5	@ 0007dc60 4901
.org 0x7dc62
	movs r2, #128	@ 0007dc62 8022
.org 0x7dc64
	lsls r2, r2, #2	@ 0007dc64 9200
.org 0x7dc66
	adds r1, r1, r2	@ 0007dc66 8918
.org 0x7dc68
	bl 0x2208	@ 0007dc68 84f7cefa
.org 0x7dc6c
	ldr r0, [r5, #84]	@ 0007dc6c 686d
.org 0x7dc6e
	str r0, [sp, #0]	@ 0007dc6e 0090
.org 0x7dc70
	ldr r0, [r5, #88]	@ 0007dc70 a86d
.org 0x7dc72
	ldr r1, [pc, #72]	@ 0007dc72 1249
.org 0x7dc74
	adds r0, r0, r1	@ 0007dc74 4018
.org 0x7dc76
	str r0, [sp, #4]	@ 0007dc76 0190
.org 0x7dc78
	adds r0, r5, #0	@ 0007dc78 281c
.org 0x7dc7a
	mov r1, sp	@ 0007dc7a 6946
.org 0x7dc7c
	movs r2, #0	@ 0007dc7c 0022
.org 0x7dc7e
	movs r3, #0	@ 0007dc7e 0023
.org 0x7dc80
	bl 0xcfa40	@ 0007dc80 51f0defe
.org 0x7dc84
	str r0, [r6, #0]	@ 0007dc84 3060
.org 0x7dc86
	movs r0, #0	@ 0007dc86 0020
.org 0x7dc88
	strb r0, [r5, #19]	@ 0007dc88 e874
.org 0x7dc8a
	ldrb r1, [r5, #18]	@ 0007dc8a a97c
.org 0x7dc8c
	cmp r1, #0	@ 0007dc8c 0029
.org 0x7dc8e
	bne.n 0x7dc98	@ 0007dc8e 03d1
.org 0x7dc90
	ldrb r0, [r5, #14]	@ 0007dc90 a87b
.org 0x7dc92
	adds r0, #1	@ 0007dc92 0130
.org 0x7dc94
	strb r0, [r5, #14]	@ 0007dc94 a873
.org 0x7dc96
	strb r1, [r5, #15]	@ 0007dc96 e973
.org 0x7dc98
	add sp, #8	@ 0007dc98 02b0
.org 0x7dc9a
	pop {r4, r5, r6}	@ 0007dc9a 70bc
.org 0x7dc9c
	pop {r0}	@ 0007dc9c 01bc
.org 0x7dc9e
	bx r0	@ 0007dc9e 0047
