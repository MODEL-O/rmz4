@ FUN_0807da3c  entry 0x0807da3c  size 132
.thumb
.org 0x7da3c
FUN_0807da3c:
	push {r4, r5, lr}	@ 0007da3c 30b5
.org 0x7da3e
	adds r4, r0, #0	@ 0007da3e 041c
.org 0x7da40
	ldrb r0, [r4, #15]	@ 0007da40 e07b
.org 0x7da42
	cmp r0, #0	@ 0007da42 0028
.org 0x7da44
	bne.n 0x7da66	@ 0007da44 0fd1
.org 0x7da46
	adds r0, r4, #0	@ 0007da46 201c
.org 0x7da48
	movs r1, #1	@ 0007da48 0121
.org 0x7da4a
	bl 0x7e8c8	@ 0007da4a 00f03dff
.org 0x7da4e
	ldr r0, [pc, #112]	@ 0007da4e 1c48
.org 0x7da50
	str r0, [r4, #96]	@ 0007da50 2066
.org 0x7da52
	adds r0, r4, #0	@ 0007da52 201c
.org 0x7da54
	adds r0, #184	@ 0007da54 b830
.org 0x7da56
	ldr r0, [r0, #0]	@ 0007da56 0068
.org 0x7da58
	movs r1, #224	@ 0007da58 e021
.org 0x7da5a
	lsls r1, r1, #6	@ 0007da5a 8901
.org 0x7da5c
	adds r0, r0, r1	@ 0007da5c 4018
.org 0x7da5e
	str r0, [r4, #104]	@ 0007da5e a066
.org 0x7da60
	ldrb r0, [r4, #15]	@ 0007da60 e07b
.org 0x7da62
	adds r0, #1	@ 0007da62 0130
.org 0x7da64
	strb r0, [r4, #15]	@ 0007da64 e073
.org 0x7da66
	adds r5, r4, #0	@ 0007da66 251c
.org 0x7da68
	adds r5, #188	@ 0007da68 bc35
.org 0x7da6a
	ldrb r0, [r5, #0]	@ 0007da6a 2878
.org 0x7da6c
	cmp r0, #0	@ 0007da6c 0028
.org 0x7da6e
	beq.n 0x7da76	@ 0007da6e 02d0
.org 0x7da70
	adds r0, r4, #0	@ 0007da70 201c
.org 0x7da72
	bl 0x1cff0	@ 0007da72 9ff7bdfa
.org 0x7da76
	adds r0, r4, #0	@ 0007da76 201c
.org 0x7da78
	adds r0, #116	@ 0007da78 7430
.org 0x7da7a
	ldr r3, [pc, #72]	@ 0007da7a 124b
.org 0x7da7c
	ldr r2, [pc, #72]	@ 0007da7c 124a
.org 0x7da7e
	ldrb r1, [r5, #0]	@ 0007da7e 2978
.org 0x7da80
	lsls r1, r1, #1	@ 0007da80 4900
.org 0x7da82
	adds r1, r1, r2	@ 0007da82 8918
.org 0x7da84
	ldrh r2, [r1, #0]	@ 0007da84 0a88
.org 0x7da86
	lsls r2, r2, #2	@ 0007da86 9200
.org 0x7da88
	adds r2, r2, r3	@ 0007da88 d218
.org 0x7da8a
	adds r1, r4, #0	@ 0007da8a 211c
.org 0x7da8c
	adds r1, #113	@ 0007da8c 7131
.org 0x7da8e
	ldrb r1, [r1, #0]	@ 0007da8e 0978
.org 0x7da90
	lsls r1, r1, #24	@ 0007da90 0906
.org 0x7da92
	asrs r1, r1, #24	@ 0007da92 0916
.org 0x7da94
	ldr r2, [r2, #0]	@ 0007da94 1268
.org 0x7da96
	lsls r1, r1, #2	@ 0007da96 8900
.org 0x7da98
	adds r1, r1, r2	@ 0007da98 8918
.org 0x7da9a
	ldr r1, [r1, #0]	@ 0007da9a 0968
.org 0x7da9c
	bl 0x5784	@ 0007da9c 87f772fe
.org 0x7daa0
	ldr r0, [r4, #88]	@ 0007daa0 a06d
.org 0x7daa2
	ldr r1, [r4, #96]	@ 0007daa2 216e
.org 0x7daa4
	adds r0, r0, r1	@ 0007daa4 4018
.org 0x7daa6
	str r0, [r4, #88]	@ 0007daa6 a065
.org 0x7daa8
	ldr r1, [r4, #104]	@ 0007daa8 a16e
.org 0x7daaa
	cmp r0, r1	@ 0007daaa 8842
.org 0x7daac
	bgt.n 0x7daba	@ 0007daac 05dc
.org 0x7daae
	str r1, [r4, #88]	@ 0007daae a165
.org 0x7dab0
	ldrb r0, [r4, #14]	@ 0007dab0 a07b
.org 0x7dab2
	adds r0, #1	@ 0007dab2 0130
.org 0x7dab4
	movs r1, #0	@ 0007dab4 0021
.org 0x7dab6
	strb r0, [r4, #14]	@ 0007dab6 a073
.org 0x7dab8
	strb r1, [r4, #15]	@ 0007dab8 e173
.org 0x7daba
	pop {r4, r5}	@ 0007daba 30bc
.org 0x7dabc
	pop {r0}	@ 0007dabc 01bc
.org 0x7dabe
	bx r0	@ 0007dabe 0047
