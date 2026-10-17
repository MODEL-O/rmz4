@ FUN_0808ac7c  entry 0x0808ac7c  size 268
.thumb
.org 0x8ac7c
FUN_0808ac7c:
	push {r4, r5, r6, r7, lr}	@ 0008ac7c f0b5
.org 0x8ac7e
	mov r7, r9	@ 0008ac7e 4f46
.org 0x8ac80
	mov r6, r8	@ 0008ac80 4646
.org 0x8ac82
	push {r6, r7}	@ 0008ac82 c0b4
.org 0x8ac84
	sub sp, #20	@ 0008ac84 85b0
.org 0x8ac86
	adds r7, r0, #0	@ 0008ac86 071c
.org 0x8ac88
	adds r0, #140	@ 0008ac88 8c30
.org 0x8ac8a
	movs r1, #0	@ 0008ac8a 0021
.org 0x8ac8c
	mov r8, r1	@ 0008ac8c 8846
.org 0x8ac8e
	str r1, [r0, #0]	@ 0008ac8e 0160
.org 0x8ac90
	adds r0, #4	@ 0008ac90 0430
.org 0x8ac92
	str r1, [r0, #0]	@ 0008ac92 0160
.org 0x8ac94
	adds r0, #4	@ 0008ac94 0430
.org 0x8ac96
	mov r1, r8	@ 0008ac96 4146
.org 0x8ac98
	strb r1, [r0, #0]	@ 0008ac98 0170
.org 0x8ac9a
	ldrb r1, [r7, #10]	@ 0008ac9a b97a
.org 0x8ac9c
	movs r0, #251	@ 0008ac9c fb20
.org 0x8ac9e
	ands r0, r1	@ 0008ac9e 0840
.org 0x8aca0
	strb r0, [r7, #10]	@ 0008aca0 b872
.org 0x8aca2
	adds r0, r7, #0	@ 0008aca2 381c
.org 0x8aca4
	adds r0, #92	@ 0008aca4 5c30
.org 0x8aca6
	mov r1, r8	@ 0008aca6 4146
.org 0x8aca8
	str r1, [r0, #4]	@ 0008aca8 4160
.org 0x8acaa
	str r1, [r7, #92]	@ 0008acaa f965
.org 0x8acac
	adds r0, #100	@ 0008acac 6430
.org 0x8acae
	ldrb r0, [r0, #0]	@ 0008acae 0078
.org 0x8acb0
	cmp r0, #1	@ 0008acb0 0128
.org 0x8acb2
	bne.n 0x8acbe	@ 0008acb2 04d1
.org 0x8acb4
	ldr r0, [r7, #88]	@ 0008acb4 b86d
.org 0x8acb6
	movs r1, #224	@ 0008acb6 e021
.org 0x8acb8
	lsls r1, r1, #5	@ 0008acb8 4901
.org 0x8acba
	adds r0, r0, r1	@ 0008acba 4018
.org 0x8acbc
	str r0, [r7, #88]	@ 0008acbc b865
.org 0x8acbe
	ldr r0, [r7, #84]	@ 0008acbe 786d
.org 0x8acc0
	str r0, [sp, #4]	@ 0008acc0 0190
.org 0x8acc2
	ldr r0, [r7, #88]	@ 0008acc2 b86d
.org 0x8acc4
	ldr r1, [pc, #192]	@ 0008acc4 3049
.org 0x8acc6
	adds r0, r0, r1	@ 0008acc6 4018
.org 0x8acc8
	str r0, [sp, #8]	@ 0008acc8 0290
.org 0x8acca
	movs r0, #1	@ 0008acca 0120
.org 0x8accc
	add r1, sp, #4	@ 0008accc 01a9
.org 0x8acce
	bl 0xd0c88	@ 0008acce 45f0dbff
.org 0x8acd2
	movs r0, #42	@ 0008acd2 2a20
.org 0x8acd4
	bl 0x2b10	@ 0008acd4 77f71cff
.org 0x8acd8
	movs r0, #84	@ 0008acd8 5420
.org 0x8acda
	adds r0, r0, r7	@ 0008acda c019
.org 0x8acdc
	mov r9, r0	@ 0008acdc 8146
.org 0x8acde
	movs r0, #3	@ 0008acde 0320
.org 0x8ace0
	movs r1, #29	@ 0008ace0 1d21
.org 0x8ace2
	mov r2, r9	@ 0008ace2 4a46
.org 0x8ace4
	bl 0x2ab88	@ 0008ace4 9ff750ff
.org 0x8ace8
	ldr r2, [pc, #160]	@ 0008ace8 284a
.org 0x8acea
	ldr r1, [r2, #0]	@ 0008acea 1168
.org 0x8acec
	ldr r0, [pc, #160]	@ 0008acec 2848
.org 0x8acee
	adds r4, r1, #0	@ 0008acee 0c1c
.org 0x8acf0
	muls r4, r0	@ 0008acf0 4443
.org 0x8acf2
	ldr r1, [pc, #160]	@ 0008acf2 2849
.org 0x8acf4
	adds r4, r4, r1	@ 0008acf4 6418
.org 0x8acf6
	lsls r4, r4, #1	@ 0008acf6 6400
.org 0x8acf8
	lsrs r0, r4, #1	@ 0008acf8 6008
.org 0x8acfa
	str r0, [r2, #0]	@ 0008acfa 1060
.org 0x8acfc
	lsrs r4, r4, #17	@ 0008acfc 640c
.org 0x8acfe
	movs r0, #3	@ 0008acfe 0320
.org 0x8ad00
	ands r4, r0	@ 0008ad00 0440
.org 0x8ad02
	ldr r0, [r7, #84]	@ 0008ad02 786d
.org 0x8ad04
	str r0, [sp, #12]	@ 0008ad04 0390
.org 0x8ad06
	ldr r0, [r7, #88]	@ 0008ad06 b86d
.org 0x8ad08
	add r6, sp, #12	@ 0008ad08 03ae
.org 0x8ad0a
	str r0, [r6, #4]	@ 0008ad0a 7060
.org 0x8ad0c
	ldrb r1, [r7, #10]	@ 0008ad0c b97a
.org 0x8ad0e
	lsrs r1, r1, #4	@ 0008ad0e 0909
.org 0x8ad10
	movs r5, #1	@ 0008ad10 0125
.org 0x8ad12
	ands r1, r5	@ 0008ad12 2940
.org 0x8ad14
	ldr r2, [pc, #128]	@ 0008ad14 204a
.org 0x8ad16
	mov r0, r8	@ 0008ad16 4046
.org 0x8ad18
	str r0, [sp, #0]	@ 0008ad18 0090
.org 0x8ad1a
	adds r0, r6, #0	@ 0008ad1a 301c
.org 0x8ad1c
	adds r3, r4, #0	@ 0008ad1c 231c
.org 0x8ad1e
	bl 0xd8ef8	@ 0008ad1e 4ef0ebf8
.org 0x8ad22
	ldrb r1, [r7, #10]	@ 0008ad22 b97a
.org 0x8ad24
	lsrs r1, r1, #4	@ 0008ad24 0909
.org 0x8ad26
	ands r1, r5	@ 0008ad26 2940
.org 0x8ad28
	ldr r2, [pc, #112]	@ 0008ad28 1c4a
.org 0x8ad2a
	mov r0, r8	@ 0008ad2a 4046
.org 0x8ad2c
	str r0, [sp, #0]	@ 0008ad2c 0090
.org 0x8ad2e
	adds r0, r6, #0	@ 0008ad2e 301c
.org 0x8ad30
	adds r3, r4, #0	@ 0008ad30 231c
.org 0x8ad32
	bl 0xd8ef8	@ 0008ad32 4ef0e1f8
.org 0x8ad36
	ldrb r1, [r7, #10]	@ 0008ad36 b97a
.org 0x8ad38
	lsrs r1, r1, #4	@ 0008ad38 0909
.org 0x8ad3a
	ands r1, r5	@ 0008ad3a 2940
.org 0x8ad3c
	ldr r2, [pc, #96]	@ 0008ad3c 184a
.org 0x8ad3e
	mov r0, r8	@ 0008ad3e 4046
.org 0x8ad40
	str r0, [sp, #0]	@ 0008ad40 0090
.org 0x8ad42
	adds r0, r6, #0	@ 0008ad42 301c
.org 0x8ad44
	adds r3, r4, #0	@ 0008ad44 231c
.org 0x8ad46
	bl 0xd8ef8	@ 0008ad46 4ef0d7f8
.org 0x8ad4a
	ldr r2, [pc, #88]	@ 0008ad4a 164a
.org 0x8ad4c
	ldrh r1, [r2, #12]	@ 0008ad4c 9189
.org 0x8ad4e
	ldr r0, [pc, #88]	@ 0008ad4e 1648
.org 0x8ad50
	cmp r1, r0	@ 0008ad50 8142
.org 0x8ad52
	bhi.n 0x8ad58	@ 0008ad52 01d8
.org 0x8ad54
	adds r0, r1, #1	@ 0008ad54 481c
.org 0x8ad56
	strh r0, [r2, #12]	@ 0008ad56 9081
.org 0x8ad58
	adds r0, r7, #0	@ 0008ad58 381c
.org 0x8ad5a
	mov r1, r9	@ 0008ad5a 4946
.org 0x8ad5c
	bl 0x2abe0	@ 0008ad5c 9ff740ff
.org 0x8ad60
	ldrb r1, [r7, #10]	@ 0008ad60 b97a
.org 0x8ad62
	movs r0, #254	@ 0008ad62 fe20
.org 0x8ad64
	ands r0, r1	@ 0008ad64 0840
.org 0x8ad66
	strb r0, [r7, #10]	@ 0008ad66 b872
.org 0x8ad68
	ldr r1, [pc, #64]	@ 0008ad68 1049
.org 0x8ad6a
	ldrb r0, [r7, #9]	@ 0008ad6a 787a
.org 0x8ad6c
	lsls r0, r0, #2	@ 0008ad6c 8000
.org 0x8ad6e
	adds r0, r0, r1	@ 0008ad6e 4018
.org 0x8ad70
	movs r1, #4	@ 0008ad70 0421
.org 0x8ad72
	str r1, [r7, #12]	@ 0008ad72 f960
.org 0x8ad74
	ldr r0, [r0, #0]	@ 0008ad74 0068
.org 0x8ad76
	ldr r0, [r0, #16]	@ 0008ad76 0069
.org 0x8ad78
	str r0, [r7, #20]	@ 0008ad78 7861
.org 0x8ad7a
	add sp, #20	@ 0008ad7a 05b0
.org 0x8ad7c
	pop {r3, r4}	@ 0008ad7c 18bc
.org 0x8ad7e
	mov r8, r3	@ 0008ad7e 9846
.org 0x8ad80
	mov r9, r4	@ 0008ad80 a146
.org 0x8ad82
	pop {r4, r5, r6, r7}	@ 0008ad82 f0bc
.org 0x8ad84
	pop {r0}	@ 0008ad84 01bc
.org 0x8ad86
	bx r0	@ 0008ad86 0047
