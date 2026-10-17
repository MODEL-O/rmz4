@ FUN_080026d0  entry 0x080026d0  size 76
.thumb
.org 0x26d0
FUN_080026d0:
	push {r4, lr}	@ 000026d0 10b5
.org 0x26d2
	sub sp, #4	@ 000026d2 81b0
.org 0x26d4
	mov r1, sp	@ 000026d4 6946
.org 0x26d6
	movs r4, #128	@ 000026d6 8024
.org 0x26d8
	lsls r4, r4, #19	@ 000026d8 e404
.org 0x26da
	ldrh r0, [r4, #0]	@ 000026da 2088
.org 0x26dc
	strh r0, [r1, #0]	@ 000026dc 0880
.org 0x26de
	mov r2, sp	@ 000026de 6a46
.org 0x26e0
	mov r0, sp	@ 000026e0 6846
.org 0x26e2
	ldrh r1, [r0, #0]	@ 000026e2 0188
.org 0x26e4
	ldr r0, [pc, #52]	@ 000026e4 0d48
.org 0x26e6
	ands r0, r1	@ 000026e6 0840
.org 0x26e8
	strh r0, [r2, #0]	@ 000026e8 1080
.org 0x26ea
	ldr r2, [pc, #52]	@ 000026ea 0d4a
.org 0x26ec
	ldrh r1, [r2, #0]	@ 000026ec 1188
.org 0x26ee
	ldr r0, [pc, #52]	@ 000026ee 0d48
.org 0x26f0
	ands r0, r1	@ 000026f0 0840
.org 0x26f2
	strh r0, [r2, #0]	@ 000026f2 1080
.org 0x26f4
	mov r3, sp	@ 000026f4 6b46
.org 0x26f6
	mov r1, sp	@ 000026f6 6946
.org 0x26f8
	ldrh r1, [r1, #0]	@ 000026f8 0988
.org 0x26fa
	orrs r0, r1	@ 000026fa 0843
.org 0x26fc
	strh r0, [r3, #0]	@ 000026fc 1880
.org 0x26fe
	mov r0, sp	@ 000026fe 6846
.org 0x2700
	ldrh r0, [r0, #0]	@ 00002700 0088
.org 0x2702
	strh r0, [r4, #0]	@ 00002702 2080
.org 0x2704
	ldr r1, [pc, #32]	@ 00002704 0849
.org 0x2706
	adds r2, #4	@ 00002706 0432
.org 0x2708
	str r2, [r1, #0]	@ 00002708 0a60
.org 0x270a
	ldr r0, [pc, #32]	@ 0000270a 0848
.org 0x270c
	str r0, [r1, #4]	@ 0000270c 4860
.org 0x270e
	ldr r0, [pc, #32]	@ 0000270e 0848
.org 0x2710
	str r0, [r1, #8]	@ 00002710 8860
.org 0x2712
	ldr r0, [r1, #8]	@ 00002712 8868
.org 0x2714
	add sp, #4	@ 00002714 01b0
.org 0x2716
	pop {r4}	@ 00002716 10bc
.org 0x2718
	pop {r0}	@ 00002718 01bc
.org 0x271a
	bx r0	@ 0000271a 0047
