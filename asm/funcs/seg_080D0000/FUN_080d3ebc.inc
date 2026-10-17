@ FUN_080d3ebc  entry 0x080d3ebc  size 68
.thumb
.org 0xd3ebc
FUN_080d3ebc:
	push {r4, lr}	@ 000d3ebc 10b5
.org 0xd3ebe
	lsls r0, r0, #24	@ 000d3ebe 0006
.org 0xd3ec0
	lsrs r4, r0, #24	@ 000d3ec0 040e
.org 0xd3ec2
	ldr r0, [pc, #16]	@ 000d3ec2 0448
.org 0xd3ec4
	ldr r0, [r0, #0]	@ 000d3ec4 0068
.org 0xd3ec6
	bl 0x5500	@ 000d3ec6 31f71bfb
.org 0xd3eca
	adds r3, r0, #0	@ 000d3eca 031c
.org 0xd3ecc
	cmp r3, #0	@ 000d3ecc 002b
.org 0xd3ece
	bne.n 0xd3ed8	@ 000d3ece 03d1
.org 0xd3ed0
	movs r0, #0	@ 000d3ed0 0020
.org 0xd3ed2
	b.n 0xd3efe	@ 000d3ed2 14e0
.org 0xd3ed4
	.byte 0x9c,0xed,0x02,0x02	@ 000d3ed4 data
.org 0xd3ed8
	adds r1, r3, #0	@ 000d3ed8 191c
.org 0xd3eda
	adds r1, #37	@ 000d3eda 2531
.org 0xd3edc
	movs r2, #0	@ 000d3edc 0022
.org 0xd3ede
	movs r0, #1	@ 000d3ede 0120
.org 0xd3ee0
	strb r0, [r1, #0]	@ 000d3ee0 0870
.org 0xd3ee2
	ldr r1, [pc, #32]	@ 000d3ee2 0849
.org 0xd3ee4
	movs r0, #14	@ 000d3ee4 0e20
.org 0xd3ee6
	strb r0, [r3, #9]	@ 000d3ee6 5872
.org 0xd3ee8
	ldr r0, [r1, #56]	@ 000d3ee8 886b
.org 0xd3eea
	ldr r0, [r0, #0]	@ 000d3eea 0068
.org 0xd3eec
	str r0, [r3, #20]	@ 000d3eec 5861
.org 0xd3eee
	movs r0, #0	@ 000d3eee 0020
.org 0xd3ef0
	strh r2, [r3, #32]	@ 000d3ef0 1a84
.org 0xd3ef2
	adds r1, r3, #0	@ 000d3ef2 191c
.org 0xd3ef4
	adds r1, #34	@ 000d3ef4 2231
.org 0xd3ef6
	strb r0, [r1, #0]	@ 000d3ef6 0870
.org 0xd3ef8
	strb r4, [r3, #16]	@ 000d3ef8 1c74
.org 0xd3efa
	strb r0, [r3, #17]	@ 000d3efa 5874
.org 0xd3efc
	adds r0, r3, #0	@ 000d3efc 181c
.org 0xd3efe
	pop {r4}	@ 000d3efe 10bc
