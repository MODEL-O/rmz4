@ FUN_08077f58  entry 0x08077f58  size 196
.thumb
.org 0x77f58
FUN_08077f58:
	push {r4, r5, r6, r7, lr}	@ 00077f58 f0b5
.org 0x77f5a
	sub sp, #12	@ 00077f5a 83b0
.org 0x77f5c
	adds r4, r0, #0	@ 00077f5c 041c
.org 0x77f5e
	ldr r1, [pc, #188]	@ 00077f5e 2f49
.org 0x77f60
	mov r0, sp	@ 00077f60 6846
.org 0x77f62
	movs r2, #3	@ 00077f62 0322
.org 0x77f64
	bl 0x129258	@ 00077f64 b1f078f9
.org 0x77f68
	adds r0, r4, #0	@ 00077f68 201c
.org 0x77f6a
	adds r0, #197	@ 00077f6a c530
.org 0x77f6c
	ldrb r6, [r0, #0]	@ 00077f6c 0678
.org 0x77f6e
	ldrb r0, [r4, #15]	@ 00077f6e e07b
.org 0x77f70
	cmp r0, #0	@ 00077f70 0028
.org 0x77f72
	bne.n 0x77fc2	@ 00077f72 26d1
.org 0x77f74
	movs r0, #201	@ 00077f74 c920
.org 0x77f76
	lsls r0, r0, #1	@ 00077f76 4000
.org 0x77f78
	bl 0x2b10	@ 00077f78 8af7cafd
.org 0x77f7c
	movs r5, #0	@ 00077f7c 0025
.org 0x77f7e
	lsls r7, r6, #1	@ 00077f7e 7700
.org 0x77f80
	add r6, sp, #4	@ 00077f80 01ae
.org 0x77f82
	ldr r0, [r4, #84]	@ 00077f82 606d
.org 0x77f84
	ldr r1, [r4, #88]	@ 00077f84 a16d
.org 0x77f86
	str r0, [sp, #4]	@ 00077f86 0190
.org 0x77f88
	str r1, [sp, #8]	@ 00077f88 0291
.org 0x77f8a
	mov r1, sp	@ 00077f8a 6946
.org 0x77f8c
	adds r0, r1, r5	@ 00077f8c 4819
.org 0x77f8e
	ldrb r3, [r0, #0]	@ 00077f8e 0378
.org 0x77f90
	movs r0, #160	@ 00077f90 a020
.org 0x77f92
	lsls r0, r0, #1	@ 00077f92 4000
.org 0x77f94
	subs r0, r0, r3	@ 00077f94 c01a
.org 0x77f96
	muls r0, r7	@ 00077f96 7843
.org 0x77f98
	adds r3, r3, r0	@ 00077f98 1b18
.org 0x77f9a
	lsls r3, r3, #24	@ 00077f9a 1b06
.org 0x77f9c
	lsrs r3, r3, #24	@ 00077f9c 1b0e
.org 0x77f9e
	adds r0, r4, #0	@ 00077f9e 201c
.org 0x77fa0
	adds r1, r6, #0	@ 00077fa0 311c
.org 0x77fa2
	movs r2, #0	@ 00077fa2 0022
.org 0x77fa4
	bl 0xce1d4	@ 00077fa4 56f016f9
.org 0x77fa8
	adds r5, #1	@ 00077fa8 0135
.org 0x77faa
	cmp r5, #2	@ 00077faa 022d
.org 0x77fac
	ble.n 0x77f82	@ 00077fac e9dd
.org 0x77fae
	adds r0, r4, #0	@ 00077fae 201c
.org 0x77fb0
	movs r1, #0	@ 00077fb0 0021
.org 0x77fb2
	bl 0x78fdc	@ 00077fb2 01f013f8
.org 0x77fb6
	movs r0, #250	@ 00077fb6 fa20
.org 0x77fb8
	lsls r0, r0, #1	@ 00077fb8 4000
.org 0x77fba
	str r0, [r4, #92]	@ 00077fba e065
.org 0x77fbc
	ldrb r0, [r4, #15]	@ 00077fbc e07b
.org 0x77fbe
	adds r0, #1	@ 00077fbe 0130
.org 0x77fc0
	strb r0, [r4, #15]	@ 00077fc0 e073
.org 0x77fc2
	adds r0, r4, #0	@ 00077fc2 201c
.org 0x77fc4
	bl 0x1cff0	@ 00077fc4 a5f714f8
.org 0x77fc8
	adds r0, r4, #0	@ 00077fc8 201c
.org 0x77fca
	adds r0, #116	@ 00077fca 7430
.org 0x77fcc
	ldr r3, [pc, #80]	@ 00077fcc 144b
.org 0x77fce
	ldr r2, [pc, #84]	@ 00077fce 154a
.org 0x77fd0
	adds r1, r4, #0	@ 00077fd0 211c
.org 0x77fd2
	adds r1, #196	@ 00077fd2 c431
.org 0x77fd4
	ldrb r1, [r1, #0]	@ 00077fd4 0978
.org 0x77fd6
	lsls r1, r1, #1	@ 00077fd6 4900
.org 0x77fd8
	adds r1, r1, r2	@ 00077fd8 8918
.org 0x77fda
	ldrh r2, [r1, #0]	@ 00077fda 0a88
.org 0x77fdc
	lsls r2, r2, #2	@ 00077fdc 9200
.org 0x77fde
	adds r2, r2, r3	@ 00077fde d218
.org 0x77fe0
	adds r1, r4, #0	@ 00077fe0 211c
.org 0x77fe2
	adds r1, #113	@ 00077fe2 7131
.org 0x77fe4
	ldrb r1, [r1, #0]	@ 00077fe4 0978
.org 0x77fe6
	lsls r1, r1, #24	@ 00077fe6 0906
.org 0x77fe8
	asrs r1, r1, #24	@ 00077fe8 0916
.org 0x77fea
	ldr r2, [r2, #0]	@ 00077fea 1268
.org 0x77fec
	lsls r1, r1, #2	@ 00077fec 8900
.org 0x77fee
	adds r1, r1, r2	@ 00077fee 8918
.org 0x77ff0
	ldr r1, [r1, #0]	@ 00077ff0 0968
.org 0x77ff2
	bl 0x5784	@ 00077ff2 8df7c7fb
.org 0x77ff6
	adds r0, r4, #0	@ 00077ff6 201c
.org 0x77ff8
	bl 0x78f28	@ 00077ff8 00f096ff
.org 0x77ffc
	ldr r0, [r4, #92]	@ 00077ffc e06d
.org 0x77ffe
	cmp r0, #0	@ 00077ffe 0028
.org 0x78000
	beq.n 0x7800a	@ 00078000 03d0
.org 0x78002
	subs r0, #1	@ 00078002 0138
.org 0x78004
	str r0, [r4, #92]	@ 00078004 e065
.org 0x78006
	cmp r0, #0	@ 00078006 0028
.org 0x78008
	bne.n 0x78014	@ 00078008 04d1
.org 0x7800a
	ldrb r0, [r4, #14]	@ 0007800a a07b
.org 0x7800c
	adds r0, #1	@ 0007800c 0130
.org 0x7800e
	movs r1, #0	@ 0007800e 0021
.org 0x78010
	strb r0, [r4, #14]	@ 00078010 a073
.org 0x78012
	strb r1, [r4, #15]	@ 00078012 e173
.org 0x78014
	add sp, #12	@ 00078014 03b0
.org 0x78016
	pop {r4, r5, r6, r7}	@ 00078016 f0bc
.org 0x78018
	pop {r0}	@ 00078018 01bc
.org 0x7801a
	bx r0	@ 0007801a 0047
