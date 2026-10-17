@ FUN_0808cc3c  entry 0x0808cc3c  size 124
.thumb
.org 0x8cc3c
FUN_0808cc3c:
	push {r4, r5, lr}	@ 0008cc3c 30b5
.org 0x8cc3e
	adds r3, r0, #0	@ 0008cc3e 031c
.org 0x8cc40
	ldr r0, [r3, #20]	@ 0008cc40 5869
.org 0x8cc42
	movs r1, #1	@ 0008cc42 0121
.org 0x8cc44
	ands r0, r1	@ 0008cc44 0840
.org 0x8cc46
	cmp r0, #0	@ 0008cc46 0028
.org 0x8cc48
	beq.n 0x8ccbc	@ 0008cc48 38d0
.org 0x8cc4a
	ldr r4, [r3, #44]	@ 0008cc4a dc6a
.org 0x8cc4c
	ldr r0, [r3, #12]	@ 0008cc4c d868
.org 0x8cc4e
	ldr r0, [r0, #44]	@ 0008cc4e c06a
.org 0x8cc50
	ldr r0, [r0, #84]	@ 0008cc50 406d
.org 0x8cc52
	ldr r2, [r4, #84]	@ 0008cc52 626d
.org 0x8cc54
	cmp r0, r2	@ 0008cc54 9042
.org 0x8cc56
	bge.n 0x8cc68	@ 0008cc56 07da
.org 0x8cc58
	adds r1, r4, #0	@ 0008cc58 211c
.org 0x8cc5a
	adds r1, #185	@ 0008cc5a b931
.org 0x8cc5c
	movs r0, #0	@ 0008cc5c 0020
.org 0x8cc5e
	strb r0, [r1, #0]	@ 0008cc5e 0870
.org 0x8cc60
	ldr r0, [pc, #0]	@ 0008cc60 0048
.org 0x8cc62
	b.n 0x8cc90	@ 0008cc62 15e0
.org 0x8cc64
	.byte 0xf0,0xdb,0x02,0x02	@ 0008cc64 data
.org 0x8cc68
	cmp r2, r0	@ 0008cc68 8242
.org 0x8cc6a
	bge.n 0x8cc7c	@ 0008cc6a 07da
.org 0x8cc6c
	adds r0, r4, #0	@ 0008cc6c 201c
.org 0x8cc6e
	adds r0, #185	@ 0008cc6e b930
.org 0x8cc70
	strb r1, [r0, #0]	@ 0008cc70 0170
.org 0x8cc72
	ldr r0, [pc, #4]	@ 0008cc72 0148
.org 0x8cc74
	b.n 0x8cc90	@ 0008cc74 0ce0
.org 0x8cc76
	.byte 0x00	@ 0008cc76 data
.org 0x8cc77
	.byte 0x00	@ 0008cc77 data
.org 0x8cc78
	.byte 0xf0,0xdb,0x02,0x02	@ 0008cc78 data
.org 0x8cc7c
	movs r5, #0	@ 0008cc7c 0025
.org 0x8cc7e
	ldr r0, [pc, #68]	@ 0008cc7e 1148
.org 0x8cc80
	ldr r1, [r0, #0]	@ 0008cc80 0168
.org 0x8cc82
	ldr r1, [r1, #84]	@ 0008cc82 496d
.org 0x8cc84
	cmp r2, r1	@ 0008cc84 8a42
.org 0x8cc86
	bge.n 0x8cc8a	@ 0008cc86 00da
.org 0x8cc88
	movs r5, #1	@ 0008cc88 0125
.org 0x8cc8a
	adds r1, r4, #0	@ 0008cc8a 211c
.org 0x8cc8c
	adds r1, #185	@ 0008cc8c b931
.org 0x8cc8e
	strb r5, [r1, #0]	@ 0008cc8e 0d70
.org 0x8cc90
	ldr r2, [r0, #0]	@ 0008cc90 0268
.org 0x8cc92
	ldr r1, [r3, #20]	@ 0008cc92 5969
.org 0x8cc94
	movs r0, #128	@ 0008cc94 8020
.org 0x8cc96
	lsls r0, r0, #2	@ 0008cc96 8000
.org 0x8cc98
	ands r0, r1	@ 0008cc98 0840
.org 0x8cc9a
	cmp r0, #0	@ 0008cc9a 0028
.org 0x8cc9c
	beq.n 0x8ccbc	@ 0008cc9c 0ed0
.org 0x8cc9e
	movs r0, #128	@ 0008cc9e 8020
.org 0x8cca0
	lsls r0, r0, #10	@ 0008cca0 8002
.org 0x8cca2
	ands r1, r0	@ 0008cca2 0140
.org 0x8cca4
	cmp r1, #0	@ 0008cca4 0029
.org 0x8cca6
	beq.n 0x8ccbc	@ 0008cca6 09d0
.org 0x8cca8
	cmp r2, #0	@ 0008cca8 002a
.org 0x8ccaa
	beq.n 0x8ccbc	@ 0008ccaa 07d0
.org 0x8ccac
	adds r0, r2, #0	@ 0008ccac 101c
.org 0x8ccae
	movs r1, #3	@ 0008ccae 0321
.org 0x8ccb0
	movs r2, #9	@ 0008ccb0 0922
.org 0x8ccb2
	bl 0x3a578	@ 0008ccb2 adf761fc
.org 0x8ccb6
	adds r1, r4, #0	@ 0008ccb6 211c
