@ FUN_0807bab8  entry 0x0807bab8  size 176
.thumb
.org 0x7bab8
FUN_0807bab8:
	push {r4, r5, r6, lr}	@ 0007bab8 70b5
.org 0x7baba
	adds r4, r0, #0	@ 0007baba 041c
.org 0x7babc
	ldrb r0, [r4, #15]	@ 0007babc e07b
.org 0x7babe
	cmp r0, #0	@ 0007babe 0028
.org 0x7bac0
	bne.n 0x7bad4	@ 0007bac0 08d1
.org 0x7bac2
	adds r0, r4, #0	@ 0007bac2 201c
.org 0x7bac4
	movs r1, #0	@ 0007bac4 0021
.org 0x7bac6
	bl 0x7e8c8	@ 0007bac6 02f0fffe
.org 0x7baca
	movs r0, #32	@ 0007baca 2020
.org 0x7bacc
	strb r0, [r4, #18]	@ 0007bacc a074
.org 0x7bace
	ldrb r0, [r4, #15]	@ 0007bace e07b
.org 0x7bad0
	adds r0, #1	@ 0007bad0 0130
.org 0x7bad2
	strb r0, [r4, #15]	@ 0007bad2 e073
.org 0x7bad4
	adds r5, r4, #0	@ 0007bad4 251c
.org 0x7bad6
	adds r5, #188	@ 0007bad6 bc35
.org 0x7bad8
	ldrb r0, [r5, #0]	@ 0007bad8 2878
.org 0x7bada
	cmp r0, #0	@ 0007bada 0028
.org 0x7badc
	beq.n 0x7bae4	@ 0007badc 02d0
.org 0x7bade
	adds r0, r4, #0	@ 0007bade 201c
.org 0x7bae0
	bl 0x1cff0	@ 0007bae0 a1f786fa
.org 0x7bae4
	adds r0, r4, #0	@ 0007bae4 201c
.org 0x7bae6
	adds r0, #116	@ 0007bae6 7430
.org 0x7bae8
	ldr r3, [pc, #76]	@ 0007bae8 134b
.org 0x7baea
	ldr r2, [pc, #80]	@ 0007baea 144a
.org 0x7baec
	ldrb r1, [r5, #0]	@ 0007baec 2978
.org 0x7baee
	lsls r1, r1, #1	@ 0007baee 4900
.org 0x7baf0
	adds r1, r1, r2	@ 0007baf0 8918
.org 0x7baf2
	ldrh r2, [r1, #0]	@ 0007baf2 0a88
.org 0x7baf4
	lsls r2, r2, #2	@ 0007baf4 9200
.org 0x7baf6
	adds r2, r2, r3	@ 0007baf6 d218
.org 0x7baf8
	adds r1, r4, #0	@ 0007baf8 211c
.org 0x7bafa
	adds r1, #113	@ 0007bafa 7131
.org 0x7bafc
	ldrb r1, [r1, #0]	@ 0007bafc 0978
.org 0x7bafe
	lsls r1, r1, #24	@ 0007bafe 0906
.org 0x7bb00
	asrs r1, r1, #24	@ 0007bb00 0916
.org 0x7bb02
	ldr r2, [r2, #0]	@ 0007bb02 1268
.org 0x7bb04
	lsls r1, r1, #2	@ 0007bb04 8900
.org 0x7bb06
	adds r1, r1, r2	@ 0007bb06 8918
.org 0x7bb08
	ldr r1, [r1, #0]	@ 0007bb08 0968
.org 0x7bb0a
	bl 0x5784	@ 0007bb0a 89f73bfe
.org 0x7bb0e
	ldrb r0, [r4, #18]	@ 0007bb0e a07c
.org 0x7bb10
	subs r0, #1	@ 0007bb10 0138
.org 0x7bb12
	strb r0, [r4, #18]	@ 0007bb12 a074
.org 0x7bb14
	lsls r0, r0, #24	@ 0007bb14 0006
.org 0x7bb16
	lsrs r6, r0, #24	@ 0007bb16 060e
.org 0x7bb18
	cmp r6, #0	@ 0007bb18 002e
.org 0x7bb1a
	bne.n 0x7bb6c	@ 0007bb1a 27d1
.org 0x7bb1c
	adds r5, r4, #0	@ 0007bb1c 251c
.org 0x7bb1e
	adds r5, #200	@ 0007bb1e c835
.org 0x7bb20
	ldr r1, [r5, #0]	@ 0007bb20 2968
.org 0x7bb22
	adds r0, r4, #0	@ 0007bb22 201c
.org 0x7bb24
	bl 0x7e940	@ 0007bb24 02f00cff
.org 0x7bb28
	cmp r0, #0	@ 0007bb28 0028
.org 0x7bb2a
	bne.n 0x7bb40	@ 0007bb2a 09d1
.org 0x7bb2c
	adds r1, r4, #0	@ 0007bb2c 211c
.org 0x7bb2e
	adds r1, #190	@ 0007bb2e be31
.org 0x7bb30
	movs r0, #1	@ 0007bb30 0120
.org 0x7bb32
	strb r0, [r1, #0]	@ 0007bb32 0870
.org 0x7bb34
	b.n 0x7bb62	@ 0007bb34 15e0
.org 0x7bb36
	.byte 0x00	@ 0007bb36 data
.org 0x7bb37
	.byte 0x00	@ 0007bb37 data
.org 0x7bb38
	.byte 0xd8,0xd7,0x85,0x08	@ 0007bb38 data
.org 0x7bb3c
	.byte 0xe4,0xd7,0x85,0x08	@ 0007bb3c data
.org 0x7bb40
	cmp r0, #4	@ 0007bb40 0428
.org 0x7bb42
	bne.n 0x7bb4c	@ 0007bb42 03d1
.org 0x7bb44
	adds r0, r4, #0	@ 0007bb44 201c
.org 0x7bb46
	adds r0, #190	@ 0007bb46 be30
.org 0x7bb48
	strb r6, [r0, #0]	@ 0007bb48 0670
.org 0x7bb4a
	b.n 0x7bb62	@ 0007bb4a 0ae0
.org 0x7bb4c
	movs r2, #0	@ 0007bb4c 0022
.org 0x7bb4e
	ldr r0, [pc, #36]	@ 0007bb4e 0948
.org 0x7bb50
	ldr r0, [r0, #0]	@ 0007bb50 0068
.org 0x7bb52
	ldr r1, [r5, #0]	@ 0007bb52 2968
.org 0x7bb54
	ldr r0, [r0, #84]	@ 0007bb54 406d
.org 0x7bb56
	cmp r1, r0	@ 0007bb56 8142
.org 0x7bb58
	bge.n 0x7bb5c	@ 0007bb58 00da
.org 0x7bb5a
	movs r2, #1	@ 0007bb5a 0122
.org 0x7bb5c
	adds r0, r4, #0	@ 0007bb5c 201c
.org 0x7bb5e
	adds r0, #190	@ 0007bb5e be30
.org 0x7bb60
	strb r2, [r0, #0]	@ 0007bb60 0270
.org 0x7bb62
	ldrb r0, [r4, #14]	@ 0007bb62 a07b
.org 0x7bb64
	adds r0, #1	@ 0007bb64 0130
.org 0x7bb66
	movs r1, #0	@ 0007bb66 0021
