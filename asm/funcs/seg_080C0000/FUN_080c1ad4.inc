@ FUN_080c1ad4  entry 0x080c1ad4  size 76
.thumb
.org 0xc1ad4
FUN_080c1ad4:
	push {r4, r5, lr}	@ 000c1ad4 30b5
.org 0xc1ad6
	adds r4, r0, #0	@ 000c1ad6 041c
.org 0xc1ad8
	lsls r1, r1, #24	@ 000c1ad8 0906
.org 0xc1ada
	lsrs r5, r1, #24	@ 000c1ada 0d0e
.org 0xc1adc
	ldr r0, [pc, #64]	@ 000c1adc 1048
.org 0xc1ade
	ldr r0, [r0, #0]	@ 000c1ade 0068
.org 0xc1ae0
	bl 0x5500	@ 000c1ae0 43f70efd
.org 0xc1ae4
	adds r3, r0, #0	@ 000c1ae4 031c
.org 0xc1ae6
	cmp r3, #0	@ 000c1ae6 002b
.org 0xc1ae8
	beq.n 0xc1b1a	@ 000c1ae8 17d0
.org 0xc1aea
	adds r1, r3, #0	@ 000c1aea 191c
.org 0xc1aec
	adds r1, #37	@ 000c1aec 2531
.org 0xc1aee
	movs r2, #0	@ 000c1aee 0022
.org 0xc1af0
	movs r0, #8	@ 000c1af0 0820
.org 0xc1af2
	strb r0, [r1, #0]	@ 000c1af2 0870
.org 0xc1af4
	ldr r1, [pc, #44]	@ 000c1af4 0b49
.org 0xc1af6
	movs r0, #14	@ 000c1af6 0e20
.org 0xc1af8
	strb r0, [r3, #9]	@ 000c1af8 5872
.org 0xc1afa
	ldr r0, [r1, #56]	@ 000c1afa 886b
.org 0xc1afc
	ldr r0, [r0, #0]	@ 000c1afc 0068
.org 0xc1afe
	str r0, [r3, #20]	@ 000c1afe 5861
.org 0xc1b00
	movs r0, #0	@ 000c1b00 0020
.org 0xc1b02
	strh r2, [r3, #32]	@ 000c1b02 1a84
.org 0xc1b04
	adds r1, r3, #0	@ 000c1b04 191c
.org 0xc1b06
	adds r1, #34	@ 000c1b06 2231
.org 0xc1b08
	strb r0, [r1, #0]	@ 000c1b08 0870
.org 0xc1b0a
	str r4, [r3, #40]	@ 000c1b0a 9c62
.org 0xc1b0c
	ldr r0, [r4, #84]	@ 000c1b0c 606d
.org 0xc1b0e
	ldr r1, [r4, #88]	@ 000c1b0e a16d
.org 0xc1b10
	str r0, [r3, #84]	@ 000c1b10 5865
.org 0xc1b12
	str r1, [r3, #88]	@ 000c1b12 9965
.org 0xc1b14
	movs r0, #1	@ 000c1b14 0120
.org 0xc1b16
	strb r0, [r3, #16]	@ 000c1b16 1874
.org 0xc1b18
	strb r5, [r3, #17]	@ 000c1b18 5d74
.org 0xc1b1a
	pop {r4, r5}	@ 000c1b1a 30bc
.org 0xc1b1c
	pop {r0}	@ 000c1b1c 01bc
.org 0xc1b1e
	bx r0	@ 000c1b1e 0047
