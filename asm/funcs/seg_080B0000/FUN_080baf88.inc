@ FUN_080baf88  entry 0x080baf88  size 108
.thumb
.org 0xbaf88
FUN_080baf88:
	push {r4, lr}	@ 000baf88 10b5
.org 0xbaf8a
	adds r4, r0, #0	@ 000baf8a 041c
.org 0xbaf8c
	ldrb r0, [r4, #15]	@ 000baf8c e07b
.org 0xbaf8e
	cmp r0, #0	@ 000baf8e 0028
.org 0xbaf90
	bne.n 0xbafa6	@ 000baf90 09d1
.org 0xbaf92
	adds r0, r4, #0	@ 000baf92 201c
.org 0xbaf94
	adds r0, #116	@ 000baf94 7430
.org 0xbaf96
	ldr r1, [pc, #92]	@ 000baf96 1749
.org 0xbaf98
	bl 0x5784	@ 000baf98 4af7f4fb
.org 0xbaf9c
	movs r0, #2	@ 000baf9c 0220
.org 0xbaf9e
	strb r0, [r4, #18]	@ 000baf9e a074
.org 0xbafa0
	ldrb r0, [r4, #15]	@ 000bafa0 e07b
.org 0xbafa2
	adds r0, #1	@ 000bafa2 0130
.org 0xbafa4
	strb r0, [r4, #15]	@ 000bafa4 e073
.org 0xbafa6
	adds r0, r4, #0	@ 000bafa6 201c
.org 0xbafa8
	bl 0x1d134	@ 000bafa8 62f7c4f8
.org 0xbafac
	ldrb r0, [r4, #18]	@ 000bafac a07c
.org 0xbafae
	subs r0, #1	@ 000bafae 0138
.org 0xbafb0
	strb r0, [r4, #18]	@ 000bafb0 a074
.org 0xbafb2
	lsls r0, r0, #24	@ 000bafb2 0006
.org 0xbafb4
	lsrs r2, r0, #24	@ 000bafb4 020e
.org 0xbafb6
	cmp r2, #0	@ 000bafb6 002a
.org 0xbafb8
	bne.n 0xbafee	@ 000bafb8 19d1
.org 0xbafba
	ldrb r1, [r4, #10]	@ 000bafba a17a
.org 0xbafbc
	movs r0, #254	@ 000bafbc fe20
.org 0xbafbe
	ands r0, r1	@ 000bafbe 0840
.org 0xbafc0
	movs r1, #253	@ 000bafc0 fd21
.org 0xbafc2
	ands r0, r1	@ 000bafc2 0840
.org 0xbafc4
	strb r0, [r4, #10]	@ 000bafc4 a072
.org 0xbafc6
	adds r0, r4, #0	@ 000bafc6 201c
.org 0xbafc8
	adds r0, #140	@ 000bafc8 8c30
.org 0xbafca
	str r2, [r0, #0]	@ 000bafca 0260
.org 0xbafcc
	adds r0, #4	@ 000bafcc 0430
.org 0xbafce
	str r2, [r0, #0]	@ 000bafce 0260
.org 0xbafd0
	adds r0, #4	@ 000bafd0 0430
.org 0xbafd2
	strb r2, [r0, #0]	@ 000bafd2 0270
.org 0xbafd4
	ldrb r1, [r4, #10]	@ 000bafd4 a17a
.org 0xbafd6
	movs r0, #251	@ 000bafd6 fb20
.org 0xbafd8
	ands r0, r1	@ 000bafd8 0840
.org 0xbafda
	strb r0, [r4, #10]	@ 000bafda a072
.org 0xbafdc
	ldr r1, [pc, #24]	@ 000bafdc 0649
.org 0xbafde
	ldrb r0, [r4, #9]	@ 000bafde 607a
.org 0xbafe0
	lsls r0, r0, #2	@ 000bafe0 8000
.org 0xbafe2
	adds r0, r0, r1	@ 000bafe2 4018
.org 0xbafe4
	movs r1, #3	@ 000bafe4 0321
.org 0xbafe6
	str r1, [r4, #12]	@ 000bafe6 e160
.org 0xbafe8
	ldr r0, [r0, #0]	@ 000bafe8 0068
.org 0xbafea
	ldr r0, [r0, #12]	@ 000bafea c068
.org 0xbafec
	str r0, [r4, #20]	@ 000bafec 6061
.org 0xbafee
	pop {r4}	@ 000bafee 10bc
.org 0xbaff0
	pop {r0}	@ 000baff0 01bc
.org 0xbaff2
	bx r0	@ 000baff2 0047
