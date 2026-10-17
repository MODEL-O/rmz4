@ FUN_08077ba0  entry 0x08077ba0  size 154
.thumb
.org 0x77ba0
FUN_08077ba0:
	push {r4, r5, lr}	@ 00077ba0 30b5
.org 0x77ba2
	adds r5, r0, #0	@ 00077ba2 051c
.org 0x77ba4
	ldrb r0, [r5, #15]	@ 00077ba4 e87b
.org 0x77ba6
	cmp r0, #0	@ 00077ba6 0028
.org 0x77ba8
	bne.n 0x77bd6	@ 00077ba8 15d1
.org 0x77baa
	adds r0, r5, #0	@ 00077baa 281c
.org 0x77bac
	movs r1, #0	@ 00077bac 0021
.org 0x77bae
	bl 0x78fdc	@ 00077bae 01f015fa
.org 0x77bb2
	adds r0, r5, #0	@ 00077bb2 281c
.org 0x77bb4
	adds r0, #197	@ 00077bb4 c530
.org 0x77bb6
	ldrb r1, [r0, #0]	@ 00077bb6 0178
.org 0x77bb8
	lsls r4, r1, #1	@ 00077bb8 4c00
.org 0x77bba
	subs r4, #1	@ 00077bba 013c
.org 0x77bbc
	lsls r0, r4, #9	@ 00077bbc 6002
.org 0x77bbe
	str r0, [r5, #92]	@ 00077bbe e865
.org 0x77bc0
	adds r0, r5, #0	@ 00077bc0 281c
.org 0x77bc2
	bl 0x79048	@ 00077bc2 01f041fa
.org 0x77bc6
	lsls r1, r4, #2	@ 00077bc6 a100
.org 0x77bc8
	adds r1, r1, r4	@ 00077bc8 0919
.org 0x77bca
	lsls r1, r1, #11	@ 00077bca c902
.org 0x77bcc
	adds r0, r0, r1	@ 00077bcc 4018
.org 0x77bce
	str r0, [r5, #100]	@ 00077bce 6866
.org 0x77bd0
	ldrb r0, [r5, #15]	@ 00077bd0 e87b
.org 0x77bd2
	adds r0, #1	@ 00077bd2 0130
.org 0x77bd4
	strb r0, [r5, #15]	@ 00077bd4 e873
.org 0x77bd6
	adds r0, r5, #0	@ 00077bd6 281c
.org 0x77bd8
	bl 0x1cff0	@ 00077bd8 a5f70afa
.org 0x77bdc
	adds r0, r5, #0	@ 00077bdc 281c
.org 0x77bde
	adds r0, #116	@ 00077bde 7430
.org 0x77be0
	ldr r3, [pc, #88]	@ 00077be0 164b
.org 0x77be2
	ldr r2, [pc, #92]	@ 00077be2 174a
.org 0x77be4
	adds r1, r5, #0	@ 00077be4 291c
.org 0x77be6
	adds r1, #196	@ 00077be6 c431
.org 0x77be8
	ldrb r1, [r1, #0]	@ 00077be8 0978
.org 0x77bea
	lsls r1, r1, #1	@ 00077bea 4900
.org 0x77bec
	adds r1, r1, r2	@ 00077bec 8918
.org 0x77bee
	ldrh r2, [r1, #0]	@ 00077bee 0a88
.org 0x77bf0
	lsls r2, r2, #2	@ 00077bf0 9200
.org 0x77bf2
	adds r2, r2, r3	@ 00077bf2 d218
.org 0x77bf4
	adds r1, r5, #0	@ 00077bf4 291c
.org 0x77bf6
	adds r1, #113	@ 00077bf6 7131
.org 0x77bf8
	ldrb r1, [r1, #0]	@ 00077bf8 0978
.org 0x77bfa
	lsls r1, r1, #24	@ 00077bfa 0906
.org 0x77bfc
	asrs r1, r1, #24	@ 00077bfc 0916
.org 0x77bfe
	ldr r2, [r2, #0]	@ 00077bfe 1268
.org 0x77c00
	lsls r1, r1, #2	@ 00077c00 8900
.org 0x77c02
	adds r1, r1, r2	@ 00077c02 8918
.org 0x77c04
	ldr r1, [r1, #0]	@ 00077c04 0968
.org 0x77c06
	bl 0x5784	@ 00077c06 8df7bdfd
.org 0x77c0a
	adds r0, r5, #0	@ 00077c0a 281c
.org 0x77c0c
	bl 0x78f64	@ 00077c0c 01f0aaf9
.org 0x77c10
	ldr r0, [r5, #84]	@ 00077c10 686d
.org 0x77c12
	ldr r1, [r5, #92]	@ 00077c12 e96d
.org 0x77c14
	adds r0, r0, r1	@ 00077c14 4018
.org 0x77c16
	str r0, [r5, #84]	@ 00077c16 6865
.org 0x77c18
	ldr r0, [pc, #40]	@ 00077c18 0a48
.org 0x77c1a
	adds r1, r5, #0	@ 00077c1a 291c
.org 0x77c1c
	adds r1, #84	@ 00077c1c 5431
.org 0x77c1e
	bl 0x1fb14	@ 00077c1e a7f779ff
.org 0x77c22
	movs r1, #160	@ 00077c22 a021
.org 0x77c24
	lsls r1, r1, #6	@ 00077c24 8901
.org 0x77c26
	cmp r0, r1	@ 00077c26 8842
.org 0x77c28
	bls.n 0x77c34	@ 00077c28 04d9
.org 0x77c2a
	ldrb r0, [r5, #14]	@ 00077c2a a87b
.org 0x77c2c
	adds r0, #1	@ 00077c2c 0130
.org 0x77c2e
	movs r1, #0	@ 00077c2e 0021
.org 0x77c30
	strb r0, [r5, #14]	@ 00077c30 a873
.org 0x77c32
	strb r1, [r5, #15]	@ 00077c32 e973
.org 0x77c34
	pop {r4, r5}	@ 00077c34 30bc
.org 0x77c36
	pop {r0}	@ 00077c36 01bc
.org 0x77c38
	bx r0	@ 00077c38 0047
