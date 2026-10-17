@ FUN_0808ba60  entry 0x0808ba60  size 182
.thumb
.org 0x8ba60
FUN_0808ba60:
	push {r4, r5, r6, r7, lr}	@ 0008ba60 f0b5
.org 0x8ba62
	sub sp, #8	@ 0008ba62 82b0
.org 0x8ba64
	adds r7, r0, #0	@ 0008ba64 071c
.org 0x8ba66
	movs r0, #42	@ 0008ba66 2a20
.org 0x8ba68
	bl 0x2b10	@ 0008ba68 77f752f8
.org 0x8ba6c
	ldrb r1, [r7, #10]	@ 0008ba6c b97a
.org 0x8ba6e
	movs r0, #254	@ 0008ba6e fe20
.org 0x8ba70
	ands r0, r1	@ 0008ba70 0840
.org 0x8ba72
	movs r1, #0	@ 0008ba72 0021
.org 0x8ba74
	strb r0, [r7, #10]	@ 0008ba74 b872
.org 0x8ba76
	adds r0, r7, #0	@ 0008ba76 381c
.org 0x8ba78
	adds r0, #140	@ 0008ba78 8c30
.org 0x8ba7a
	str r1, [r0, #0]	@ 0008ba7a 0160
.org 0x8ba7c
	adds r0, #4	@ 0008ba7c 0430
.org 0x8ba7e
	str r1, [r0, #0]	@ 0008ba7e 0160
.org 0x8ba80
	adds r0, #4	@ 0008ba80 0430
.org 0x8ba82
	strb r1, [r0, #0]	@ 0008ba82 0170
.org 0x8ba84
	ldrb r1, [r7, #10]	@ 0008ba84 b97a
.org 0x8ba86
	movs r0, #251	@ 0008ba86 fb20
.org 0x8ba88
	ands r0, r1	@ 0008ba88 0840
.org 0x8ba8a
	strb r0, [r7, #10]	@ 0008ba8a b872
.org 0x8ba8c
	ldr r6, [pc, #136]	@ 0008ba8c 224e
.org 0x8ba8e
	ldr r0, [r6, #0]	@ 0008ba8e 3068
.org 0x8ba90
	ldr r5, [pc, #136]	@ 0008ba90 224d
.org 0x8ba92
	muls r0, r5	@ 0008ba92 6843
.org 0x8ba94
	ldr r2, [pc, #136]	@ 0008ba94 224a
.org 0x8ba96
	adds r0, r0, r2	@ 0008ba96 8018
.org 0x8ba98
	lsls r0, r0, #1	@ 0008ba98 4000
.org 0x8ba9a
	lsrs r4, r0, #1	@ 0008ba9a 4408
.org 0x8ba9c
	lsrs r0, r0, #17	@ 0008ba9c 400c
.org 0x8ba9e
	movs r3, #7	@ 0008ba9e 0723
.org 0x8baa0
	ands r0, r3	@ 0008baa0 1840
.org 0x8baa2
	subs r0, #3	@ 0008baa2 0338
.org 0x8baa4
	lsls r0, r0, #8	@ 0008baa4 0002
.org 0x8baa6
	ldr r1, [r7, #84]	@ 0008baa6 796d
.org 0x8baa8
	adds r1, r1, r0	@ 0008baa8 0918
.org 0x8baaa
	str r1, [sp, #0]	@ 0008baaa 0091
.org 0x8baac
	adds r0, r4, #0	@ 0008baac 201c
.org 0x8baae
	muls r0, r5	@ 0008baae 6843
.org 0x8bab0
	adds r0, r0, r2	@ 0008bab0 8018
.org 0x8bab2
	lsls r0, r0, #1	@ 0008bab2 4000
.org 0x8bab4
	lsrs r1, r0, #1	@ 0008bab4 4108
.org 0x8bab6
	str r1, [r6, #0]	@ 0008bab6 3160
.org 0x8bab8
	lsrs r0, r0, #17	@ 0008bab8 400c
.org 0x8baba
	ands r0, r3	@ 0008baba 1840
.org 0x8babc
	subs r0, #3	@ 0008babc 0338
.org 0x8babe
	lsls r0, r0, #8	@ 0008babe 0002
.org 0x8bac0
	ldr r1, [r7, #88]	@ 0008bac0 b96d
.org 0x8bac2
	adds r1, r1, r0	@ 0008bac2 0918
.org 0x8bac4
	ldr r0, [pc, #92]	@ 0008bac4 1748
.org 0x8bac6
	adds r1, r1, r0	@ 0008bac6 0918
.org 0x8bac8
	str r1, [sp, #4]	@ 0008bac8 0191
.org 0x8baca
	movs r0, #1	@ 0008baca 0120
.org 0x8bacc
	mov r1, sp	@ 0008bacc 6946
.org 0x8bace
	bl 0xd0c88	@ 0008bace 45f0dbf8
.org 0x8bad2
	adds r0, r7, #0	@ 0008bad2 381c
.org 0x8bad4
	bl 0x8bdec	@ 0008bad4 00f08af9
.org 0x8bad8
	adds r4, r7, #0	@ 0008bad8 3c1c
.org 0x8bada
	adds r4, #84	@ 0008bada 5434
.org 0x8badc
	movs r0, #3	@ 0008badc 0320
.org 0x8bade
	movs r1, #9	@ 0008bade 0921
.org 0x8bae0
	adds r2, r4, #0	@ 0008bae0 221c
.org 0x8bae2
	bl 0x2ab88	@ 0008bae2 9ff751f8
.org 0x8bae6
	ldr r2, [pc, #64]	@ 0008bae6 104a
.org 0x8bae8
	ldrh r1, [r2, #12]	@ 0008bae8 9189
.org 0x8baea
	ldr r0, [pc, #64]	@ 0008baea 1048
.org 0x8baec
	cmp r1, r0	@ 0008baec 8142
.org 0x8baee
	bhi.n 0x8baf4	@ 0008baee 01d8
.org 0x8baf0
	adds r0, r1, #1	@ 0008baf0 481c
.org 0x8baf2
	strh r0, [r2, #12]	@ 0008baf2 9081
.org 0x8baf4
	adds r0, r7, #0	@ 0008baf4 381c
.org 0x8baf6
	adds r1, r4, #0	@ 0008baf6 211c
.org 0x8baf8
	bl 0x2abe0	@ 0008baf8 9ff772f8
.org 0x8bafc
	ldr r1, [pc, #48]	@ 0008bafc 0c49
.org 0x8bafe
	ldrb r0, [r7, #9]	@ 0008bafe 787a
.org 0x8bb00
	lsls r0, r0, #2	@ 0008bb00 8000
.org 0x8bb02
	adds r0, r0, r1	@ 0008bb02 4018
.org 0x8bb04
	movs r1, #4	@ 0008bb04 0421
.org 0x8bb06
	str r1, [r7, #12]	@ 0008bb06 f960
.org 0x8bb08
	ldr r0, [r0, #0]	@ 0008bb08 0068
.org 0x8bb0a
	ldr r0, [r0, #16]	@ 0008bb0a 0069
.org 0x8bb0c
	str r0, [r7, #20]	@ 0008bb0c 7861
.org 0x8bb0e
	add sp, #8	@ 0008bb0e 02b0
.org 0x8bb10
	pop {r4, r5, r6, r7}	@ 0008bb10 f0bc
.org 0x8bb12
	pop {r0}	@ 0008bb12 01bc
.org 0x8bb14
	bx r0	@ 0008bb14 0047
