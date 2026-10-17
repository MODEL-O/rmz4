@ FUN_080fbacc  entry 0x080fbacc  size 56
.thumb
.org 0xfbacc
FUN_080fbacc:
	push {r4, r5, lr}	@ 000fbacc 30b5
.org 0xfbace
	adds r4, r0, #0	@ 000fbace 041c
.org 0xfbad0
	adds r5, r4, #0	@ 000fbad0 251c
.org 0xfbad2
	adds r5, #189	@ 000fbad2 bd35
.org 0xfbad4
	ldrb r0, [r5, #0]	@ 000fbad4 2878
.org 0xfbad6
	cmp r0, #0	@ 000fbad6 0028
.org 0xfbad8
	beq.n 0xfbae6	@ 000fbad8 05d0
.org 0xfbada
	movs r0, #54	@ 000fbada 3620
.org 0xfbadc
	bl 0x2624	@ 000fbadc 06f7a2fd
.org 0xfbae0
	movs r0, #0	@ 000fbae0 0020
.org 0xfbae2
	strb r0, [r5, #0]	@ 000fbae2 2870
.org 0xfbae4
	b.n 0xfbaec	@ 000fbae4 02e0
.org 0xfbae6
	movs r0, #172	@ 000fbae6 ac20
.org 0xfbae8
	bl 0x2624	@ 000fbae8 06f79cfd
.org 0xfbaec
	ldr r1, [pc, #20]	@ 000fbaec 0549
.org 0xfbaee
	ldrb r0, [r4, #9]	@ 000fbaee 607a
.org 0xfbaf0
	lsls r0, r0, #2	@ 000fbaf0 8000
.org 0xfbaf2
	adds r0, r0, r1	@ 000fbaf2 4018
.org 0xfbaf4
	movs r1, #4	@ 000fbaf4 0421
.org 0xfbaf6
	str r1, [r4, #12]	@ 000fbaf6 e160
.org 0xfbaf8
	ldr r0, [r0, #0]	@ 000fbaf8 0068
.org 0xfbafa
	ldr r0, [r0, #16]	@ 000fbafa 0069
.org 0xfbafc
	str r0, [r4, #20]	@ 000fbafc 6061
.org 0xfbafe
	pop {r4, r5}	@ 000fbafe 30bc
.org 0xfbb00
	pop {r0}	@ 000fbb00 01bc
.org 0xfbb02
	bx r0	@ 000fbb02 0047
