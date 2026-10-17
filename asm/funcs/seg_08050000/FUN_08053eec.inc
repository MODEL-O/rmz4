@ FUN_08053eec  entry 0x08053eec  size 398
.thumb
.org 0x53eec
FUN_08053eec:
	push {r4, r5, r6, r7, lr}	@ 00053eec f0b5
.org 0x53eee
	mov r7, r8	@ 00053eee 4746
.org 0x53ef0
	push {r7}	@ 00053ef0 80b4
.org 0x53ef2
	sub sp, #8	@ 00053ef2 82b0
.org 0x53ef4
	adds r6, r0, #0	@ 00053ef4 061c
.org 0x53ef6
	ldrb r0, [r6, #15]	@ 00053ef6 f07b
.org 0x53ef8
	cmp r0, #0	@ 00053ef8 0028
.org 0x53efa
	bne.n 0x53f46	@ 00053efa 24d1
.org 0x53efc
	movs r0, #87	@ 00053efc 5720
.org 0x53efe
	bl 0x2b10	@ 00053efe aef707fe
.org 0x53f02
	movs r4, #0	@ 00053f02 0024
.org 0x53f04
	ldr r0, [pc, #216]	@ 00053f04 3648
.org 0x53f06
	ldr r0, [r0, #0]	@ 00053f06 0068
.org 0x53f08
	ldr r1, [r6, #84]	@ 00053f08 716d
.org 0x53f0a
	ldr r0, [r0, #84]	@ 00053f0a 406d
.org 0x53f0c
	cmp r1, r0	@ 00053f0c 8142
.org 0x53f0e
	bge.n 0x53f12	@ 00053f0e 00da
.org 0x53f10
	movs r4, #1	@ 00053f10 0124
.org 0x53f12
	adds r0, r6, #0	@ 00053f12 301c
.org 0x53f14
	movs r1, #4	@ 00053f14 0421
.org 0x53f16
	adds r2, r4, #0	@ 00053f16 221c
.org 0x53f18
	bl 0x5504c	@ 00053f18 01f098f8
.org 0x53f1c
	movs r1, #176	@ 00053f1c b021
.org 0x53f1e
	lsls r1, r1, #6	@ 00053f1e 8901
.org 0x53f20
	adds r0, r6, #0	@ 00053f20 301c
.org 0x53f22
	bl 0x1cf00	@ 00053f22 c8f7edff
.org 0x53f26
	strb r4, [r6, #19]	@ 00053f26 f474
.org 0x53f28
	adds r3, r6, #0	@ 00053f28 331c
.org 0x53f2a
	adds r3, #204	@ 00053f2a cc33
.org 0x53f2c
	adds r2, r6, #0	@ 00053f2c 321c
.org 0x53f2e
	adds r2, #192	@ 00053f2e c032
.org 0x53f30
	lsls r0, r4, #1	@ 00053f30 6000
.org 0x53f32
	subs r0, #1	@ 00053f32 0138
.org 0x53f34
	lsls r1, r0, #4	@ 00053f34 0101
.org 0x53f36
	subs r1, r1, r0	@ 00053f36 091a
.org 0x53f38
	lsls r1, r1, #11	@ 00053f38 c902
.org 0x53f3a
	ldr r0, [r2, #0]	@ 00053f3a 1068
.org 0x53f3c
	adds r0, r0, r1	@ 00053f3c 4018
.org 0x53f3e
	str r0, [r3, #0]	@ 00053f3e 1860
.org 0x53f40
	ldrb r0, [r6, #15]	@ 00053f40 f07b
.org 0x53f42
	adds r0, #1	@ 00053f42 0130
.org 0x53f44
	strb r0, [r6, #15]	@ 00053f44 f073
.org 0x53f46
	adds r0, r6, #0	@ 00053f46 301c
.org 0x53f48
	bl 0x1cff0	@ 00053f48 c9f752f8
.org 0x53f4c
	adds r0, r6, #0	@ 00053f4c 301c
.org 0x53f4e
	bl 0x54fb0	@ 00053f4e 01f02ff8
.org 0x53f52
	adds r0, r6, #0	@ 00053f52 301c
.org 0x53f54
	adds r0, #204	@ 00053f54 cc30
.org 0x53f56
	ldr r1, [r0, #0]	@ 00053f56 0168
.org 0x53f58
	adds r0, r6, #0	@ 00053f58 301c
.org 0x53f5a
	bl 0x55068	@ 00053f5a 01f085f8
.org 0x53f5e
	mov r8, r0	@ 00053f5e 8046
.org 0x53f60
	ldr r5, [r6, #100]	@ 00053f60 756e
.org 0x53f62
	negs r5, r5	@ 00053f62 6d42
.org 0x53f64
	ldr r4, [r6, #92]	@ 00053f64 f46d
.org 0x53f66
	adds r0, r4, #0	@ 00053f66 201c
.org 0x53f68
	adds r1, r5, #0	@ 00053f68 291c
.org 0x53f6a
	bl 0x128fb8	@ 00053f6a d5f025f8
.org 0x53f6e
	negs r0, r0	@ 00053f6e 4042
.org 0x53f70
	lsls r4, r4, #1	@ 00053f70 6400
.org 0x53f72
	adds r1, r0, #1	@ 00053f72 411c
.org 0x53f74
	muls r1, r5	@ 00053f74 6943
.org 0x53f76
	adds r4, r4, r1	@ 00053f76 6418
.org 0x53f78
	muls r0, r4	@ 00053f78 6043
.org 0x53f7a
	asrs r0, r0, #1	@ 00053f7a 4010
.org 0x53f7c
	ldr r1, [r6, #84]	@ 00053f7c 716d
.org 0x53f7e
	adds r0, r1, r0	@ 00053f7e 0818
.org 0x53f80
	str r0, [sp, #0]	@ 00053f80 0090
.org 0x53f82
	ldr r0, [r6, #88]	@ 00053f82 b06d
.org 0x53f84
	str r0, [sp, #4]	@ 00053f84 0190
.org 0x53f86
	ldr r2, [pc, #92]	@ 00053f86 174a
.org 0x53f88
	movs r1, #128	@ 00053f88 8021
.org 0x53f8a
	lsls r1, r1, #1	@ 00053f8a 4900
.org 0x53f8c
	adds r0, r2, r1	@ 00053f8c 5018
.org 0x53f8e
	movs r5, #0	@ 00053f8e 0025
.org 0x53f90
	ldrsh r0, [r0, r5]	@ 00053f90 405f
.org 0x53f92
	lsls r0, r0, #2	@ 00053f92 8000
.org 0x53f94
	movs r1, #216	@ 00053f94 d821
.org 0x53f96
	lsls r1, r1, #6	@ 00053f96 8901
.org 0x53f98
	adds r0, r0, r1	@ 00053f98 4018
.org 0x53f9a
	ldr r5, [sp, #0]	@ 00053f9a 009d
.org 0x53f9c
	subs r0, r5, r0	@ 00053f9c 281a
.org 0x53f9e
	ldr r1, [pc, #64]	@ 00053f9e 1049
.org 0x53fa0
	ldr r3, [r1, #0]	@ 00053fa0 0b68
.org 0x53fa2
	ldr r1, [r3, #84]	@ 00053fa2 596d
.org 0x53fa4
	subs r0, r0, r1	@ 00053fa4 401a
.org 0x53fa6
	movs r1, #192	@ 00053fa6 c021
.org 0x53fa8
	lsls r1, r1, #5	@ 00053fa8 4901
.org 0x53faa
	adds r0, r0, r1	@ 00053faa 4018
.org 0x53fac
	movs r4, #192	@ 00053fac c024
.org 0x53fae
	lsls r4, r4, #7	@ 00053fae e401
.org 0x53fb0
	cmp r0, r4	@ 00053fb0 a042
.org 0x53fb2
	bhi.n 0x53fe8	@ 00053fb2 19d8
.org 0x53fb4
	ldr r5, [sp, #4]	@ 00053fb4 019d
.org 0x53fb6
	movs r0, #192	@ 00053fb6 c020
.org 0x53fb8
	lsls r0, r0, #4	@ 00053fb8 0001
.org 0x53fba
	adds r1, r5, r0	@ 00053fba 2918
.org 0x53fbc
	adds r0, r2, #0	@ 00053fbc 101c
.org 0x53fbe
	adds r0, #192	@ 00053fbe c030
.org 0x53fc0
	movs r5, #0	@ 00053fc0 0025
.org 0x53fc2
	ldrsh r2, [r0, r5]	@ 00053fc2 425f
.org 0x53fc4
	lsls r0, r2, #1	@ 00053fc4 5000
.org 0x53fc6
	adds r0, r0, r2	@ 00053fc6 8018
.org 0x53fc8
	lsls r0, r0, #1	@ 00053fc8 4000
.org 0x53fca
	adds r1, r1, r0	@ 00053fca 0918
.org 0x53fcc
	ldr r0, [r3, #88]	@ 00053fcc 986d
.org 0x53fce
	subs r1, r1, r0	@ 00053fce 091a
.org 0x53fd0
	movs r0, #160	@ 00053fd0 a020
.org 0x53fd2
	lsls r0, r0, #7	@ 00053fd2 c001
.org 0x53fd4
	adds r1, r1, r0	@ 00053fd4 0918
.org 0x53fd6
	cmp r1, r4	@ 00053fd6 a142
.org 0x53fd8
	bhi.n 0x53fe8	@ 00053fd8 06d8
.org 0x53fda
	movs r1, #0	@ 00053fda 0021
.org 0x53fdc
	movs r0, #3	@ 00053fdc 0320
.org 0x53fde
	b.n 0x54042	@ 00053fde 30e0
.org 0x53fe0
	.byte 0xf0,0xdb,0x02,0x02	@ 00053fe0 data
.org 0x53fe4
	.byte 0x0c,0x93,0x12,0x08	@ 00053fe4 data
.org 0x53fe8
	ldr r2, [sp, #0]	@ 00053fe8 009a
.org 0x53fea
	movs r5, #216	@ 00053fea d825
.org 0x53fec
	lsls r5, r5, #6	@ 00053fec ad01
.org 0x53fee
	adds r1, r2, r5	@ 00053fee 5119
.org 0x53ff0
	ldr r5, [pc, #88]	@ 00053ff0 164d
.org 0x53ff2
	movs r2, #128	@ 00053ff2 8022
.org 0x53ff4
	lsls r2, r2, #1	@ 00053ff4 5200
.org 0x53ff6
	adds r0, r5, r2	@ 00053ff6 a818
.org 0x53ff8
	movs r2, #0	@ 00053ff8 0022
.org 0x53ffa
	ldrsh r0, [r0, r2]	@ 00053ffa 805e
.org 0x53ffc
	lsls r0, r0, #2	@ 00053ffc 8000
.org 0x53ffe
	adds r1, r1, r0	@ 00053ffe 0918
.org 0x54000
	ldr r2, [pc, #76]	@ 00054000 134a
.org 0x54002
	ldr r3, [r2, #0]	@ 00054002 1368
.org 0x54004
	ldr r0, [r3, #84]	@ 00054004 586d
.org 0x54006
	subs r1, r1, r0	@ 00054006 091a
.org 0x54008
	movs r0, #144	@ 00054008 9020
.org 0x5400a
	lsls r0, r0, #7	@ 0005400a c001
.org 0x5400c
	adds r1, r1, r0	@ 0005400c 0918
.org 0x5400e
	movs r4, #192	@ 0005400e c024
.org 0x54010
	lsls r4, r4, #7	@ 00054010 e401
.org 0x54012
	adds r7, r2, #0	@ 00054012 171c
.org 0x54014
	cmp r1, r4	@ 00054014 a142
.org 0x54016
	bhi.n 0x54054	@ 00054016 1dd8
.org 0x54018
	ldr r2, [sp, #4]	@ 00054018 019a
.org 0x5401a
	movs r0, #192	@ 0005401a c020
.org 0x5401c
	lsls r0, r0, #4	@ 0005401c 0001
.org 0x5401e
	adds r1, r2, r0	@ 0005401e 1118
.org 0x54020
	adds r0, r5, #0	@ 00054020 281c
.org 0x54022
	adds r0, #192	@ 00054022 c030
.org 0x54024
	movs r5, #0	@ 00054024 0025
.org 0x54026
	ldrsh r2, [r0, r5]	@ 00054026 425f
.org 0x54028
	lsls r0, r2, #1	@ 00054028 5000
.org 0x5402a
	adds r0, r0, r2	@ 0005402a 8018
.org 0x5402c
	lsls r0, r0, #1	@ 0005402c 4000
.org 0x5402e
	adds r1, r1, r0	@ 0005402e 0918
.org 0x54030
	ldr r0, [r3, #88]	@ 00054030 986d
.org 0x54032
	subs r1, r1, r0	@ 00054032 091a
.org 0x54034
	movs r0, #160	@ 00054034 a020
.org 0x54036
	lsls r0, r0, #7	@ 00054036 c001
.org 0x54038
	adds r1, r1, r0	@ 00054038 0918
.org 0x5403a
	cmp r1, r4	@ 0005403a a142
.org 0x5403c
	bhi.n 0x54054	@ 0005403c 0ad8
.org 0x5403e
	movs r1, #0	@ 0005403e 0021
.org 0x54040
	movs r0, #4	@ 00054040 0420
.org 0x54042
	strb r0, [r6, #13]	@ 00054042 7073
.org 0x54044
	strb r1, [r6, #14]	@ 00054044 b173
.org 0x54046
	strb r1, [r6, #15]	@ 00054046 f173
.org 0x54048
	b.n 0x54080	@ 00054048 1ae0
.org 0x5404a
	.byte 0x00	@ 0005404a data
.org 0x5404b
	.byte 0x00	@ 0005404b data
.org 0x5404c
	.byte 0x0c,0x93,0x12,0x08	@ 0005404c data
.org 0x54050
	.byte 0xf0,0xdb,0x02,0x02	@ 00054050 data
.org 0x54054
	ldrb r2, [r6, #19]	@ 00054054 f27c
.org 0x54056
	movs r3, #0	@ 00054056 0023
.org 0x54058
	ldr r0, [r7, #0]	@ 00054058 3868
.org 0x5405a
	ldr r1, [r6, #84]	@ 0005405a 716d
.org 0x5405c
	ldr r0, [r0, #84]	@ 0005405c 406d
.org 0x5405e
	cmp r1, r0	@ 0005405e 8142
.org 0x54060
	bge.n 0x54064	@ 00054060 00da
.org 0x54062
	movs r3, #1	@ 00054062 0123
.org 0x54064
	cmp r2, r3	@ 00054064 9a42
.org 0x54066
	beq.n 0x54074	@ 00054066 05d0
.org 0x54068
	adds r2, r6, #0	@ 00054068 321c
.org 0x5406a
	adds r2, #182	@ 0005406a b632
.org 0x5406c
	ldrb r1, [r2, #0]	@ 0005406c 1178
.org 0x5406e
	movs r0, #4	@ 0005406e 0420
.org 0x54070
	orrs r0, r1	@ 00054070 0843
.org 0x54072
	strb r0, [r2, #0]	@ 00054072 1070
.org 0x54074
	mov r1, r8	@ 00054074 4146
.org 0x54076
	cmp r1, #0	@ 00054076 0029
.org 0x54078
	bne.n 0x54080	@ 00054078 02d1
