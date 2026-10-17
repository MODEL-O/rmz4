@ FUN_080cfd60  entry 0x080cfd60  size 144
.thumb
.org 0xcfd60
FUN_080cfd60:
	push {r4, r5, r6, lr}	@ 000cfd60 70b5
.org 0xcfd62
	adds r6, r0, #0	@ 000cfd62 061c
.org 0xcfd64
	ldr r1, [pc, #136]	@ 000cfd64 2249
.org 0xcfd66
	ldrb r0, [r6, #9]	@ 000cfd66 707a
.org 0xcfd68
	lsls r0, r0, #2	@ 000cfd68 8000
.org 0xcfd6a
	adds r0, r0, r1	@ 000cfd6a 4018
.org 0xcfd6c
	movs r1, #1	@ 000cfd6c 0121
.org 0xcfd6e
	str r1, [r6, #12]	@ 000cfd6e f160
.org 0xcfd70
	ldr r0, [r0, #0]	@ 000cfd70 0068
.org 0xcfd72
	ldr r0, [r0, #4]	@ 000cfd72 4068
.org 0xcfd74
	str r0, [r6, #20]	@ 000cfd74 7061
.org 0xcfd76
	ldrb r1, [r6, #10]	@ 000cfd76 b17a
.org 0xcfd78
	movs r0, #1	@ 000cfd78 0120
.org 0xcfd7a
	orrs r0, r1	@ 000cfd7a 0843
.org 0xcfd7c
	movs r1, #2	@ 000cfd7c 0221
.org 0xcfd7e
	orrs r0, r1	@ 000cfd7e 0843
.org 0xcfd80
	strb r0, [r6, #10]	@ 000cfd80 b072
.org 0xcfd82
	adds r1, r6, #0	@ 000cfd82 311c
.org 0xcfd84
	adds r1, #180	@ 000cfd84 b431
.org 0xcfd86
	movs r0, #128	@ 000cfd86 8020
.org 0xcfd88
	lsls r0, r0, #3	@ 000cfd88 c000
.org 0xcfd8a
	str r0, [r1, #0]	@ 000cfd8a 0860
.org 0xcfd8c
	adds r1, #4	@ 000cfd8c 0431
.org 0xcfd8e
	movs r0, #128	@ 000cfd8e 8020
.org 0xcfd90
	lsls r0, r0, #1	@ 000cfd90 4000
.org 0xcfd92
	strh r0, [r1, #0]	@ 000cfd92 0880
.org 0xcfd94
	movs r0, #40	@ 000cfd94 2820
.org 0xcfd96
	strb r0, [r6, #18]	@ 000cfd96 b074
.org 0xcfd98
	adds r0, r6, #0	@ 000cfd98 301c
.org 0xcfd9a
	bl 0x1cdbc	@ 000cfd9a 4df70ff8
.org 0xcfd9e
	movs r5, #0	@ 000cfd9e 0025
.org 0xcfda0
	ldrb r1, [r6, #10]	@ 000cfda0 b17a
.org 0xcfda2
	movs r0, #239	@ 000cfda2 ef20
.org 0xcfda4
	ands r0, r1	@ 000cfda4 0840
.org 0xcfda6
	strb r0, [r6, #10]	@ 000cfda6 b072
.org 0xcfda8
	adds r0, r6, #0	@ 000cfda8 301c
.org 0xcfdaa
	adds r0, #76	@ 000cfdaa 4c30
.org 0xcfdac
	strb r5, [r0, #0]	@ 000cfdac 0570
.org 0xcfdae
	adds r2, r6, #0	@ 000cfdae 321c
.org 0xcfdb0
	adds r2, #74	@ 000cfdb0 4a32
.org 0xcfdb2
	ldrb r1, [r2, #0]	@ 000cfdb2 1178
.org 0xcfdb4
	movs r0, #17	@ 000cfdb4 1120
.org 0xcfdb6
	negs r0, r0	@ 000cfdb6 4042
.org 0xcfdb8
	ands r0, r1	@ 000cfdb8 0840
.org 0xcfdba
	strb r0, [r2, #0]	@ 000cfdba 1070
.org 0xcfdbc
	movs r1, #231	@ 000cfdbc e721
.org 0xcfdbe
	lsls r1, r1, #8	@ 000cfdbe 0902
.org 0xcfdc0
	adds r0, r6, #0	@ 000cfdc0 301c
.org 0xcfdc2
	bl 0x1cf00	@ 000cfdc2 4df79df8
.org 0xcfdc6
	ldrb r1, [r6, #10]	@ 000cfdc6 b17a
.org 0xcfdc8
	movs r0, #4	@ 000cfdc8 0420
.org 0xcfdca
	orrs r0, r1	@ 000cfdca 0843
.org 0xcfdcc
	strb r0, [r6, #10]	@ 000cfdcc b072
.org 0xcfdce
	adds r4, r6, #0	@ 000cfdce 341c
.org 0xcfdd0
	adds r4, #116	@ 000cfdd0 7434
.org 0xcfdd2
	ldr r1, [pc, #32]	@ 000cfdd2 0849
.org 0xcfdd4
	adds r2, r6, #0	@ 000cfdd4 321c
.org 0xcfdd6
	adds r2, #84	@ 000cfdd6 5432
.org 0xcfdd8
	adds r0, r4, #0	@ 000cfdd8 201c
.org 0xcfdda
	movs r3, #64	@ 000cfdda 4023
.org 0xcfddc
	bl 0x5760	@ 000cfddc 35f7c0fc
.org 0xcfde0
	str r6, [r4, #44]	@ 000cfde0 e662
.org 0xcfde2
	str r5, [r4, #36]	@ 000cfde2 6562
.org 0xcfde4
	adds r0, r6, #0	@ 000cfde4 301c
.org 0xcfde6
	bl 0xcfdf8	@ 000cfde6 00f007f8
.org 0xcfdea
	pop {r4, r5, r6}	@ 000cfdea 70bc
.org 0xcfdec
	pop {r0}	@ 000cfdec 01bc
.org 0xcfdee
	bx r0	@ 000cfdee 0047
