@ FUN_08102f3c  entry 0x08102f3c  size 116
.thumb
.org 0x102f3c
FUN_08102f3c:
	push {r4, r5, r6, lr}	@ 00102f3c 70b5
.org 0x102f3e
	adds r6, r0, #0	@ 00102f3e 061c
.org 0x102f40
	adds r0, #190	@ 00102f40 be30
.org 0x102f42
	movs r5, #0	@ 00102f42 0025
.org 0x102f44
	ldr r2, [pc, #104]	@ 00102f44 1a4a
.org 0x102f46
	strh r2, [r0, #0]	@ 00102f46 0280
.org 0x102f48
	adds r1, r6, #0	@ 00102f48 311c
.org 0x102f4a
	adds r1, #192	@ 00102f4a c031
.org 0x102f4c
	ldr r0, [pc, #100]	@ 00102f4c 1948
.org 0x102f4e
	strh r0, [r1, #0]	@ 00102f4e 0880
.org 0x102f50
	adds r0, r6, #0	@ 00102f50 301c
.org 0x102f52
	adds r0, #194	@ 00102f52 c230
.org 0x102f54
	strh r2, [r0, #0]	@ 00102f54 0280
.org 0x102f56
	ldrb r1, [r6, #10]	@ 00102f56 b17a
.org 0x102f58
	movs r0, #4	@ 00102f58 0420
.org 0x102f5a
	orrs r0, r1	@ 00102f5a 0843
.org 0x102f5c
	strb r0, [r6, #10]	@ 00102f5c b072
.org 0x102f5e
	adds r4, r6, #0	@ 00102f5e 341c
.org 0x102f60
	adds r4, #116	@ 00102f60 7434
.org 0x102f62
	ldr r1, [pc, #84]	@ 00102f62 1549
.org 0x102f64
	adds r2, r6, #0	@ 00102f64 321c
.org 0x102f66
	adds r2, #84	@ 00102f66 5432
.org 0x102f68
	adds r0, r4, #0	@ 00102f68 201c
.org 0x102f6a
	movs r3, #1	@ 00102f6a 0123
.org 0x102f6c
	bl 0x5760	@ 00102f6c 02f7f8fb
.org 0x102f70
	str r6, [r4, #44]	@ 00102f70 e662
.org 0x102f72
	str r5, [r4, #36]	@ 00102f72 6562
.org 0x102f74
	movs r0, #128	@ 00102f74 8020
.org 0x102f76
	lsls r0, r0, #1	@ 00102f76 4000
.org 0x102f78
	str r0, [r6, #92]	@ 00102f78 f065
.org 0x102f7a
	adds r1, r6, #0	@ 00102f7a 311c
.org 0x102f7c
	adds r1, #185	@ 00102f7c b931
.org 0x102f7e
	movs r0, #1	@ 00102f7e 0120
.org 0x102f80
	strb r0, [r1, #0]	@ 00102f80 0870
.org 0x102f82
	subs r1, #1	@ 00102f82 0139
.org 0x102f84
	movs r0, #48	@ 00102f84 3020
.org 0x102f86
	strb r0, [r1, #0]	@ 00102f86 0870
.org 0x102f88
	ldrb r1, [r6, #10]	@ 00102f88 b17a
.org 0x102f8a
	movs r0, #16	@ 00102f8a 1020
.org 0x102f8c
	ands r0, r1	@ 00102f8c 0840
.org 0x102f8e
	cmp r0, #0	@ 00102f8e 0028
.org 0x102f90
	bne.n 0x102fa2	@ 00102f90 07d1
.org 0x102f92
	ldr r0, [r6, #92]	@ 00102f92 f06d
.org 0x102f94
	lsls r0, r0, #8	@ 00102f94 0002
.org 0x102f96
	negs r0, r0	@ 00102f96 4042
.org 0x102f98
	cmp r0, #0	@ 00102f98 0028
.org 0x102f9a
	bge.n 0x102f9e	@ 00102f9a 00da
.org 0x102f9c
	adds r0, #255	@ 00102f9c ff30
.org 0x102f9e
	asrs r0, r0, #8	@ 00102f9e 0012
.org 0x102fa0
	str r0, [r6, #92]	@ 00102fa0 f065
.org 0x102fa2
	movs r1, #0	@ 00102fa2 0021
.org 0x102fa4
	movs r0, #1	@ 00102fa4 0120
.org 0x102fa6
	strb r0, [r6, #13]	@ 00102fa6 7073
.org 0x102fa8
	strb r1, [r6, #14]	@ 00102fa8 b173
.org 0x102faa
	pop {r4, r5, r6}	@ 00102faa 70bc
.org 0x102fac
	pop {r0}	@ 00102fac 01bc
.org 0x102fae
	bx r0	@ 00102fae 0047
