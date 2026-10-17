@ FUN_080ecdd0  entry 0x080ecdd0  size 146
.thumb
.org 0xecdd0
FUN_080ecdd0:
	push {r4, r5, r6, r7, lr}	@ 000ecdd0 f0b5
.org 0xecdd2
	mov r7, r9	@ 000ecdd2 4f46
.org 0xecdd4
	mov r6, r8	@ 000ecdd4 4646
.org 0xecdd6
	push {r6, r7}	@ 000ecdd6 c0b4
.org 0xecdd8
	adds r5, r0, #0	@ 000ecdd8 051c
.org 0xecdda
	ldr r0, [pc, #100]	@ 000ecdda 1948
.org 0xecddc
	mov r9, r0	@ 000ecddc 8146
.org 0xecdde
	ldr r0, [pc, #100]	@ 000ecdde 1948
.org 0xecde0
	add r0, r9	@ 000ecde0 4844
.org 0xecde2
	ldrb r0, [r0, #0]	@ 000ecde2 0078
.org 0xecde4
	movs r7, #15	@ 000ecde4 0f27
.org 0xecde6
	ands r7, r0	@ 000ecde6 0740
.org 0xecde8
	cmp r7, #1	@ 000ecde8 012f
.org 0xecdea
	bne.n 0xece54	@ 000ecdea 33d1
.org 0xecdec
	ldrb r1, [r5, #10]	@ 000ecdec a97a
.org 0xecdee
	movs r0, #4	@ 000ecdee 0420
.org 0xecdf0
	movs r2, #0	@ 000ecdf0 0022
.org 0xecdf2
	mov r8, r2	@ 000ecdf2 9046
.org 0xecdf4
	orrs r0, r1	@ 000ecdf4 0843
.org 0xecdf6
	strb r0, [r5, #10]	@ 000ecdf6 a872
.org 0xecdf8
	adds r6, r5, #0	@ 000ecdf8 2e1c
.org 0xecdfa
	adds r6, #116	@ 000ecdfa 7436
.org 0xecdfc
	ldr r4, [pc, #72]	@ 000ecdfc 124c
.org 0xecdfe
	adds r2, r5, #0	@ 000ecdfe 2a1c
.org 0xece00
	adds r2, #84	@ 000ece00 5432
.org 0xece02
	adds r0, r6, #0	@ 000ece02 301c
.org 0xece04
	adds r1, r4, #0	@ 000ece04 211c
.org 0xece06
	movs r3, #0	@ 000ece06 0023
.org 0xece08
	bl 0x5760	@ 000ece08 18f7aafc
.org 0xece0c
	str r5, [r6, #44]	@ 000ece0c f562
.org 0xece0e
	mov r0, r8	@ 000ece0e 4046
.org 0xece10
	str r0, [r6, #36]	@ 000ece10 7062
.org 0xece12
	ldr r0, [pc, #56]	@ 000ece12 0e48
.org 0xece14
	add r0, r9	@ 000ece14 4844
.org 0xece16
	ldrb r0, [r0, #0]	@ 000ece16 0078
.org 0xece18
	cmp r0, #96	@ 000ece18 6028
.org 0xece1a
	bls.n 0xece26	@ 000ece1a 04d9
.org 0xece1c
	adds r1, r4, #0	@ 000ece1c 211c
.org 0xece1e
	subs r1, #48	@ 000ece1e 3039
.org 0xece20
	adds r0, r6, #0	@ 000ece20 301c
.org 0xece22
	bl 0x5784	@ 000ece22 18f7affc
.org 0xece26
	ldr r1, [pc, #40]	@ 000ece26 0a49
.org 0xece28
	ldrb r0, [r5, #9]	@ 000ece28 687a
.org 0xece2a
	lsls r0, r0, #2	@ 000ece2a 8000
.org 0xece2c
	adds r0, r0, r1	@ 000ece2c 4018
.org 0xece2e
	str r7, [r5, #12]	@ 000ece2e ef60
.org 0xece30
	ldr r0, [r0, #0]	@ 000ece30 0068
.org 0xece32
	ldr r0, [r0, #4]	@ 000ece32 4068
.org 0xece34
	str r0, [r5, #20]	@ 000ece34 6861
.org 0xece36
	adds r0, r5, #0	@ 000ece36 281c
.org 0xece38
	bl 0xecefc	@ 000ece38 00f060f8
.org 0xece3c
	b.n 0xece6c	@ 000ece3c 16e0
.org 0xece3e
	.byte 0x00	@ 000ece3e data
.org 0xece3f
	.byte 0x00	@ 000ece3f data
.org 0xece40
	.byte 0xb0,0x0a,0x00,0x02	@ 000ece40 data
.org 0xece44
	.byte 0x10,0xc0,0x02,0x00	@ 000ece44 data
.org 0xece48
	.byte 0xe0,0x98,0x86,0x08	@ 000ece48 data
.org 0xece4c
	.byte 0x2f,0xd0,0x02,0x00	@ 000ece4c data
.org 0xece50
	.byte 0xfc,0x92,0x86,0x08	@ 000ece50 data
.org 0xece54
	ldr r1, [pc, #32]	@ 000ece54 0849
.org 0xece56
	ldrb r0, [r5, #9]	@ 000ece56 687a
.org 0xece58
	lsls r0, r0, #2	@ 000ece58 8000
.org 0xece5a
	adds r0, r0, r1	@ 000ece5a 4018
.org 0xece5c
	movs r1, #2	@ 000ece5c 0221
.org 0xece5e
	str r1, [r5, #12]	@ 000ece5e e960
.org 0xece60
	ldr r0, [r0, #0]	@ 000ece60 0068
