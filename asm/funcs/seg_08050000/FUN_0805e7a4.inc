@ FUN_0805e7a4  entry 0x0805e7a4  size 136
.thumb
.org 0x5e7a4
FUN_0805e7a4:
	push {r4, r5, lr}	@ 0005e7a4 30b5
.org 0x5e7a6
	adds r5, r0, #0	@ 0005e7a6 051c
.org 0x5e7a8
	ldrb r0, [r5, #15]	@ 0005e7a8 e87b
.org 0x5e7aa
	cmp r0, #0	@ 0005e7aa 0028
.org 0x5e7ac
	bne.n 0x5e7bc	@ 0005e7ac 06d1
.org 0x5e7ae
	adds r0, r5, #0	@ 0005e7ae 281c
.org 0x5e7b0
	movs r1, #48	@ 0005e7b0 3021
.org 0x5e7b2
	bl 0x5ee6c	@ 0005e7b2 00f05bfb
.org 0x5e7b6
	ldrb r0, [r5, #15]	@ 0005e7b6 e87b
.org 0x5e7b8
	adds r0, #1	@ 0005e7b8 0130
.org 0x5e7ba
	strb r0, [r5, #15]	@ 0005e7ba e873
.org 0x5e7bc
	adds r0, r5, #0	@ 0005e7bc 281c
.org 0x5e7be
	bl 0x1cff0	@ 0005e7be bef717fc
.org 0x5e7c2
	adds r0, r5, #0	@ 0005e7c2 281c
.org 0x5e7c4
	adds r0, #116	@ 0005e7c4 7430
.org 0x5e7c6
	ldr r4, [pc, #100]	@ 0005e7c6 194c
.org 0x5e7c8
	ldr r3, [pc, #100]	@ 0005e7c8 194b
.org 0x5e7ca
	adds r1, r5, #0	@ 0005e7ca 291c
.org 0x5e7cc
	adds r1, #184	@ 0005e7cc b831
.org 0x5e7ce
	ldrb r2, [r1, #0]	@ 0005e7ce 0a78
.org 0x5e7d0
	lsls r1, r2, #1	@ 0005e7d0 5100
.org 0x5e7d2
	adds r1, r1, r3	@ 0005e7d2 c918
.org 0x5e7d4
	ldrh r1, [r1, #0]	@ 0005e7d4 0988
.org 0x5e7d6
	lsls r1, r1, #2	@ 0005e7d6 8900
.org 0x5e7d8
	adds r1, r1, r4	@ 0005e7d8 0919
.org 0x5e7da
	adds r3, r5, #0	@ 0005e7da 2b1c
.org 0x5e7dc
	adds r3, #113	@ 0005e7dc 7133
.org 0x5e7de
	movs r4, #0	@ 0005e7de 0024
.org 0x5e7e0
	ldrsb r4, [r3, r4]	@ 0005e7e0 1c57
.org 0x5e7e2
	ldr r1, [r1, #0]	@ 0005e7e2 0968
.org 0x5e7e4
	lsls r3, r4, #2	@ 0005e7e4 a300
.org 0x5e7e6
	adds r3, r3, r1	@ 0005e7e6 5b18
.org 0x5e7e8
	ldr r1, [pc, #72]	@ 0005e7e8 1249
.org 0x5e7ea
	lsls r2, r2, #2	@ 0005e7ea 9200
.org 0x5e7ec
	adds r2, r2, r1	@ 0005e7ec 5218
.org 0x5e7ee
	ldr r1, [r2, #0]	@ 0005e7ee 1168
.org 0x5e7f0
	adds r1, r1, r4	@ 0005e7f0 0919
.org 0x5e7f2
	ldrb r1, [r1, #0]	@ 0005e7f2 0978
.org 0x5e7f4
	lsls r2, r1, #1	@ 0005e7f4 4a00
.org 0x5e7f6
	adds r2, r2, r1	@ 0005e7f6 5218
.org 0x5e7f8
	lsls r2, r2, #3	@ 0005e7f8 d200
.org 0x5e7fa
	ldr r1, [r3, #0]	@ 0005e7fa 1968
.org 0x5e7fc
	adds r1, r1, r2	@ 0005e7fc 8918
.org 0x5e7fe
	bl 0x5784	@ 0005e7fe a6f7c1ff
.org 0x5e802
	adds r1, r5, #0	@ 0005e802 291c
.org 0x5e804
	adds r1, #204	@ 0005e804 cc31
.org 0x5e806
	ldr r0, [r1, #0]	@ 0005e806 0868
.org 0x5e808
	cmp r0, #0	@ 0005e808 0028
.org 0x5e80a
	beq.n 0x5e816	@ 0005e80a 04d0
.org 0x5e80c
	ldrb r0, [r0, #12]	@ 0005e80c 007b
.org 0x5e80e
	cmp r0, #2	@ 0005e80e 0228
.org 0x5e810
	bls.n 0x5e816	@ 0005e810 01d9
.org 0x5e812
	movs r0, #0	@ 0005e812 0020
.org 0x5e814
	str r0, [r1, #0]	@ 0005e814 0860
.org 0x5e816
	adds r0, r5, #0	@ 0005e816 281c
.org 0x5e818
	adds r0, #115	@ 0005e818 7330
.org 0x5e81a
	ldrb r1, [r0, #0]	@ 0005e81a 0178
.org 0x5e81c
	cmp r1, #3	@ 0005e81c 0329
.org 0x5e81e
	bne.n 0x5e826	@ 0005e81e 02d1
.org 0x5e820
	movs r0, #0	@ 0005e820 0020
.org 0x5e822
	strb r1, [r5, #14]	@ 0005e822 a973
.org 0x5e824
	strb r0, [r5, #15]	@ 0005e824 e873
.org 0x5e826
	pop {r4, r5}	@ 0005e826 30bc
.org 0x5e828
	pop {r0}	@ 0005e828 01bc
.org 0x5e82a
	bx r0	@ 0005e82a 0047
