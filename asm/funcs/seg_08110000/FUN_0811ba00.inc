@ FUN_0811ba00  entry 0x0811ba00  size 884
.thumb
.org 0x11ba00
FUN_0811ba00:
	push {r4, r5, r6, r7, lr}	@ 0011ba00 f0b5
.org 0x11ba02
	mov r7, sl	@ 0011ba02 5746
.org 0x11ba04
	mov r6, r9	@ 0011ba04 4e46
.org 0x11ba06
	mov r5, r8	@ 0011ba06 4546
.org 0x11ba08
	push {r5, r6, r7}	@ 0011ba08 e0b4
.org 0x11ba0a
	sub sp, #28	@ 0011ba0a 87b0
.org 0x11ba0c
	str r0, [sp, #0]	@ 0011ba0c 0090
.org 0x11ba0e
	adds r6, r1, #0	@ 0011ba0e 0e1c
.org 0x11ba10
	ldr r1, [pc, #652]	@ 0011ba10 a349
.org 0x11ba12
	adds r0, r0, r1	@ 0011ba12 4018
.org 0x11ba14
	ldr r5, [r0, #0]	@ 0011ba14 0568
.org 0x11ba16
	movs r4, #0	@ 0011ba16 0024
.org 0x11ba18
	ldr r2, [pc, #648]	@ 0011ba18 a24a
.org 0x11ba1a
	mov sl, r2	@ 0011ba1a 9246
.org 0x11ba1c
	ldr r0, [pc, #648]	@ 0011ba1c a248
.org 0x11ba1e
	mov r9, r0	@ 0011ba1e 8146
.org 0x11ba20
	ldr r1, [pc, #648]	@ 0011ba20 a249
.org 0x11ba22
	mov r8, r1	@ 0011ba22 8846
.org 0x11ba24
	movs r2, #222	@ 0011ba24 de22
.org 0x11ba26
	adds r2, r2, r5	@ 0011ba26 5219
.org 0x11ba28
	mov ip, r2	@ 0011ba28 9446
.org 0x11ba2a
	mov r7, ip	@ 0011ba2a 6746
.org 0x11ba2c
	lsls r3, r4, #1	@ 0011ba2c 6300
.org 0x11ba2e
	adds r3, r3, r6	@ 0011ba2e 9b19
.org 0x11ba30
	adds r3, #84	@ 0011ba30 5433
.org 0x11ba32
	ldrh r0, [r3, #0]	@ 0011ba32 1888
.org 0x11ba34
	mov r2, r9	@ 0011ba34 4a46
.org 0x11ba36
	ands r2, r0	@ 0011ba36 0240
.org 0x11ba38
	ldrb r1, [r7, #0]	@ 0011ba38 3978
.org 0x11ba3a
	lsls r0, r1, #1	@ 0011ba3a 4800
.org 0x11ba3c
	adds r0, r0, r1	@ 0011ba3c 4018
.org 0x11ba3e
	add r0, r8	@ 0011ba3e 4044
.org 0x11ba40
	ldrb r0, [r0, #0]	@ 0011ba40 0078
.org 0x11ba42
	lsls r0, r0, #12	@ 0011ba42 0003
.org 0x11ba44
	orrs r2, r0	@ 0011ba44 0243
.org 0x11ba46
	strh r2, [r3, #0]	@ 0011ba46 1a80
.org 0x11ba48
	adds r0, r4, #1	@ 0011ba48 601c
.org 0x11ba4a
	lsls r0, r0, #24	@ 0011ba4a 0006
.org 0x11ba4c
	lsrs r4, r0, #24	@ 0011ba4c 040e
.org 0x11ba4e
	cmp r4, #4	@ 0011ba4e 042c
.org 0x11ba50
	bls.n 0x11ba2c	@ 0011ba50 ecd9
.org 0x11ba52
	movs r4, #0	@ 0011ba52 0024
.org 0x11ba54
	movs r0, #223	@ 0011ba54 df20
.org 0x11ba56
	adds r0, r0, r5	@ 0011ba56 4019
.org 0x11ba58
	mov r9, r0	@ 0011ba58 8146
.org 0x11ba5a
	adds r1, r5, #0	@ 0011ba5a 291c
.org 0x11ba5c
	adds r1, #225	@ 0011ba5c e131
.org 0x11ba5e
	str r1, [sp, #24]	@ 0011ba5e 0691
.org 0x11ba60
	movs r2, #152	@ 0011ba60 9822
.org 0x11ba62
	lsls r2, r2, #2	@ 0011ba62 9200
.org 0x11ba64
	adds r2, r5, r2	@ 0011ba64 aa18
.org 0x11ba66
	str r2, [sp, #12]	@ 0011ba66 0392
.org 0x11ba68
	movs r0, #151	@ 0011ba68 9720
.org 0x11ba6a
	lsls r0, r0, #2	@ 0011ba6a 8000
.org 0x11ba6c
	adds r0, r5, r0	@ 0011ba6c 2818
.org 0x11ba6e
	str r0, [sp, #4]	@ 0011ba6e 0190
.org 0x11ba70
	ldr r1, [pc, #572]	@ 0011ba70 8f49
.org 0x11ba72
	adds r1, r5, r1	@ 0011ba72 6918
.org 0x11ba74
	str r1, [sp, #8]	@ 0011ba74 0291
.org 0x11ba76
	ldr r2, [pc, #572]	@ 0011ba76 8f4a
.org 0x11ba78
	adds r2, r5, r2	@ 0011ba78 aa18
.org 0x11ba7a
	str r2, [sp, #16]	@ 0011ba7a 0492
.org 0x11ba7c
	movs r0, #153	@ 0011ba7c 9920
.org 0x11ba7e
	lsls r0, r0, #2	@ 0011ba7e 8000
.org 0x11ba80
	adds r0, r5, r0	@ 0011ba80 2818
.org 0x11ba82
	str r0, [sp, #20]	@ 0011ba82 0590
.org 0x11ba84
	ldr r1, [pc, #544]	@ 0011ba84 8849
.org 0x11ba86
	mov r8, r1	@ 0011ba86 8846
.org 0x11ba88
	ldr r7, [pc, #556]	@ 0011ba88 8b4f
.org 0x11ba8a
	mov r5, ip	@ 0011ba8a 6546
.org 0x11ba8c
	lsls r3, r4, #1	@ 0011ba8c 6300
.org 0x11ba8e
	adds r3, r3, r6	@ 0011ba8e 9b19
.org 0x11ba90
	adds r3, #96	@ 0011ba90 6033
.org 0x11ba92
	ldrh r0, [r3, #0]	@ 0011ba92 1888
.org 0x11ba94
	mov r2, r8	@ 0011ba94 4246
.org 0x11ba96
	ands r2, r0	@ 0011ba96 0240
.org 0x11ba98
	ldrb r1, [r5, #0]	@ 0011ba98 2978
.org 0x11ba9a
	lsls r0, r1, #1	@ 0011ba9a 4800
.org 0x11ba9c
	adds r0, r0, r1	@ 0011ba9c 4018
.org 0x11ba9e
	adds r0, r0, r7	@ 0011ba9e c019
.org 0x11baa0
	ldrb r0, [r0, #0]	@ 0011baa0 0078
.org 0x11baa2
	lsls r0, r0, #12	@ 0011baa2 0003
.org 0x11baa4
	orrs r2, r0	@ 0011baa4 0243
.org 0x11baa6
	strh r2, [r3, #0]	@ 0011baa6 1a80
.org 0x11baa8
	adds r0, r4, #1	@ 0011baa8 601c
.org 0x11baaa
	lsls r0, r0, #24	@ 0011baaa 0006
.org 0x11baac
	lsrs r4, r0, #24	@ 0011baac 040e
.org 0x11baae
	cmp r4, #4	@ 0011baae 042c
.org 0x11bab0
	bls.n 0x11ba8c	@ 0011bab0 ecd9
.org 0x11bab2
	movs r4, #0	@ 0011bab2 0024
.org 0x11bab4
	ldr r2, [pc, #496]	@ 0011bab4 7c4a
.org 0x11bab6
	mov r8, r2	@ 0011bab6 9046
.org 0x11bab8
	ldr r7, [pc, #512]	@ 0011bab8 804f
.org 0x11baba
	mov r5, ip	@ 0011baba 6546
.org 0x11babc
	lsls r3, r4, #1	@ 0011babc 6300
.org 0x11babe
	adds r3, r3, r6	@ 0011babe 9b19
.org 0x11bac0
	adds r3, #108	@ 0011bac0 6c33
.org 0x11bac2
	ldrh r0, [r3, #0]	@ 0011bac2 1888
.org 0x11bac4
	mov r2, r8	@ 0011bac4 4246
.org 0x11bac6
	ands r2, r0	@ 0011bac6 0240
.org 0x11bac8
	ldrb r1, [r5, #0]	@ 0011bac8 2978
.org 0x11baca
	lsls r0, r1, #1	@ 0011baca 4800
.org 0x11bacc
	adds r0, r0, r1	@ 0011bacc 4018
.org 0x11bace
	adds r0, r0, r7	@ 0011bace c019
.org 0x11bad0
	ldrb r0, [r0, #0]	@ 0011bad0 0078
.org 0x11bad2
	lsls r0, r0, #12	@ 0011bad2 0003
.org 0x11bad4
	orrs r2, r0	@ 0011bad4 0243
.org 0x11bad6
	strh r2, [r3, #0]	@ 0011bad6 1a80
.org 0x11bad8
	adds r0, r4, #1	@ 0011bad8 601c
.org 0x11bada
	lsls r0, r0, #24	@ 0011bada 0006
.org 0x11badc
	lsrs r4, r0, #24	@ 0011badc 040e
.org 0x11bade
	cmp r4, #3	@ 0011bade 032c
.org 0x11bae0
	bls.n 0x11babc	@ 0011bae0 ecd9
.org 0x11bae2
	movs r4, #0	@ 0011bae2 0024
.org 0x11bae4
	movs r0, #165	@ 0011bae4 a520
.org 0x11bae6
	lsls r0, r0, #2	@ 0011bae6 8000
.org 0x11bae8
	mov r8, r0	@ 0011bae8 8046
.org 0x11baea
	ldr r1, [pc, #444]	@ 0011baea 6f49
.org 0x11baec
	mov ip, r1	@ 0011baec 8c46
.org 0x11baee
	ldr r7, [pc, #444]	@ 0011baee 6f4f
.org 0x11baf0
	mov r5, r9	@ 0011baf0 4d46
.org 0x11baf2
	lsls r3, r4, #1	@ 0011baf2 6300
.org 0x11baf4
	adds r3, r3, r6	@ 0011baf4 9b19
.org 0x11baf6
	add r3, r8	@ 0011baf6 4344
.org 0x11baf8
	ldrh r0, [r3, #0]	@ 0011baf8 1888
.org 0x11bafa
	mov r2, ip	@ 0011bafa 6246
.org 0x11bafc
	ands r2, r0	@ 0011bafc 0240
.org 0x11bafe
	ldrb r1, [r5, #0]	@ 0011bafe 2978
.org 0x11bb00
	lsls r0, r1, #1	@ 0011bb00 4800
.org 0x11bb02
	adds r0, r0, r1	@ 0011bb02 4018
.org 0x11bb04
	adds r0, r0, r7	@ 0011bb04 c019
.org 0x11bb06
	ldrb r0, [r0, #0]	@ 0011bb06 0078
.org 0x11bb08
	lsls r0, r0, #12	@ 0011bb08 0003
.org 0x11bb0a
	orrs r2, r0	@ 0011bb0a 0243
.org 0x11bb0c
	strh r2, [r3, #0]	@ 0011bb0c 1a80
.org 0x11bb0e
	adds r0, r4, #1	@ 0011bb0e 601c
.org 0x11bb10
	lsls r0, r0, #24	@ 0011bb10 0006
.org 0x11bb12
	lsrs r4, r0, #24	@ 0011bb12 040e
.org 0x11bb14
	cmp r4, #4	@ 0011bb14 042c
.org 0x11bb16
	bls.n 0x11baf2	@ 0011bb16 ecd9
.org 0x11bb18
	movs r4, #0	@ 0011bb18 0024
.org 0x11bb1a
	movs r2, #168	@ 0011bb1a a822
.org 0x11bb1c
	lsls r2, r2, #2	@ 0011bb1c 9200
.org 0x11bb1e
	mov r8, r2	@ 0011bb1e 9046
.org 0x11bb20
	ldr r0, [pc, #388]	@ 0011bb20 6148
.org 0x11bb22
	mov ip, r0	@ 0011bb22 8446
.org 0x11bb24
	ldr r7, [pc, #400]	@ 0011bb24 644f
.org 0x11bb26
	mov r5, r9	@ 0011bb26 4d46
.org 0x11bb28
	lsls r3, r4, #1	@ 0011bb28 6300
.org 0x11bb2a
	adds r3, r3, r6	@ 0011bb2a 9b19
.org 0x11bb2c
	add r3, r8	@ 0011bb2c 4344
.org 0x11bb2e
	ldrh r0, [r3, #0]	@ 0011bb2e 1888
.org 0x11bb30
	mov r2, ip	@ 0011bb30 6246
.org 0x11bb32
	ands r2, r0	@ 0011bb32 0240
.org 0x11bb34
	ldrb r1, [r5, #0]	@ 0011bb34 2978
.org 0x11bb36
	lsls r0, r1, #1	@ 0011bb36 4800
.org 0x11bb38
	adds r0, r0, r1	@ 0011bb38 4018
.org 0x11bb3a
	adds r0, r0, r7	@ 0011bb3a c019
.org 0x11bb3c
	ldrb r0, [r0, #0]	@ 0011bb3c 0078
.org 0x11bb3e
	lsls r0, r0, #12	@ 0011bb3e 0003
.org 0x11bb40
	orrs r2, r0	@ 0011bb40 0243
.org 0x11bb42
	strh r2, [r3, #0]	@ 0011bb42 1a80
.org 0x11bb44
	adds r0, r4, #1	@ 0011bb44 601c
.org 0x11bb46
	lsls r0, r0, #24	@ 0011bb46 0006
.org 0x11bb48
	lsrs r4, r0, #24	@ 0011bb48 040e
.org 0x11bb4a
	cmp r4, #4	@ 0011bb4a 042c
.org 0x11bb4c
	bls.n 0x11bb28	@ 0011bb4c ecd9
.org 0x11bb4e
	movs r4, #0	@ 0011bb4e 0024
.org 0x11bb50
	movs r1, #171	@ 0011bb50 ab21
.org 0x11bb52
	lsls r1, r1, #2	@ 0011bb52 8900
.org 0x11bb54
	mov r8, r1	@ 0011bb54 8846
.org 0x11bb56
	ldr r2, [pc, #336]	@ 0011bb56 544a
.org 0x11bb58
	mov ip, r2	@ 0011bb58 9446
.org 0x11bb5a
	ldr r7, [pc, #352]	@ 0011bb5a 584f
.org 0x11bb5c
	mov r5, r9	@ 0011bb5c 4d46
.org 0x11bb5e
	lsls r3, r4, #1	@ 0011bb5e 6300
.org 0x11bb60
	adds r3, r3, r6	@ 0011bb60 9b19
.org 0x11bb62
	add r3, r8	@ 0011bb62 4344
.org 0x11bb64
	ldrh r0, [r3, #0]	@ 0011bb64 1888
.org 0x11bb66
	mov r2, ip	@ 0011bb66 6246
.org 0x11bb68
	ands r2, r0	@ 0011bb68 0240
.org 0x11bb6a
	ldrb r1, [r5, #0]	@ 0011bb6a 2978
.org 0x11bb6c
	lsls r0, r1, #1	@ 0011bb6c 4800
.org 0x11bb6e
	adds r0, r0, r1	@ 0011bb6e 4018
.org 0x11bb70
	adds r0, r0, r7	@ 0011bb70 c019
.org 0x11bb72
	ldrb r0, [r0, #0]	@ 0011bb72 0078
.org 0x11bb74
	lsls r0, r0, #12	@ 0011bb74 0003
.org 0x11bb76
	orrs r2, r0	@ 0011bb76 0243
.org 0x11bb78
	strh r2, [r3, #0]	@ 0011bb78 1a80
.org 0x11bb7a
	adds r0, r4, #1	@ 0011bb7a 601c
.org 0x11bb7c
	lsls r0, r0, #24	@ 0011bb7c 0006
.org 0x11bb7e
	lsrs r4, r0, #24	@ 0011bb7e 040e
.org 0x11bb80
	cmp r4, #4	@ 0011bb80 042c
.org 0x11bb82
	bls.n 0x11bb5e	@ 0011bb82 ecd9
.org 0x11bb84
	movs r4, #0	@ 0011bb84 0024
.org 0x11bb86
	ldr r7, [pc, #312]	@ 0011bb86 4e4f
.org 0x11bb88
	ldr r0, [pc, #284]	@ 0011bb88 4748
.org 0x11bb8a
	mov r8, r0	@ 0011bb8a 8046
.org 0x11bb8c
	ldr r5, [pc, #308]	@ 0011bb8c 4d4d
.org 0x11bb8e
	ldr r3, [sp, #24]	@ 0011bb8e 069b
.org 0x11bb90
	lsls r2, r4, #1	@ 0011bb90 6200
.org 0x11bb92
	adds r2, r2, r6	@ 0011bb92 9219
.org 0x11bb94
	adds r2, r2, r7	@ 0011bb94 d219
.org 0x11bb96
	ldrh r0, [r2, #0]	@ 0011bb96 1088
.org 0x11bb98
	mov r1, r8	@ 0011bb98 4146
.org 0x11bb9a
	ands r1, r0	@ 0011bb9a 0140
.org 0x11bb9c
	ldrb r0, [r3, #0]	@ 0011bb9c 1878
.org 0x11bb9e
	lsls r0, r0, #1	@ 0011bb9e 4000
.org 0x11bba0
	adds r0, r0, r5	@ 0011bba0 4019
.org 0x11bba2
	ldrb r0, [r0, #0]	@ 0011bba2 0078
.org 0x11bba4
	lsls r0, r0, #12	@ 0011bba4 0003
.org 0x11bba6
	orrs r1, r0	@ 0011bba6 0143
.org 0x11bba8
	strh r1, [r2, #0]	@ 0011bba8 1180
.org 0x11bbaa
	adds r0, r4, #1	@ 0011bbaa 601c
.org 0x11bbac
	lsls r0, r0, #24	@ 0011bbac 0006
.org 0x11bbae
	lsrs r4, r0, #24	@ 0011bbae 040e
.org 0x11bbb0
	cmp r4, #1	@ 0011bbb0 012c
.org 0x11bbb2
	bls.n 0x11bb90	@ 0011bbb2 edd9
.org 0x11bbb4
	movs r4, #0	@ 0011bbb4 0024
.org 0x11bbb6
	ldr r7, [pc, #272]	@ 0011bbb6 444f
.org 0x11bbb8
	ldr r1, [pc, #236]	@ 0011bbb8 3b49
.org 0x11bbba
	mov r8, r1	@ 0011bbba 8846
.org 0x11bbbc
	ldr r5, [pc, #268]	@ 0011bbbc 434d
.org 0x11bbbe
	ldr r3, [sp, #24]	@ 0011bbbe 069b
.org 0x11bbc0
	lsls r2, r4, #1	@ 0011bbc0 6200
.org 0x11bbc2
	adds r2, r2, r6	@ 0011bbc2 9219
.org 0x11bbc4
	adds r2, r2, r7	@ 0011bbc4 d219
.org 0x11bbc6
	ldrh r0, [r2, #0]	@ 0011bbc6 1088
.org 0x11bbc8
	mov r1, r8	@ 0011bbc8 4146
.org 0x11bbca
	ands r1, r0	@ 0011bbca 0140
.org 0x11bbcc
	ldrb r0, [r3, #0]	@ 0011bbcc 1878
.org 0x11bbce
	lsls r0, r0, #1	@ 0011bbce 4000
.org 0x11bbd0
	adds r0, r0, r5	@ 0011bbd0 4019
.org 0x11bbd2
	ldrb r0, [r0, #0]	@ 0011bbd2 0078
.org 0x11bbd4
	lsls r0, r0, #12	@ 0011bbd4 0003
.org 0x11bbd6
	orrs r1, r0	@ 0011bbd6 0143
.org 0x11bbd8
	strh r1, [r2, #0]	@ 0011bbd8 1180
.org 0x11bbda
	adds r0, r4, #1	@ 0011bbda 601c
.org 0x11bbdc
	lsls r0, r0, #24	@ 0011bbdc 0006
.org 0x11bbde
	lsrs r4, r0, #24	@ 0011bbde 040e
.org 0x11bbe0
	cmp r4, #1	@ 0011bbe0 012c
.org 0x11bbe2
	bls.n 0x11bbc0	@ 0011bbe2 edd9
.org 0x11bbe4
	ldr r7, [sp, #12]	@ 0011bbe4 039f
.org 0x11bbe6
	ldrh r1, [r7, #0]	@ 0011bbe6 3988
.org 0x11bbe8
	ldr r2, [sp, #0]	@ 0011bbe8 009a
.org 0x11bbea
	movs r0, #222	@ 0011bbea de20
.org 0x11bbec
	lsls r0, r0, #4	@ 0011bbec 0001
.org 0x11bbee
	adds r4, r2, r0	@ 0011bbee 1418
.org 0x11bbf0
	ldrb r2, [r4, #0]	@ 0011bbf0 2278
.org 0x11bbf2
	lsls r0, r2, #2	@ 0011bbf2 9000
.org 0x11bbf4
	adds r0, r0, r2	@ 0011bbf4 8018
.org 0x11bbf6
	add r0, sl	@ 0011bbf6 5044
.org 0x11bbf8
	ldrb r3, [r0, #0]	@ 0011bbf8 0378
.org 0x11bbfa
	adds r0, r6, #0	@ 0011bbfa 301c
.org 0x11bbfc
	movs r2, #115	@ 0011bbfc 7322
.org 0x11bbfe
	bl 0x11b904	@ 0011bbfe fff781fe
.org 0x11bc02
	ldr r2, [sp, #4]	@ 0011bc02 019a
.org 0x11bc04
	ldrh r1, [r2, #0]	@ 0011bc04 1188
.org 0x11bc06
	ldrb r2, [r4, #0]	@ 0011bc06 2278
.org 0x11bc08
	lsls r0, r2, #2	@ 0011bc08 9000
.org 0x11bc0a
	adds r0, r0, r2	@ 0011bc0a 8018
.org 0x11bc0c
	mov r2, sl	@ 0011bc0c 5246
.org 0x11bc0e
	adds r2, #1	@ 0011bc0e 0132
.org 0x11bc10
	adds r0, r0, r2	@ 0011bc10 8018
.org 0x11bc12
	ldrb r3, [r0, #0]	@ 0011bc12 0378
.org 0x11bc14
	adds r0, r6, #0	@ 0011bc14 301c
.org 0x11bc16
	movs r2, #147	@ 0011bc16 9322
.org 0x11bc18
	bl 0x11b904	@ 0011bc18 fff774fe
.org 0x11bc1c
	ldr r0, [sp, #8]	@ 0011bc1c 0298
.org 0x11bc1e
	ldrh r1, [r0, #0]	@ 0011bc1e 0188
.org 0x11bc20
	ldrb r2, [r4, #0]	@ 0011bc20 2278
.org 0x11bc22
	lsls r0, r2, #2	@ 0011bc22 9000
.org 0x11bc24
	adds r0, r0, r2	@ 0011bc24 8018
.org 0x11bc26
	mov r2, sl	@ 0011bc26 5246
.org 0x11bc28
	adds r2, #2	@ 0011bc28 0232
.org 0x11bc2a
	adds r0, r0, r2	@ 0011bc2a 8018
.org 0x11bc2c
	ldrb r3, [r0, #0]	@ 0011bc2c 0378
.org 0x11bc2e
	adds r0, r6, #0	@ 0011bc2e 301c
.org 0x11bc30
	movs r2, #179	@ 0011bc30 b322
.org 0x11bc32
	bl 0x11b904	@ 0011bc32 fff767fe
.org 0x11bc36
	ldr r5, [sp, #16]	@ 0011bc36 049d
.org 0x11bc38
	ldrh r1, [r5, #0]	@ 0011bc38 2988
.org 0x11bc3a
	ldrb r2, [r4, #0]	@ 0011bc3a 2278
.org 0x11bc3c
	lsls r0, r2, #2	@ 0011bc3c 9000
.org 0x11bc3e
	adds r0, r0, r2	@ 0011bc3e 8018
.org 0x11bc40
	mov r2, sl	@ 0011bc40 5246
.org 0x11bc42
	adds r2, #3	@ 0011bc42 0332
.org 0x11bc44
	adds r0, r0, r2	@ 0011bc44 8018
.org 0x11bc46
	ldrb r3, [r0, #0]	@ 0011bc46 0378
.org 0x11bc48
	adds r0, r6, #0	@ 0011bc48 301c
.org 0x11bc4a
	movs r2, #211	@ 0011bc4a d322
.org 0x11bc4c
	bl 0x11b904	@ 0011bc4c fff75afe
.org 0x11bc50
	ldr r2, [sp, #20]	@ 0011bc50 059a
.org 0x11bc52
	ldrh r1, [r2, #0]	@ 0011bc52 1188
.org 0x11bc54
	ldrb r2, [r4, #0]	@ 0011bc54 2278
.org 0x11bc56
	lsls r0, r2, #2	@ 0011bc56 9000
.org 0x11bc58
	adds r0, r0, r2	@ 0011bc58 8018
.org 0x11bc5a
	mov r2, sl	@ 0011bc5a 5246
.org 0x11bc5c
	adds r2, #4	@ 0011bc5c 0432
.org 0x11bc5e
	adds r0, r0, r2	@ 0011bc5e 8018
.org 0x11bc60
	ldrb r3, [r0, #0]	@ 0011bc60 0378
.org 0x11bc62
	adds r0, r6, #0	@ 0011bc62 301c
.org 0x11bc64
	movs r2, #243	@ 0011bc64 f322
.org 0x11bc66
	bl 0x11b904	@ 0011bc66 fff74dfe
.org 0x11bc6a
	mov r1, r9	@ 0011bc6a 4946
.org 0x11bc6c
	ldrb r0, [r1, #0]	@ 0011bc6c 0878
.org 0x11bc6e
	cmp r0, #0	@ 0011bc6e 0028
.org 0x11bc70
	bne.n 0x11bd00	@ 0011bc70 46d1
.org 0x11bc72
	ldrh r1, [r7, #0]	@ 0011bc72 3988
.org 0x11bc74
	ldr r2, [pc, #88]	@ 0011bc74 164a
.org 0x11bc76
	adds r0, r6, #0	@ 0011bc76 301c
.org 0x11bc78
	movs r3, #6	@ 0011bc78 0623
.org 0x11bc7a
	bl 0x11b904	@ 0011bc7a fff743fe
.org 0x11bc7e
	ldrh r0, [r7, #0]	@ 0011bc7e 3888
.org 0x11bc80
	cmp r0, #4	@ 0011bc80 0428
.org 0x11bc82
	bne.n 0x11bcdc	@ 0011bc82 2bd1
.org 0x11bc84
	ldrh r1, [r5, #0]	@ 0011bc84 2988
.org 0x11bc86
	movs r2, #211	@ 0011bc86 d322
.org 0x11bc88
	lsls r2, r2, #1	@ 0011bc88 5200
.org 0x11bc8a
	adds r0, r6, #0	@ 0011bc8a 301c
.org 0x11bc8c
	movs r3, #6	@ 0011bc8c 0623
.org 0x11bc8e
	bl 0x11b904	@ 0011bc8e fff739fe
.org 0x11bc92
	ldr r2, [pc, #64]	@ 0011bc92 104a
.org 0x11bc94
	adds r1, r6, r2	@ 0011bc94 b118
.org 0x11bc96
	ldr r2, [pc, #64]	@ 0011bc96 104a
.org 0x11bc98
	adds r0, r2, #0	@ 0011bc98 101c
.org 0x11bc9a
	strh r0, [r1, #0]	@ 0011bc9a 0880
.org 0x11bc9c
	ldrh r1, [r7, #0]	@ 0011bc9c 3988
.org 0x11bc9e
	b.n 0x11bd12	@ 0011bc9e 38e0
.org 0x11bca0
	.byte 0xa8,0x63,0x00,0x00	@ 0011bca0 data
.org 0x11bca4
	.byte 0xa1,0x1d,0x88,0x08	@ 0011bca4 data
.org 0x11bca8
	.byte 0xff,0x0f,0x00,0x00	@ 0011bca8 data
.org 0x11bcac
	.byte 0x98,0x1d,0x88,0x08	@ 0011bcac data
.org 0x11bcb0
	.byte 0x5e,0x02,0x00,0x00	@ 0011bcb0 data
.org 0x11bcb4
	.byte 0x62,0x02,0x00,0x00	@ 0011bcb4 data
.org 0x11bcb8
	.byte 0x99,0x1d,0x88,0x08	@ 0011bcb8 data
.org 0x11bcbc
	.byte 0x9a,0x1d,0x88,0x08	@ 0011bcbc data
.org 0x11bcc0
	.byte 0x1c,0x04,0x00,0x00	@ 0011bcc0 data
.org 0x11bcc4
	.byte 0xc9,0x1d,0x88,0x08	@ 0011bcc4 data
.org 0x11bcc8
	.byte 0x2a,0x04,0x00,0x00	@ 0011bcc8 data
.org 0x11bccc
	.byte 0xca,0x1d,0x88,0x08	@ 0011bccc data
.org 0x11bcd0
	.byte 0x8b,0x01,0x00,0x00	@ 0011bcd0 data
.org 0x11bcd4
	.byte 0x4e,0x03,0x00,0x00	@ 0011bcd4 data
.org 0x11bcd8
	.byte 0xb7,0x60,0x00,0x00	@ 0011bcd8 data
.org 0x11bcdc
	ldrh r1, [r5, #0]	@ 0011bcdc 2988
.org 0x11bcde
	ldr r2, [pc, #24]	@ 0011bcde 064a
.org 0x11bce0
	adds r0, r6, #0	@ 0011bce0 301c
.org 0x11bce2
	movs r3, #6	@ 0011bce2 0623
.org 0x11bce4
	bl 0x11b904	@ 0011bce4 fff70efe
.org 0x11bce8
	movs r0, #213	@ 0011bce8 d520
.org 0x11bcea
	lsls r0, r0, #2	@ 0011bcea 8000
.org 0x11bcec
	adds r1, r6, r0	@ 0011bcec 3118
.org 0x11bcee
	ldr r2, [pc, #12]	@ 0011bcee 034a
.org 0x11bcf0
	adds r0, r2, #0	@ 0011bcf0 101c
.org 0x11bcf2
	strh r0, [r1, #0]	@ 0011bcf2 0880
.org 0x11bcf4
	ldrh r1, [r7, #0]	@ 0011bcf4 3988
.org 0x11bcf6
	b.n 0x11bd12	@ 0011bcf6 0ce0
.org 0x11bcf8
	.byte 0xa9,0x01,0x00,0x00	@ 0011bcf8 data
.org 0x11bcfc
	.byte 0xb7,0x60,0x00,0x00	@ 0011bcfc data
.org 0x11bd00
	cmp r0, #1	@ 0011bd00 0128
.org 0x11bd02
	bne.n 0x11bd28	@ 0011bd02 11d1
.org 0x11bd04
	ldrh r1, [r7, #0]	@ 0011bd04 3988
.org 0x11bd06
	ldr r2, [pc, #24]	@ 0011bd06 064a
.org 0x11bd08
	adds r0, r6, #0	@ 0011bd08 301c
.org 0x11bd0a
	movs r3, #6	@ 0011bd0a 0623
.org 0x11bd0c
	bl 0x11b904	@ 0011bd0c fff7fafd
.org 0x11bd10
	ldrh r1, [r5, #0]	@ 0011bd10 2988
.org 0x11bd12
	ldr r2, [pc, #16]	@ 0011bd12 044a
.org 0x11bd14
	adds r0, r6, #0	@ 0011bd14 301c
.org 0x11bd16
	movs r3, #6	@ 0011bd16 0623
.org 0x11bd18
	bl 0x11b904	@ 0011bd18 fff7f4fd
.org 0x11bd1c
	b.n 0x11bdb2	@ 0011bd1c 49e0
.org 0x11bd1e
	.byte 0x00	@ 0011bd1e data
.org 0x11bd1f
	.byte 0x00	@ 0011bd1f data
.org 0x11bd20
	.byte 0x8b,0x01,0x00,0x00	@ 0011bd20 data
.org 0x11bd24
	.byte 0xab,0x01,0x00,0x00	@ 0011bd24 data
.org 0x11bd28
	ldr r0, [sp, #12]	@ 0011bd28 0398
.org 0x11bd2a
	ldrh r1, [r0, #0]	@ 0011bd2a 0188
.org 0x11bd2c
	ldr r2, [pc, #148]	@ 0011bd2c 254a
.org 0x11bd2e
	adds r0, r6, #0	@ 0011bd2e 301c
.org 0x11bd30
	movs r3, #6	@ 0011bd30 0623
.org 0x11bd32
	bl 0x11b904	@ 0011bd32 fff7e7fd
.org 0x11bd36
	ldr r2, [sp, #16]	@ 0011bd36 049a
.org 0x11bd38
	ldrh r1, [r2, #0]	@ 0011bd38 1188
.org 0x11bd3a
	ldr r2, [pc, #140]	@ 0011bd3a 234a
.org 0x11bd3c
	adds r0, r6, #0	@ 0011bd3c 301c
.org 0x11bd3e
	movs r3, #6	@ 0011bd3e 0623
.org 0x11bd40
	bl 0x11b904	@ 0011bd40 fff7e0fd
.org 0x11bd44
	movs r0, #217	@ 0011bd44 d920
.org 0x11bd46
	lsls r0, r0, #2	@ 0011bd46 8000
.org 0x11bd48
	adds r1, r6, r0	@ 0011bd48 3118
.org 0x11bd4a
	ldr r2, [pc, #128]	@ 0011bd4a 204a
.org 0x11bd4c
	adds r0, r2, #0	@ 0011bd4c 101c
.org 0x11bd4e
	strh r0, [r1, #0]	@ 0011bd4e 0880
.org 0x11bd50
	ldr r0, [pc, #124]	@ 0011bd50 1f48
.org 0x11bd52
	adds r1, r6, r0	@ 0011bd52 3118
.org 0x11bd54
	adds r2, #1	@ 0011bd54 0132
.org 0x11bd56
	adds r0, r2, #0	@ 0011bd56 101c
.org 0x11bd58
	strh r0, [r1, #0]	@ 0011bd58 0880
.org 0x11bd5a
	movs r0, #218	@ 0011bd5a da20
.org 0x11bd5c
	lsls r0, r0, #2	@ 0011bd5c 8000
.org 0x11bd5e
	adds r1, r6, r0	@ 0011bd5e 3118
.org 0x11bd60
	adds r2, #1	@ 0011bd60 0132
.org 0x11bd62
	adds r0, r2, #0	@ 0011bd62 101c
.org 0x11bd64
	strh r0, [r1, #0]	@ 0011bd64 0880
.org 0x11bd66
	ldr r0, [pc, #108]	@ 0011bd66 1b48
.org 0x11bd68
	adds r1, r6, r0	@ 0011bd68 3118
.org 0x11bd6a
	adds r2, #42	@ 0011bd6a 2a32
.org 0x11bd6c
	adds r0, r2, #0	@ 0011bd6c 101c
.org 0x11bd6e
	strh r0, [r1, #0]	@ 0011bd6e 0880
.org 0x11bd70
	movs r0, #219	@ 0011bd70 db20
.org 0x11bd72
	lsls r0, r0, #2	@ 0011bd72 8000
