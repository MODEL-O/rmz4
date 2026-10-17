@ FUN_08037f14  entry 0x08037f14  size 114
.thumb
.org 0x37f14
FUN_08037f14:
	push {r4, r5, lr}	@ 00037f14 30b5
.org 0x37f16
	adds r5, r0, #0	@ 00037f16 051c
.org 0x37f18
	movs r0, #129	@ 00037f18 8120
.org 0x37f1a
	lsls r0, r0, #1	@ 00037f1a 4000
.org 0x37f1c
	adds r4, r5, r0	@ 00037f1c 2c18
.org 0x37f1e
	ldrb r0, [r4, #0]	@ 00037f1e 2078
.org 0x37f20
	cmp r0, #0	@ 00037f20 0028
.org 0x37f22
	bne.n 0x37f30	@ 00037f22 05d1
.org 0x37f24
	movs r1, #232	@ 00037f24 e821
.org 0x37f26
	lsls r1, r1, #5	@ 00037f26 4901
.org 0x37f28
	adds r0, r5, #0	@ 00037f28 281c
.org 0x37f2a
	bl 0x1cf00	@ 00037f2a e4f7e9ff
.org 0x37f2e
	b.n 0x37f56	@ 00037f2e 12e0
.org 0x37f30
	movs r1, #232	@ 00037f30 e821
.org 0x37f32
	lsls r1, r1, #5	@ 00037f32 4901
.org 0x37f34
	adds r0, r5, #0	@ 00037f34 281c
.org 0x37f36
	bl 0x3a3b0	@ 00037f36 02f03bfa
.org 0x37f3a
	ldrb r0, [r4, #0]	@ 00037f3a 2078
.org 0x37f3c
	cmp r0, #1	@ 00037f3c 0128
.org 0x37f3e
	bne.n 0x37f5e	@ 00037f3e 0ed1
.org 0x37f40
	adds r0, r5, #0	@ 00037f40 281c
.org 0x37f42
	adds r0, #114	@ 00037f42 7230
.org 0x37f44
	ldrb r0, [r0, #0]	@ 00037f44 0078
.org 0x37f46
	lsls r0, r0, #24	@ 00037f46 0006
.org 0x37f48
	asrs r0, r0, #24	@ 00037f48 0016
.org 0x37f4a
	cmp r0, #1	@ 00037f4a 0128
.org 0x37f4c
	bgt.n 0x37f80	@ 00037f4c 18dc
.org 0x37f4e
	adds r0, r5, #0	@ 00037f4e 281c
.org 0x37f50
	movs r1, #7	@ 00037f50 0721
.org 0x37f52
	bl 0x3c464	@ 00037f52 04f087fa
.org 0x37f56
	ldrb r0, [r4, #0]	@ 00037f56 2078
.org 0x37f58
	adds r0, #1	@ 00037f58 0130
.org 0x37f5a
	strb r0, [r4, #0]	@ 00037f5a 2070
.org 0x37f5c
	b.n 0x37f80	@ 00037f5c 10e0
.org 0x37f5e
	adds r0, r5, #0	@ 00037f5e 281c
.org 0x37f60
	adds r0, #115	@ 00037f60 7330
.org 0x37f62
	ldrb r0, [r0, #0]	@ 00037f62 0078
.org 0x37f64
	cmp r0, #3	@ 00037f64 0328
.org 0x37f66
	bne.n 0x37f80	@ 00037f66 0bd1
.org 0x37f68
	movs r1, #128	@ 00037f68 8021
.org 0x37f6a
	lsls r1, r1, #1	@ 00037f6a 4900
.org 0x37f6c
	adds r0, r5, r1	@ 00037f6c 6818
.org 0x37f6e
	movs r4, #0	@ 00037f6e 0024
.org 0x37f70
	strb r4, [r0, #0]	@ 00037f70 0470
.org 0x37f72
	ldr r1, [pc, #20]	@ 00037f72 0549
.org 0x37f74
	adds r0, r5, #0	@ 00037f74 281c
.org 0x37f76
	bl 0x1cf00	@ 00037f76 e4f7c3ff
.org 0x37f7a
	movs r0, #2	@ 00037f7a 0220
.org 0x37f7c
	strb r0, [r5, #14]	@ 00037f7c a873
.org 0x37f7e
	strb r4, [r5, #15]	@ 00037f7e ec73
.org 0x37f80
	pop {r4, r5}	@ 00037f80 30bc
.org 0x37f82
	pop {r0}	@ 00037f82 01bc
.org 0x37f84
	bx r0	@ 00037f84 0047
