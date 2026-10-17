@ FUN_08028a8c  entry 0x08028a8c  size 76
.thumb
.org 0x28a8c
FUN_08028a8c:
	push {r4, lr}	@ 00028a8c 10b5
.org 0x28a8e
	ldr r3, [r0, #12]	@ 00028a8e c368
.org 0x28a90
	ldr r2, [r3, #4]	@ 00028a90 5a68
.org 0x28a92
	cmp r2, #0	@ 00028a92 002a
.org 0x28a94
	bne.n 0x28ab0	@ 00028a94 0cd1
.org 0x28a96
	movs r1, #168	@ 00028a96 a821
.org 0x28a98
	lsls r1, r1, #1	@ 00028a98 4900
.org 0x28a9a
	adds r0, r0, r1	@ 00028a9a 4018
.org 0x28a9c
	str r2, [r0, #0]	@ 00028a9c 0260
.org 0x28a9e
	ldr r2, [pc, #8]	@ 00028a9e 024a
.org 0x28aa0
	ldrh r1, [r2, #0]	@ 00028aa0 1188
.org 0x28aa2
	ldr r0, [pc, #8]	@ 00028aa2 0248
.org 0x28aa4
	ands r0, r1	@ 00028aa4 0840
.org 0x28aa6
	b.n 0x28ad6	@ 00028aa6 16e0
.org 0x28aa8
	.byte 0x00,0x0a,0x00,0x02	@ 00028aa8 data
.org 0x28aac
	.byte 0xff,0xfe,0x00,0x00	@ 00028aac data
.org 0x28ab0
	movs r4, #168	@ 00028ab0 a824
.org 0x28ab2
	lsls r4, r4, #1	@ 00028ab2 6400
.org 0x28ab4
	adds r1, r0, r4	@ 00028ab4 0119
.org 0x28ab6
	ldr r0, [pc, #40]	@ 00028ab6 0a48
.org 0x28ab8
	ands r2, r0	@ 00028ab8 0240
.org 0x28aba
	ldrb r0, [r3, #1]	@ 00028aba 5878
.org 0x28abc
	lsls r0, r0, #16	@ 00028abc 0004
.org 0x28abe
	orrs r2, r0	@ 00028abe 0243
.org 0x28ac0
	movs r4, #2	@ 00028ac0 0224
.org 0x28ac2
	ldrsh r0, [r3, r4]	@ 00028ac2 185f
.org 0x28ac4
	lsls r0, r0, #24	@ 00028ac4 0006
.org 0x28ac6
	orrs r2, r0	@ 00028ac6 0243
.org 0x28ac8
	str r2, [r1, #0]	@ 00028ac8 0a60
.org 0x28aca
	ldr r2, [pc, #24]	@ 00028aca 064a
.org 0x28acc
	ldrh r1, [r2, #0]	@ 00028acc 1188
.org 0x28ace
	movs r3, #128	@ 00028ace 8023
.org 0x28ad0
	lsls r3, r3, #1	@ 00028ad0 5b00
.org 0x28ad2
	adds r0, r3, #0	@ 00028ad2 181c
.org 0x28ad4
	orrs r0, r1	@ 00028ad4 0843
.org 0x28ad6
	strh r0, [r2, #0]	@ 00028ad6 1080
