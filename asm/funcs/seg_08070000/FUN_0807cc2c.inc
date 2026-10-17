@ FUN_0807cc2c  entry 0x0807cc2c  size 184
.thumb
.org 0x7cc2c
FUN_0807cc2c:
	push {r4, r5, lr}	@ 0007cc2c 30b5
.org 0x7cc2e
	sub sp, #8	@ 0007cc2e 82b0
.org 0x7cc30
	adds r4, r0, #0	@ 0007cc30 041c
.org 0x7cc32
	ldrb r0, [r4, #15]	@ 0007cc32 e07b
.org 0x7cc34
	cmp r0, #0	@ 0007cc34 0028
.org 0x7cc36
	bne.n 0x7cc56	@ 0007cc36 0ed1
.org 0x7cc38
	movs r0, #163	@ 0007cc38 a320
.org 0x7cc3a
	lsls r0, r0, #1	@ 0007cc3a 4000
.org 0x7cc3c
	bl 0x2b10	@ 0007cc3c 85f768ff
.org 0x7cc40
	adds r0, r4, #0	@ 0007cc40 201c
.org 0x7cc42
	movs r1, #25	@ 0007cc42 1921
.org 0x7cc44
	bl 0x7e8c8	@ 0007cc44 01f040fe
.org 0x7cc48
	movs r0, #48	@ 0007cc48 3020
.org 0x7cc4a
	strb r0, [r4, #18]	@ 0007cc4a a074
.org 0x7cc4c
	movs r0, #1	@ 0007cc4c 0120
.org 0x7cc4e
	strb r0, [r4, #19]	@ 0007cc4e e074
.org 0x7cc50
	ldrb r0, [r4, #15]	@ 0007cc50 e07b
.org 0x7cc52
	adds r0, #1	@ 0007cc52 0130
.org 0x7cc54
	strb r0, [r4, #15]	@ 0007cc54 e073
.org 0x7cc56
	adds r5, r4, #0	@ 0007cc56 251c
.org 0x7cc58
	adds r5, #188	@ 0007cc58 bc35
.org 0x7cc5a
	ldrb r0, [r5, #0]	@ 0007cc5a 2878
.org 0x7cc5c
	cmp r0, #0	@ 0007cc5c 0028
.org 0x7cc5e
	beq.n 0x7cc66	@ 0007cc5e 02d0
.org 0x7cc60
	adds r0, r4, #0	@ 0007cc60 201c
.org 0x7cc62
	bl 0x1cff0	@ 0007cc62 a0f7c5f9
.org 0x7cc66
	adds r0, r4, #0	@ 0007cc66 201c
.org 0x7cc68
	adds r0, #116	@ 0007cc68 7430
.org 0x7cc6a
	ldr r3, [pc, #120]	@ 0007cc6a 1e4b
.org 0x7cc6c
	ldr r2, [pc, #120]	@ 0007cc6c 1e4a
.org 0x7cc6e
	ldrb r1, [r5, #0]	@ 0007cc6e 2978
.org 0x7cc70
	lsls r1, r1, #1	@ 0007cc70 4900
.org 0x7cc72
	adds r1, r1, r2	@ 0007cc72 8918
.org 0x7cc74
	ldrh r2, [r1, #0]	@ 0007cc74 0a88
.org 0x7cc76
	lsls r2, r2, #2	@ 0007cc76 9200
.org 0x7cc78
	adds r2, r2, r3	@ 0007cc78 d218
.org 0x7cc7a
	adds r1, r4, #0	@ 0007cc7a 211c
.org 0x7cc7c
	adds r1, #113	@ 0007cc7c 7131
.org 0x7cc7e
	ldrb r1, [r1, #0]	@ 0007cc7e 0978
.org 0x7cc80
	lsls r1, r1, #24	@ 0007cc80 0906
.org 0x7cc82
	asrs r1, r1, #24	@ 0007cc82 0916
.org 0x7cc84
	ldr r2, [r2, #0]	@ 0007cc84 1268
.org 0x7cc86
	lsls r1, r1, #2	@ 0007cc86 8900
.org 0x7cc88
	adds r1, r1, r2	@ 0007cc88 8918
.org 0x7cc8a
	ldr r1, [r1, #0]	@ 0007cc8a 0968
.org 0x7cc8c
	bl 0x5784	@ 0007cc8c 88f77afd
.org 0x7cc90
	ldrb r0, [r4, #18]	@ 0007cc90 a07c
.org 0x7cc92
	cmp r0, #0	@ 0007cc92 0028
.org 0x7cc94
	beq.n 0x7cc9a	@ 0007cc94 01d0
.org 0x7cc96
	subs r0, #1	@ 0007cc96 0138
.org 0x7cc98
	strb r0, [r4, #18]	@ 0007cc98 a074
.org 0x7cc9a
	ldrb r0, [r4, #19]	@ 0007cc9a e07c
.org 0x7cc9c
	ldrb r1, [r4, #18]	@ 0007cc9c a17c
.org 0x7cc9e
	cmp r0, #0	@ 0007cc9e 0028
.org 0x7cca0
	beq.n 0x7ccd0	@ 0007cca0 16d0
.org 0x7cca2
	cmp r1, #24	@ 0007cca2 1829
.org 0x7cca4
	bhi.n 0x7ccd0	@ 0007cca4 14d8
.org 0x7cca6
	adds r5, r4, #0	@ 0007cca6 251c
.org 0x7cca8
	adds r5, #208	@ 0007cca8 d035
.org 0x7ccaa
	ldr r0, [r5, #0]	@ 0007ccaa 2868
.org 0x7ccac
	cmp r0, #0	@ 0007ccac 0028
.org 0x7ccae
	bne.n 0x7ccca	@ 0007ccae 0cd1
.org 0x7ccb0
	ldr r0, [r4, #84]	@ 0007ccb0 606d
.org 0x7ccb2
	str r0, [sp, #0]	@ 0007ccb2 0090
.org 0x7ccb4
	ldr r0, [r4, #88]	@ 0007ccb4 a06d
.org 0x7ccb6
	ldr r1, [pc, #52]	@ 0007ccb6 0d49
.org 0x7ccb8
	adds r0, r0, r1	@ 0007ccb8 4018
.org 0x7ccba
	str r0, [sp, #4]	@ 0007ccba 0190
.org 0x7ccbc
	adds r0, r4, #0	@ 0007ccbc 201c
.org 0x7ccbe
	mov r1, sp	@ 0007ccbe 6946
.org 0x7ccc0
	movs r2, #0	@ 0007ccc0 0022
.org 0x7ccc2
	movs r3, #0	@ 0007ccc2 0023
.org 0x7ccc4
	bl 0xcf36c	@ 0007ccc4 52f052fb
.org 0x7ccc8
	str r0, [r5, #0]	@ 0007ccc8 2860
.org 0x7ccca
	movs r0, #0	@ 0007ccca 0020
.org 0x7cccc
	strb r0, [r4, #19]	@ 0007cccc e074
.org 0x7ccce
	ldrb r1, [r4, #18]	@ 0007ccce a17c
.org 0x7ccd0
	cmp r1, #0	@ 0007ccd0 0029
.org 0x7ccd2
	bne.n 0x7ccdc	@ 0007ccd2 03d1
.org 0x7ccd4
	ldrb r0, [r4, #14]	@ 0007ccd4 a07b
.org 0x7ccd6
	adds r0, #1	@ 0007ccd6 0130
.org 0x7ccd8
	strb r0, [r4, #14]	@ 0007ccd8 a073
.org 0x7ccda
	strb r1, [r4, #15]	@ 0007ccda e173
.org 0x7ccdc
	add sp, #8	@ 0007ccdc 02b0
.org 0x7ccde
	pop {r4, r5}	@ 0007ccde 30bc
.org 0x7cce0
	pop {r0}	@ 0007cce0 01bc
.org 0x7cce2
	bx r0	@ 0007cce2 0047
