@ FUN_0809da7c  entry 0x0809da7c  size 178
.thumb
.org 0x9da7c
FUN_0809da7c:
	push {r4, r5, r6, r7, lr}	@ 0009da7c f0b5
.org 0x9da7e
	adds r7, r0, #0	@ 0009da7e 071c
.org 0x9da80
	bl 0x1cc9c	@ 0009da80 7ff70cf9
.org 0x9da84
	ldrb r1, [r7, #10]	@ 0009da84 b97a
.org 0x9da86
	movs r0, #1	@ 0009da86 0120
.org 0x9da88
	orrs r0, r1	@ 0009da88 0843
.org 0x9da8a
	movs r1, #2	@ 0009da8a 0221
.org 0x9da8c
	orrs r0, r1	@ 0009da8c 0843
.org 0x9da8e
	strb r0, [r7, #10]	@ 0009da8e b872
.org 0x9da90
	ldr r1, [pc, #156]	@ 0009da90 2749
.org 0x9da92
	adds r0, r7, #0	@ 0009da92 381c
.org 0x9da94
	bl 0x1cf00	@ 0009da94 7ff734fa
.org 0x9da98
	movs r5, #0	@ 0009da98 0025
.org 0x9da9a
	ldrb r1, [r7, #10]	@ 0009da9a b97a
.org 0x9da9c
	movs r0, #239	@ 0009da9c ef20
.org 0x9da9e
	ands r0, r1	@ 0009da9e 0840
.org 0x9daa0
	strb r0, [r7, #10]	@ 0009daa0 b872
.org 0x9daa2
	movs r6, #1	@ 0009daa2 0126
.org 0x9daa4
	adds r0, r7, #0	@ 0009daa4 381c
.org 0x9daa6
	adds r0, #76	@ 0009daa6 4c30
.org 0x9daa8
	strb r5, [r0, #0]	@ 0009daa8 0570
.org 0x9daaa
	adds r2, r7, #0	@ 0009daaa 3a1c
.org 0x9daac
	adds r2, #74	@ 0009daac 4a32
.org 0x9daae
	ldrb r1, [r2, #0]	@ 0009daae 1178
.org 0x9dab0
	movs r0, #17	@ 0009dab0 1120
.org 0x9dab2
	negs r0, r0	@ 0009dab2 4042
.org 0x9dab4
	ands r0, r1	@ 0009dab4 0840
.org 0x9dab6
	strb r0, [r2, #0]	@ 0009dab6 1070
.org 0x9dab8
	ldrb r1, [r7, #10]	@ 0009dab8 b97a
.org 0x9daba
	movs r0, #4	@ 0009daba 0420
.org 0x9dabc
	orrs r0, r1	@ 0009dabc 0843
.org 0x9dabe
	strb r0, [r7, #10]	@ 0009dabe b872
.org 0x9dac0
	adds r4, r7, #0	@ 0009dac0 3c1c
.org 0x9dac2
	adds r4, #116	@ 0009dac2 7434
.org 0x9dac4
	ldr r1, [pc, #108]	@ 0009dac4 1b49
.org 0x9dac6
	adds r2, #10	@ 0009dac6 0a32
.org 0x9dac8
	adds r0, r4, #0	@ 0009dac8 201c
.org 0x9daca
	movs r3, #12	@ 0009daca 0c23
.org 0x9dacc
	bl 0x5760	@ 0009dacc 67f748fe
.org 0x9dad0
	str r7, [r4, #44]	@ 0009dad0 e762
.org 0x9dad2
	ldr r0, [pc, #100]	@ 0009dad2 1948
.org 0x9dad4
	str r0, [r4, #36]	@ 0009dad4 6062
.org 0x9dad6
	movs r0, #192	@ 0009dad6 c020
.org 0x9dad8
	lsls r0, r0, #1	@ 0009dad8 4000
.org 0x9dada
	str r0, [r7, #92]	@ 0009dada f865
.org 0x9dadc
	ldr r0, [r7, #84]	@ 0009dadc 786d
.org 0x9dade
	ldr r1, [r7, #88]	@ 0009dade b96d
.org 0x9dae0
	bl 0x8534	@ 0009dae0 6af728fd
.org 0x9dae4
	str r0, [r7, #88]	@ 0009dae4 b865
.org 0x9dae6
	adds r1, r7, #0	@ 0009dae6 391c
.org 0x9dae8
	adds r1, #180	@ 0009dae8 b431
.org 0x9daea
	ldr r0, [r7, #84]	@ 0009daea 786d
.org 0x9daec
	ldr r2, [pc, #76]	@ 0009daec 134a
.org 0x9daee
	adds r0, r0, r2	@ 0009daee 8018
.org 0x9daf0
	str r0, [r1, #0]	@ 0009daf0 0860
.org 0x9daf2
	adds r1, #4	@ 0009daf2 0431
.org 0x9daf4
	ldr r0, [r7, #84]	@ 0009daf4 786d
.org 0x9daf6
	movs r2, #192	@ 0009daf6 c022
.org 0x9daf8
	lsls r2, r2, #7	@ 0009daf8 d201
.org 0x9dafa
	adds r0, r0, r2	@ 0009dafa 8018
.org 0x9dafc
	str r0, [r1, #0]	@ 0009dafc 0860
.org 0x9dafe
	ldr r1, [pc, #64]	@ 0009dafe 1049
.org 0x9db00
	ldrb r0, [r7, #9]	@ 0009db00 787a
.org 0x9db02
	lsls r0, r0, #2	@ 0009db02 8000
.org 0x9db04
	adds r0, r0, r1	@ 0009db04 4018
.org 0x9db06
	str r6, [r7, #12]	@ 0009db06 fe60
.org 0x9db08
	ldr r0, [r0, #0]	@ 0009db08 0068
.org 0x9db0a
	ldr r0, [r0, #4]	@ 0009db0a 4068
.org 0x9db0c
	str r0, [r7, #20]	@ 0009db0c 7861
.org 0x9db0e
	str r5, [r7, #44]	@ 0009db0e fd62
.org 0x9db10
	strb r5, [r7, #13]	@ 0009db10 7d73
.org 0x9db12
	strb r5, [r7, #14]	@ 0009db12 bd73
.org 0x9db14
	strb r5, [r7, #15]	@ 0009db14 fd73
.org 0x9db16
	adds r0, r7, #0	@ 0009db16 381c
.org 0x9db18
	adds r0, #192	@ 0009db18 c030
.org 0x9db1a
	str r5, [r0, #0]	@ 0009db1a 0560
.org 0x9db1c
	adds r0, r7, #0	@ 0009db1c 381c
.org 0x9db1e
	bl 0x9e1d0	@ 0009db1e 00f057fb
.org 0x9db22
	adds r0, r7, #0	@ 0009db22 381c
.org 0x9db24
	bl 0x9db44	@ 0009db24 00f00ef8
.org 0x9db28
	pop {r4, r5, r6, r7}	@ 0009db28 f0bc
.org 0x9db2a
	pop {r0}	@ 0009db2a 01bc
.org 0x9db2c
	bx r0	@ 0009db2c 0047
