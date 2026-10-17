@ FUN_08107ed8  entry 0x08107ed8  size 454
.thumb
.org 0x107ed8
FUN_08107ed8:
	push {r4, r5, r6, r7, lr}	@ 00107ed8 f0b5
.org 0x107eda
	adds r4, r0, #0	@ 00107eda 041c
.org 0x107edc
	ldrb r0, [r4, #14]	@ 00107edc a07b
.org 0x107ede
	adds r1, r0, #0	@ 00107ede 011c
.org 0x107ee0
	cmp r1, #0	@ 00107ee0 0029
.org 0x107ee2
	bne.n 0x107eea	@ 00107ee2 02d1
.org 0x107ee4
	str r1, [r4, #96]	@ 00107ee4 2166
.org 0x107ee6
	adds r0, #1	@ 00107ee6 0130
.org 0x107ee8
	strb r0, [r4, #14]	@ 00107ee8 a073
.org 0x107eea
	ldr r0, [r4, #84]	@ 00107eea 606d
.org 0x107eec
	ldr r1, [r4, #88]	@ 00107eec a16d
.org 0x107eee
	bl 0x8534	@ 00107eee 00f721fb
.org 0x107ef2
	ldr r1, [pc, #72]	@ 00107ef2 1249
.org 0x107ef4
	adds r0, r0, r1	@ 00107ef4 4018
.org 0x107ef6
	ldr r2, [r4, #88]	@ 00107ef6 a26d
.org 0x107ef8
	movs r7, #192	@ 00107ef8 c027
.org 0x107efa
	lsls r7, r7, #4	@ 00107efa 3f01
.org 0x107efc
	adds r2, r2, r7	@ 00107efc d219
.org 0x107efe
	adds r3, r4, #0	@ 00107efe 231c
.org 0x107f00
	adds r3, #181	@ 00107f00 b533
.org 0x107f02
	ldrb r5, [r3, #0]	@ 00107f02 1d78
.org 0x107f04
	lsls r1, r5, #1	@ 00107f04 6900
.org 0x107f06
	adds r1, r1, r5	@ 00107f06 4919
.org 0x107f08
	lsls r1, r1, #11	@ 00107f08 c902
.org 0x107f0a
	subs r0, r0, r1	@ 00107f0a 401a
.org 0x107f0c
	adds r6, r3, #0	@ 00107f0c 1e1c
.org 0x107f0e
	cmp r2, r0	@ 00107f0e 8242
.org 0x107f10
	blt.n 0x107fea	@ 00107f10 6bdb
.org 0x107f12
	ldr r2, [pc, #44]	@ 00107f12 0b4a
.org 0x107f14
	adds r0, r0, r2	@ 00107f14 8018
.org 0x107f16
	str r0, [r4, #88]	@ 00107f16 a065
.org 0x107f18
	ldr r1, [r4, #40]	@ 00107f18 a16a
.org 0x107f1a
	cmp r1, #0	@ 00107f1a 0029
.org 0x107f1c
	beq.n 0x107fdc	@ 00107f1c 5ed0
.org 0x107f1e
	ldrb r5, [r1, #13]	@ 00107f1e 4d7b
.org 0x107f20
	cmp r5, #0	@ 00107f20 002d
.org 0x107f22
	beq.n 0x107f44	@ 00107f22 0fd0
.org 0x107f24
	adds r0, r1, #0	@ 00107f24 081c
.org 0x107f26
	adds r0, #181	@ 00107f26 b530
.org 0x107f28
	ldrb r0, [r0, #0]	@ 00107f28 0078
.org 0x107f2a
	adds r0, #1	@ 00107f2a 0130
.org 0x107f2c
	ldrb r5, [r6, #0]	@ 00107f2c 3578
.org 0x107f2e
	cmp r0, r5	@ 00107f2e a842
.org 0x107f30
	bne.n 0x107f34	@ 00107f30 00d1
.org 0x107f32
	b.n 0x1080b6	@ 00107f32 c0e0
.org 0x107f34
	strb r0, [r6, #0]	@ 00107f34 3070
.org 0x107f36
	movs r0, #1	@ 00107f36 0120
.org 0x107f38
	strb r0, [r4, #14]	@ 00107f38 a073
.org 0x107f3a
	b.n 0x1080b6	@ 00107f3a bce0
.org 0x107f3c
	.byte 0x00,0xfc,0xff,0xff	@ 00107f3c data
.org 0x107f40
	.byte 0x00,0xf8,0xff,0xff	@ 00107f40 data
.org 0x107f44
	ldrb r0, [r4, #17]	@ 00107f44 607c
.org 0x107f46
	ldrb r2, [r1, #17]	@ 00107f46 4a7c
.org 0x107f48
	cmp r0, r2	@ 00107f48 9042
.org 0x107f4a
	bne.n 0x107fdc	@ 00107f4a 47d1
.org 0x107f4c
	adds r0, r1, #0	@ 00107f4c 081c
.org 0x107f4e
	adds r0, #181	@ 00107f4e b530
.org 0x107f50
	ldrb r0, [r0, #0]	@ 00107f50 0078
.org 0x107f52
	adds r0, #1	@ 00107f52 0130
.org 0x107f54
	ldrb r1, [r6, #0]	@ 00107f54 3178
.org 0x107f56
	cmp r0, r1	@ 00107f56 8842
.org 0x107f58
	beq.n 0x107f5e	@ 00107f58 01d0
.org 0x107f5a
	strb r0, [r6, #0]	@ 00107f5a 3070
.org 0x107f5c
	b.n 0x1080b6	@ 00107f5c abe0
.org 0x107f5e
	adds r0, r4, #0	@ 00107f5e 201c
.org 0x107f60
	bl 0x108104	@ 00107f60 00f0d0f8
.org 0x107f64
	strb r5, [r4, #14]	@ 00107f64 a573
.org 0x107f66
	ldr r0, [r4, #40]	@ 00107f66 a06a
.org 0x107f68
	strb r5, [r0, #14]	@ 00107f68 8573
.org 0x107f6a
	ldr r3, [pc, #108]	@ 00107f6a 1b4b
.org 0x107f6c
	ldrb r0, [r4, #9]	@ 00107f6c 607a
.org 0x107f6e
	lsls r0, r0, #2	@ 00107f6e 8000
.org 0x107f70
	adds r0, r0, r3	@ 00107f70 c018
.org 0x107f72
	movs r2, #2	@ 00107f72 0222
.org 0x107f74
	str r2, [r4, #12]	@ 00107f74 e260
.org 0x107f76
	ldr r0, [r0, #0]	@ 00107f76 0068
.org 0x107f78
	ldr r0, [r0, #8]	@ 00107f78 8068
.org 0x107f7a
	str r0, [r4, #20]	@ 00107f7a 6061
.org 0x107f7c
	ldr r1, [r4, #40]	@ 00107f7c a16a
.org 0x107f7e
	ldrb r0, [r1, #9]	@ 00107f7e 487a
.org 0x107f80
	lsls r0, r0, #2	@ 00107f80 8000
.org 0x107f82
	adds r0, r0, r3	@ 00107f82 c018
.org 0x107f84
	str r2, [r1, #12]	@ 00107f84 ca60
.org 0x107f86
	ldr r0, [r0, #0]	@ 00107f86 0068
.org 0x107f88
	ldr r0, [r0, #8]	@ 00107f88 8068
.org 0x107f8a
	str r0, [r1, #20]	@ 00107f8a 4861
.org 0x107f8c
	adds r0, r4, #0	@ 00107f8c 201c
.org 0x107f8e
	adds r0, #140	@ 00107f8e 8c30
.org 0x107f90
	str r5, [r0, #0]	@ 00107f90 0560
.org 0x107f92
	adds r0, #4	@ 00107f92 0430
.org 0x107f94
	str r5, [r0, #0]	@ 00107f94 0560
.org 0x107f96
	adds r0, #4	@ 00107f96 0430
.org 0x107f98
	strb r5, [r0, #0]	@ 00107f98 0570
.org 0x107f9a
	ldrb r2, [r4, #10]	@ 00107f9a a27a
.org 0x107f9c
	movs r1, #251	@ 00107f9c fb21
.org 0x107f9e
	adds r0, r1, #0	@ 00107f9e 081c
.org 0x107fa0
	ands r0, r2	@ 00107fa0 1040
.org 0x107fa2
	strb r0, [r4, #10]	@ 00107fa2 a072
.org 0x107fa4
	ldr r2, [r4, #40]	@ 00107fa4 a26a
.org 0x107fa6
	adds r0, r2, #0	@ 00107fa6 101c
.org 0x107fa8
	adds r0, #140	@ 00107fa8 8c30
.org 0x107faa
	str r5, [r0, #0]	@ 00107faa 0560
.org 0x107fac
	adds r0, #4	@ 00107fac 0430
.org 0x107fae
	str r5, [r0, #0]	@ 00107fae 0560
.org 0x107fb0
	adds r0, #4	@ 00107fb0 0430
.org 0x107fb2
	strb r5, [r0, #0]	@ 00107fb2 0570
.org 0x107fb4
	ldrb r0, [r2, #10]	@ 00107fb4 907a
.org 0x107fb6
	ands r1, r0	@ 00107fb6 0140
.org 0x107fb8
	strb r1, [r2, #10]	@ 00107fb8 9172
.org 0x107fba
	ldr r0, [r4, #40]	@ 00107fba a06a
.org 0x107fbc
	adds r0, #181	@ 00107fbc b530
.org 0x107fbe
	ldrb r0, [r0, #0]	@ 00107fbe 0078
.org 0x107fc0
	strb r0, [r6, #0]	@ 00107fc0 3070
.org 0x107fc2
	ldr r0, [r4, #40]	@ 00107fc2 a06a
.org 0x107fc4
	ldr r0, [r0, #40]	@ 00107fc4 806a
.org 0x107fc6
	str r0, [r4, #40]	@ 00107fc6 a062
.org 0x107fc8
	adds r1, r4, #0	@ 00107fc8 211c
.org 0x107fca
	adds r1, #183	@ 00107fca b731
.org 0x107fcc
	movs r0, #1	@ 00107fcc 0120
.org 0x107fce
	strb r0, [r1, #0]	@ 00107fce 0870
.org 0x107fd0
	adds r0, r4, #0	@ 00107fd0 201c
.org 0x107fd2
	bl 0x1080bc	@ 00107fd2 00f073f8
.org 0x107fd6
	b.n 0x1080b6	@ 00107fd6 6ee0
.org 0x107fd8
	.byte 0xfc,0x92,0x86,0x08	@ 00107fd8 data
.org 0x107fdc
	adds r0, r4, #0	@ 00107fdc 201c
.org 0x107fde
	bl 0x10814c	@ 00107fde 00f0b5f8
.org 0x107fe2
	movs r0, #0	@ 00107fe2 0020
.org 0x107fe4
	strb r0, [r4, #13]	@ 00107fe4 6073
.org 0x107fe6
	strb r0, [r4, #14]	@ 00107fe6 a073
.org 0x107fe8
	b.n 0x1080b6	@ 00107fe8 65e0
.org 0x107fea
	cmp r5, #0	@ 00107fea 002d
.org 0x107fec
	beq.n 0x108060	@ 00107fec 38d0
.org 0x107fee
	ldr r1, [r4, #40]	@ 00107fee a16a
.org 0x107ff0
	cmp r1, #0	@ 00107ff0 0029
.org 0x107ff2
	beq.n 0x108060	@ 00107ff2 35d0
.org 0x107ff4
	ldrb r0, [r1, #12]	@ 00107ff4 087b
.org 0x107ff6
	cmp r0, #1	@ 00107ff6 0128
.org 0x107ff8
	bls.n 0x108034	@ 00107ff8 1cd9
.org 0x107ffa
	adds r0, r1, #0	@ 00107ffa 081c
.org 0x107ffc
	adds r0, #181	@ 00107ffc b530
.org 0x107ffe
	ldrb r0, [r0, #0]	@ 00107ffe 0078
.org 0x108000
	strb r0, [r6, #0]	@ 00108000 3070
.org 0x108002
	ldr r0, [r4, #40]	@ 00108002 a06a
.org 0x108004
	adds r0, #180	@ 00108004 b430
.org 0x108006
	ldrb r0, [r0, #0]	@ 00108006 0078
.org 0x108008
	cmp r0, #1	@ 00108008 0128
.org 0x10800a
	bne.n 0x108012	@ 0010800a 02d1
.org 0x10800c
	adds r0, r4, #0	@ 0010800c 201c
.org 0x10800e
	bl 0x1080bc	@ 0010800e 00f055f8
.org 0x108012
	ldr r1, [r4, #88]	@ 00108012 a16d
.org 0x108014
	adds r1, r1, r7	@ 00108014 c919
.org 0x108016
	ldr r0, [r4, #40]	@ 00108016 a06a
.org 0x108018
	ldr r0, [r0, #88]	@ 00108018 806d
.org 0x10801a
	ldr r2, [pc, #64]	@ 0010801a 104a
.org 0x10801c
	adds r0, r0, r2	@ 0010801c 8018
.org 0x10801e
	cmp r1, r0	@ 0010801e 8142
.org 0x108020
	bge.n 0x108026	@ 00108020 01da
.org 0x108022
	movs r0, #0	@ 00108022 0020
.org 0x108024
	str r0, [r4, #96]	@ 00108024 2066
.org 0x108026
	ldr r0, [r4, #40]	@ 00108026 a06a
.org 0x108028
	ldr r0, [r0, #40]	@ 00108028 806a
.org 0x10802a
	str r0, [r4, #40]	@ 0010802a a062
.org 0x10802c
	adds r1, r4, #0	@ 0010802c 211c
.org 0x10802e
	adds r1, #182	@ 0010802e b631
.org 0x108030
	movs r0, #1	@ 00108030 0120
.org 0x108032
	strb r0, [r1, #0]	@ 00108032 0870
.org 0x108034
	ldr r0, [r4, #40]	@ 00108034 a06a
.org 0x108036
	cmp r0, #0	@ 00108036 0028
.org 0x108038
	beq.n 0x108078	@ 00108038 1ed0
.org 0x10803a
	adds r1, r0, #0	@ 0010803a 011c
.org 0x10803c
	adds r1, #182	@ 0010803c b631
.org 0x10803e
	ldrb r2, [r1, #0]	@ 0010803e 0a78
.org 0x108040
	cmp r2, #1	@ 00108040 012a
.org 0x108042
	bne.n 0x108078	@ 00108042 19d1
.org 0x108044
	adds r0, #181	@ 00108044 b530
.org 0x108046
	ldrb r0, [r0, #0]	@ 00108046 0078
.org 0x108048
	adds r0, #1	@ 00108048 0130
.org 0x10804a
	movs r1, #0	@ 0010804a 0021
.org 0x10804c
	strb r0, [r6, #0]	@ 0010804c 3070
.org 0x10804e
	ldr r0, [r4, #40]	@ 0010804e a06a
.org 0x108050
	adds r0, #182	@ 00108050 b630
.org 0x108052
	strb r1, [r0, #0]	@ 00108052 0170
.org 0x108054
	adds r0, r4, #0	@ 00108054 201c
.org 0x108056
	adds r0, #182	@ 00108056 b630
.org 0x108058
	strb r2, [r0, #0]	@ 00108058 0270
.org 0x10805a
	b.n 0x108078	@ 0010805a 0de0
.org 0x10805c
	.byte 0x00,0xf4,0xff,0xff	@ 0010805c data
.org 0x108060
	ldr r0, [r4, #88]	@ 00108060 a06d
.org 0x108062
	ldr r1, [r4, #96]	@ 00108062 216e
.org 0x108064
	adds r0, r0, r1	@ 00108064 4018
.org 0x108066
	str r0, [r4, #88]	@ 00108066 a065
.org 0x108068
	ldr r0, [pc, #8]	@ 00108068 0248
.org 0x10806a
	cmp r1, r0	@ 0010806a 8142
.org 0x10806c
	bgt.n 0x1080b6	@ 0010806c 23dc
.org 0x10806e
	adds r0, r1, #0	@ 0010806e 081c
.org 0x108070
	adds r0, #32	@ 00108070 2030
.org 0x108072
	b.n 0x1080b4	@ 00108072 1fe0
.org 0x108074
	.byte 0x7f,0x03,0x00,0x00	@ 00108074 data
.org 0x108078
	ldr r1, [r4, #96]	@ 00108078 216e
.org 0x10807a
	ldr r0, [pc, #40]	@ 0010807a 0a48
.org 0x10807c
	cmp r1, r0	@ 0010807c 8142
.org 0x10807e
	bgt.n 0x108086	@ 0010807e 02dc
.org 0x108080
	adds r0, r1, #0	@ 00108080 081c
.org 0x108082
	adds r0, #32	@ 00108082 2030
.org 0x108084
	str r0, [r4, #96]	@ 00108084 2066
.org 0x108086
	ldr r3, [r4, #88]	@ 00108086 a36d
.org 0x108088
	movs r5, #192	@ 00108088 c025
.org 0x10808a
	lsls r5, r5, #4	@ 0010808a 2d01
.org 0x10808c
	adds r1, r3, r5	@ 0010808c 5919
.org 0x10808e
	ldr r2, [r4, #40]	@ 0010808e a26a
.org 0x108090
	ldr r0, [r2, #88]	@ 00108090 906d
.org 0x108092
	ldr r5, [pc, #20]	@ 00108092 054d
.org 0x108094
	adds r0, r0, r5	@ 00108094 4019
.org 0x108096
	cmp r1, r0	@ 00108096 8142
.org 0x108098
	bge.n 0x1080ac	@ 00108098 08da
.org 0x10809a
	ldr r0, [r4, #96]	@ 0010809a 206e
.org 0x10809c
	adds r0, r3, r0	@ 0010809c 1818
