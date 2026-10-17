@ FUN_0807dacc  entry 0x0807dacc  size 128
.thumb
.org 0x7dacc
FUN_0807dacc:
	push {r4, r5, lr}	@ 0007dacc 30b5
.org 0x7dace
	adds r4, r0, #0	@ 0007dace 041c
.org 0x7dad0
	ldrb r0, [r4, #15]	@ 0007dad0 e07b
.org 0x7dad2
	cmp r0, #0	@ 0007dad2 0028
.org 0x7dad4
	bne.n 0x7dae8	@ 0007dad4 08d1
.org 0x7dad6
	adds r0, r4, #0	@ 0007dad6 201c
.org 0x7dad8
	movs r1, #1	@ 0007dad8 0121
.org 0x7dada
	bl 0x7e8c8	@ 0007dada 00f0f5fe
.org 0x7dade
	movs r0, #1	@ 0007dade 0120
.org 0x7dae0
	strb r0, [r4, #18]	@ 0007dae0 a074
.org 0x7dae2
	ldrb r0, [r4, #15]	@ 0007dae2 e07b
.org 0x7dae4
	adds r0, #1	@ 0007dae4 0130
.org 0x7dae6
	strb r0, [r4, #15]	@ 0007dae6 e073
.org 0x7dae8
	adds r5, r4, #0	@ 0007dae8 251c
.org 0x7daea
	adds r5, #188	@ 0007daea bc35
.org 0x7daec
	ldrb r0, [r5, #0]	@ 0007daec 2878
.org 0x7daee
	cmp r0, #0	@ 0007daee 0028
.org 0x7daf0
	beq.n 0x7daf8	@ 0007daf0 02d0
.org 0x7daf2
	adds r0, r4, #0	@ 0007daf2 201c
.org 0x7daf4
	bl 0x1cff0	@ 0007daf4 9ff77cfa
.org 0x7daf8
	adds r0, r4, #0	@ 0007daf8 201c
.org 0x7dafa
	adds r0, #116	@ 0007dafa 7430
.org 0x7dafc
	ldr r3, [pc, #76]	@ 0007dafc 134b
.org 0x7dafe
	ldr r2, [pc, #80]	@ 0007dafe 144a
.org 0x7db00
	ldrb r1, [r5, #0]	@ 0007db00 2978
.org 0x7db02
	lsls r1, r1, #1	@ 0007db02 4900
.org 0x7db04
	adds r1, r1, r2	@ 0007db04 8918
.org 0x7db06
	ldrh r2, [r1, #0]	@ 0007db06 0a88
.org 0x7db08
	lsls r2, r2, #2	@ 0007db08 9200
.org 0x7db0a
	adds r2, r2, r3	@ 0007db0a d218
.org 0x7db0c
	adds r1, r4, #0	@ 0007db0c 211c
.org 0x7db0e
	adds r1, #113	@ 0007db0e 7131
.org 0x7db10
	ldrb r1, [r1, #0]	@ 0007db10 0978
.org 0x7db12
	lsls r1, r1, #24	@ 0007db12 0906
.org 0x7db14
	asrs r1, r1, #24	@ 0007db14 0916
.org 0x7db16
	ldr r2, [r2, #0]	@ 0007db16 1268
.org 0x7db18
	lsls r1, r1, #2	@ 0007db18 8900
.org 0x7db1a
	adds r1, r1, r2	@ 0007db1a 8918
.org 0x7db1c
	ldr r1, [r1, #0]	@ 0007db1c 0968
.org 0x7db1e
	bl 0x5784	@ 0007db1e 87f731fe
.org 0x7db22
	ldrb r0, [r4, #18]	@ 0007db22 a07c
.org 0x7db24
	cmp r0, #0	@ 0007db24 0028
.org 0x7db26
	beq.n 0x7db32	@ 0007db26 04d0
.org 0x7db28
	subs r0, #1	@ 0007db28 0138
.org 0x7db2a
	strb r0, [r4, #18]	@ 0007db2a a074
.org 0x7db2c
	lsls r0, r0, #24	@ 0007db2c 0006
.org 0x7db2e
	cmp r0, #0	@ 0007db2e 0028
.org 0x7db30
	bne.n 0x7db46	@ 0007db30 09d1
.org 0x7db32
	adds r0, r4, #0	@ 0007db32 201c
.org 0x7db34
	adds r0, #204	@ 0007db34 cc30
.org 0x7db36
	movs r2, #0	@ 0007db36 0022
.org 0x7db38
	ldrsh r1, [r0, r2]	@ 0007db38 815e
.org 0x7db3a
	cmp r1, #0	@ 0007db3a 0029
.org 0x7db3c
	bne.n 0x7db46	@ 0007db3c 03d1
.org 0x7db3e
	ldrb r0, [r4, #14]	@ 0007db3e a07b
.org 0x7db40
	adds r0, #1	@ 0007db40 0130
.org 0x7db42
	strb r0, [r4, #14]	@ 0007db42 a073
.org 0x7db44
	strb r1, [r4, #15]	@ 0007db44 e173
.org 0x7db46
	pop {r4, r5}	@ 0007db46 30bc
.org 0x7db48
	pop {r0}	@ 0007db48 01bc
.org 0x7db4a
	bx r0	@ 0007db4a 0047
