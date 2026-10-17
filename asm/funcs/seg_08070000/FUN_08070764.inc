@ FUN_08070764  entry 0x08070764  size 132
.thumb
.org 0x70764
FUN_08070764:
	push {r4, r5, r6, lr}	@ 00070764 70b5
.org 0x70766
	adds r6, r0, #0	@ 00070766 061c
.org 0x70768
	ldrb r0, [r6, #15]	@ 00070768 f07b
.org 0x7076a
	cmp r0, #0	@ 0007076a 0028
.org 0x7076c
	bne.n 0x7077c	@ 0007076c 06d1
.org 0x7076e
	adds r0, r6, #0	@ 0007076e 301c
.org 0x70770
	movs r1, #0	@ 00070770 0021
.org 0x70772
	bl 0x736c4	@ 00070772 02f0a7ff
.org 0x70776
	ldrb r0, [r6, #15]	@ 00070776 f07b
.org 0x70778
	adds r0, #1	@ 00070778 0130
.org 0x7077a
	strb r0, [r6, #15]	@ 0007077a f073
.org 0x7077c
	adds r0, r6, #0	@ 0007077c 301c
.org 0x7077e
	bl 0x1cff0	@ 0007077e acf737fc
.org 0x70782
	adds r0, r6, #0	@ 00070782 301c
.org 0x70784
	adds r0, #116	@ 00070784 7430
.org 0x70786
	ldr r4, [pc, #96]	@ 00070786 184c
.org 0x70788
	ldr r3, [pc, #96]	@ 00070788 184b
.org 0x7078a
	adds r1, r6, #0	@ 0007078a 311c
.org 0x7078c
	adds r1, #184	@ 0007078c b831
.org 0x7078e
	ldrb r2, [r1, #0]	@ 0007078e 0a78
.org 0x70790
	lsls r1, r2, #1	@ 00070790 5100
.org 0x70792
	adds r1, r1, r3	@ 00070792 c918
.org 0x70794
	ldrh r1, [r1, #0]	@ 00070794 0988
.org 0x70796
	lsls r1, r1, #2	@ 00070796 8900
.org 0x70798
	adds r1, r1, r4	@ 00070798 0919
.org 0x7079a
	adds r3, r6, #0	@ 0007079a 331c
.org 0x7079c
	adds r3, #113	@ 0007079c 7133
.org 0x7079e
	movs r5, #0	@ 0007079e 0025
.org 0x707a0
	ldrsb r5, [r3, r5]	@ 000707a0 5d57
.org 0x707a2
	ldr r1, [r1, #0]	@ 000707a2 0968
.org 0x707a4
	lsls r3, r5, #2	@ 000707a4 ab00
.org 0x707a6
	adds r3, r3, r1	@ 000707a6 5b18
.org 0x707a8
	ldr r4, [pc, #68]	@ 000707a8 114c
.org 0x707aa
	adds r1, r6, #0	@ 000707aa 311c
.org 0x707ac
	adds r1, #185	@ 000707ac b931
.org 0x707ae
	ldrb r1, [r1, #0]	@ 000707ae 0978
.org 0x707b0
	lsls r1, r1, #2	@ 000707b0 8900
.org 0x707b2
	adds r1, r1, r4	@ 000707b2 0919
.org 0x707b4
	ldr r1, [r1, #0]	@ 000707b4 0968
.org 0x707b6
	lsls r2, r2, #2	@ 000707b6 9200
.org 0x707b8
	adds r2, r2, r1	@ 000707b8 5218
.org 0x707ba
	ldr r1, [r2, #0]	@ 000707ba 1168
.org 0x707bc
	adds r1, r1, r5	@ 000707bc 4919
.org 0x707be
	ldrb r1, [r1, #0]	@ 000707be 0978
.org 0x707c0
	lsls r2, r1, #1	@ 000707c0 4a00
.org 0x707c2
	adds r2, r2, r1	@ 000707c2 5218
.org 0x707c4
	lsls r2, r2, #3	@ 000707c4 d200
.org 0x707c6
	ldr r1, [r3, #0]	@ 000707c6 1968
.org 0x707c8
	adds r1, r1, r2	@ 000707c8 8918
.org 0x707ca
	bl 0x5784	@ 000707ca 94f7dbff
.org 0x707ce
	ldr r0, [pc, #36]	@ 000707ce 0948
.org 0x707d0
	ldrb r0, [r0, #18]	@ 000707d0 807c
.org 0x707d2
	movs r1, #1	@ 000707d2 0121
.org 0x707d4
	ands r1, r0	@ 000707d4 0140
.org 0x707d6
	cmp r1, #0	@ 000707d6 0029
.org 0x707d8
	bne.n 0x707e2	@ 000707d8 03d1
.org 0x707da
	ldrb r0, [r6, #14]	@ 000707da b07b
.org 0x707dc
	adds r0, #1	@ 000707dc 0130
.org 0x707de
	strb r0, [r6, #14]	@ 000707de b073
.org 0x707e0
	strb r1, [r6, #15]	@ 000707e0 f173
.org 0x707e2
	pop {r4, r5, r6}	@ 000707e2 70bc
.org 0x707e4
	pop {r0}	@ 000707e4 01bc
.org 0x707e6
	bx r0	@ 000707e6 0047
