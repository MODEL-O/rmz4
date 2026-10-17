@ FUN_080c800c  entry 0x080c800c  size 70
.thumb
.org 0xc800c
FUN_080c800c:
	push {lr}	@ 000c800c 00b5
.org 0xc800e
	adds r2, r0, #0	@ 000c800e 021c
.org 0xc8010
	ldr r1, [r2, #40]	@ 000c8010 916a
.org 0xc8012
	cmp r1, #0	@ 000c8012 0029
.org 0xc8014
	beq.n 0xc8024	@ 000c8014 06d0
.org 0xc8016
	ldrb r0, [r1, #12]	@ 000c8016 087b
.org 0xc8018
	cmp r0, #1	@ 000c8018 0128
.org 0xc801a
	bls.n 0xc8020	@ 000c801a 01d9
.org 0xc801c
	movs r1, #0	@ 000c801c 0021
.org 0xc801e
	str r1, [r2, #40]	@ 000c801e 9162
.org 0xc8020
	cmp r1, #0	@ 000c8020 0029
.org 0xc8022
	bne.n 0xc8044	@ 000c8022 0fd1
.org 0xc8024
	ldr r1, [pc, #24]	@ 000c8024 0649
.org 0xc8026
	ldrb r0, [r2, #9]	@ 000c8026 507a
.org 0xc8028
	lsls r0, r0, #2	@ 000c8028 8000
.org 0xc802a
	adds r0, r0, r1	@ 000c802a 4018
.org 0xc802c
	movs r1, #2	@ 000c802c 0221
.org 0xc802e
	str r1, [r2, #12]	@ 000c802e d160
.org 0xc8030
	ldr r0, [r0, #0]	@ 000c8030 0068
.org 0xc8032
	ldr r0, [r0, #8]	@ 000c8032 8068
.org 0xc8034
	str r0, [r2, #20]	@ 000c8034 5061
.org 0xc8036
	adds r0, r2, #0	@ 000c8036 101c
.org 0xc8038
	bl 0xc82a8	@ 000c8038 00f036f9
.org 0xc803c
	b.n 0xc8054	@ 000c803c 0ae0
.org 0xc803e
	.byte 0x00	@ 000c803e data
.org 0xc803f
	.byte 0x00	@ 000c803f data
.org 0xc8040
	.byte 0xf4,0x49,0x86,0x08	@ 000c8040 data
.org 0xc8044
	ldr r0, [pc, #16]	@ 000c8044 0448
.org 0xc8046
	ldrb r1, [r2, #13]	@ 000c8046 517b
.org 0xc8048
	lsls r1, r1, #2	@ 000c8048 8900
.org 0xc804a
	adds r1, r1, r0	@ 000c804a 0918
.org 0xc804c
	ldr r1, [r1, #0]	@ 000c804c 0968
.org 0xc804e
	adds r0, r2, #0	@ 000c804e 101c
.org 0xc8050
	bl 0x128f80	@ 000c8050 60f096ff
