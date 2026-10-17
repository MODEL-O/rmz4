@ FUN_080ccda0  entry 0x080ccda0  size 176
.thumb
.org 0xccda0
FUN_080ccda0:
	push {r4, r5, r6, r7, lr}	@ 000ccda0 f0b5
.org 0xccda2
	adds r5, r0, #0	@ 000ccda2 051c
.org 0xccda4
	ldr r1, [pc, #76]	@ 000ccda4 1349
.org 0xccda6
	ldrb r0, [r5, #9]	@ 000ccda6 687a
.org 0xccda8
	lsls r0, r0, #2	@ 000ccda8 8000
.org 0xccdaa
	adds r0, r0, r1	@ 000ccdaa 4018
.org 0xccdac
	movs r4, #1	@ 000ccdac 0124
.org 0xccdae
	str r4, [r5, #12]	@ 000ccdae ec60
.org 0xccdb0
	ldr r0, [r0, #0]	@ 000ccdb0 0068
.org 0xccdb2
	ldr r0, [r0, #4]	@ 000ccdb2 4068
.org 0xccdb4
	str r0, [r5, #20]	@ 000ccdb4 6861
.org 0xccdb6
	adds r0, r5, #0	@ 000ccdb6 281c
.org 0xccdb8
	bl 0x1cc9c	@ 000ccdb8 4ff770ff
.org 0xccdbc
	ldrb r1, [r5, #10]	@ 000ccdbc a97a
.org 0xccdbe
	movs r0, #2	@ 000ccdbe 0220
.org 0xccdc0
	movs r7, #0	@ 000ccdc0 0027
.org 0xccdc2
	adds r3, r0, #0	@ 000ccdc2 031c
.org 0xccdc4
	orrs r3, r1	@ 000ccdc4 0b43
.org 0xccdc6
	strb r3, [r5, #10]	@ 000ccdc6 ab72
.org 0xccdc8
	ldr r2, [pc, #44]	@ 000ccdc8 0b4a
.org 0xccdca
	ldr r1, [pc, #48]	@ 000ccdca 0c49
.org 0xccdcc
	ldrb r0, [r5, #16]	@ 000ccdcc 287c
.org 0xccdce
	lsls r0, r0, #2	@ 000ccdce 8000
.org 0xccdd0
	adds r0, r0, r1	@ 000ccdd0 4018
.org 0xccdd2
	ldr r1, [r0, #0]	@ 000ccdd2 0168
.org 0xccdd4
	lsrs r0, r1, #3	@ 000ccdd4 c808
.org 0xccdd6
	adds r2, #4	@ 000ccdd6 0432
.org 0xccdd8
	adds r0, r0, r2	@ 000ccdd8 8018
.org 0xccdda
	ldrb r6, [r0, #0]	@ 000ccdda 0678
.org 0xccddc
	movs r0, #7	@ 000ccddc 0720
.org 0xccdde
	ands r1, r0	@ 000ccdde 0140
.org 0xccde0
	asrs r6, r1	@ 000ccde0 0e41
.org 0xccde2
	ands r6, r4	@ 000ccde2 2640
.org 0xccde4
	cmp r6, #0	@ 000ccde4 002e
.org 0xccde6
	beq.n 0xcce00	@ 000ccde6 0bd0
.org 0xccde8
	movs r0, #254	@ 000ccde8 fe20
.org 0xccdea
	ands r3, r0	@ 000ccdea 0340
.org 0xccdec
	strb r3, [r5, #10]	@ 000ccdec ab72
.org 0xccdee
	strb r4, [r5, #13]	@ 000ccdee 6c73
.org 0xccdf0
	b.n 0xcce2e	@ 000ccdf0 1de0
.org 0xccdf2
	.byte 0x00	@ 000ccdf2 data
.org 0xccdf3
	.byte 0x00	@ 000ccdf3 data
.org 0xccdf4
	.byte 0xf4,0x49,0x86,0x08	@ 000ccdf4 data
.org 0xccdf8
	.byte 0xb0,0xe8,0x02,0x02	@ 000ccdf8 data
.org 0xccdfc
	.byte 0x9c,0x68,0x86,0x08	@ 000ccdfc data
.org 0xcce00
	movs r0, #1	@ 000cce00 0120
.org 0xcce02
	orrs r3, r0	@ 000cce02 0343
.org 0xcce04
	strb r3, [r5, #10]	@ 000cce04 ab72
.org 0xcce06
	movs r1, #189	@ 000cce06 bd21
.org 0xcce08
	lsls r1, r1, #8	@ 000cce08 0902
.org 0xcce0a
	adds r0, r5, #0	@ 000cce0a 281c
.org 0xcce0c
	bl 0x1cf00	@ 000cce0c 50f778f8
.org 0xcce10
	ldrb r0, [r5, #10]	@ 000cce10 a87a
.org 0xcce12
	movs r1, #4	@ 000cce12 0421
.org 0xcce14
	orrs r0, r1	@ 000cce14 0843
.org 0xcce16
	strb r0, [r5, #10]	@ 000cce16 a872
.org 0xcce18
	adds r4, r5, #0	@ 000cce18 2c1c
.org 0xcce1a
	adds r4, #116	@ 000cce1a 7434
.org 0xcce1c
	ldr r1, [pc, #64]	@ 000cce1c 1049
.org 0xcce1e
	adds r2, r5, #0	@ 000cce1e 2a1c
.org 0xcce20
	adds r2, #84	@ 000cce20 5432
.org 0xcce22
	adds r0, r4, #0	@ 000cce22 201c
.org 0xcce24
	movs r3, #8	@ 000cce24 0823
.org 0xcce26
	bl 0x5760	@ 000cce26 38f79bfc
.org 0xcce2a
	str r5, [r4, #44]	@ 000cce2a e562
.org 0xcce2c
	str r6, [r4, #36]	@ 000cce2c 6662
.org 0xcce2e
	adds r0, r5, #0	@ 000cce2e 281c
.org 0xcce30
	bl 0x1cff0	@ 000cce30 50f7def8
.org 0xcce34
	movs r2, #0	@ 000cce34 0022
.org 0xcce36
	ldrb r1, [r5, #10]	@ 000cce36 a97a
.org 0xcce38
	movs r0, #239	@ 000cce38 ef20
.org 0xcce3a
	ands r0, r1	@ 000cce3a 0840
.org 0xcce3c
	strb r0, [r5, #10]	@ 000cce3c a872
.org 0xcce3e
	adds r0, r5, #0	@ 000cce3e 281c
.org 0xcce40
	adds r0, #76	@ 000cce40 4c30
.org 0xcce42
	strb r2, [r0, #0]	@ 000cce42 0270
.org 0xcce44
	adds r2, r5, #0	@ 000cce44 2a1c
.org 0xcce46
	adds r2, #74	@ 000cce46 4a32
.org 0xcce48
	ldrb r1, [r2, #0]	@ 000cce48 1178
.org 0xcce4a
	movs r0, #17	@ 000cce4a 1120
.org 0xcce4c
	negs r0, r0	@ 000cce4c 4042
.org 0xcce4e
	ands r0, r1	@ 000cce4e 0840
