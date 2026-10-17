@ FUN_08086894  entry 0x08086894  size 128
.thumb
.org 0x86894
FUN_08086894:
	push {r4, lr}	@ 00086894 10b5
.org 0x86896
	sub sp, #8	@ 00086896 82b0
.org 0x86898
	adds r4, r0, #0	@ 00086898 041c
.org 0x8689a
	bl 0x86b14	@ 0008689a 00f03bf9
.org 0x8689e
	cmp r0, #0	@ 0008689e 0028
.org 0x868a0
	beq.n 0x8690c	@ 000868a0 34d0
.org 0x868a2
	ldrb r1, [r4, #10]	@ 000868a2 a17a
.org 0x868a4
	movs r0, #254	@ 000868a4 fe20
.org 0x868a6
	ands r0, r1	@ 000868a6 0840
.org 0x868a8
	movs r1, #0	@ 000868a8 0021
.org 0x868aa
	strb r0, [r4, #10]	@ 000868aa a072
.org 0x868ac
	adds r0, r4, #0	@ 000868ac 201c
.org 0x868ae
	adds r0, #140	@ 000868ae 8c30
.org 0x868b0
	str r1, [r0, #0]	@ 000868b0 0160
.org 0x868b2
	adds r0, #4	@ 000868b2 0430
.org 0x868b4
	str r1, [r0, #0]	@ 000868b4 0160
.org 0x868b6
	adds r0, #4	@ 000868b6 0430
.org 0x868b8
	strb r1, [r0, #0]	@ 000868b8 0170
.org 0x868ba
	ldrb r1, [r4, #10]	@ 000868ba a17a
.org 0x868bc
	movs r0, #251	@ 000868bc fb20
.org 0x868be
	ands r0, r1	@ 000868be 0840
.org 0x868c0
	strb r0, [r4, #10]	@ 000868c0 a072
.org 0x868c2
	ldr r0, [r4, #84]	@ 000868c2 606d
.org 0x868c4
	ldr r2, [pc, #76]	@ 000868c4 134a
.org 0x868c6
	ands r0, r2	@ 000868c6 1040
.org 0x868c8
	movs r1, #128	@ 000868c8 8021
.org 0x868ca
	lsls r1, r1, #4	@ 000868ca 0901
.org 0x868cc
	adds r0, r0, r1	@ 000868cc 4018
.org 0x868ce
	str r0, [sp, #0]	@ 000868ce 0090
.org 0x868d0
	ldr r0, [r4, #88]	@ 000868d0 a06d
.org 0x868d2
	ands r0, r2	@ 000868d2 1040
.org 0x868d4
	adds r0, r0, r1	@ 000868d4 4018
.org 0x868d6
	str r0, [sp, #4]	@ 000868d6 0190
.org 0x868d8
	movs r0, #7	@ 000868d8 0720
.org 0x868da
	movs r1, #20	@ 000868da 1421
.org 0x868dc
	mov r2, sp	@ 000868dc 6a46
.org 0x868de
	bl 0x2ab88	@ 000868de a4f753f9
.org 0x868e2
	ldr r2, [pc, #52]	@ 000868e2 0d4a
.org 0x868e4
	ldrh r1, [r2, #12]	@ 000868e4 9189
.org 0x868e6
	ldr r0, [pc, #52]	@ 000868e6 0d48
.org 0x868e8
	cmp r1, r0	@ 000868e8 8142
.org 0x868ea
	bhi.n 0x868f0	@ 000868ea 01d8
.org 0x868ec
	adds r0, r1, #1	@ 000868ec 481c
.org 0x868ee
	strh r0, [r2, #12]	@ 000868ee 9081
.org 0x868f0
	adds r1, r4, #0	@ 000868f0 211c
.org 0x868f2
	adds r1, #84	@ 000868f2 5431
.org 0x868f4
	adds r0, r4, #0	@ 000868f4 201c
.org 0x868f6
	bl 0x2abe0	@ 000868f6 a4f773f9
.org 0x868fa
	ldr r1, [pc, #36]	@ 000868fa 0949
.org 0x868fc
	ldrb r0, [r4, #9]	@ 000868fc 607a
.org 0x868fe
	lsls r0, r0, #2	@ 000868fe 8000
.org 0x86900
	adds r0, r0, r1	@ 00086900 4018
.org 0x86902
	movs r1, #4	@ 00086902 0421
.org 0x86904
	str r1, [r4, #12]	@ 00086904 e160
.org 0x86906
	ldr r0, [r0, #0]	@ 00086906 0068
.org 0x86908
	ldr r0, [r0, #16]	@ 00086908 0069
.org 0x8690a
	str r0, [r4, #20]	@ 0008690a 6061
.org 0x8690c
	add sp, #8	@ 0008690c 02b0
.org 0x8690e
	pop {r4}	@ 0008690e 10bc
.org 0x86910
	pop {r0}	@ 00086910 01bc
.org 0x86912
	bx r0	@ 00086912 0047
