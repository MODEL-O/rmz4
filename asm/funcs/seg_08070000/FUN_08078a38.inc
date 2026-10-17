@ FUN_08078a38  entry 0x08078a38  size 194
.thumb
.org 0x78a38
FUN_08078a38:
	push {r4, lr}	@ 00078a38 10b5
.org 0x78a3a
	adds r4, r0, #0	@ 00078a3a 041c
.org 0x78a3c
	ldrb r0, [r4, #15]	@ 00078a3c e07b
.org 0x78a3e
	cmp r0, #0	@ 00078a3e 0028
.org 0x78a40
	bne.n 0x78a68	@ 00078a40 12d1
.org 0x78a42
	adds r2, r4, #0	@ 00078a42 221c
.org 0x78a44
	adds r2, #200	@ 00078a44 c832
.org 0x78a46
	ldr r0, [r2, #0]	@ 00078a46 1068
.org 0x78a48
	adds r0, #181	@ 00078a48 b530
.org 0x78a4a
	movs r1, #5	@ 00078a4a 0521
.org 0x78a4c
	strb r1, [r0, #0]	@ 00078a4c 0170
.org 0x78a4e
	ldr r0, [r2, #0]	@ 00078a4e 1068
.org 0x78a50
	adds r0, #182	@ 00078a50 b630
.org 0x78a52
	movs r1, #1	@ 00078a52 0121
.org 0x78a54
	strb r1, [r0, #0]	@ 00078a54 0170
.org 0x78a56
	adds r0, r4, #0	@ 00078a56 201c
.org 0x78a58
	movs r1, #0	@ 00078a58 0021
.org 0x78a5a
	bl 0x78fdc	@ 00078a5a 00f0bffa
.org 0x78a5e
	movs r0, #81	@ 00078a5e 5120
.org 0x78a60
	str r0, [r4, #100]	@ 00078a60 6066
.org 0x78a62
	ldrb r0, [r4, #15]	@ 00078a62 e07b
.org 0x78a64
	adds r0, #1	@ 00078a64 0130
.org 0x78a66
	strb r0, [r4, #15]	@ 00078a66 e073
.org 0x78a68
	adds r0, r4, #0	@ 00078a68 201c
.org 0x78a6a
	bl 0x1cff0	@ 00078a6a a4f7c1fa
.org 0x78a6e
	adds r0, r4, #0	@ 00078a6e 201c
.org 0x78a70
	adds r0, #116	@ 00078a70 7430
.org 0x78a72
	ldr r3, [pc, #136]	@ 00078a72 224b
.org 0x78a74
	ldr r2, [pc, #136]	@ 00078a74 224a
.org 0x78a76
	adds r1, r4, #0	@ 00078a76 211c
.org 0x78a78
	adds r1, #196	@ 00078a78 c431
.org 0x78a7a
	ldrb r1, [r1, #0]	@ 00078a7a 0978
.org 0x78a7c
	lsls r1, r1, #1	@ 00078a7c 4900
.org 0x78a7e
	adds r1, r1, r2	@ 00078a7e 8918
.org 0x78a80
	ldrh r2, [r1, #0]	@ 00078a80 0a88
.org 0x78a82
	lsls r2, r2, #2	@ 00078a82 9200
.org 0x78a84
	adds r2, r2, r3	@ 00078a84 d218
.org 0x78a86
	adds r1, r4, #0	@ 00078a86 211c
.org 0x78a88
	adds r1, #113	@ 00078a88 7131
.org 0x78a8a
	ldrb r1, [r1, #0]	@ 00078a8a 0978
.org 0x78a8c
	lsls r1, r1, #24	@ 00078a8c 0906
.org 0x78a8e
	asrs r1, r1, #24	@ 00078a8e 0916
.org 0x78a90
	ldr r2, [r2, #0]	@ 00078a90 1268
.org 0x78a92
	lsls r1, r1, #2	@ 00078a92 8900
.org 0x78a94
	adds r1, r1, r2	@ 00078a94 8918
.org 0x78a96
	ldr r1, [r1, #0]	@ 00078a96 0968
.org 0x78a98
	bl 0x5784	@ 00078a98 8cf774fe
.org 0x78a9c
	adds r0, r4, #0	@ 00078a9c 201c
.org 0x78a9e
	bl 0x78f28	@ 00078a9e 00f043fa
.org 0x78aa2
	ldr r0, [r4, #100]	@ 00078aa2 606e
.org 0x78aa4
	cmp r0, #0	@ 00078aa4 0028
.org 0x78aa6
	beq.n 0x78aac	@ 00078aa6 01d0
.org 0x78aa8
	subs r0, #1	@ 00078aa8 0138
.org 0x78aaa
	str r0, [r4, #100]	@ 00078aaa 6066
.org 0x78aac
	movs r0, #132	@ 00078aac 8420
.org 0x78aae
	bl 0x25d8	@ 00078aae 89f793fd
.org 0x78ab2
	adds r0, r4, #0	@ 00078ab2 201c
.org 0x78ab4
	adds r0, #200	@ 00078ab4 c830
.org 0x78ab6
	ldr r1, [r0, #0]	@ 00078ab6 0168
.org 0x78ab8
	adds r0, r1, #0	@ 00078ab8 081c
.org 0x78aba
	adds r0, #180	@ 00078aba b430
.org 0x78abc
	ldrb r0, [r0, #0]	@ 00078abc 0078
.org 0x78abe
	cmp r0, #0	@ 00078abe 0028
.org 0x78ac0
	beq.n 0x78af4	@ 00078ac0 18d0
.org 0x78ac2
	adds r0, r1, #0	@ 00078ac2 081c
.org 0x78ac4
	adds r0, #182	@ 00078ac4 b630
.org 0x78ac6
	ldrb r0, [r0, #0]	@ 00078ac6 0078
.org 0x78ac8
	cmp r0, #0	@ 00078ac8 0028
.org 0x78aca
	bne.n 0x78af4	@ 00078aca 13d1
.org 0x78acc
	adds r0, r4, #0	@ 00078acc 201c
.org 0x78ace
	adds r0, #204	@ 00078ace cc30
.org 0x78ad0
	ldr r1, [r0, #0]	@ 00078ad0 0168
.org 0x78ad2
	adds r0, r1, #0	@ 00078ad2 081c
.org 0x78ad4
	adds r0, #184	@ 00078ad4 b830
.org 0x78ad6
	ldrb r0, [r0, #0]	@ 00078ad6 0078
.org 0x78ad8
	cmp r0, #0	@ 00078ad8 0028
.org 0x78ada
	beq.n 0x78af4	@ 00078ada 0bd0
.org 0x78adc
	adds r0, r1, #0	@ 00078adc 081c
.org 0x78ade
	adds r0, #185	@ 00078ade b930
.org 0x78ae0
	ldrb r0, [r0, #0]	@ 00078ae0 0078
.org 0x78ae2
	cmp r0, #0	@ 00078ae2 0028
.org 0x78ae4
	bne.n 0x78af4	@ 00078ae4 06d1
.org 0x78ae6
	ldr r1, [r4, #100]	@ 00078ae6 616e
.org 0x78ae8
	cmp r1, #0	@ 00078ae8 0029
.org 0x78aea
	bne.n 0x78af4	@ 00078aea 03d1
.org 0x78aec
	ldrb r0, [r4, #14]	@ 00078aec a07b
.org 0x78aee
	adds r0, #1	@ 00078aee 0130
.org 0x78af0
	strb r0, [r4, #14]	@ 00078af0 a073
.org 0x78af2
	strb r1, [r4, #15]	@ 00078af2 e173
.org 0x78af4
	pop {r4}	@ 00078af4 10bc
.org 0x78af6
	pop {r0}	@ 00078af6 01bc
.org 0x78af8
	bx r0	@ 00078af8 0047
