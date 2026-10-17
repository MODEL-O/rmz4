@ FUN_08007770  entry 0x08007770  size 150
.thumb
.org 0x7770
FUN_08007770:
	push {r4, r5, r6, lr}	@ 00007770 70b5
.org 0x7772
	adds r3, r0, #0	@ 00007772 031c
.org 0x7774
	adds r5, r1, #0	@ 00007774 0d1c
.org 0x7776
	ldr r4, [pc, #56]	@ 00007776 0e4c
.org 0x7778
	movs r1, #232	@ 00007778 e821
.org 0x777a
	lsls r1, r1, #1	@ 0000777a 4900
.org 0x777c
	adds r0, r4, r1	@ 0000777c 6018
.org 0x777e
	ldrh r0, [r0, #0]	@ 0000777e 0088
.org 0x7780
	movs r1, #127	@ 00007780 7f21
.org 0x7782
	ands r1, r0	@ 00007782 0140
.org 0x7784
	cmp r1, #4	@ 00007784 0429
.org 0x7786
	bne.n 0x77c0	@ 00007786 1bd1
.org 0x7788
	ldr r1, [pc, #40]	@ 00007788 0a49
.org 0x778a
	ldr r2, [pc, #44]	@ 0000778a 0b4a
.org 0x778c
	adds r0, r4, r2	@ 0000778c a018
.org 0x778e
	ldrb r0, [r0, #0]	@ 0000778e 0078
.org 0x7790
	lsrs r0, r0, #4	@ 00007790 0009
.org 0x7792
	lsls r0, r0, #2	@ 00007792 8000
.org 0x7794
	adds r0, #32	@ 00007794 2030
.org 0x7796
	adds r0, r0, r1	@ 00007796 4018
.org 0x7798
	ldr r4, [r0, #0]	@ 00007798 0468
.org 0x779a
	ldr r6, [pc, #32]	@ 0000779a 084e
.org 0x779c
	adds r0, r3, r6	@ 0000779c 9819
.org 0x779e
	movs r1, #240	@ 0000779e f021
.org 0x77a0
	lsls r1, r1, #10	@ 000077a0 8902
.org 0x77a2
	bl 0x129050	@ 000077a2 21f155fc
.org 0x77a6
	movs r1, #240	@ 000077a6 f021
.org 0x77a8
	lsls r1, r1, #8	@ 000077a8 0902
.org 0x77aa
	adds r3, r0, r1	@ 000077aa 4318
.org 0x77ac
	b.n 0x77f4	@ 000077ac 22e0
.org 0x77ae
	.byte 0x00	@ 000077ae data
.org 0x77af
	.byte 0x00	@ 000077af data
.org 0x77b0
	.byte 0xb0,0x0a,0x00,0x02	@ 000077b0 data
.org 0x77b4
	.byte 0xd4,0xc5,0x82,0x08	@ 000077b4 data
.org 0x77b8
	.byte 0x10,0xc0,0x02,0x00	@ 000077b8 data
.org 0x77bc
	.byte 0x00,0x10,0xff,0xff	@ 000077bc data
.org 0x77c0
	cmp r3, #0	@ 000077c0 002b
.org 0x77c2
	blt.n 0x77d4	@ 000077c2 07db
.org 0x77c4
	cmp r5, #0	@ 000077c4 002d
.org 0x77c6
	blt.n 0x77d4	@ 000077c6 05db
.org 0x77c8
	ldr r0, [pc, #12]	@ 000077c8 0348
.org 0x77ca
	cmp r3, r0	@ 000077ca 8342
.org 0x77cc
	bgt.n 0x77d4	@ 000077cc 02dc
.org 0x77ce
	ldr r0, [pc, #12]	@ 000077ce 0348
.org 0x77d0
	cmp r5, r0	@ 000077d0 8542
.org 0x77d2
	ble.n 0x77e0	@ 000077d2 05dd
.org 0x77d4
	movs r0, #15	@ 000077d4 0f20
.org 0x77d6
	b.n 0x781a	@ 000077d6 20e0
.org 0x77d8
	.byte 0xff,0x0f,0x77,0x00	@ 000077d8 data
.org 0x77dc
	.byte 0xff,0x5f,0x4f,0x00	@ 000077dc data
.org 0x77e0
	ldr r2, [pc, #60]	@ 000077e0 0f4a
.org 0x77e2
	ldr r6, [pc, #64]	@ 000077e2 104e
.org 0x77e4
	adds r0, r4, r6	@ 000077e4 a019
.org 0x77e6
	ldrb r0, [r0, #0]	@ 000077e6 0078
.org 0x77e8
	lsrs r0, r0, #4	@ 000077e8 0009
.org 0x77ea
	lsls r0, r0, #2	@ 000077ea 8000
.org 0x77ec
	lsls r1, r1, #3	@ 000077ec c900
.org 0x77ee
	adds r0, r0, r1	@ 000077ee 4018
.org 0x77f0
	adds r0, r0, r2	@ 000077f0 8018
.org 0x77f2
	ldr r4, [r0, #0]	@ 000077f2 0468
.org 0x77f4
	ldr r0, [pc, #48]	@ 000077f4 0c48
.org 0x77f6
	asrs r1, r3, #12	@ 000077f6 1913
.org 0x77f8
	adds r1, r1, r0	@ 000077f8 0918
.org 0x77fa
	ldr r2, [pc, #48]	@ 000077fa 0c4a
.org 0x77fc
	asrs r0, r5, #12	@ 000077fc 2813
.org 0x77fe
	adds r0, r0, r2	@ 000077fe 8018
.org 0x7800
	ldrb r0, [r0, #0]	@ 00007800 0078
.org 0x7802
	ldr r2, [r4, #116]	@ 00007802 626f
.org 0x7804
	ldrh r3, [r2, #0]	@ 00007804 1388
