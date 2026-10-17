@ FUN_0807d798  entry 0x0807d798  size 134
.thumb
.org 0x7d798
FUN_0807d798:
	push {r4, r5, lr}	@ 0007d798 30b5
.org 0x7d79a
	adds r4, r0, #0	@ 0007d79a 041c
.org 0x7d79c
	ldrb r0, [r4, #15]	@ 0007d79c e07b
.org 0x7d79e
	cmp r0, #0	@ 0007d79e 0028
.org 0x7d7a0
	bne.n 0x7d7c4	@ 0007d7a0 10d1
.org 0x7d7a2
	adds r0, r4, #0	@ 0007d7a2 201c
.org 0x7d7a4
	movs r1, #1	@ 0007d7a4 0121
.org 0x7d7a6
	bl 0x7e8c8	@ 0007d7a6 01f08ff8
.org 0x7d7aa
	movs r0, #128	@ 0007d7aa 8020
.org 0x7d7ac
	lsls r0, r0, #1	@ 0007d7ac 4000
.org 0x7d7ae
	str r0, [r4, #96]	@ 0007d7ae 2066
.org 0x7d7b0
	adds r0, r4, #0	@ 0007d7b0 201c
.org 0x7d7b2
	adds r0, #184	@ 0007d7b2 b830
.org 0x7d7b4
	ldr r0, [r0, #0]	@ 0007d7b4 0068
.org 0x7d7b6
	movs r1, #208	@ 0007d7b6 d021
.org 0x7d7b8
	lsls r1, r1, #7	@ 0007d7b8 c901
.org 0x7d7ba
	adds r0, r0, r1	@ 0007d7ba 4018
.org 0x7d7bc
	str r0, [r4, #104]	@ 0007d7bc a066
.org 0x7d7be
	ldrb r0, [r4, #15]	@ 0007d7be e07b
.org 0x7d7c0
	adds r0, #1	@ 0007d7c0 0130
.org 0x7d7c2
	strb r0, [r4, #15]	@ 0007d7c2 e073
.org 0x7d7c4
	adds r5, r4, #0	@ 0007d7c4 251c
.org 0x7d7c6
	adds r5, #188	@ 0007d7c6 bc35
.org 0x7d7c8
	ldrb r0, [r5, #0]	@ 0007d7c8 2878
.org 0x7d7ca
	cmp r0, #0	@ 0007d7ca 0028
.org 0x7d7cc
	beq.n 0x7d7d4	@ 0007d7cc 02d0
.org 0x7d7ce
	adds r0, r4, #0	@ 0007d7ce 201c
.org 0x7d7d0
	bl 0x1cff0	@ 0007d7d0 9ff70efc
.org 0x7d7d4
	adds r0, r4, #0	@ 0007d7d4 201c
.org 0x7d7d6
	adds r0, #116	@ 0007d7d6 7430
.org 0x7d7d8
	ldr r3, [pc, #68]	@ 0007d7d8 114b
.org 0x7d7da
	ldr r2, [pc, #72]	@ 0007d7da 124a
.org 0x7d7dc
	ldrb r1, [r5, #0]	@ 0007d7dc 2978
.org 0x7d7de
	lsls r1, r1, #1	@ 0007d7de 4900
.org 0x7d7e0
	adds r1, r1, r2	@ 0007d7e0 8918
.org 0x7d7e2
	ldrh r2, [r1, #0]	@ 0007d7e2 0a88
.org 0x7d7e4
	lsls r2, r2, #2	@ 0007d7e4 9200
.org 0x7d7e6
	adds r2, r2, r3	@ 0007d7e6 d218
.org 0x7d7e8
	adds r1, r4, #0	@ 0007d7e8 211c
.org 0x7d7ea
	adds r1, #113	@ 0007d7ea 7131
.org 0x7d7ec
	ldrb r1, [r1, #0]	@ 0007d7ec 0978
.org 0x7d7ee
	lsls r1, r1, #24	@ 0007d7ee 0906
.org 0x7d7f0
	asrs r1, r1, #24	@ 0007d7f0 0916
.org 0x7d7f2
	ldr r2, [r2, #0]	@ 0007d7f2 1268
.org 0x7d7f4
	lsls r1, r1, #2	@ 0007d7f4 8900
.org 0x7d7f6
	adds r1, r1, r2	@ 0007d7f6 8918
.org 0x7d7f8
	ldr r1, [r1, #0]	@ 0007d7f8 0968
.org 0x7d7fa
	bl 0x5784	@ 0007d7fa 87f7c3ff
.org 0x7d7fe
	ldr r0, [r4, #88]	@ 0007d7fe a06d
.org 0x7d800
	ldr r1, [r4, #96]	@ 0007d800 216e
.org 0x7d802
	adds r0, r0, r1	@ 0007d802 4018
.org 0x7d804
	str r0, [r4, #88]	@ 0007d804 a065
.org 0x7d806
	ldr r1, [r4, #104]	@ 0007d806 a16e
.org 0x7d808
	cmp r0, r1	@ 0007d808 8842
.org 0x7d80a
	blt.n 0x7d818	@ 0007d80a 05db
.org 0x7d80c
	str r1, [r4, #88]	@ 0007d80c a165
.org 0x7d80e
	ldrb r0, [r4, #14]	@ 0007d80e a07b
.org 0x7d810
	adds r0, #1	@ 0007d810 0130
.org 0x7d812
	movs r1, #0	@ 0007d812 0021
.org 0x7d814
	strb r0, [r4, #14]	@ 0007d814 a073
.org 0x7d816
	strb r1, [r4, #15]	@ 0007d816 e173
.org 0x7d818
	pop {r4, r5}	@ 0007d818 30bc
.org 0x7d81a
	pop {r0}	@ 0007d81a 01bc
.org 0x7d81c
	bx r0	@ 0007d81c 0047
