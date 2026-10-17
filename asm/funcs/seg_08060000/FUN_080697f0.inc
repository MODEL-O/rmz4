@ FUN_080697f0  entry 0x080697f0  size 84
.thumb
.org 0x697f0
FUN_080697f0:
	push {r4, r5, r6, r7, lr}	@ 000697f0 f0b5
.org 0x697f2
	mov r7, sl	@ 000697f2 5746
.org 0x697f4
	mov r6, r9	@ 000697f4 4e46
.org 0x697f6
	mov r5, r8	@ 000697f6 4546
.org 0x697f8
	push {r5, r6, r7}	@ 000697f8 e0b4
.org 0x697fa
	sub sp, #8	@ 000697fa 82b0
.org 0x697fc
	adds r6, r0, #0	@ 000697fc 061c
.org 0x697fe
	adds r0, #180	@ 000697fe b430
.org 0x69800
	ldr r0, [r0, #0]	@ 00069800 0068
.org 0x69802
	mov r8, r0	@ 00069802 8046
.org 0x69804
	adds r0, r6, #0	@ 00069804 301c
.org 0x69806
	adds r0, #184	@ 00069806 b830
.org 0x69808
	ldr r0, [r0, #0]	@ 00069808 0068
.org 0x6980a
	mov r9, r0	@ 0006980a 8146
.org 0x6980c
	adds r0, r6, #0	@ 0006980c 301c
.org 0x6980e
	adds r0, #188	@ 0006980e bc30
.org 0x69810
	ldr r0, [r0, #0]	@ 00069810 0068
.org 0x69812
	mov sl, r0	@ 00069812 8246
.org 0x69814
	adds r0, r6, #0	@ 00069814 301c
.org 0x69816
	adds r0, #192	@ 00069816 c030
.org 0x69818
	ldr r5, [r0, #0]	@ 00069818 0568
.org 0x6981a
	ldrb r0, [r6, #10]	@ 0006981a b07a
.org 0x6981c
	lsrs r4, r0, #4	@ 0006981c 0409
.org 0x6981e
	movs r0, #1	@ 0006981e 0120
.org 0x69820
	ands r4, r0	@ 00069820 0440
.org 0x69822
	ldrb r0, [r6, #15]	@ 00069822 f07b
.org 0x69824
	cmp r0, #5	@ 00069824 0528
.org 0x69826
	bls.n 0x6982a	@ 00069826 00d9
.org 0x69828
	b.n 0x69eda	@ 00069828 57e3
.org 0x6982a
	lsls r0, r0, #2	@ 0006982a 8000
.org 0x6982c
	ldr r1, [pc, #4]	@ 0006982c 0149
.org 0x6982e
	adds r0, r0, r1	@ 0006982e 4018
.org 0x69830
	ldr r0, [r0, #0]	@ 00069830 0068
.org 0x69832
	mov pc, r0	@ 00069832 8746
.org 0x69834
	.byte 0x38,0x98,0x06,0x08	@ 00069834 data
.org 0x69838
	.byte 0x50,0x98,0x06,0x08	@ 00069838 data
.org 0x6983c
	.byte 0x22,0x99,0x06,0x08	@ 0006983c data
.org 0x69840
	.byte 0xac,0x9a,0x06,0x08	@ 00069840 data
