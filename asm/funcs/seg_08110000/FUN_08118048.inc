@ FUN_08118048  entry 0x08118048  size 164
.thumb
.org 0x118048
FUN_08118048:
	push {r4, r5, lr}	@ 00118048 30b5
.org 0x11804a
	ldr r2, [pc, #68]	@ 0011804a 114a
.org 0x11804c
	adds r1, r0, r2	@ 0011804c 8118
.org 0x11804e
	ldr r3, [r1, #0]	@ 0011804e 0b68
.org 0x118050
	ldr r2, [pc, #64]	@ 00118050 104a
.org 0x118052
	adds r1, r0, r2	@ 00118052 8118
.org 0x118054
	ldrb r5, [r1, #0]	@ 00118054 0d78
.org 0x118056
	ldr r1, [pc, #64]	@ 00118056 1049
.org 0x118058
	adds r0, r0, r1	@ 00118058 4018
.org 0x11805a
	ldrb r4, [r0, #0]	@ 0011805a 0478
.org 0x11805c
	adds r0, r3, #0	@ 0011805c 181c
.org 0x11805e
	adds r0, #180	@ 0011805e b430
.org 0x118060
	ldrb r1, [r0, #12]	@ 00118060 017b
.org 0x118062
	ldrb r2, [r0, #13]	@ 00118062 427b
.org 0x118064
	cmp r5, #2	@ 00118064 022d
.org 0x118066
	bls.n 0x11806a	@ 00118066 00d9
.org 0x118068
	movs r5, #2	@ 00118068 0225
.org 0x11806a
	cmp r4, #2	@ 0011806a 022c
.org 0x11806c
	bls.n 0x118070	@ 0011806c 00d9
.org 0x11806e
	movs r4, #2	@ 0011806e 0224
.org 0x118070
	cmp r1, #2	@ 00118070 0229
.org 0x118072
	bls.n 0x118076	@ 00118072 00d9
.org 0x118074
	movs r1, #2	@ 00118074 0221
.org 0x118076
	cmp r2, #2	@ 00118076 022a
.org 0x118078
	bls.n 0x11807c	@ 00118078 00d9
.org 0x11807a
	movs r2, #2	@ 0011807a 0222
.org 0x11807c
	cmp r5, r1	@ 0011807c 8d42
.org 0x11807e
	bne.n 0x11809c	@ 0011807e 0dd1
.org 0x118080
	adds r4, r3, #0	@ 00118080 1c1c
.org 0x118082
	adds r4, #248	@ 00118082 f834
.org 0x118084
	ldrb r0, [r4, #0]	@ 00118084 2078
.org 0x118086
	cmp r0, r1	@ 00118086 8842
.org 0x118088
	bne.n 0x1180e4	@ 00118088 2cd1
.org 0x11808a
	adds r0, r3, #0	@ 0011808a 181c
.org 0x11808c
	adds r0, #249	@ 0011808c f930
.org 0x11808e
	b.n 0x1180f0	@ 0011808e 2fe0
.org 0x118090
	.byte 0xa8,0x63,0x00,0x00	@ 00118090 data
.org 0x118094
	.byte 0xf2,0x0d,0x00,0x00	@ 00118094 data
.org 0x118098
	.byte 0xf3,0x0d,0x00,0x00	@ 00118098 data
.org 0x11809c
	cmp r4, r2	@ 0011809c 9442
.org 0x11809e
	bne.n 0x1180b2	@ 0011809e 08d1
.org 0x1180a0
	adds r4, r3, #0	@ 001180a0 1c1c
.org 0x1180a2
	adds r4, #249	@ 001180a2 f934
.org 0x1180a4
	ldrb r0, [r4, #0]	@ 001180a4 2078
.org 0x1180a6
	cmp r0, r2	@ 001180a6 9042
.org 0x1180a8
	bne.n 0x1180cc	@ 001180a8 10d1
.org 0x1180aa
	adds r0, r3, #0	@ 001180aa 181c
.org 0x1180ac
	adds r0, #248	@ 001180ac f830
.org 0x1180ae
	strb r1, [r0, #0]	@ 001180ae 0170
.org 0x1180b0
	b.n 0x1180f2	@ 001180b0 1fe0
.org 0x1180b2
	cmp r5, r2	@ 001180b2 9542
.org 0x1180b4
	bne.n 0x1180d0	@ 001180b4 0cd1
.org 0x1180b6
	cmp r4, r1	@ 001180b6 8c42
.org 0x1180b8
	beq.n 0x1180f2	@ 001180b8 1bd0
.org 0x1180ba
	adds r4, r3, #0	@ 001180ba 1c1c
.org 0x1180bc
	adds r4, #248	@ 001180bc f834
.org 0x1180be
	ldrb r0, [r4, #0]	@ 001180be 2078
.org 0x1180c0
	cmp r0, r2	@ 001180c0 9042
.org 0x1180c2
	bne.n 0x1180cc	@ 001180c2 03d1
.org 0x1180c4
	adds r0, r3, #0	@ 001180c4 181c
.org 0x1180c6
	adds r0, #249	@ 001180c6 f930
.org 0x1180c8
	strb r1, [r0, #0]	@ 001180c8 0170
.org 0x1180ca
	b.n 0x1180f2	@ 001180ca 12e0
.org 0x1180cc
	strb r1, [r4, #0]	@ 001180cc 2170
.org 0x1180ce
	b.n 0x1180f2	@ 001180ce 10e0
.org 0x1180d0
	cmp r4, r1	@ 001180d0 8c42
.org 0x1180d2
	bne.n 0x1180e8	@ 001180d2 09d1
.org 0x1180d4
	adds r4, r3, #0	@ 001180d4 1c1c
.org 0x1180d6
	adds r4, #248	@ 001180d6 f834
.org 0x1180d8
	ldrb r0, [r4, #0]	@ 001180d8 2078
.org 0x1180da
	cmp r0, r1	@ 001180da 8842
.org 0x1180dc
	bne.n 0x1180e4	@ 001180dc 02d1
.org 0x1180de
	adds r0, r3, #0	@ 001180de 181c
.org 0x1180e0
	adds r0, #249	@ 001180e0 f930
.org 0x1180e2
	b.n 0x1180f0	@ 001180e2 05e0
.org 0x1180e4
	strb r2, [r4, #0]	@ 001180e4 2270
.org 0x1180e6
	b.n 0x1180f2	@ 001180e6 04e0
.org 0x1180e8
	adds r0, r3, #0	@ 001180e8 181c
.org 0x1180ea
	adds r0, #248	@ 001180ea f830
