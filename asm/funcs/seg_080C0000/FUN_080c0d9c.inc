@ FUN_080c0d9c  entry 0x080c0d9c  size 70
.thumb
.org 0xc0d9c
FUN_080c0d9c:
	push {r4, r5, lr}	@ 000c0d9c 30b5
.org 0xc0d9e
	adds r4, r0, #0	@ 000c0d9e 041c
.org 0xc0da0
	lsls r1, r1, #24	@ 000c0da0 0906
.org 0xc0da2
	lsrs r5, r1, #24	@ 000c0da2 0d0e
.org 0xc0da4
	ldr r0, [pc, #60]	@ 000c0da4 0f48
.org 0xc0da6
	ldr r0, [r0, #0]	@ 000c0da6 0068
.org 0xc0da8
	bl 0x5500	@ 000c0da8 44f7aafb
.org 0xc0dac
	adds r3, r0, #0	@ 000c0dac 031c
.org 0xc0dae
	cmp r3, #0	@ 000c0dae 002b
.org 0xc0db0
	beq.n 0xc0dda	@ 000c0db0 13d0
.org 0xc0db2
	adds r1, r3, #0	@ 000c0db2 191c
.org 0xc0db4
	adds r1, #37	@ 000c0db4 2531
.org 0xc0db6
	movs r2, #0	@ 000c0db6 0022
.org 0xc0db8
	movs r0, #8	@ 000c0db8 0820
.org 0xc0dba
	strb r0, [r1, #0]	@ 000c0dba 0870
.org 0xc0dbc
	ldr r1, [pc, #40]	@ 000c0dbc 0a49
.org 0xc0dbe
	movs r0, #12	@ 000c0dbe 0c20
.org 0xc0dc0
	strb r0, [r3, #9]	@ 000c0dc0 5872
.org 0xc0dc2
	ldr r0, [r1, #48]	@ 000c0dc2 086b
.org 0xc0dc4
	ldr r0, [r0, #0]	@ 000c0dc4 0068
.org 0xc0dc6
	str r0, [r3, #20]	@ 000c0dc6 5861
.org 0xc0dc8
	movs r0, #0	@ 000c0dc8 0020
.org 0xc0dca
	strh r2, [r3, #32]	@ 000c0dca 1a84
.org 0xc0dcc
	adds r1, r3, #0	@ 000c0dcc 191c
.org 0xc0dce
	adds r1, #34	@ 000c0dce 2231
.org 0xc0dd0
	strb r0, [r1, #0]	@ 000c0dd0 0870
.org 0xc0dd2
	str r4, [r3, #40]	@ 000c0dd2 9c62
.org 0xc0dd4
	movs r0, #1	@ 000c0dd4 0120
.org 0xc0dd6
	strb r0, [r3, #16]	@ 000c0dd6 1874
.org 0xc0dd8
	strb r5, [r3, #17]	@ 000c0dd8 5d74
.org 0xc0dda
	adds r0, r3, #0	@ 000c0dda 181c
.org 0xc0ddc
	pop {r4, r5}	@ 000c0ddc 30bc
.org 0xc0dde
	pop {r1}	@ 000c0dde 02bc
.org 0xc0de0
	bx r1	@ 000c0de0 0847
