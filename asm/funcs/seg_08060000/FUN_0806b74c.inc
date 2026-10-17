@ FUN_0806b74c  entry 0x0806b74c  size 76
.thumb
.org 0x6b74c
FUN_0806b74c:
	push {r4, r5, lr}	@ 0006b74c 30b5
.org 0x6b74e
	adds r4, r0, #0	@ 0006b74e 041c
.org 0x6b750
	ldrb r5, [r4, #14]	@ 0006b750 a57b
.org 0x6b752
	cmp r5, #0	@ 0006b752 002d
.org 0x6b754
	bne.n 0x6b764	@ 0006b754 06d1
.org 0x6b756
	ldr r1, [pc, #64]	@ 0006b756 1049
.org 0x6b758
	bl 0x1cf00	@ 0006b758 b1f7d2fb
.org 0x6b75c
	strb r5, [r4, #15]	@ 0006b75c e573
.org 0x6b75e
	ldrb r0, [r4, #14]	@ 0006b75e a07b
.org 0x6b760
	adds r0, #1	@ 0006b760 0130
.org 0x6b762
	strb r0, [r4, #14]	@ 0006b762 a073
.org 0x6b764
	adds r0, r4, #0	@ 0006b764 201c
.org 0x6b766
	bl 0x1cff0	@ 0006b766 b1f743fc
.org 0x6b76a
	ldr r0, [r4, #84]	@ 0006b76a 606d
.org 0x6b76c
	ldr r1, [r4, #92]	@ 0006b76c e16d
.org 0x6b76e
	adds r0, r0, r1	@ 0006b76e 4018
.org 0x6b770
	str r0, [r4, #84]	@ 0006b770 6065
.org 0x6b772
	ldr r1, [r4, #88]	@ 0006b772 a16d
.org 0x6b774
	ldr r0, [r4, #96]	@ 0006b774 206e
.org 0x6b776
	adds r1, r1, r0	@ 0006b776 0918
.org 0x6b778
	str r1, [r4, #88]	@ 0006b778 a165
.org 0x6b77a
	adds r0, #64	@ 0006b77a 4030
.org 0x6b77c
	str r0, [r4, #96]	@ 0006b77c 2066
.org 0x6b77e
	adds r0, r4, #0	@ 0006b77e 201c
.org 0x6b780
	adds r0, #180	@ 0006b780 b430
.org 0x6b782
	ldr r0, [r0, #4]	@ 0006b782 4068
.org 0x6b784
	cmp r1, r0	@ 0006b784 8142
.org 0x6b786
	ble.n 0x6b792	@ 0006b786 04dd
.org 0x6b788
	str r0, [r4, #88]	@ 0006b788 a065
.org 0x6b78a
	movs r1, #0	@ 0006b78a 0021
.org 0x6b78c
	movs r0, #7	@ 0006b78c 0720
.org 0x6b78e
	strb r0, [r4, #13]	@ 0006b78e 6073
.org 0x6b790
	strb r1, [r4, #14]	@ 0006b790 a173
.org 0x6b792
	pop {r4, r5}	@ 0006b792 30bc
.org 0x6b794
	pop {r0}	@ 0006b794 01bc
.org 0x6b796
	bx r0	@ 0006b796 0047
