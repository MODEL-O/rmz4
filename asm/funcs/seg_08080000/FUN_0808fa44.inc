@ FUN_0808fa44  entry 0x0808fa44  size 124
.thumb
.org 0x8fa44
FUN_0808fa44:
	push {r4, r5, lr}	@ 0008fa44 30b5
.org 0x8fa46
	adds r3, r0, #0	@ 0008fa46 031c
.org 0x8fa48
	ldr r0, [r3, #20]	@ 0008fa48 5869
.org 0x8fa4a
	movs r1, #1	@ 0008fa4a 0121
.org 0x8fa4c
	ands r0, r1	@ 0008fa4c 0840
.org 0x8fa4e
	cmp r0, #0	@ 0008fa4e 0028
.org 0x8fa50
	beq.n 0x8fac4	@ 0008fa50 38d0
.org 0x8fa52
	ldr r4, [r3, #44]	@ 0008fa52 dc6a
.org 0x8fa54
	ldr r0, [r3, #12]	@ 0008fa54 d868
.org 0x8fa56
	ldr r0, [r0, #44]	@ 0008fa56 c06a
.org 0x8fa58
	ldr r0, [r0, #84]	@ 0008fa58 406d
.org 0x8fa5a
	ldr r2, [r4, #84]	@ 0008fa5a 626d
.org 0x8fa5c
	cmp r0, r2	@ 0008fa5c 9042
.org 0x8fa5e
	bge.n 0x8fa70	@ 0008fa5e 07da
.org 0x8fa60
	adds r1, r4, #0	@ 0008fa60 211c
.org 0x8fa62
	adds r1, #186	@ 0008fa62 ba31
.org 0x8fa64
	movs r0, #0	@ 0008fa64 0020
.org 0x8fa66
	strb r0, [r1, #0]	@ 0008fa66 0870
.org 0x8fa68
	ldr r0, [pc, #0]	@ 0008fa68 0048
.org 0x8fa6a
	b.n 0x8fa98	@ 0008fa6a 15e0
.org 0x8fa6c
	.byte 0xf0,0xdb,0x02,0x02	@ 0008fa6c data
.org 0x8fa70
	cmp r2, r0	@ 0008fa70 8242
.org 0x8fa72
	bge.n 0x8fa84	@ 0008fa72 07da
.org 0x8fa74
	adds r0, r4, #0	@ 0008fa74 201c
.org 0x8fa76
	adds r0, #186	@ 0008fa76 ba30
.org 0x8fa78
	strb r1, [r0, #0]	@ 0008fa78 0170
.org 0x8fa7a
	ldr r0, [pc, #4]	@ 0008fa7a 0148
.org 0x8fa7c
	b.n 0x8fa98	@ 0008fa7c 0ce0
.org 0x8fa7e
	.byte 0x00	@ 0008fa7e data
.org 0x8fa7f
	.byte 0x00	@ 0008fa7f data
.org 0x8fa80
	.byte 0xf0,0xdb,0x02,0x02	@ 0008fa80 data
.org 0x8fa84
	movs r5, #0	@ 0008fa84 0025
.org 0x8fa86
	ldr r0, [pc, #68]	@ 0008fa86 1148
.org 0x8fa88
	ldr r1, [r0, #0]	@ 0008fa88 0168
.org 0x8fa8a
	ldr r1, [r1, #84]	@ 0008fa8a 496d
.org 0x8fa8c
	cmp r2, r1	@ 0008fa8c 8a42
.org 0x8fa8e
	bge.n 0x8fa92	@ 0008fa8e 00da
.org 0x8fa90
	movs r5, #1	@ 0008fa90 0125
.org 0x8fa92
	adds r1, r4, #0	@ 0008fa92 211c
.org 0x8fa94
	adds r1, #186	@ 0008fa94 ba31
.org 0x8fa96
	strb r5, [r1, #0]	@ 0008fa96 0d70
.org 0x8fa98
	ldr r2, [r0, #0]	@ 0008fa98 0268
.org 0x8fa9a
	ldr r1, [r3, #20]	@ 0008fa9a 5969
.org 0x8fa9c
	movs r0, #128	@ 0008fa9c 8020
.org 0x8fa9e
	lsls r0, r0, #2	@ 0008fa9e 8000
.org 0x8faa0
	ands r0, r1	@ 0008faa0 0840
.org 0x8faa2
	cmp r0, #0	@ 0008faa2 0028
.org 0x8faa4
	beq.n 0x8fac4	@ 0008faa4 0ed0
.org 0x8faa6
	movs r0, #128	@ 0008faa6 8020
.org 0x8faa8
	lsls r0, r0, #10	@ 0008faa8 8002
.org 0x8faaa
	ands r1, r0	@ 0008faaa 0140
.org 0x8faac
	cmp r1, #0	@ 0008faac 0029
.org 0x8faae
	beq.n 0x8fac4	@ 0008faae 09d0
.org 0x8fab0
	cmp r2, #0	@ 0008fab0 002a
.org 0x8fab2
	beq.n 0x8fac4	@ 0008fab2 07d0
.org 0x8fab4
	adds r0, r2, #0	@ 0008fab4 101c
.org 0x8fab6
	movs r1, #6	@ 0008fab6 0621
.org 0x8fab8
	movs r2, #2	@ 0008fab8 0222
.org 0x8faba
	bl 0x3a578	@ 0008faba aaf75dfd
.org 0x8fabe
	adds r1, r4, #0	@ 0008fabe 211c
