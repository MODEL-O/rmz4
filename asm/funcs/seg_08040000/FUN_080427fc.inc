@ FUN_080427fc  entry 0x080427fc  size 34
.thumb
.org 0x427fc
FUN_080427fc:
	push {lr}	@ 000427fc 00b5
.org 0x427fe
	bl 0x7c7c	@ 000427fe c5f73dfa
.org 0x42802
	lsls r0, r0, #16	@ 00042802 0004
.org 0x42804
	lsrs r1, r0, #16	@ 00042804 010c
.org 0x42806
	cmp r1, #15	@ 00042806 0f29
.org 0x42808
	bne.n 0x4280c	@ 00042808 00d1
.org 0x4280a
	movs r1, #0	@ 0004280a 0021
.org 0x4280c
	movs r0, #128	@ 0004280c 8020
.org 0x4280e
	lsls r0, r0, #8	@ 0004280e 0002
.org 0x42810
	ands r0, r1	@ 00042810 0840
.org 0x42812
	cmp r0, #0	@ 00042812 0028
.org 0x42814
	beq.n 0x42818	@ 00042814 00d0
.org 0x42816
	movs r1, #0	@ 00042816 0021
.org 0x42818
	adds r0, r1, #0	@ 00042818 081c
.org 0x4281a
	pop {r1}	@ 0004281a 02bc
.org 0x4281c
	bx r1	@ 0004281c 0847
