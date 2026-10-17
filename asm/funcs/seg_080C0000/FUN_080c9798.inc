@ FUN_080c9798  entry 0x080c9798  size 100
.thumb
.org 0xc9798
FUN_080c9798:
	push {r4, r5, r6, lr}	@ 000c9798 70b5
.org 0xc979a
	adds r1, r0, #0	@ 000c979a 011c
.org 0xc979c
	ldr r0, [r1, #20]	@ 000c979c 4869
.org 0xc979e
	movs r6, #4	@ 000c979e 0426
.org 0xc97a0
	ands r0, r6	@ 000c97a0 3040
.org 0xc97a2
	cmp r0, #0	@ 000c97a2 0028
.org 0xc97a4
	beq.n 0xc97f6	@ 000c97a4 27d0
.org 0xc97a6
	ldr r0, [r1, #12]	@ 000c97a6 c868
.org 0xc97a8
	ldr r3, [r0, #44]	@ 000c97a8 c36a
.org 0xc97aa
	ldr r0, [r1, #44]	@ 000c97aa c86a
.org 0xc97ac
	movs r4, #8	@ 000c97ac 0824
.org 0xc97ae
	ldrsb r4, [r3, r4]	@ 000c97ae 1c57
.org 0xc97b0
	cmp r4, #0	@ 000c97b0 002c
.org 0xc97b2
	bne.n 0xc97f6	@ 000c97b2 20d1
.org 0xc97b4
	ldr r1, [r0, #84]	@ 000c97b4 416d
.org 0xc97b6
	ldr r0, [r3, #84]	@ 000c97b6 586d
.org 0xc97b8
	movs r5, #128	@ 000c97b8 8025
.org 0xc97ba
	lsls r5, r5, #4	@ 000c97ba 2d01
.org 0xc97bc
	cmp r1, r0	@ 000c97bc 8142
.org 0xc97be
	ble.n 0xc97c2	@ 000c97be 00dd
.org 0xc97c0
	ldr r5, [pc, #56]	@ 000c97c0 0e4d
.org 0xc97c2
	adds r2, r3, #0	@ 000c97c2 1a1c
.org 0xc97c4
	adds r2, #180	@ 000c97c4 b432
.org 0xc97c6
	movs r0, #161	@ 000c97c6 a120
.org 0xc97c8
	lsls r0, r0, #1	@ 000c97c8 4000
.org 0xc97ca
	adds r0, r0, r3	@ 000c97ca c018
.org 0xc97cc
	mov ip, r0	@ 000c97cc 8446
.org 0xc97ce
	ldrb r0, [r0, #0]	@ 000c97ce 0078
.org 0xc97d0
	movs r1, #64	@ 000c97d0 4021
.org 0xc97d2
	orrs r0, r1	@ 000c97d2 0843
.org 0xc97d4
	mov r1, ip	@ 000c97d4 6146
.org 0xc97d6
	strb r0, [r1, #0]	@ 000c97d6 0870
.org 0xc97d8
	strb r6, [r3, #13]	@ 000c97d8 5e73
.org 0xc97da
	strb r4, [r3, #14]	@ 000c97da 9c73
.org 0xc97dc
	str r5, [r2, #116]	@ 000c97dc 5567
.org 0xc97de
	ldr r0, [pc, #32]	@ 000c97de 0848
.org 0xc97e0
	str r0, [r2, #120]	@ 000c97e0 9067
.org 0xc97e2
	str r4, [r2, #124]	@ 000c97e2 d467
.org 0xc97e4
	movs r0, #154	@ 000c97e4 9a20
.org 0xc97e6
	lsls r0, r0, #1	@ 000c97e6 4000
.org 0xc97e8
	adds r1, r3, r0	@ 000c97e8 1918
.org 0xc97ea
	movs r0, #64	@ 000c97ea 4020
.org 0xc97ec
	str r0, [r1, #0]	@ 000c97ec 0860
.org 0xc97ee
	adds r0, #248	@ 000c97ee f830
.org 0xc97f0
	adds r1, r3, r0	@ 000c97f0 1918
.org 0xc97f2
	movs r0, #18	@ 000c97f2 1220
.org 0xc97f4
	strh r0, [r1, #0]	@ 000c97f4 0880
.org 0xc97f6
	pop {r4, r5, r6}	@ 000c97f6 70bc
.org 0xc97f8
	pop {r0}	@ 000c97f8 01bc
.org 0xc97fa
	bx r0	@ 000c97fa 0047
