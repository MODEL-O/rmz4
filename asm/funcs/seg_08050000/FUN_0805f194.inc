@ FUN_0805f194  entry 0x0805f194  size 116
.thumb
.org 0x5f194
FUN_0805f194:
	push {r4, r5, lr}	@ 0005f194 30b5
.org 0x5f196
	sub sp, #16	@ 0005f196 84b0
.org 0x5f198
	adds r3, r0, #0	@ 0005f198 031c
.org 0x5f19a
	lsls r1, r1, #24	@ 0005f19a 0906
.org 0x5f19c
	lsrs r2, r1, #24	@ 0005f19c 0a0e
.org 0x5f19e
	movs r5, #0	@ 0005f19e 0025
.org 0x5f1a0
	movs r4, #0	@ 0005f1a0 0024
.org 0x5f1a2
	cmp r4, r2	@ 0005f1a2 9442
.org 0x5f1a4
	bge.n 0x5f1bc	@ 0005f1a4 0ada
.org 0x5f1a6
	mov r0, sp	@ 0005f1a6 6846
.org 0x5f1a8
	adds r1, r0, r4	@ 0005f1a8 0119
.org 0x5f1aa
	adds r0, r3, r4	@ 0005f1aa 1819
.org 0x5f1ac
	ldrb r0, [r0, #0]	@ 0005f1ac 0078
.org 0x5f1ae
	strb r0, [r1, #0]	@ 0005f1ae 0870
.org 0x5f1b0
	adds r0, r0, r5	@ 0005f1b0 4019
.org 0x5f1b2
	lsls r0, r0, #24	@ 0005f1b2 0006
.org 0x5f1b4
	lsrs r5, r0, #24	@ 0005f1b4 050e
.org 0x5f1b6
	adds r4, #1	@ 0005f1b6 0134
.org 0x5f1b8
	cmp r4, r2	@ 0005f1b8 9442
.org 0x5f1ba
	blt.n 0x5f1a6	@ 0005f1ba f4db
.org 0x5f1bc
	lsls r0, r5, #24	@ 0005f1bc 2806
.org 0x5f1be
	asrs r3, r0, #24	@ 0005f1be 0316
.org 0x5f1c0
	cmp r3, #0	@ 0005f1c0 002b
.org 0x5f1c2
	bne.n 0x5f1ca	@ 0005f1c2 02d1
.org 0x5f1c4
	movs r0, #1	@ 0005f1c4 0120
.org 0x5f1c6
	negs r0, r0	@ 0005f1c6 4042
.org 0x5f1c8
	b.n 0x5f200	@ 0005f1c8 1ae0
.org 0x5f1ca
	ldr r2, [pc, #60]	@ 0005f1ca 0f4a
.org 0x5f1cc
	ldr r1, [r2, #0]	@ 0005f1cc 1168
.org 0x5f1ce
	ldr r0, [pc, #60]	@ 0005f1ce 0f48
.org 0x5f1d0
	muls r0, r1	@ 0005f1d0 4843
.org 0x5f1d2
	ldr r1, [pc, #60]	@ 0005f1d2 0f49
.org 0x5f1d4
	adds r0, r0, r1	@ 0005f1d4 4018
.org 0x5f1d6
	lsls r0, r0, #1	@ 0005f1d6 4000
.org 0x5f1d8
	lsrs r1, r0, #1	@ 0005f1d8 4108
.org 0x5f1da
	str r1, [r2, #0]	@ 0005f1da 1160
.org 0x5f1dc
	lsrs r0, r0, #17	@ 0005f1dc 400c
.org 0x5f1de
	adds r1, r3, #0	@ 0005f1de 191c
.org 0x5f1e0
	bl 0x129198	@ 0005f1e0 c9f0daff
.org 0x5f1e4
	adds r1, r0, #0	@ 0005f1e4 011c
.org 0x5f1e6
	subs r4, #1	@ 0005f1e6 013c
.org 0x5f1e8
	cmp r4, #0	@ 0005f1e8 002c
.org 0x5f1ea
	blt.n 0x5f1fe	@ 0005f1ea 08db
.org 0x5f1ec
	mov r2, sp	@ 0005f1ec 6a46
.org 0x5f1ee
	adds r0, r2, r4	@ 0005f1ee 1019
.org 0x5f1f0
	ldrb r0, [r0, #0]	@ 0005f1f0 0078
.org 0x5f1f2
	subs r0, r5, r0	@ 0005f1f2 281a
.org 0x5f1f4
	lsls r0, r0, #24	@ 0005f1f4 0006
.org 0x5f1f6
	lsrs r5, r0, #24	@ 0005f1f6 050e
.org 0x5f1f8
	asrs r0, r0, #24	@ 0005f1f8 0016
.org 0x5f1fa
	cmp r1, r0	@ 0005f1fa 8142
.org 0x5f1fc
	blt.n 0x5f1e6	@ 0005f1fc f3db
.org 0x5f1fe
	adds r0, r4, #0	@ 0005f1fe 201c
.org 0x5f200
	add sp, #16	@ 0005f200 04b0
.org 0x5f202
	pop {r4, r5}	@ 0005f202 30bc
.org 0x5f204
	pop {r1}	@ 0005f204 02bc
.org 0x5f206
	bx r1	@ 0005f206 0847
