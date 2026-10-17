@ FUN_08067ebc  entry 0x08067ebc  size 364
.thumb
.org 0x67ebc
FUN_08067ebc:
	push {r4, r5, lr}	@ 00067ebc 30b5
.org 0x67ebe
	sub sp, #4	@ 00067ebe 81b0
.org 0x67ec0
	adds r4, r0, #0	@ 00067ec0 041c
.org 0x67ec2
	ldr r0, [pc, #40]	@ 00067ec2 0a48
.org 0x67ec4
	ldr r5, [r0, #0]	@ 00067ec4 0568
.org 0x67ec6
	ldrb r0, [r4, #14]	@ 00067ec6 a07b
.org 0x67ec8
	cmp r0, #0	@ 00067ec8 0028
.org 0x67eca
	bne.n 0x67f30	@ 00067eca 31d1
.org 0x67ecc
	adds r0, r4, #0	@ 00067ecc 201c
.org 0x67ece
	adds r0, #116	@ 00067ece 7430
.org 0x67ed0
	ldr r1, [pc, #28]	@ 00067ed0 0749
.org 0x67ed2
	bl 0x5784	@ 00067ed2 9df757fc
.org 0x67ed6
	ldrb r1, [r4, #10]	@ 00067ed6 a17a
.org 0x67ed8
	movs r0, #16	@ 00067ed8 1020
.org 0x67eda
	ands r0, r1	@ 00067eda 0840
.org 0x67edc
	cmp r0, #0	@ 00067edc 0028
.org 0x67ede
	beq.n 0x67ef4	@ 00067ede 09d0
.org 0x67ee0
	ldr r0, [r4, #84]	@ 00067ee0 606d
.org 0x67ee2
	movs r1, #236	@ 00067ee2 ec21
.org 0x67ee4
	lsls r1, r1, #6	@ 00067ee4 8901
.org 0x67ee6
	adds r0, r0, r1	@ 00067ee6 4018
.org 0x67ee8
	b.n 0x67efa	@ 00067ee8 07e0
.org 0x67eea
	.byte 0x00	@ 00067eea data
.org 0x67eeb
	.byte 0x00	@ 00067eeb data
.org 0x67eec
	.byte 0xf0,0xdb,0x02,0x02	@ 00067eec data
.org 0x67ef0
	.byte 0xcc,0xb4,0x85,0x08	@ 00067ef0 data
.org 0x67ef4
	ldr r0, [r4, #84]	@ 00067ef4 606d
.org 0x67ef6
	ldr r2, [pc, #80]	@ 00067ef6 144a
.org 0x67ef8
	adds r0, r0, r2	@ 00067ef8 8018
.org 0x67efa
	str r0, [r4, #100]	@ 00067efa 6066
.org 0x67efc
	ldr r0, [r4, #88]	@ 00067efc a06d
.org 0x67efe
	ldr r1, [pc, #76]	@ 00067efe 1349
.org 0x67f00
	adds r2, r0, r1	@ 00067f00 4218
.org 0x67f02
	str r2, [r4, #104]	@ 00067f02 a266
.org 0x67f04
	ldrb r1, [r4, #10]	@ 00067f04 a17a
.org 0x67f06
	movs r0, #16	@ 00067f06 1020
.org 0x67f08
	ands r0, r1	@ 00067f08 0840
.org 0x67f0a
	movs r1, #1	@ 00067f0a 0121
.org 0x67f0c
	cmp r0, #0	@ 00067f0c 0028
.org 0x67f0e
	beq.n 0x67f12	@ 00067f0e 00d0
.org 0x67f10
	movs r1, #2	@ 00067f10 0221
.org 0x67f12
	strb r1, [r4, #19]	@ 00067f12 e174
.org 0x67f14
	movs r0, #196	@ 00067f14 c420
.org 0x67f16
	strb r0, [r4, #18]	@ 00067f16 a074
.org 0x67f18
	ldr r1, [r4, #100]	@ 00067f18 616e
.org 0x67f1a
	ldrb r3, [r4, #19]	@ 00067f1a e37c
.org 0x67f1c
	str r0, [sp, #0]	@ 00067f1c 0090
.org 0x67f1e
	adds r0, r4, #0	@ 00067f1e 201c
.org 0x67f20
	bl 0xdebc8	@ 00067f20 76f052fe
.org 0x67f24
	adds r1, r4, #0	@ 00067f24 211c
.org 0x67f26
	adds r1, #180	@ 00067f26 b431
.org 0x67f28
	str r0, [r1, #20]	@ 00067f28 4861
.org 0x67f2a
	ldrb r0, [r4, #14]	@ 00067f2a a07b
.org 0x67f2c
	adds r0, #1	@ 00067f2c 0130
.org 0x67f2e
	strb r0, [r4, #14]	@ 00067f2e a073
.org 0x67f30
	adds r0, r4, #0	@ 00067f30 201c
.org 0x67f32
	bl 0x1cff0	@ 00067f32 b5f75df8
.org 0x67f36
	adds r0, r5, #0	@ 00067f36 281c
.org 0x67f38
	adds r0, #180	@ 00067f38 b430
.org 0x67f3a
	ldr r1, [r0, #56]	@ 00067f3a 816b
.org 0x67f3c
	adds r2, r0, #0	@ 00067f3c 021c
.org 0x67f3e
	cmp r1, #0	@ 00067f3e 0029
.org 0x67f40
	bne.n 0x67f50	@ 00067f40 06d1
.org 0x67f42
	movs r0, #64	@ 00067f42 4020
.org 0x67f44
	b.n 0x67f52	@ 00067f44 05e0
.org 0x67f46
	.byte 0x00	@ 00067f46 data
.org 0x67f47
	.byte 0x00	@ 00067f47 data
.org 0x67f48
	.byte 0x00,0xc5,0xff,0xff	@ 00067f48 data
.org 0x67f4c
	.byte 0x00,0xdf,0xff,0xff	@ 00067f4c data
.org 0x67f50
	movs r0, #0	@ 00067f50 0020
.org 0x67f52
	str r0, [r4, #92]	@ 00067f52 e065
.org 0x67f54
	ldrb r0, [r4, #19]	@ 00067f54 e07c
.org 0x67f56
	cmp r0, #2	@ 00067f56 0228
.org 0x67f58
	bne.n 0x67f64	@ 00067f58 04d1
.org 0x67f5a
	ldr r0, [r2, #56]	@ 00067f5a 906b
.org 0x67f5c
	movs r1, #0	@ 00067f5c 0021
.org 0x67f5e
	cmp r0, #0	@ 00067f5e 0028
.org 0x67f60
	ble.n 0x67f68	@ 00067f60 02dd
.org 0x67f62
	b.n 0x67f6c	@ 00067f62 03e0
.org 0x67f64
	ldr r0, [r2, #56]	@ 00067f64 906b
.org 0x67f66
	lsrs r1, r0, #31	@ 00067f66 c10f
.org 0x67f68
	cmp r1, #0	@ 00067f68 0029
.org 0x67f6a
	beq.n 0x67fca	@ 00067f6a 2ed0
.org 0x67f6c
	ldr r0, [pc, #32]	@ 00067f6c 0848
.org 0x67f6e
	ldr r0, [r0, #0]	@ 00067f6e 0068
.org 0x67f70
	ldr r2, [r4, #100]	@ 00067f70 626e
.org 0x67f72
	ldr r1, [r0, #84]	@ 00067f72 416d
.org 0x67f74
	cmp r2, r1	@ 00067f74 8a42
.org 0x67f76
	ble.n 0x67f98	@ 00067f76 0fdd
.org 0x67f78
	subs r1, r2, r1	@ 00067f78 511a
.org 0x67f7a
	movs r0, #128	@ 00067f7a 8020
.org 0x67f7c
	lsls r0, r0, #7	@ 00067f7c c001
.org 0x67f7e
	cmp r1, r0	@ 00067f7e 8142
.org 0x67f80
	ble.n 0x68020	@ 00067f80 4edd
.org 0x67f82
	movs r2, #222	@ 00067f82 de22
.org 0x67f84
	lsls r2, r2, #1	@ 00067f84 5200
.org 0x67f86
	adds r0, r5, r2	@ 00067f86 a818
.org 0x67f88
	ldr r1, [r0, #0]	@ 00067f88 0168
.org 0x67f8a
	ldr r2, [pc, #8]	@ 00067f8a 024a
.org 0x67f8c
	b.n 0x6802a	@ 00067f8c 4de0
.org 0x67f8e
	.byte 0x00	@ 00067f8e data
.org 0x67f8f
	.byte 0x00	@ 00067f8f data
.org 0x67f90
	.byte 0xf0,0xdb,0x02,0x02	@ 00067f90 data
.org 0x67f94
	.byte 0xc0,0xfd,0xff,0xff	@ 00067f94 data
.org 0x67f98
	subs r1, r1, r2	@ 00067f98 891a
.org 0x67f9a
	movs r0, #128	@ 00067f9a 8020
.org 0x67f9c
	lsls r0, r0, #7	@ 00067f9c c001
.org 0x67f9e
	cmp r1, r0	@ 00067f9e 8142
.org 0x67fa0
	ble.n 0x67fb6	@ 00067fa0 09dd
.org 0x67fa2
	movs r1, #222	@ 00067fa2 de21
.org 0x67fa4
	lsls r1, r1, #1	@ 00067fa4 4900
.org 0x67fa6
	adds r0, r5, r1	@ 00067fa6 6818
.org 0x67fa8
	ldr r1, [r0, #0]	@ 00067fa8 0168
.org 0x67faa
	movs r2, #144	@ 00067faa 9022
.org 0x67fac
	lsls r2, r2, #2	@ 00067fac 9200
.org 0x67fae
	adds r1, r1, r2	@ 00067fae 8918
.org 0x67fb0
	ldr r2, [r4, #92]	@ 00067fb0 e26d
.org 0x67fb2
	subs r1, r1, r2	@ 00067fb2 891a
.org 0x67fb4
	b.n 0x68030	@ 00067fb4 3ce0
.org 0x67fb6
	movs r1, #222	@ 00067fb6 de21
.org 0x67fb8
	lsls r1, r1, #1	@ 00067fb8 4900
.org 0x67fba
	adds r0, r5, r1	@ 00067fba 6818
.org 0x67fbc
	ldr r1, [r0, #0]	@ 00067fbc 0168
.org 0x67fbe
	movs r2, #176	@ 00067fbe b022
.org 0x67fc0
	lsls r2, r2, #2	@ 00067fc0 9200
.org 0x67fc2
	adds r1, r1, r2	@ 00067fc2 8918
.org 0x67fc4
	ldr r2, [r4, #92]	@ 00067fc4 e26d
.org 0x67fc6
	subs r1, r1, r2	@ 00067fc6 891a
.org 0x67fc8
	b.n 0x68030	@ 00067fc8 32e0
.org 0x67fca
	ldr r0, [pc, #36]	@ 00067fca 0948
.org 0x67fcc
	ldr r0, [r0, #0]	@ 00067fcc 0068
.org 0x67fce
	ldr r1, [r4, #100]	@ 00067fce 616e
.org 0x67fd0
	ldr r0, [r0, #84]	@ 00067fd0 406d
.org 0x67fd2
	cmp r1, r0	@ 00067fd2 8142
.org 0x67fd4
	ble.n 0x68008	@ 00067fd4 18dd
.org 0x67fd6
	subs r0, r1, r0	@ 00067fd6 081a
.org 0x67fd8
	cmp r0, #64	@ 00067fd8 4028
.org 0x67fda
	ble.n 0x67ff4	@ 00067fda 0bdd
.org 0x67fdc
	movs r1, #222	@ 00067fdc de21
.org 0x67fde
	lsls r1, r1, #1	@ 00067fde 4900
.org 0x67fe0
	adds r0, r5, r1	@ 00067fe0 6818
.org 0x67fe2
	ldr r1, [r0, #0]	@ 00067fe2 0168
.org 0x67fe4
	movs r2, #144	@ 00067fe4 9022
.org 0x67fe6
	lsls r2, r2, #2	@ 00067fe6 9200
.org 0x67fe8
	adds r1, r1, r2	@ 00067fe8 8918
.org 0x67fea
	ldr r2, [r4, #92]	@ 00067fea e26d
.org 0x67fec
	subs r1, r1, r2	@ 00067fec 891a
.org 0x67fee
	b.n 0x68030	@ 00067fee 1fe0
.org 0x67ff0
	.byte 0xf0,0xdb,0x02,0x02	@ 00067ff0 data
.org 0x67ff4
	movs r1, #222	@ 00067ff4 de21
.org 0x67ff6
	lsls r1, r1, #1	@ 00067ff6 4900
.org 0x67ff8
	adds r0, r5, r1	@ 00067ff8 6818
.org 0x67ffa
	ldr r1, [r0, #0]	@ 00067ffa 0168
.org 0x67ffc
	movs r2, #176	@ 00067ffc b022
.org 0x67ffe
	lsls r2, r2, #2	@ 00067ffe 9200
.org 0x68000
	adds r1, r1, r2	@ 00068000 8918
.org 0x68002
	ldr r2, [r4, #92]	@ 00068002 e26d
.org 0x68004
	subs r1, r1, r2	@ 00068004 891a
.org 0x68006
	b.n 0x68030	@ 00068006 13e0
.org 0x68008
	subs r0, r1, r0	@ 00068008 081a
.org 0x6800a
	cmp r0, #64	@ 0006800a 4028
.org 0x6800c
	ble.n 0x68020	@ 0006800c 08dd
.org 0x6800e
	movs r1, #222	@ 0006800e de21
.org 0x68010
	lsls r1, r1, #1	@ 00068010 4900
.org 0x68012
	adds r0, r5, r1	@ 00068012 6818
.org 0x68014
	ldr r1, [r0, #0]	@ 00068014 0168
.org 0x68016
	ldr r2, [pc, #4]	@ 00068016 014a
.org 0x68018
	b.n 0x6802a	@ 00068018 07e0
.org 0x6801a
	.byte 0x00	@ 0006801a data
.org 0x6801b
	.byte 0x00	@ 0006801b data
.org 0x6801c
	.byte 0xc0,0xfd,0xff,0xff	@ 0006801c data
.org 0x68020
	movs r1, #222	@ 00068020 de21
.org 0x68022
	lsls r1, r1, #1	@ 00068022 4900
.org 0x68024
	adds r0, r5, r1	@ 00068024 6818
.org 0x68026
	ldr r1, [r0, #0]	@ 00068026 0168
