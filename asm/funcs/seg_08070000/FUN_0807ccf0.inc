@ FUN_0807ccf0  entry 0x0807ccf0  size 280
.thumb
.org 0x7ccf0
FUN_0807ccf0:
	push {r4, r5, r6, lr}	@ 0007ccf0 70b5
.org 0x7ccf2
	adds r4, r0, #0	@ 0007ccf2 041c
.org 0x7ccf4
	ldrb r0, [r4, #15]	@ 0007ccf4 e07b
.org 0x7ccf6
	cmp r0, #0	@ 0007ccf6 0028
.org 0x7ccf8
	bne.n 0x7cd4c	@ 0007ccf8 28d1
.org 0x7ccfa
	ldr r1, [pc, #268]	@ 0007ccfa 4349
.org 0x7ccfc
	ldr r0, [pc, #268]	@ 0007ccfc 4348
.org 0x7ccfe
	strh r0, [r1, #0]	@ 0007ccfe 0880
.org 0x7cd00
	adds r2, r4, #0	@ 0007cd00 221c
.org 0x7cd02
	adds r2, #69	@ 0007cd02 4532
.org 0x7cd04
	ldrb r1, [r2, #0]	@ 0007cd04 1178
.org 0x7cd06
	movs r0, #13	@ 0007cd06 0d20
.org 0x7cd08
	negs r0, r0	@ 0007cd08 4042
.org 0x7cd0a
	ands r0, r1	@ 0007cd0a 0840
.org 0x7cd0c
	movs r1, #4	@ 0007cd0c 0421
.org 0x7cd0e
	orrs r0, r1	@ 0007cd0e 0843
.org 0x7cd10
	strb r0, [r2, #0]	@ 0007cd10 1070
.org 0x7cd12
	adds r0, r4, #0	@ 0007cd12 201c
.org 0x7cd14
	movs r1, #26	@ 0007cd14 1a21
.org 0x7cd16
	bl 0x7e8c8	@ 0007cd16 01f0d7fd
.org 0x7cd1a
	adds r0, r4, #0	@ 0007cd1a 201c
.org 0x7cd1c
	adds r0, #180	@ 0007cd1c b430
.org 0x7cd1e
	ldr r2, [r0, #0]	@ 0007cd1e 0268
.org 0x7cd20
	movs r0, #240	@ 0007cd20 f020
.org 0x7cd22
	lsls r0, r0, #7	@ 0007cd22 c001
.org 0x7cd24
	adds r2, r2, r0	@ 0007cd24 1218
.org 0x7cd26
	str r2, [r4, #92]	@ 0007cd26 e265
.org 0x7cd28
	adds r0, r4, #0	@ 0007cd28 201c
.org 0x7cd2a
	adds r0, #184	@ 0007cd2a b830
.org 0x7cd2c
	ldr r1, [r0, #0]	@ 0007cd2c 0168
.org 0x7cd2e
	movs r3, #168	@ 0007cd2e a823
.org 0x7cd30
	lsls r3, r3, #5	@ 0007cd30 5b01
.org 0x7cd32
	adds r1, r1, r3	@ 0007cd32 c918
.org 0x7cd34
	str r1, [r4, #96]	@ 0007cd34 2166
.org 0x7cd36
	ldr r0, [r4, #84]	@ 0007cd36 606d
.org 0x7cd38
	subs r2, r2, r0	@ 0007cd38 121a
.org 0x7cd3a
	str r2, [r4, #100]	@ 0007cd3a 6266
.org 0x7cd3c
	ldr r0, [r4, #88]	@ 0007cd3c a06d
.org 0x7cd3e
	subs r1, r1, r0	@ 0007cd3e 091a
.org 0x7cd40
	str r1, [r4, #104]	@ 0007cd40 a166
.org 0x7cd42
	movs r0, #32	@ 0007cd42 2020
.org 0x7cd44
	strb r0, [r4, #18]	@ 0007cd44 a074
.org 0x7cd46
	ldrb r0, [r4, #15]	@ 0007cd46 e07b
.org 0x7cd48
	adds r0, #1	@ 0007cd48 0130
.org 0x7cd4a
	strb r0, [r4, #15]	@ 0007cd4a e073
.org 0x7cd4c
	adds r5, r4, #0	@ 0007cd4c 251c
.org 0x7cd4e
	adds r5, #188	@ 0007cd4e bc35
.org 0x7cd50
	ldrb r0, [r5, #0]	@ 0007cd50 2878
.org 0x7cd52
	cmp r0, #0	@ 0007cd52 0028
.org 0x7cd54
	beq.n 0x7cd5c	@ 0007cd54 02d0
.org 0x7cd56
	adds r0, r4, #0	@ 0007cd56 201c
.org 0x7cd58
	bl 0x1cff0	@ 0007cd58 a0f74af9
.org 0x7cd5c
	adds r0, r4, #0	@ 0007cd5c 201c
.org 0x7cd5e
	adds r0, #116	@ 0007cd5e 7430
.org 0x7cd60
	ldr r3, [pc, #172]	@ 0007cd60 2b4b
.org 0x7cd62
	ldr r2, [pc, #176]	@ 0007cd62 2c4a
.org 0x7cd64
	ldrb r1, [r5, #0]	@ 0007cd64 2978
.org 0x7cd66
	lsls r1, r1, #1	@ 0007cd66 4900
.org 0x7cd68
	adds r1, r1, r2	@ 0007cd68 8918
.org 0x7cd6a
	ldrh r2, [r1, #0]	@ 0007cd6a 0a88
.org 0x7cd6c
	lsls r2, r2, #2	@ 0007cd6c 9200
.org 0x7cd6e
	adds r2, r2, r3	@ 0007cd6e d218
.org 0x7cd70
	adds r1, r4, #0	@ 0007cd70 211c
.org 0x7cd72
	adds r1, #113	@ 0007cd72 7131
.org 0x7cd74
	ldrb r1, [r1, #0]	@ 0007cd74 0978
.org 0x7cd76
	lsls r1, r1, #24	@ 0007cd76 0906
.org 0x7cd78
	asrs r1, r1, #24	@ 0007cd78 0916
.org 0x7cd7a
	ldr r2, [r2, #0]	@ 0007cd7a 1268
.org 0x7cd7c
	lsls r1, r1, #2	@ 0007cd7c 8900
.org 0x7cd7e
	adds r1, r1, r2	@ 0007cd7e 8918
.org 0x7cd80
	ldr r1, [r1, #0]	@ 0007cd80 0968
.org 0x7cd82
	bl 0x5784	@ 0007cd82 88f7fffc
.org 0x7cd86
	ldrb r0, [r4, #18]	@ 0007cd86 a07c
.org 0x7cd88
	subs r5, r0, #1	@ 0007cd88 451e
.org 0x7cd8a
	strb r5, [r4, #18]	@ 0007cd8a a574
.org 0x7cd8c
	ldrb r1, [r4, #18]	@ 0007cd8c a17c
.org 0x7cd8e
	ldr r3, [pc, #136]	@ 0007cd8e 224b
.org 0x7cd90
	lsls r0, r1, #25	@ 0007cd90 4806
.org 0x7cd92
	lsrs r0, r0, #23	@ 0007cd92 c00d
.org 0x7cd94
	adds r0, r0, r3	@ 0007cd94 c018
.org 0x7cd96
	movs r6, #0	@ 0007cd96 0026
.org 0x7cd98
	ldrsh r2, [r0, r6]	@ 0007cd98 825f
.org 0x7cd9a
	adds r0, r2, #0	@ 0007cd9a 101c
.org 0x7cd9c
	cmp r2, #0	@ 0007cd9c 002a
.org 0x7cd9e
	bge.n 0x7cda2	@ 0007cd9e 00da
.org 0x7cda0
	adds r0, r2, #3	@ 0007cda0 d01c
.org 0x7cda2
	asrs r2, r0, #2	@ 0007cda2 8210
.org 0x7cda4
	lsls r0, r2, #24	@ 0007cda4 1006
.org 0x7cda6
	lsrs r0, r0, #23	@ 0007cda6 c00d
.org 0x7cda8
	adds r0, r0, r3	@ 0007cda8 c018
.org 0x7cdaa
	movs r3, #0	@ 0007cdaa 0023
.org 0x7cdac
	ldrsh r2, [r0, r3]	@ 0007cdac c25e
.org 0x7cdae
	ldr r0, [r4, #100]	@ 0007cdae 606e
.org 0x7cdb0
	negs r0, r0	@ 0007cdb0 4042
.org 0x7cdb2
	muls r0, r1	@ 0007cdb2 4843
.org 0x7cdb4
	cmp r0, #0	@ 0007cdb4 0028
.org 0x7cdb6
	bge.n 0x7cdba	@ 0007cdb6 00da
.org 0x7cdb8
	adds r0, #31	@ 0007cdb8 1f30
.org 0x7cdba
	asrs r0, r0, #5	@ 0007cdba 4011
.org 0x7cdbc
	ldr r1, [r4, #92]	@ 0007cdbc e16d
.org 0x7cdbe
	adds r1, r1, r0	@ 0007cdbe 0918
.org 0x7cdc0
	str r1, [r4, #84]	@ 0007cdc0 6165
.org 0x7cdc2
	ldr r0, [r4, #104]	@ 0007cdc2 a06e
.org 0x7cdc4
	negs r0, r0	@ 0007cdc4 4042
.org 0x7cdc6
	muls r0, r2	@ 0007cdc6 5043
.org 0x7cdc8
	cmp r0, #0	@ 0007cdc8 0028
.org 0x7cdca
	bge.n 0x7cdce	@ 0007cdca 00da
.org 0x7cdcc
	adds r0, #255	@ 0007cdcc ff30
.org 0x7cdce
	asrs r1, r0, #8	@ 0007cdce 0112
.org 0x7cdd0
	ldr r0, [r4, #96]	@ 0007cdd0 206e
.org 0x7cdd2
	adds r0, r0, r1	@ 0007cdd2 4018
.org 0x7cdd4
	str r0, [r4, #88]	@ 0007cdd4 a065
.org 0x7cdd6
	adds r0, r2, #0	@ 0007cdd6 101c
.org 0x7cdd8
	cmp r0, #0	@ 0007cdd8 0028
.org 0x7cdda
	bge.n 0x7cdde	@ 0007cdda 00da
.org 0x7cddc
	adds r0, #15	@ 0007cddc 0f30
.org 0x7cdde
	asrs r2, r0, #4	@ 0007cdde 0211
.org 0x7cde0
	ldr r3, [pc, #36]	@ 0007cde0 094b
.org 0x7cde2
	movs r0, #31	@ 0007cde2 1f20
.org 0x7cde4
	adds r1, r2, #0	@ 0007cde4 111c
.org 0x7cde6
	ands r1, r0	@ 0007cde6 0140
.org 0x7cde8
	movs r0, #16	@ 0007cde8 1020
.org 0x7cdea
	subs r0, r0, r2	@ 0007cdea 801a
.org 0x7cdec
	lsls r0, r0, #8	@ 0007cdec 0002
.org 0x7cdee
	orrs r1, r0	@ 0007cdee 0143
.org 0x7cdf0
	strh r1, [r3, #2]	@ 0007cdf0 5980
.org 0x7cdf2
	lsls r0, r5, #24	@ 0007cdf2 2806
.org 0x7cdf4
	cmp r0, #0	@ 0007cdf4 0028
.org 0x7cdf6
	bne.n 0x7ce02	@ 0007cdf6 04d1
.org 0x7cdf8
	ldrb r0, [r4, #14]	@ 0007cdf8 a07b
.org 0x7cdfa
	adds r0, #1	@ 0007cdfa 0130
.org 0x7cdfc
	strb r0, [r4, #14]	@ 0007cdfc a073
.org 0x7cdfe
	movs r0, #0	@ 0007cdfe 0020
.org 0x7ce00
	strb r0, [r4, #15]	@ 0007ce00 e073
.org 0x7ce02
	pop {r4, r5, r6}	@ 0007ce02 70bc
.org 0x7ce04
	pop {r0}	@ 0007ce04 01bc
.org 0x7ce06
	bx r0	@ 0007ce06 0047
