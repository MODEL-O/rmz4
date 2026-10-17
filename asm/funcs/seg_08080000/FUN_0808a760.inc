@ FUN_0808a760  entry 0x0808a760  size 44
.thumb
.org 0x8a760
FUN_0808a760:
	push {r4, lr}	@ 0008a760 10b5
.org 0x8a762
	adds r4, r0, #0	@ 0008a762 041c
.org 0x8a764
	bl 0x1cff0	@ 0008a764 92f744fc
.org 0x8a768
	ldr r0, [r4, #84]	@ 0008a768 606d
.org 0x8a76a
	ldr r1, [r4, #92]	@ 0008a76a e16d
.org 0x8a76c
	adds r0, r0, r1	@ 0008a76c 4018
.org 0x8a76e
	str r0, [r4, #84]	@ 0008a76e 6065
.org 0x8a770
	ldr r0, [r4, #88]	@ 0008a770 a06d
.org 0x8a772
	ldr r1, [r4, #96]	@ 0008a772 216e
.org 0x8a774
	adds r0, r0, r1	@ 0008a774 4018
.org 0x8a776
	str r0, [r4, #88]	@ 0008a776 a065
.org 0x8a778
	adds r1, #64	@ 0008a778 4031
.org 0x8a77a
	str r1, [r4, #96]	@ 0008a77a 2166
.org 0x8a77c
	movs r0, #224	@ 0008a77c e020
.org 0x8a77e
	lsls r0, r0, #3	@ 0008a77e c000
.org 0x8a780
	cmp r1, r0	@ 0008a780 8142
.org 0x8a782
	ble.n 0x8a786	@ 0008a782 00dd
.org 0x8a784
	str r0, [r4, #96]	@ 0008a784 2066
.org 0x8a786
	pop {r4}	@ 0008a786 10bc
.org 0x8a788
	pop {r0}	@ 0008a788 01bc
.org 0x8a78a
	bx r0	@ 0008a78a 0047
