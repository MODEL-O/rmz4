@ FUN_0801e1c4  entry 0x0801e1c4  size 48
.thumb
.org 0x1e1c4
FUN_0801e1c4:
	push {lr}	@ 0001e1c4 00b5
.org 0x1e1c6
	ldr r3, [pc, #40]	@ 0001e1c6 0a4b
.org 0x1e1c8
	ldr r0, [pc, #40]	@ 0001e1c8 0a48
.org 0x1e1ca
	adds r1, r3, r0	@ 0001e1ca 1918
.org 0x1e1cc
	ldrh r0, [r1, #0]	@ 0001e1cc 0888
.org 0x1e1ce
	cmp r0, #0	@ 0001e1ce 0028
.org 0x1e1d0
	beq.n 0x1e1fc	@ 0001e1d0 14d0
.org 0x1e1d2
	subs r0, #1	@ 0001e1d2 0138
.org 0x1e1d4
	strh r0, [r1, #0]	@ 0001e1d4 0880
.org 0x1e1d6
	movs r1, #137	@ 0001e1d6 8921
.org 0x1e1d8
	lsls r1, r1, #3	@ 0001e1d8 c900
.org 0x1e1da
	adds r2, r3, r1	@ 0001e1da 5a18
.org 0x1e1dc
	ldr r0, [r2, #0]	@ 0001e1dc 1068
.org 0x1e1de
	ldr r1, [r0, #0]	@ 0001e1de 0168
.org 0x1e1e0
	str r1, [r2, #0]	@ 0001e1e0 1160
.org 0x1e1e2
	ldr r1, [pc, #20]	@ 0001e1e2 0549
.org 0x1e1e4
	adds r2, r3, r1	@ 0001e1e4 5a18
.org 0x1e1e6
	ldr r1, [r2, #0]	@ 0001e1e6 1168
.org 0x1e1e8
	str r1, [r0, #0]	@ 0001e1e8 0160
.org 0x1e1ea
	str r0, [r2, #0]	@ 0001e1ea 1060
.org 0x1e1ec
	b.n 0x1e1fe	@ 0001e1ec 07e0
.org 0x1e1ee
	.byte 0x00	@ 0001e1ee data
.org 0x1e1ef
	.byte 0x00	@ 0001e1ef data
.org 0x1e1f0
	.byte 0x40,0xe4,0x02,0x02	@ 0001e1f0 data
