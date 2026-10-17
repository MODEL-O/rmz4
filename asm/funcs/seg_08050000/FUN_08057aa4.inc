@ FUN_08057aa4  entry 0x08057aa4  size 114
.thumb
.org 0x57aa4
FUN_08057aa4:
	push {r4, lr}	@ 00057aa4 10b5
.org 0x57aa6
	adds r4, r0, #0	@ 00057aa6 041c
.org 0x57aa8
	ldrb r0, [r4, #15]	@ 00057aa8 e07b
.org 0x57aaa
	cmp r0, #0	@ 00057aaa 0028
.org 0x57aac
	bne.n 0x57abc	@ 00057aac 06d1
.org 0x57aae
	ldr r1, [pc, #104]	@ 00057aae 1a49
.org 0x57ab0
	adds r0, r4, #0	@ 00057ab0 201c
.org 0x57ab2
	bl 0x1cf00	@ 00057ab2 c5f725fa
.org 0x57ab6
	ldrb r0, [r4, #15]	@ 00057ab6 e07b
.org 0x57ab8
	adds r0, #1	@ 00057ab8 0130
.org 0x57aba
	strb r0, [r4, #15]	@ 00057aba e073
.org 0x57abc
	adds r0, r4, #0	@ 00057abc 201c
.org 0x57abe
	bl 0x1cff0	@ 00057abe c5f797fa
.org 0x57ac2
	adds r0, r4, #0	@ 00057ac2 201c
.org 0x57ac4
	adds r0, #116	@ 00057ac4 7430
.org 0x57ac6
	ldr r3, [pc, #84]	@ 00057ac6 154b
.org 0x57ac8
	ldrb r1, [r4, #30]	@ 00057ac8 a17f
.org 0x57aca
	lsls r1, r1, #8	@ 00057aca 0902
.org 0x57acc
	adds r2, r4, #0	@ 00057acc 221c
.org 0x57ace
	adds r2, #112	@ 00057ace 7032
.org 0x57ad0
	ldrb r2, [r2, #0]	@ 00057ad0 1278
.org 0x57ad2
	orrs r1, r2	@ 00057ad2 1143
.org 0x57ad4
	ldr r2, [pc, #72]	@ 00057ad4 124a
.org 0x57ad6
	adds r1, r1, r2	@ 00057ad6 8918
.org 0x57ad8
	lsls r1, r1, #2	@ 00057ad8 8900
.org 0x57ada
	adds r1, r1, r3	@ 00057ada c918
.org 0x57adc
	adds r2, r4, #0	@ 00057adc 221c
.org 0x57ade
	adds r2, #113	@ 00057ade 7132
.org 0x57ae0
	ldrb r2, [r2, #0]	@ 00057ae0 1278
.org 0x57ae2
	lsls r2, r2, #24	@ 00057ae2 1206
.org 0x57ae4
	asrs r2, r2, #24	@ 00057ae4 1216
.org 0x57ae6
	ldr r1, [r1, #0]	@ 00057ae6 0968
.org 0x57ae8
	lsls r2, r2, #2	@ 00057ae8 9200
.org 0x57aea
	adds r2, r2, r1	@ 00057aea 5218
.org 0x57aec
	ldr r1, [r2, #0]	@ 00057aec 1168
.org 0x57aee
	ldrb r2, [r1, #0]	@ 00057aee 0a78
.org 0x57af0
	lsls r1, r2, #1	@ 00057af0 5100
.org 0x57af2
	adds r1, r1, r2	@ 00057af2 8918
.org 0x57af4
	lsls r1, r1, #3	@ 00057af4 c900
.org 0x57af6
	ldr r2, [pc, #44]	@ 00057af6 0b4a
.org 0x57af8
	adds r1, r1, r2	@ 00057af8 8918
.org 0x57afa
	bl 0x5784	@ 00057afa adf743fe
.org 0x57afe
	adds r0, r4, #0	@ 00057afe 201c
.org 0x57b00
	adds r0, #115	@ 00057b00 7330
.org 0x57b02
	ldrb r0, [r0, #0]	@ 00057b02 0078
.org 0x57b04
	cmp r0, #3	@ 00057b04 0328
.org 0x57b06
	bne.n 0x57b10	@ 00057b06 03d1
.org 0x57b08
	movs r1, #0	@ 00057b08 0021
.org 0x57b0a
	movs r0, #1	@ 00057b0a 0120
.org 0x57b0c
	strb r0, [r4, #14]	@ 00057b0c a073
.org 0x57b0e
	strb r1, [r4, #15]	@ 00057b0e e173
.org 0x57b10
	pop {r4}	@ 00057b10 10bc
.org 0x57b12
	pop {r0}	@ 00057b12 01bc
.org 0x57b14
	bx r0	@ 00057b14 0047
