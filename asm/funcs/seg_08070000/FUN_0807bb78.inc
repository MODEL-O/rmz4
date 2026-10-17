@ FUN_0807bb78  entry 0x0807bb78  size 270
.thumb
.org 0x7bb78
FUN_0807bb78:
	push {r4, r5, r6, r7, lr}	@ 0007bb78 f0b5
.org 0x7bb7a
	mov r7, r8	@ 0007bb7a 4746
.org 0x7bb7c
	push {r7}	@ 0007bb7c 80b4
.org 0x7bb7e
	adds r7, r0, #0	@ 0007bb7e 071c
.org 0x7bb80
	movs r5, #1	@ 0007bb80 0125
.org 0x7bb82
	ldrb r0, [r7, #15]	@ 0007bb82 f87b
.org 0x7bb84
	cmp r0, #0	@ 0007bb84 0028
.org 0x7bb86
	bne.n 0x7bbfe	@ 0007bb86 3ad1
.org 0x7bb88
	adds r0, r7, #0	@ 0007bb88 381c
.org 0x7bb8a
	movs r1, #7	@ 0007bb8a 0721
.org 0x7bb8c
	bl 0x7e8c8	@ 0007bb8c 02f09cfe
.org 0x7bb90
	adds r0, r7, #0	@ 0007bb90 381c
.org 0x7bb92
	adds r0, #190	@ 0007bb92 be30
.org 0x7bb94
	ldrb r4, [r0, #0]	@ 0007bb94 0478
.org 0x7bb96
	adds r1, r4, #0	@ 0007bb96 211c
.org 0x7bb98
	ands r1, r5	@ 0007bb98 2940
.org 0x7bb9a
	subs r0, #114	@ 0007bb9a 7238
.org 0x7bb9c
	strb r1, [r0, #0]	@ 0007bb9c 0170
.org 0x7bb9e
	adds r3, r7, #0	@ 0007bb9e 3b1c
.org 0x7bba0
	adds r3, #74	@ 0007bba0 4a33
.org 0x7bba2
	lsls r1, r1, #4	@ 0007bba2 0901
.org 0x7bba4
	ldrb r2, [r3, #0]	@ 0007bba4 1a78
.org 0x7bba6
	movs r0, #17	@ 0007bba6 1120
.org 0x7bba8
	negs r0, r0	@ 0007bba8 4042
.org 0x7bbaa
	ands r0, r2	@ 0007bbaa 1040
.org 0x7bbac
	orrs r0, r1	@ 0007bbac 0843
.org 0x7bbae
	strb r0, [r3, #0]	@ 0007bbae 1870
.org 0x7bbb0
	adds r0, r5, #0	@ 0007bbb0 281c
.org 0x7bbb2
	ands r0, r4	@ 0007bbb2 2040
.org 0x7bbb4
	cmp r0, #0	@ 0007bbb4 0028
.org 0x7bbb6
	beq.n 0x7bbc0	@ 0007bbb6 03d0
.org 0x7bbb8
	ldrb r0, [r7, #10]	@ 0007bbb8 b87a
.org 0x7bbba
	movs r1, #16	@ 0007bbba 1021
.org 0x7bbbc
	orrs r0, r1	@ 0007bbbc 0843
.org 0x7bbbe
	b.n 0x7bbc6	@ 0007bbbe 02e0
.org 0x7bbc0
	ldrb r1, [r7, #10]	@ 0007bbc0 b97a
.org 0x7bbc2
	movs r0, #239	@ 0007bbc2 ef20
.org 0x7bbc4
	ands r0, r1	@ 0007bbc4 0840
.org 0x7bbc6
	strb r0, [r7, #10]	@ 0007bbc6 b872
.org 0x7bbc8
	adds r4, #1	@ 0007bbc8 0134
.org 0x7bbca
	mov r8, r4	@ 0007bbca a046
.org 0x7bbcc
	movs r0, #1	@ 0007bbcc 0120
.org 0x7bbce
	mov r1, r8	@ 0007bbce 4146
.org 0x7bbd0
	ands r1, r0	@ 0007bbd0 0140
.org 0x7bbd2
	mov r8, r1	@ 0007bbd2 8846
.org 0x7bbd4
	lsls r0, r1, #1	@ 0007bbd4 4800
.org 0x7bbd6
	subs r3, r0, #1	@ 0007bbd6 431e
.org 0x7bbd8
	adds r0, r7, #0	@ 0007bbd8 381c
.org 0x7bbda
	adds r0, #200	@ 0007bbda c830
.org 0x7bbdc
	lsls r1, r3, #13	@ 0007bbdc 5903
.org 0x7bbde
	ldr r2, [r0, #0]	@ 0007bbde 0268
.org 0x7bbe0
	subs r2, r2, r1	@ 0007bbe0 521a
.org 0x7bbe2
	str r2, [r7, #84]	@ 0007bbe2 7a65
.org 0x7bbe4
	lsls r0, r3, #9	@ 0007bbe4 5802
.org 0x7bbe6
	str r0, [r7, #92]	@ 0007bbe6 f865
.org 0x7bbe8
	lsls r0, r3, #5	@ 0007bbe8 5801
.org 0x7bbea
	negs r0, r0	@ 0007bbea 4042
.org 0x7bbec
	str r0, [r7, #100]	@ 0007bbec 7866
.org 0x7bbee
	movs r0, #0	@ 0007bbee 0020
.org 0x7bbf0
	str r0, [r7, #104]	@ 0007bbf0 b866
.org 0x7bbf2
	str r2, [r7, #96]	@ 0007bbf2 3a66
.org 0x7bbf4
	mov r0, r8	@ 0007bbf4 4046
.org 0x7bbf6
	strb r0, [r7, #19]	@ 0007bbf6 f874
.org 0x7bbf8
	ldrb r0, [r7, #15]	@ 0007bbf8 f87b
.org 0x7bbfa
	adds r0, #1	@ 0007bbfa 0130
.org 0x7bbfc
	strb r0, [r7, #15]	@ 0007bbfc f873
.org 0x7bbfe
	ldrb r1, [r7, #19]	@ 0007bbfe f97c
.org 0x7bc00
	mov r8, r1	@ 0007bc00 8846
.org 0x7bc02
	adds r4, r7, #0	@ 0007bc02 3c1c
.org 0x7bc04
	adds r4, #188	@ 0007bc04 bc34
.org 0x7bc06
	ldrb r0, [r4, #0]	@ 0007bc06 2078
.org 0x7bc08
	cmp r0, #0	@ 0007bc08 0028
.org 0x7bc0a
	beq.n 0x7bc12	@ 0007bc0a 02d0
.org 0x7bc0c
	adds r0, r7, #0	@ 0007bc0c 381c
.org 0x7bc0e
	bl 0x1cff0	@ 0007bc0e a1f7eff9
.org 0x7bc12
	adds r0, r7, #0	@ 0007bc12 381c
.org 0x7bc14
	adds r0, #116	@ 0007bc14 7430
.org 0x7bc16
	ldr r3, [pc, #112]	@ 0007bc16 1c4b
.org 0x7bc18
	ldr r2, [pc, #112]	@ 0007bc18 1c4a
.org 0x7bc1a
	ldrb r1, [r4, #0]	@ 0007bc1a 2178
.org 0x7bc1c
	lsls r1, r1, #1	@ 0007bc1c 4900
.org 0x7bc1e
	adds r1, r1, r2	@ 0007bc1e 8918
.org 0x7bc20
	ldrh r2, [r1, #0]	@ 0007bc20 0a88
.org 0x7bc22
	lsls r2, r2, #2	@ 0007bc22 9200
.org 0x7bc24
	adds r2, r2, r3	@ 0007bc24 d218
.org 0x7bc26
	adds r1, r7, #0	@ 0007bc26 391c
.org 0x7bc28
	adds r1, #113	@ 0007bc28 7131
.org 0x7bc2a
	ldrb r1, [r1, #0]	@ 0007bc2a 0978
.org 0x7bc2c
	lsls r1, r1, #24	@ 0007bc2c 0906
.org 0x7bc2e
	asrs r1, r1, #24	@ 0007bc2e 0916
.org 0x7bc30
	ldr r2, [r2, #0]	@ 0007bc30 1268
.org 0x7bc32
	lsls r1, r1, #2	@ 0007bc32 8900
.org 0x7bc34
	adds r1, r1, r2	@ 0007bc34 8918
.org 0x7bc36
	ldr r1, [r1, #0]	@ 0007bc36 0968
.org 0x7bc38
	bl 0x5784	@ 0007bc38 89f7a4fd
.org 0x7bc3c
	ldr r5, [r7, #84]	@ 0007bc3c 7d6d
.org 0x7bc3e
	ldr r4, [r7, #92]	@ 0007bc3e fc6d
.org 0x7bc40
	adds r5, r5, r4	@ 0007bc40 2d19
.org 0x7bc42
	str r5, [r7, #84]	@ 0007bc42 7d65
.org 0x7bc44
	ldr r0, [r7, #104]	@ 0007bc44 b86e
.org 0x7bc46
	subs r0, r0, r4	@ 0007bc46 001b
.org 0x7bc48
	ldr r6, [r7, #100]	@ 0007bc48 7e6e
.org 0x7bc4a
	adds r1, r6, #0	@ 0007bc4a 311c
.org 0x7bc4c
	bl 0x128fb8	@ 0007bc4c adf0b4f9
.org 0x7bc50
	adds r1, r0, #1	@ 0007bc50 411c
.org 0x7bc52
	lsls r4, r4, #1	@ 0007bc52 6400
.org 0x7bc54
	muls r0, r6	@ 0007bc54 7043
.org 0x7bc56
	adds r4, r4, r0	@ 0007bc56 2418
.org 0x7bc58
	adds r0, r1, #0	@ 0007bc58 081c
.org 0x7bc5a
	muls r0, r4	@ 0007bc5a 6043
.org 0x7bc5c
	asrs r3, r0, #1	@ 0007bc5c 4310
.org 0x7bc5e
	ldr r0, [r7, #96]	@ 0007bc5e 386e
.org 0x7bc60
	subs r5, r5, r0	@ 0007bc60 2d1a
.org 0x7bc62
	adds r3, r3, r5	@ 0007bc62 5b19
.org 0x7bc64
	mov r1, r8	@ 0007bc64 4146
.org 0x7bc66
	lsls r0, r1, #1	@ 0007bc66 4800
.org 0x7bc68
	subs r0, #1	@ 0007bc68 0138
.org 0x7bc6a
	muls r3, r0	@ 0007bc6a 4343
.org 0x7bc6c
	ldr r0, [pc, #32]	@ 0007bc6c 0848
.org 0x7bc6e
	cmp r3, r0	@ 0007bc6e 8342
.org 0x7bc70
	ble.n 0x7bc7c	@ 0007bc70 04dd
.org 0x7bc72
	ldrb r0, [r7, #14]	@ 0007bc72 b87b
.org 0x7bc74
	adds r0, #1	@ 0007bc74 0130
.org 0x7bc76
	movs r1, #0	@ 0007bc76 0021
.org 0x7bc78
	strb r0, [r7, #14]	@ 0007bc78 b873
.org 0x7bc7a
	strb r1, [r7, #15]	@ 0007bc7a f973
.org 0x7bc7c
	pop {r3}	@ 0007bc7c 08bc
.org 0x7bc7e
	mov r8, r3	@ 0007bc7e 9846
.org 0x7bc80
	pop {r4, r5, r6, r7}	@ 0007bc80 f0bc
.org 0x7bc82
	pop {r0}	@ 0007bc82 01bc
.org 0x7bc84
	bx r0	@ 0007bc84 0047
