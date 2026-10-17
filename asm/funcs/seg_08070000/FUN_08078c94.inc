@ FUN_08078c94  entry 0x08078c94  size 148
.thumb
.org 0x78c94
FUN_08078c94:
	push {r4, lr}	@ 00078c94 10b5
.org 0x78c96
	adds r4, r0, #0	@ 00078c96 041c
.org 0x78c98
	ldrb r0, [r4, #15]	@ 00078c98 e07b
.org 0x78c9a
	cmp r0, #0	@ 00078c9a 0028
.org 0x78c9c
	bne.n 0x78cac	@ 00078c9c 06d1
.org 0x78c9e
	adds r0, r4, #0	@ 00078c9e 201c
.org 0x78ca0
	movs r1, #0	@ 00078ca0 0021
.org 0x78ca2
	bl 0x78fdc	@ 00078ca2 00f09bf9
.org 0x78ca6
	ldrb r0, [r4, #15]	@ 00078ca6 e07b
.org 0x78ca8
	adds r0, #1	@ 00078ca8 0130
.org 0x78caa
	strb r0, [r4, #15]	@ 00078caa e073
.org 0x78cac
	adds r0, r4, #0	@ 00078cac 201c
.org 0x78cae
	bl 0x1cff0	@ 00078cae a4f79ff9
.org 0x78cb2
	adds r0, r4, #0	@ 00078cb2 201c
.org 0x78cb4
	adds r0, #116	@ 00078cb4 7430
.org 0x78cb6
	ldr r3, [pc, #112]	@ 00078cb6 1c4b
.org 0x78cb8
	ldr r2, [pc, #112]	@ 00078cb8 1c4a
.org 0x78cba
	adds r1, r4, #0	@ 00078cba 211c
.org 0x78cbc
	adds r1, #196	@ 00078cbc c431
.org 0x78cbe
	ldrb r1, [r1, #0]	@ 00078cbe 0978
.org 0x78cc0
	lsls r1, r1, #1	@ 00078cc0 4900
.org 0x78cc2
	adds r1, r1, r2	@ 00078cc2 8918
.org 0x78cc4
	ldrh r2, [r1, #0]	@ 00078cc4 0a88
.org 0x78cc6
	lsls r2, r2, #2	@ 00078cc6 9200
.org 0x78cc8
	adds r2, r2, r3	@ 00078cc8 d218
.org 0x78cca
	adds r1, r4, #0	@ 00078cca 211c
.org 0x78ccc
	adds r1, #113	@ 00078ccc 7131
.org 0x78cce
	ldrb r1, [r1, #0]	@ 00078cce 0978
.org 0x78cd0
	lsls r1, r1, #24	@ 00078cd0 0906
.org 0x78cd2
	asrs r1, r1, #24	@ 00078cd2 0916
.org 0x78cd4
	ldr r2, [r2, #0]	@ 00078cd4 1268
.org 0x78cd6
	lsls r1, r1, #2	@ 00078cd6 8900
.org 0x78cd8
	adds r1, r1, r2	@ 00078cd8 8918
.org 0x78cda
	ldr r1, [r1, #0]	@ 00078cda 0968
.org 0x78cdc
	bl 0x5784	@ 00078cdc 8cf752fd
.org 0x78ce0
	adds r0, r4, #0	@ 00078ce0 201c
.org 0x78ce2
	bl 0x78f28	@ 00078ce2 00f021f9
.org 0x78ce6
	adds r0, r4, #0	@ 00078ce6 201c
.org 0x78ce8
	adds r0, #200	@ 00078ce8 c830
.org 0x78cea
	ldr r1, [r0, #0]	@ 00078cea 0168
.org 0x78cec
	adds r0, r1, #0	@ 00078cec 081c
.org 0x78cee
	adds r0, #180	@ 00078cee b430
.org 0x78cf0
	ldrb r0, [r0, #0]	@ 00078cf0 0078
.org 0x78cf2
	cmp r0, #0	@ 00078cf2 0028
.org 0x78cf4
	beq.n 0x78d22	@ 00078cf4 15d0
.org 0x78cf6
	adds r0, r1, #0	@ 00078cf6 081c
.org 0x78cf8
	adds r0, #182	@ 00078cf8 b630
.org 0x78cfa
	ldrb r0, [r0, #0]	@ 00078cfa 0078
.org 0x78cfc
	cmp r0, #0	@ 00078cfc 0028
.org 0x78cfe
	bne.n 0x78d22	@ 00078cfe 10d1
.org 0x78d00
	adds r0, r4, #0	@ 00078d00 201c
.org 0x78d02
	adds r0, #204	@ 00078d02 cc30
.org 0x78d04
	ldr r1, [r0, #0]	@ 00078d04 0168
.org 0x78d06
	adds r0, r1, #0	@ 00078d06 081c
.org 0x78d08
	adds r0, #184	@ 00078d08 b830
.org 0x78d0a
	ldrb r0, [r0, #0]	@ 00078d0a 0078
.org 0x78d0c
	cmp r0, #0	@ 00078d0c 0028
.org 0x78d0e
	beq.n 0x78d22	@ 00078d0e 08d0
.org 0x78d10
	adds r0, r1, #0	@ 00078d10 081c
.org 0x78d12
	adds r0, #185	@ 00078d12 b930
.org 0x78d14
	ldrb r1, [r0, #0]	@ 00078d14 0178
.org 0x78d16
	cmp r1, #0	@ 00078d16 0029
.org 0x78d18
	bne.n 0x78d22	@ 00078d18 03d1
.org 0x78d1a
	ldrb r0, [r4, #14]	@ 00078d1a a07b
.org 0x78d1c
	adds r0, #1	@ 00078d1c 0130
.org 0x78d1e
	strb r0, [r4, #14]	@ 00078d1e a073
.org 0x78d20
	strb r1, [r4, #15]	@ 00078d20 e173
.org 0x78d22
	pop {r4}	@ 00078d22 10bc
.org 0x78d24
	pop {r0}	@ 00078d24 01bc
.org 0x78d26
	bx r0	@ 00078d26 0047
