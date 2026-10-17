@ FUN_0811fe54  entry 0x0811fe54  size 298
.thumb
.org 0x11fe54
FUN_0811fe54:
	push {r4, r5, r6, r7, lr}	@ 0011fe54 f0b5
.org 0x11fe56
	mov r7, r8	@ 0011fe56 4746
.org 0x11fe58
	push {r7}	@ 0011fe58 80b4
.org 0x11fe5a
	adds r5, r0, #0	@ 0011fe5a 051c
.org 0x11fe5c
	bl 0x120aa8	@ 0011fe5c 00f024fe
.org 0x11fe60
	movs r4, #0	@ 0011fe60 0024
.org 0x11fe62
	ldr r7, [pc, #12]	@ 0011fe62 034f
.org 0x11fe64
	ldr r0, [pc, #12]	@ 0011fe64 0348
.org 0x11fe66
	adds r0, r0, r7	@ 0011fe66 c019
.org 0x11fe68
	mov r8, r0	@ 0011fe68 8046
.org 0x11fe6a
	ldr r6, [pc, #12]	@ 0011fe6a 034e
.org 0x11fe6c
	b.n 0x11fe9c	@ 0011fe6c 16e0
.org 0x11fe6e
	.byte 0x00	@ 0011fe6e data
.org 0x11fe6f
	.byte 0x00	@ 0011fe6f data
.org 0x11fe70
	.byte 0xf8,0xcf,0x86,0x08	@ 0011fe70 data
.org 0x11fe74
	.byte 0xbe,0x03,0x00,0x00	@ 0011fe74 data
.org 0x11fe78
	.byte 0x5f,0x0e,0x01,0x09	@ 0011fe78 data
.org 0x11fe7c
	ldrb r0, [r1, #0]	@ 0011fe7c 0878
.org 0x11fe7e
	movs r1, #150	@ 0011fe7e 9621
.org 0x11fe80
	lsls r1, r1, #2	@ 0011fe80 8900
.org 0x11fe82
	adds r0, r0, r1	@ 0011fe82 4018
.org 0x11fe84
	lsls r0, r0, #1	@ 0011fe84 4000
.org 0x11fe86
	adds r0, r0, r7	@ 0011fe86 c019
.org 0x11fe88
	ldrh r0, [r0, #0]	@ 0011fe88 0088
.org 0x11fe8a
	adds r0, r0, r6	@ 0011fe8a 8019
.org 0x11fe8c
	lsls r2, r4, #1	@ 0011fe8c 6200
.org 0x11fe8e
	adds r2, #2	@ 0011fe8e 0232
.org 0x11fe90
	movs r1, #2	@ 0011fe90 0221
.org 0x11fe92
	bl 0x10d85c	@ 0011fe92 edf7e3fc
.org 0x11fe96
	adds r0, r4, #1	@ 0011fe96 601c
.org 0x11fe98
	lsls r0, r0, #24	@ 0011fe98 0006
.org 0x11fe9a
	lsrs r4, r0, #24	@ 0011fe9a 040e
.org 0x11fe9c
	cmp r4, #6	@ 0011fe9c 062c
.org 0x11fe9e
	bhi.n 0x11febe	@ 0011fe9e 0ed8
.org 0x11fea0
	ldr r2, [pc, #136]	@ 0011fea0 224a
.org 0x11fea2
	adds r0, r5, r2	@ 0011fea2 a818
.org 0x11fea4
	adds r1, r0, r4	@ 0011fea4 0119
.org 0x11fea6
	ldrb r0, [r1, #0]	@ 0011fea6 0878
.org 0x11fea8
	cmp r0, #255	@ 0011fea8 ff28
.org 0x11feaa
	bne.n 0x11fe7c	@ 0011feaa e7d1
.org 0x11feac
	cmp r4, #0	@ 0011feac 002c
.org 0x11feae
	bne.n 0x11febe	@ 0011feae 06d1
.org 0x11feb0
	mov r1, r8	@ 0011feb0 4146
.org 0x11feb2
	ldrh r0, [r1, #0]	@ 0011feb2 0888
.org 0x11feb4
	adds r0, r0, r6	@ 0011feb4 8019
.org 0x11feb6
	movs r1, #2	@ 0011feb6 0221
.org 0x11feb8
	movs r2, #2	@ 0011feb8 0222
.org 0x11feba
	bl 0x10d85c	@ 0011feba edf7cffc
.org 0x11febe
	ldrb r0, [r5, #3]	@ 0011febe e878
.org 0x11fec0
	cmp r0, #1	@ 0011fec0 0128
.org 0x11fec2
	bhi.n 0x11ff3c	@ 0011fec2 3bd8
.org 0x11fec4
	movs r4, #0	@ 0011fec4 0024
.org 0x11fec6
	movs r6, #0	@ 0011fec6 0026
.org 0x11fec8
	ldr r5, [pc, #100]	@ 0011fec8 194d
.org 0x11feca
	movs r3, #7	@ 0011feca 0723
.org 0x11fecc
	movs r2, #1	@ 0011fecc 0122
.org 0x11fece
	adds r0, r4, #0	@ 0011fece 201c
.org 0x11fed0
	adds r0, #60	@ 0011fed0 3c30
.org 0x11fed2
	asrs r1, r0, #3	@ 0011fed2 c110
.org 0x11fed4
	adds r1, r1, r5	@ 0011fed4 4919
.org 0x11fed6
	ldrb r1, [r1, #0]	@ 0011fed6 0978
.org 0x11fed8
	ands r0, r3	@ 0011fed8 1840
.org 0x11feda
	asrs r1, r0	@ 0011feda 0141
.org 0x11fedc
	ands r1, r2	@ 0011fedc 1140
.org 0x11fede
	cmp r1, #0	@ 0011fede 0029
.org 0x11fee0
	beq.n 0x11fee8	@ 0011fee0 02d0
.org 0x11fee2
	adds r0, r6, #1	@ 0011fee2 701c
.org 0x11fee4
	lsls r0, r0, #24	@ 0011fee4 0006
.org 0x11fee6
	lsrs r6, r0, #24	@ 0011fee6 060e
.org 0x11fee8
	adds r0, r4, #1	@ 0011fee8 601c
.org 0x11feea
	lsls r0, r0, #24	@ 0011feea 0006
.org 0x11feec
	lsrs r4, r0, #24	@ 0011feec 040e
.org 0x11feee
	cmp r4, #15	@ 0011feee 0f2c
.org 0x11fef0
	bls.n 0x11fece	@ 0011fef0 edd9
.org 0x11fef2
	adds r0, r6, #0	@ 0011fef2 301c
.org 0x11fef4
	movs r1, #21	@ 0011fef4 1521
.org 0x11fef6
	movs r2, #1	@ 0011fef6 0122
.org 0x11fef8
	bl 0x118348	@ 0011fef8 f8f726fa
.org 0x11fefc
	ldr r4, [pc, #52]	@ 0011fefc 0d4c
.org 0x11fefe
	ldrh r0, [r4, #12]	@ 0011fefe a089
.org 0x11ff00
	ldr r5, [pc, #52]	@ 0011ff00 0d4d
.org 0x11ff02
	adds r0, r0, r5	@ 0011ff02 4019
.org 0x11ff04
	movs r1, #22	@ 0011ff04 1621
.org 0x11ff06
	movs r2, #1	@ 0011ff06 0122
.org 0x11ff08
	bl 0x10d85c	@ 0011ff08 edf7a8fc
.org 0x11ff0c
	movs r0, #16	@ 0011ff0c 1020
.org 0x11ff0e
	movs r1, #24	@ 0011ff0e 1821
.org 0x11ff10
	movs r2, #1	@ 0011ff10 0122
.org 0x11ff12
	bl 0x118348	@ 0011ff12 f8f719fa
.org 0x11ff16
	movs r2, #174	@ 0011ff16 ae22
.org 0x11ff18
	lsls r2, r2, #3	@ 0011ff18 d200
.org 0x11ff1a
	adds r4, r4, r2	@ 0011ff1a a418
.org 0x11ff1c
	ldrh r0, [r4, #0]	@ 0011ff1c 2088
.org 0x11ff1e
	adds r0, r0, r5	@ 0011ff1e 4019
.org 0x11ff20
	movs r1, #17	@ 0011ff20 1121
.org 0x11ff22
	movs r2, #5	@ 0011ff22 0522
.org 0x11ff24
	bl 0x10d85c	@ 0011ff24 edf79afc
.org 0x11ff28
	b.n 0x11ffa8	@ 0011ff28 3ee0
.org 0x11ff2a
	.byte 0x00	@ 0011ff2a data
.org 0x11ff2b
	.byte 0x00	@ 0011ff2b data
.org 0x11ff2c
	.byte 0xd2,0x0d,0x00,0x00	@ 0011ff2c data
.org 0x11ff30
	.byte 0x70,0x0a,0x00,0x02	@ 0011ff30 data
.org 0x11ff34
	.byte 0xf8,0xcf,0x86,0x08	@ 0011ff34 data
.org 0x11ff38
	.byte 0x5f,0x0e,0x01,0x09	@ 0011ff38 data
.org 0x11ff3c
	ldr r0, [pc, #36]	@ 0011ff3c 0948
.org 0x11ff3e
	adds r1, r5, r0	@ 0011ff3e 2918
.org 0x11ff40
	ldr r2, [pc, #36]	@ 0011ff40 094a
.org 0x11ff42
	adds r0, r5, r2	@ 0011ff42 a818
.org 0x11ff44
	ldrb r1, [r1, #2]	@ 0011ff44 8978
.org 0x11ff46
	adds r0, r0, r1	@ 0011ff46 4018
.org 0x11ff48
	ldrb r6, [r0, #0]	@ 0011ff48 0678
.org 0x11ff4a
	cmp r6, #255	@ 0011ff4a ff2e
.org 0x11ff4c
	bne.n 0x11ff78	@ 0011ff4c 14d1
.org 0x11ff4e
	ldr r0, [pc, #28]	@ 0011ff4e 0748
.org 0x11ff50
	ldr r1, [pc, #28]	@ 0011ff50 0749
.org 0x11ff52
	adds r0, r0, r1	@ 0011ff52 4018
.org 0x11ff54
	ldrh r0, [r0, #0]	@ 0011ff54 0088
.org 0x11ff56
	ldr r1, [pc, #28]	@ 0011ff56 0749
.org 0x11ff58
	adds r0, r0, r1	@ 0011ff58 4018
.org 0x11ff5a
	movs r1, #17	@ 0011ff5a 1121
.org 0x11ff5c
	movs r2, #1	@ 0011ff5c 0122
.org 0x11ff5e
	bl 0x10d85c	@ 0011ff5e edf77dfc
.org 0x11ff62
	b.n 0x11ffa8	@ 0011ff62 21e0
.org 0x11ff64
	.byte 0xcc,0x0d,0x00,0x00	@ 0011ff64 data
.org 0x11ff68
	.byte 0xd2,0x0d,0x00,0x00	@ 0011ff68 data
.org 0x11ff6c
	.byte 0xf8,0xcf,0x86,0x08	@ 0011ff6c data
.org 0x11ff70
	.byte 0xbe,0x03,0x00,0x00	@ 0011ff70 data
.org 0x11ff74
	.byte 0x5f,0x0e,0x01,0x09	@ 0011ff74 data
.org 0x11ff78
	ldr r5, [pc, #56]	@ 0011ff78 0e4d
.org 0x11ff7a
	movs r2, #150	@ 0011ff7a 9622
.org 0x11ff7c
	lsls r2, r2, #2	@ 0011ff7c 9200
