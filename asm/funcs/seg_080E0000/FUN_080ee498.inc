@ FUN_080ee498  entry 0x080ee498  size 146
.thumb
.org 0xee498
FUN_080ee498:
	push {r4, r5, r6, lr}	@ 000ee498 70b5
.org 0xee49a
	adds r5, r0, #0	@ 000ee49a 051c
.org 0xee49c
	ldrb r1, [r5, #10]	@ 000ee49c a97a
.org 0xee49e
	movs r0, #1	@ 000ee49e 0120
.org 0xee4a0
	movs r6, #0	@ 000ee4a0 0026
.org 0xee4a2
	orrs r0, r1	@ 000ee4a2 0843
.org 0xee4a4
	movs r1, #2	@ 000ee4a4 0221
.org 0xee4a6
	orrs r0, r1	@ 000ee4a6 0843
.org 0xee4a8
	strb r0, [r5, #10]	@ 000ee4a8 a872
.org 0xee4aa
	adds r0, r5, #0	@ 000ee4aa 281c
.org 0xee4ac
	bl 0x1cc9c	@ 000ee4ac 2ef7f6fb
.org 0xee4b0
	ldrb r1, [r5, #10]	@ 000ee4b0 a97a
.org 0xee4b2
	movs r0, #4	@ 000ee4b2 0420
.org 0xee4b4
	orrs r0, r1	@ 000ee4b4 0843
.org 0xee4b6
	strb r0, [r5, #10]	@ 000ee4b6 a872
.org 0xee4b8
	adds r4, r5, #0	@ 000ee4b8 2c1c
.org 0xee4ba
	adds r4, #116	@ 000ee4ba 7434
.org 0xee4bc
	ldr r1, [pc, #108]	@ 000ee4bc 1b49
.org 0xee4be
	adds r2, r5, #0	@ 000ee4be 2a1c
.org 0xee4c0
	adds r2, #84	@ 000ee4c0 5432
.org 0xee4c2
	adds r0, r4, #0	@ 000ee4c2 201c
.org 0xee4c4
	movs r3, #64	@ 000ee4c4 4023
.org 0xee4c6
	bl 0x5760	@ 000ee4c6 17f74bf9
.org 0xee4ca
	str r5, [r4, #44]	@ 000ee4ca e562
.org 0xee4cc
	str r6, [r4, #36]	@ 000ee4cc 6662
.org 0xee4ce
	ldr r1, [pc, #96]	@ 000ee4ce 1849
.org 0xee4d0
	adds r1, #128	@ 000ee4d0 8031
.org 0xee4d2
	ldr r0, [pc, #96]	@ 000ee4d2 1848
.org 0xee4d4
	strh r0, [r1, #0]	@ 000ee4d4 0880
.org 0xee4d6
	ldr r4, [pc, #96]	@ 000ee4d6 184c
.org 0xee4d8
	adds r4, #128	@ 000ee4d8 8034
.org 0xee4da
	movs r0, #5	@ 000ee4da 0520
.org 0xee4dc
	strh r0, [r4, #0]	@ 000ee4dc 2080
.org 0xee4de
	ldr r0, [pc, #92]	@ 000ee4de 1748
.org 0xee4e0
	ldrh r1, [r1, #0]	@ 000ee4e0 0988
.org 0xee4e2
	ldrh r2, [r0, #6]	@ 000ee4e2 c288
.org 0xee4e4
	lsrs r2, r2, #6	@ 000ee4e4 9209
.org 0xee4e6
	subs r1, r1, r2	@ 000ee4e6 891a
.org 0xee4e8
	lsls r1, r1, #5	@ 000ee4e8 4901
.org 0xee4ea
	movs r2, #128	@ 000ee4ea 8022
.org 0xee4ec
	lsls r2, r2, #9	@ 000ee4ec 5202
.org 0xee4ee
	adds r1, r1, r2	@ 000ee4ee 8918
.org 0xee4f0
	bl 0x1d30	@ 000ee4f0 13f71efc
.org 0xee4f4
	ldr r0, [pc, #72]	@ 000ee4f4 1248
.org 0xee4f6
	ldrh r1, [r4, #0]	@ 000ee4f6 2188
.org 0xee4f8
	ldrb r2, [r0, #7]	@ 000ee4f8 c279
.org 0xee4fa
	subs r1, r1, r2	@ 000ee4fa 891a
.org 0xee4fc
	lsls r1, r1, #5	@ 000ee4fc 4901
.org 0xee4fe
	movs r2, #128	@ 000ee4fe 8022
.org 0xee500
	lsls r2, r2, #2	@ 000ee500 9200
.org 0xee502
	adds r1, r1, r2	@ 000ee502 8918
.org 0xee504
	bl 0x2208	@ 000ee504 13f780fe
.org 0xee508
	ldr r1, [pc, #56]	@ 000ee508 0e49
.org 0xee50a
	ldrb r0, [r5, #9]	@ 000ee50a 687a
.org 0xee50c
	lsls r0, r0, #2	@ 000ee50c 8000
.org 0xee50e
	adds r0, r0, r1	@ 000ee50e 4018
.org 0xee510
	movs r1, #1	@ 000ee510 0121
.org 0xee512
	str r1, [r5, #12]	@ 000ee512 e960
.org 0xee514
	ldr r0, [r0, #0]	@ 000ee514 0068
.org 0xee516
	ldr r0, [r0, #4]	@ 000ee516 4068
.org 0xee518
	str r0, [r5, #20]	@ 000ee518 6861
.org 0xee51a
	ldrb r0, [r5, #17]	@ 000ee51a 687c
.org 0xee51c
	strb r0, [r5, #13]	@ 000ee51c 6873
.org 0xee51e
	adds r0, r5, #0	@ 000ee51e 281c
.org 0xee520
	bl 0xed7c8	@ 000ee520 fff752f9
.org 0xee524
	pop {r4, r5, r6}	@ 000ee524 70bc
.org 0xee526
	pop {r0}	@ 000ee526 01bc
.org 0xee528
	bx r0	@ 000ee528 0047
