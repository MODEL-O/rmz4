@ FUN_080c3eb4  entry 0x080c3eb4  size 70
.thumb
.org 0xc3eb4
FUN_080c3eb4:
	push {r4, lr}	@ 000c3eb4 10b5
.org 0xc3eb6
	adds r4, r0, #0	@ 000c3eb6 041c
.org 0xc3eb8
	ldr r0, [pc, #64]	@ 000c3eb8 1048
.org 0xc3eba
	ldr r0, [r0, #0]	@ 000c3eba 0068
.org 0xc3ebc
	bl 0x5500	@ 000c3ebc 41f720fb
.org 0xc3ec0
	adds r3, r0, #0	@ 000c3ec0 031c
.org 0xc3ec2
	cmp r3, #0	@ 000c3ec2 002b
.org 0xc3ec4
	beq.n 0xc3ef2	@ 000c3ec4 15d0
.org 0xc3ec6
	adds r1, r3, #0	@ 000c3ec6 191c
.org 0xc3ec8
	adds r1, #37	@ 000c3ec8 2531
.org 0xc3eca
	movs r2, #0	@ 000c3eca 0022
.org 0xc3ecc
	movs r0, #8	@ 000c3ecc 0820
.org 0xc3ece
	strb r0, [r1, #0]	@ 000c3ece 0870
.org 0xc3ed0
	ldr r1, [pc, #44]	@ 000c3ed0 0b49
.org 0xc3ed2
	movs r0, #21	@ 000c3ed2 1520
.org 0xc3ed4
	strb r0, [r3, #9]	@ 000c3ed4 5872
.org 0xc3ed6
	ldr r0, [r1, #84]	@ 000c3ed6 486d
.org 0xc3ed8
	ldr r0, [r0, #0]	@ 000c3ed8 0068
.org 0xc3eda
	str r0, [r3, #20]	@ 000c3eda 5861
.org 0xc3edc
	movs r1, #0	@ 000c3edc 0021
.org 0xc3ede
	strh r2, [r3, #32]	@ 000c3ede 1a84
.org 0xc3ee0
	adds r0, r3, #0	@ 000c3ee0 181c
.org 0xc3ee2
	adds r0, #34	@ 000c3ee2 2230
.org 0xc3ee4
	strb r1, [r0, #0]	@ 000c3ee4 0170
.org 0xc3ee6
	str r4, [r3, #40]	@ 000c3ee6 9c62
.org 0xc3ee8
	strb r1, [r3, #16]	@ 000c3ee8 1974
.org 0xc3eea
	adds r0, #147	@ 000c3eea 9330
.org 0xc3eec
	strb r1, [r0, #0]	@ 000c3eec 0170
.org 0xc3eee
	subs r0, #1	@ 000c3eee 0138
.org 0xc3ef0
	strb r1, [r0, #0]	@ 000c3ef0 0170
.org 0xc3ef2
	adds r0, r3, #0	@ 000c3ef2 181c
.org 0xc3ef4
	pop {r4}	@ 000c3ef4 10bc
.org 0xc3ef6
	pop {r1}	@ 000c3ef6 02bc
.org 0xc3ef8
	bx r1	@ 000c3ef8 0847
