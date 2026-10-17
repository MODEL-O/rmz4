@ FUN_0806fb80  entry 0x0806fb80  size 126
.thumb
.org 0x6fb80
FUN_0806fb80:
	push {r4, r5, lr}	@ 0006fb80 30b5
.org 0x6fb82
	adds r4, r0, #0	@ 0006fb82 041c
.org 0x6fb84
	ldrb r5, [r4, #14]	@ 0006fb84 a57b
.org 0x6fb86
	cmp r5, #0	@ 0006fb86 002d
.org 0x6fb88
	bne.n 0x6fbe0	@ 0006fb88 2ad1
.org 0x6fb8a
	ldr r1, [pc, #116]	@ 0006fb8a 1d49
.org 0x6fb8c
	bl 0x1cf00	@ 0006fb8c adf7b8f9
.org 0x6fb90
	movs r1, #160	@ 0006fb90 a021
.org 0x6fb92
	lsls r1, r1, #2	@ 0006fb92 8900
.org 0x6fb94
	movs r0, #116	@ 0006fb94 7420
.org 0x6fb96
	bl 0x249c	@ 0006fb96 92f781fc
.org 0x6fb9a
	movs r1, #168	@ 0006fb9a a821
.org 0x6fb9c
	lsls r1, r1, #2	@ 0006fb9c 8900
.org 0x6fb9e
	movs r0, #149	@ 0006fb9e 9520
.org 0x6fba0
	bl 0x249c	@ 0006fba0 92f77cfc
.org 0x6fba4
	movs r0, #117	@ 0006fba4 7520
.org 0x6fba6
	movs r1, #64	@ 0006fba6 4021
.org 0x6fba8
	bl 0x249c	@ 0006fba8 92f778fc
.org 0x6fbac
	movs r0, #116	@ 0006fbac 7420
.org 0x6fbae
	bl 0x25d8	@ 0006fbae 92f713fd
.org 0x6fbb2
	movs r0, #149	@ 0006fbb2 9520
.org 0x6fbb4
	bl 0x25d8	@ 0006fbb4 92f710fd
.org 0x6fbb8
	movs r0, #117	@ 0006fbb8 7520
.org 0x6fbba
	bl 0x25d8	@ 0006fbba 92f70dfd
.org 0x6fbbe
	movs r0, #116	@ 0006fbbe 7420
.org 0x6fbc0
	bl 0x2624	@ 0006fbc0 92f730fd
.org 0x6fbc4
	movs r0, #149	@ 0006fbc4 9520
.org 0x6fbc6
	bl 0x2624	@ 0006fbc6 92f72dfd
.org 0x6fbca
	movs r0, #117	@ 0006fbca 7520
.org 0x6fbcc
	bl 0x2624	@ 0006fbcc 92f72afd
.org 0x6fbd0
	movs r0, #175	@ 0006fbd0 af20
.org 0x6fbd2
	lsls r0, r0, #1	@ 0006fbd2 4000
.org 0x6fbd4
	bl 0x2b10	@ 0006fbd4 92f79cff
.org 0x6fbd8
	strb r5, [r4, #15]	@ 0006fbd8 e573
.org 0x6fbda
	ldrb r0, [r4, #14]	@ 0006fbda a07b
.org 0x6fbdc
	adds r0, #1	@ 0006fbdc 0130
.org 0x6fbde
	strb r0, [r4, #14]	@ 0006fbde a073
.org 0x6fbe0
	adds r0, r4, #0	@ 0006fbe0 201c
.org 0x6fbe2
	bl 0x1cff0	@ 0006fbe2 adf705fa
.org 0x6fbe6
	ldr r0, [pc, #28]	@ 0006fbe6 0748
.org 0x6fbe8
	ldrb r0, [r0, #18]	@ 0006fbe8 807c
.org 0x6fbea
	movs r1, #1	@ 0006fbea 0121
.org 0x6fbec
	ands r1, r0	@ 0006fbec 0140
.org 0x6fbee
	cmp r1, #0	@ 0006fbee 0029
.org 0x6fbf0
	bne.n 0x6fbf8	@ 0006fbf0 02d1
.org 0x6fbf2
	movs r0, #2	@ 0006fbf2 0220
.org 0x6fbf4
	strb r0, [r4, #13]	@ 0006fbf4 6073
.org 0x6fbf6
	strb r1, [r4, #14]	@ 0006fbf6 a173
.org 0x6fbf8
	pop {r4, r5}	@ 0006fbf8 30bc
.org 0x6fbfa
	pop {r0}	@ 0006fbfa 01bc
.org 0x6fbfc
	bx r0	@ 0006fbfc 0047
