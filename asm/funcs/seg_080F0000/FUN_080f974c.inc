@ FUN_080f974c  entry 0x080f974c  size 182
.thumb
.org 0xf974c
FUN_080f974c:
	push {r4, r5, r6, r7, lr}	@ 000f974c f0b5
.org 0xf974e
	sub sp, #12	@ 000f974e 83b0
.org 0xf9750
	adds r7, r0, #0	@ 000f9750 071c
.org 0xf9752
	mov r1, sp	@ 000f9752 6946
.org 0xf9754
	ldr r0, [pc, #172]	@ 000f9754 2b48
.org 0xf9756
	ldmia r0!, {r2, r3, r4}	@ 000f9756 1cc8
.org 0xf9758
	stmia r1!, {r2, r3, r4}	@ 000f9758 1cc1
.org 0xf975a
	adds r0, r7, #0	@ 000f975a 381c
.org 0xf975c
	adds r0, #180	@ 000f975c b430
.org 0xf975e
	ldrb r4, [r0, #0]	@ 000f975e 0478
.org 0xf9760
	ldrb r0, [r7, #15]	@ 000f9760 f87b
.org 0xf9762
	cmp r0, #0	@ 000f9762 0028
.org 0xf9764
	bne.n 0xf9784	@ 000f9764 0ed1
.org 0xf9766
	ldr r0, [pc, #160]	@ 000f9766 2848
.org 0xf9768
	bl 0x2b10	@ 000f9768 09f7d2f9
.org 0xf976c
	adds r0, r7, #0	@ 000f976c 381c
.org 0xf976e
	bl 0xf9e74	@ 000f976e 00f081fb
.org 0xf9772
	lsls r0, r4, #2	@ 000f9772 a000
.org 0xf9774
	add r0, sp	@ 000f9774 6844
.org 0xf9776
	ldrh r1, [r0, #0]	@ 000f9776 0188
.org 0xf9778
	adds r0, r7, #0	@ 000f9778 381c
.org 0xf977a
	bl 0x1cf00	@ 000f977a 23f7c1fb
.org 0xf977e
	ldrb r0, [r7, #15]	@ 000f977e f87b
.org 0xf9780
	adds r0, #1	@ 000f9780 0130
.org 0xf9782
	strb r0, [r7, #15]	@ 000f9782 f873
.org 0xf9784
	adds r0, r7, #0	@ 000f9784 381c
.org 0xf9786
	bl 0x1cff0	@ 000f9786 23f733fc
.org 0xf978a
	adds r0, r7, #0	@ 000f978a 381c
.org 0xf978c
	adds r0, #116	@ 000f978c 7430
.org 0xf978e
	ldr r4, [pc, #124]	@ 000f978e 1f4c
.org 0xf9790
	ldr r2, [pc, #124]	@ 000f9790 1f4a
.org 0xf9792
	ldrb r3, [r7, #30]	@ 000f9792 bb7f
.org 0xf9794
	lsls r3, r3, #8	@ 000f9794 1b02
.org 0xf9796
	adds r1, r7, #0	@ 000f9796 391c
.org 0xf9798
	adds r1, #112	@ 000f9798 7031
.org 0xf979a
	ldrb r1, [r1, #0]	@ 000f979a 0978
.org 0xf979c
	orrs r3, r1	@ 000f979c 0b43
.org 0xf979e
	ldr r5, [pc, #116]	@ 000f979e 1d4d
.org 0xf97a0
	adds r1, r3, r5	@ 000f97a0 5919
.org 0xf97a2
	lsls r1, r1, #1	@ 000f97a2 4900
.org 0xf97a4
	adds r1, r1, r2	@ 000f97a4 8918
.org 0xf97a6
	ldrh r1, [r1, #0]	@ 000f97a6 0988
.org 0xf97a8
	lsls r1, r1, #2	@ 000f97a8 8900
.org 0xf97aa
	adds r1, r1, r4	@ 000f97aa 0919
.org 0xf97ac
	adds r2, r7, #0	@ 000f97ac 3a1c
.org 0xf97ae
	adds r2, #113	@ 000f97ae 7132
.org 0xf97b0
	movs r6, #0	@ 000f97b0 0026
.org 0xf97b2
	ldrsb r6, [r2, r6]	@ 000f97b2 9657
.org 0xf97b4
	ldr r1, [r1, #0]	@ 000f97b4 0968
.org 0xf97b6
	lsls r4, r6, #2	@ 000f97b6 b400
.org 0xf97b8
	adds r4, r4, r1	@ 000f97b8 6418
.org 0xf97ba
	ldr r5, [pc, #92]	@ 000f97ba 174d
.org 0xf97bc
	ldr r2, [r7, #44]	@ 000f97bc fa6a
.org 0xf97be
	negs r1, r2	@ 000f97be 5142
.org 0xf97c0
	orrs r1, r2	@ 000f97c0 1143
.org 0xf97c2
	asrs r1, r1, #31	@ 000f97c2 c917
.org 0xf97c4
	movs r2, #4	@ 000f97c4 0422
.org 0xf97c6
	ands r1, r2	@ 000f97c6 1140
.org 0xf97c8
	adds r1, r1, r5	@ 000f97c8 4919
.org 0xf97ca
	ldr r1, [r1, #0]	@ 000f97ca 0968
.org 0xf97cc
	lsls r3, r3, #2	@ 000f97cc 9b00
.org 0xf97ce
	adds r3, r3, r1	@ 000f97ce 5b18
.org 0xf97d0
	ldr r1, [pc, #72]	@ 000f97d0 1249
.org 0xf97d2
	adds r3, r3, r1	@ 000f97d2 5b18
.org 0xf97d4
	ldr r1, [r3, #0]	@ 000f97d4 1968
.org 0xf97d6
	adds r1, r1, r6	@ 000f97d6 8919
.org 0xf97d8
	ldrb r1, [r1, #0]	@ 000f97d8 0978
.org 0xf97da
	lsls r2, r1, #1	@ 000f97da 4a00
.org 0xf97dc
	adds r2, r2, r1	@ 000f97dc 5218
.org 0xf97de
	lsls r2, r2, #3	@ 000f97de d200
.org 0xf97e0
	ldr r1, [r4, #0]	@ 000f97e0 2168
.org 0xf97e2
	adds r1, r1, r2	@ 000f97e2 8918
.org 0xf97e4
	bl 0x5784	@ 000f97e4 0bf7ceff
.org 0xf97e8
	adds r0, r7, #0	@ 000f97e8 381c
.org 0xf97ea
	adds r0, #115	@ 000f97ea 7330
.org 0xf97ec
	ldrb r0, [r0, #0]	@ 000f97ec 0078
.org 0xf97ee
	cmp r0, #3	@ 000f97ee 0328
.org 0xf97f0
	bne.n 0xf97fa	@ 000f97f0 03d1
.org 0xf97f2
	movs r1, #0	@ 000f97f2 0021
.org 0xf97f4
	movs r0, #1	@ 000f97f4 0120
.org 0xf97f6
	strb r0, [r7, #14]	@ 000f97f6 b873
.org 0xf97f8
	strb r1, [r7, #15]	@ 000f97f8 f973
.org 0xf97fa
	add sp, #12	@ 000f97fa 03b0
.org 0xf97fc
	pop {r4, r5, r6, r7}	@ 000f97fc f0bc
.org 0xf97fe
	pop {r0}	@ 000f97fe 01bc
.org 0xf9800
	bx r0	@ 000f9800 0047
