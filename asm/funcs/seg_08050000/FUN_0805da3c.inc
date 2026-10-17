@ FUN_0805da3c  entry 0x0805da3c  size 218
.thumb
.org 0x5da3c
FUN_0805da3c:
	push {r4, r5, r6, r7, lr}	@ 0005da3c f0b5
.org 0x5da3e
	sub sp, #12	@ 0005da3e 83b0
.org 0x5da40
	adds r5, r0, #0	@ 0005da40 051c
.org 0x5da42
	ldr r1, [pc, #212]	@ 0005da42 3549
.org 0x5da44
	mov r0, sp	@ 0005da44 6846
.org 0x5da46
	movs r2, #6	@ 0005da46 0622
.org 0x5da48
	bl 0x129258	@ 0005da48 cbf006fc
.org 0x5da4c
	add r6, sp, #8	@ 0005da4c 02ae
.org 0x5da4e
	ldr r1, [pc, #204]	@ 0005da4e 3349
.org 0x5da50
	adds r0, r6, #0	@ 0005da50 301c
.org 0x5da52
	movs r2, #3	@ 0005da52 0322
.org 0x5da54
	bl 0x129258	@ 0005da54 cbf000fc
.org 0x5da58
	ldrb r0, [r5, #16]	@ 0005da58 287c
.org 0x5da5a
	adds r7, r0, #0	@ 0005da5a 071c
.org 0x5da5c
	ldrb r4, [r5, #15]	@ 0005da5c ec7b
.org 0x5da5e
	cmp r4, #0	@ 0005da5e 002c
.org 0x5da60
	bne.n 0x5da7c	@ 0005da60 0cd1
.org 0x5da62
	lsls r0, r0, #1	@ 0005da62 4000
.org 0x5da64
	add r0, sp	@ 0005da64 6844
.org 0x5da66
	ldrb r1, [r0, #0]	@ 0005da66 0178
.org 0x5da68
	adds r0, r5, #0	@ 0005da68 281c
.org 0x5da6a
	bl 0x5ee6c	@ 0005da6a 01f0fff9
.org 0x5da6e
	str r4, [r5, #96]	@ 0005da6e 2c66
.org 0x5da70
	movs r0, #32	@ 0005da70 2020
.org 0x5da72
	negs r0, r0	@ 0005da72 4042
.org 0x5da74
	str r0, [r5, #104]	@ 0005da74 a866
.org 0x5da76
	ldrb r0, [r5, #15]	@ 0005da76 e87b
.org 0x5da78
	adds r0, #1	@ 0005da78 0130
.org 0x5da7a
	strb r0, [r5, #15]	@ 0005da7a e873
.org 0x5da7c
	adds r0, r5, #0	@ 0005da7c 281c
.org 0x5da7e
	bl 0x1cff0	@ 0005da7e bff7b7fa
.org 0x5da82
	adds r0, r5, #0	@ 0005da82 281c
.org 0x5da84
	adds r0, #116	@ 0005da84 7430
.org 0x5da86
	ldr r4, [pc, #152]	@ 0005da86 264c
.org 0x5da88
	ldr r3, [pc, #152]	@ 0005da88 264b
.org 0x5da8a
	adds r1, r5, #0	@ 0005da8a 291c
.org 0x5da8c
	adds r1, #184	@ 0005da8c b831
.org 0x5da8e
	ldrb r2, [r1, #0]	@ 0005da8e 0a78
.org 0x5da90
	lsls r1, r2, #1	@ 0005da90 5100
.org 0x5da92
	adds r1, r1, r3	@ 0005da92 c918
.org 0x5da94
	ldrh r1, [r1, #0]	@ 0005da94 0988
.org 0x5da96
	lsls r1, r1, #2	@ 0005da96 8900
.org 0x5da98
	adds r1, r1, r4	@ 0005da98 0919
.org 0x5da9a
	adds r3, r5, #0	@ 0005da9a 2b1c
.org 0x5da9c
	adds r3, #113	@ 0005da9c 7133
.org 0x5da9e
	movs r4, #0	@ 0005da9e 0024
.org 0x5daa0
	ldrsb r4, [r3, r4]	@ 0005daa0 1c57
.org 0x5daa2
	ldr r1, [r1, #0]	@ 0005daa2 0968
.org 0x5daa4
	lsls r3, r4, #2	@ 0005daa4 a300
.org 0x5daa6
	adds r3, r3, r1	@ 0005daa6 5b18
.org 0x5daa8
	ldr r1, [pc, #124]	@ 0005daa8 1f49
.org 0x5daaa
	lsls r2, r2, #2	@ 0005daaa 9200
.org 0x5daac
	adds r2, r2, r1	@ 0005daac 5218
.org 0x5daae
	ldr r1, [r2, #0]	@ 0005daae 1168
.org 0x5dab0
	adds r1, r1, r4	@ 0005dab0 0919
.org 0x5dab2
	ldrb r1, [r1, #0]	@ 0005dab2 0978
.org 0x5dab4
	lsls r2, r1, #1	@ 0005dab4 4a00
.org 0x5dab6
	adds r2, r2, r1	@ 0005dab6 5218
.org 0x5dab8
	lsls r2, r2, #3	@ 0005dab8 d200
.org 0x5daba
	ldr r1, [r3, #0]	@ 0005daba 1968
.org 0x5dabc
	adds r1, r1, r2	@ 0005dabc 8918
.org 0x5dabe
	bl 0x5784	@ 0005dabe a7f761fe
.org 0x5dac2
	ldr r0, [r5, #88]	@ 0005dac2 a86d
.org 0x5dac4
	ldr r1, [r5, #96]	@ 0005dac4 296e
.org 0x5dac6
	adds r0, r0, r1	@ 0005dac6 4018
.org 0x5dac8
	str r0, [r5, #88]	@ 0005dac8 a865
.org 0x5daca
	ldr r0, [r5, #104]	@ 0005daca a86e
.org 0x5dacc
	adds r1, r1, r0	@ 0005dacc 0918
.org 0x5dace
	str r1, [r5, #96]	@ 0005dace 2966
.org 0x5dad0
	ldr r0, [pc, #88]	@ 0005dad0 1648
.org 0x5dad2
	cmp r1, r0	@ 0005dad2 8142
.org 0x5dad4
	bge.n 0x5dad8	@ 0005dad4 00da
.org 0x5dad6
	str r0, [r5, #96]	@ 0005dad6 2866
.org 0x5dad8
	ldr r2, [pc, #84]	@ 0005dad8 154a
.org 0x5dada
	ldr r0, [r2, #56]	@ 0005dada 906b
.org 0x5dadc
	ldr r1, [r5, #84]	@ 0005dadc 696d
.org 0x5dade
	subs r0, r0, r1	@ 0005dade 401a
.org 0x5dae0
	movs r1, #200	@ 0005dae0 c821
.org 0x5dae2
	lsls r1, r1, #8	@ 0005dae2 0902
.org 0x5dae4
	adds r0, r0, r1	@ 0005dae4 4018
.org 0x5dae6
	movs r1, #200	@ 0005dae6 c821
.org 0x5dae8
	lsls r1, r1, #9	@ 0005dae8 4902
.org 0x5daea
	cmp r0, r1	@ 0005daea 8842
.org 0x5daec
	bhi.n 0x5db02	@ 0005daec 09d8
.org 0x5daee
	ldr r0, [r2, #60]	@ 0005daee d06b
.org 0x5daf0
	ldr r1, [r5, #88]	@ 0005daf0 a96d
.org 0x5daf2
	subs r0, r0, r1	@ 0005daf2 401a
.org 0x5daf4
	movs r1, #176	@ 0005daf4 b021
.org 0x5daf6
	lsls r1, r1, #8	@ 0005daf6 0902
.org 0x5daf8
	adds r0, r0, r1	@ 0005daf8 4018
.org 0x5dafa
	movs r1, #176	@ 0005dafa b021
.org 0x5dafc
	lsls r1, r1, #9	@ 0005dafc 4902
.org 0x5dafe
	cmp r0, r1	@ 0005dafe 8842
.org 0x5db00
	bls.n 0x5db0e	@ 0005db00 05d9
.org 0x5db02
	adds r0, r6, r7	@ 0005db02 f019
.org 0x5db04
	ldrb r0, [r0, #0]	@ 0005db04 0078
.org 0x5db06
	movs r1, #0	@ 0005db06 0021
.org 0x5db08
	strb r0, [r5, #13]	@ 0005db08 6873
.org 0x5db0a
	strb r1, [r5, #14]	@ 0005db0a a973
.org 0x5db0c
	strb r1, [r5, #15]	@ 0005db0c e973
.org 0x5db0e
	add sp, #12	@ 0005db0e 03b0
.org 0x5db10
	pop {r4, r5, r6, r7}	@ 0005db10 f0bc
.org 0x5db12
	pop {r0}	@ 0005db12 01bc
.org 0x5db14
	bx r0	@ 0005db14 0047
