@ FUN_080738b4  entry 0x080738b4  size 126
.thumb
.org 0x738b4
FUN_080738b4:
	push {r4, r5, r6, r7, lr}	@ 000738b4 f0b5
.org 0x738b6
	mov r7, r9	@ 000738b6 4f46
.org 0x738b8
	mov r6, r8	@ 000738b8 4646
.org 0x738ba
	push {r6, r7}	@ 000738ba c0b4
.org 0x738bc
	sub sp, #16	@ 000738bc 84b0
.org 0x738be
	mov r8, r0	@ 000738be 8046
.org 0x738c0
	movs r0, #160	@ 000738c0 a020
.org 0x738c2
	lsls r0, r0, #4	@ 000738c2 0001
.org 0x738c4
	mov r9, r0	@ 000738c4 8146
.org 0x738c6
	mov r1, r8	@ 000738c6 4146
.org 0x738c8
	ldr r0, [r1, #84]	@ 000738c8 486d
.org 0x738ca
	str r0, [sp, #0]	@ 000738ca 0090
.org 0x738cc
	ldr r1, [r1, #88]	@ 000738cc 896d
.org 0x738ce
	ldr r2, [pc, #100]	@ 000738ce 194a
.org 0x738d0
	adds r2, r1, r2	@ 000738d0 8a18
.org 0x738d2
	str r2, [sp, #4]	@ 000738d2 0192
.org 0x738d4
	movs r4, #128	@ 000738d4 8024
.org 0x738d6
	lsls r4, r4, #24	@ 000738d6 2406
.org 0x738d8
	ldr r2, [pc, #92]	@ 000738d8 174a
.org 0x738da
	adds r6, r0, r2	@ 000738da 8618
.org 0x738dc
	ldr r0, [pc, #92]	@ 000738dc 1748
.org 0x738de
	adds r2, r1, r0	@ 000738de 0a18
.org 0x738e0
	movs r3, #1	@ 000738e0 0123
.org 0x738e2
	adds r7, r2, #0	@ 000738e2 171c
.org 0x738e4
	adds r0, r6, #0	@ 000738e4 301c
.org 0x738e6
	adds r1, r2, #0	@ 000738e6 111c
.org 0x738e8
	str r2, [sp, #8]	@ 000738e8 0292
.org 0x738ea
	str r3, [sp, #12]	@ 000738ea 0393
.org 0x738ec
	bl 0x8988	@ 000738ec 95f74cf8
.org 0x738f0
	add r0, r9	@ 000738f0 4844
.org 0x738f2
	ldr r2, [sp, #8]	@ 000738f2 029a
.org 0x738f4
	ldr r3, [sp, #12]	@ 000738f4 039b
.org 0x738f6
	cmp r0, r4	@ 000738f6 a042
.org 0x738f8
	ble.n 0x738fc	@ 000738f8 00dd
.org 0x738fa
	adds r4, r0, #0	@ 000738fa 041c
.org 0x738fc
	movs r1, #128	@ 000738fc 8021
.org 0x738fe
	lsls r1, r1, #5	@ 000738fe 4901
.org 0x73900
	adds r2, r2, r1	@ 00073900 5218
.org 0x73902
	subs r3, #1	@ 00073902 013b
.org 0x73904
	cmp r3, #0	@ 00073904 002b
.org 0x73906
	bge.n 0x738e2	@ 00073906 ecda
.org 0x73908
	ldr r2, [sp, #4]	@ 00073908 019a
.org 0x7390a
	movs r0, #224	@ 0007390a e020
.org 0x7390c
	lsls r0, r0, #4	@ 0007390c 0001
.org 0x7390e
	adds r1, r2, r0	@ 0007390e 1118
.org 0x73910
	adds r7, r1, #0	@ 00073910 0f1c
.org 0x73912
	adds r0, r6, #0	@ 00073912 301c
.org 0x73914
	bl 0x8988	@ 00073914 95f738f8
.org 0x73918
	add r0, r9	@ 00073918 4844
.org 0x7391a
	cmp r0, r4	@ 0007391a a042
.org 0x7391c
	ble.n 0x73920	@ 0007391c 00dd
.org 0x7391e
	adds r4, r0, #0	@ 0007391e 041c
.org 0x73920
	mov r1, r8	@ 00073920 4146
.org 0x73922
	str r4, [r1, #84]	@ 00073922 4c65
.org 0x73924
	add sp, #16	@ 00073924 04b0
.org 0x73926
	pop {r3, r4}	@ 00073926 18bc
.org 0x73928
	mov r8, r3	@ 00073928 9846
.org 0x7392a
	mov r9, r4	@ 0007392a a146
.org 0x7392c
	pop {r4, r5, r6, r7}	@ 0007392c f0bc
.org 0x7392e
	pop {r0}	@ 0007392e 01bc
.org 0x73930
	bx r0	@ 00073930 0047
