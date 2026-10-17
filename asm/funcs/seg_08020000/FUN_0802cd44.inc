@ FUN_0802cd44  entry 0x0802cd44  size 172
.thumb
.org 0x2cd44
FUN_0802cd44:
	push {r4, r5, r6, r7, lr}	@ 0002cd44 f0b5
.org 0x2cd46
	mov r7, sl	@ 0002cd46 5746
.org 0x2cd48
	mov r6, r9	@ 0002cd48 4e46
.org 0x2cd4a
	mov r5, r8	@ 0002cd4a 4546
.org 0x2cd4c
	push {r5, r6, r7}	@ 0002cd4c e0b4
.org 0x2cd4e
	mov ip, r0	@ 0002cd4e 8446
.org 0x2cd50
	ldr r0, [r0, #84]	@ 0002cd50 406d
.org 0x2cd52
	mov sl, r0	@ 0002cd52 8246
.org 0x2cd54
	mov r1, ip	@ 0002cd54 6146
.org 0x2cd56
	ldr r0, [r1, #88]	@ 0002cd56 886d
.org 0x2cd58
	ldr r2, [pc, #148]	@ 0002cd58 254a
.org 0x2cd5a
	adds r2, r2, r0	@ 0002cd5a 1218
.org 0x2cd5c
	mov r9, r2	@ 0002cd5c 9146
.org 0x2cd5e
	movs r1, #220	@ 0002cd5e dc21
.org 0x2cd60
	lsls r1, r1, #1	@ 0002cd60 4900
.org 0x2cd62
	add r1, ip	@ 0002cd62 6144
.org 0x2cd64
	movs r0, #0	@ 0002cd64 0020
.org 0x2cd66
	strb r0, [r1, #0]	@ 0002cd66 0870
.org 0x2cd68
	movs r4, #0	@ 0002cd68 0024
.org 0x2cd6a
	ldr r2, [pc, #136]	@ 0002cd6a 224a
.org 0x2cd6c
	movs r3, #233	@ 0002cd6c e923
.org 0x2cd6e
	lsls r3, r3, #1	@ 0002cd6e 5b00
.org 0x2cd70
	adds r0, r2, r3	@ 0002cd70 d018
.org 0x2cd72
	ldrb r0, [r0, #0]	@ 0002cd72 0078
.org 0x2cd74
	cmp r4, r0	@ 0002cd74 8442
.org 0x2cd76
	bcs.n 0x2cde2	@ 0002cd76 34d2
.org 0x2cd78
	adds r6, r2, #0	@ 0002cd78 161c
.org 0x2cd7a
	adds r5, r1, #0	@ 0002cd7a 0d1c
.org 0x2cd7c
	mov r8, r0	@ 0002cd7c 8046
.org 0x2cd7e
	lsls r0, r4, #1	@ 0002cd7e 6000
.org 0x2cd80
	adds r0, r0, r4	@ 0002cd80 0019
.org 0x2cd82
	lsls r2, r0, #3	@ 0002cd82 c200
.org 0x2cd84
	ldr r7, [pc, #112]	@ 0002cd84 1c4f
.org 0x2cd86
	adds r0, r2, r7	@ 0002cd86 d019
.org 0x2cd88
	ldr r1, [r0, #0]	@ 0002cd88 0168
.org 0x2cd8a
	mov r0, sl	@ 0002cd8a 5046
.org 0x2cd8c
	subs r1, r0, r1	@ 0002cd8c 411a
.org 0x2cd8e
	adds r3, r2, r6	@ 0002cd8e 9319
.org 0x2cd90
	movs r7, #236	@ 0002cd90 ec27
.org 0x2cd92
	lsls r7, r7, #1	@ 0002cd92 7f00
.org 0x2cd94
	adds r0, r3, r7	@ 0002cd94 d819
.org 0x2cd96
	ldrh r0, [r0, #0]	@ 0002cd96 0088
.org 0x2cd98
	movs r7, #248	@ 0002cd98 f827
.org 0x2cd9a
	lsls r7, r7, #5	@ 0002cd9a 7f01
.org 0x2cd9c
	adds r0, r7, r0	@ 0002cd9c 3818
.org 0x2cd9e
	adds r1, r1, r0	@ 0002cd9e 0918
.org 0x2cda0
	lsls r0, r0, #1	@ 0002cda0 4000
.org 0x2cda2
	cmp r1, r0	@ 0002cda2 8142
.org 0x2cda4
	bcs.n 0x2cdd8	@ 0002cda4 18d2
.org 0x2cda6
	ldr r1, [pc, #84]	@ 0002cda6 1549
.org 0x2cda8
	adds r0, r2, r1	@ 0002cda8 5018
.org 0x2cdaa
	ldr r1, [r0, #0]	@ 0002cdaa 0168
.org 0x2cdac
	mov r2, r9	@ 0002cdac 4a46
.org 0x2cdae
	subs r1, r2, r1	@ 0002cdae 511a
.org 0x2cdb0
	movs r7, #237	@ 0002cdb0 ed27
.org 0x2cdb2
	lsls r7, r7, #1	@ 0002cdb2 7f00
.org 0x2cdb4
	adds r0, r3, r7	@ 0002cdb4 d819
.org 0x2cdb6
	ldrh r0, [r0, #0]	@ 0002cdb6 0088
.org 0x2cdb8
	movs r2, #248	@ 0002cdb8 f822
.org 0x2cdba
	lsls r2, r2, #5	@ 0002cdba 5201
.org 0x2cdbc
	adds r0, r2, r0	@ 0002cdbc 1018
.org 0x2cdbe
	adds r1, r1, r0	@ 0002cdbe 0918
.org 0x2cdc0
	lsls r0, r0, #1	@ 0002cdc0 4000
.org 0x2cdc2
	cmp r1, r0	@ 0002cdc2 8142
.org 0x2cdc4
	bcs.n 0x2cdd8	@ 0002cdc4 08d2
.org 0x2cdc6
	movs r0, #196	@ 0002cdc6 c420
.org 0x2cdc8
	lsls r0, r0, #1	@ 0002cdc8 4000
.org 0x2cdca
	add r0, ip	@ 0002cdca 6044
.org 0x2cdcc
	ldrb r3, [r5, #0]	@ 0002cdcc 2b78
.org 0x2cdce
	adds r0, r0, r3	@ 0002cdce c018
.org 0x2cdd0
	strb r4, [r0, #0]	@ 0002cdd0 0470
.org 0x2cdd2
	ldrb r0, [r5, #0]	@ 0002cdd2 2878
.org 0x2cdd4
	adds r0, #1	@ 0002cdd4 0130
.org 0x2cdd6
	strb r0, [r5, #0]	@ 0002cdd6 2870
.org 0x2cdd8
	adds r0, r4, #1	@ 0002cdd8 601c
.org 0x2cdda
	lsls r0, r0, #24	@ 0002cdda 0006
.org 0x2cddc
	lsrs r4, r0, #24	@ 0002cddc 040e
.org 0x2cdde
	cmp r4, r8	@ 0002cdde 4445
.org 0x2cde0
	bcc.n 0x2cd7e	@ 0002cde0 cdd3
.org 0x2cde2
	pop {r3, r4, r5}	@ 0002cde2 38bc
.org 0x2cde4
	mov r8, r3	@ 0002cde4 9846
.org 0x2cde6
	mov r9, r4	@ 0002cde6 a146
.org 0x2cde8
	mov sl, r5	@ 0002cde8 aa46
.org 0x2cdea
	pop {r4, r5, r6, r7}	@ 0002cdea f0bc
.org 0x2cdec
	pop {r0}	@ 0002cdec 01bc
.org 0x2cdee
	bx r0	@ 0002cdee 0047
