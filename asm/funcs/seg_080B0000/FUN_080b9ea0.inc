@ FUN_080b9ea0  entry 0x080b9ea0  size 122
.thumb
.org 0xb9ea0
FUN_080b9ea0:
	push {r4, r5, r6, r7, lr}	@ 000b9ea0 f0b5
.org 0xb9ea2
	adds r4, r0, #0	@ 000b9ea2 041c
.org 0xb9ea4
	adds r7, r1, #0	@ 000b9ea4 0f1c
.org 0xb9ea6
	lsls r2, r2, #24	@ 000b9ea6 1206
.org 0xb9ea8
	lsrs r6, r2, #24	@ 000b9ea8 160e
.org 0xb9eaa
	lsls r3, r3, #24	@ 000b9eaa 1b06
.org 0xb9eac
	lsrs r5, r3, #24	@ 000b9eac 1d0e
.org 0xb9eae
	ldr r0, [pc, #108]	@ 000b9eae 1b48
.org 0xb9eb0
	ldr r0, [r0, #0]	@ 000b9eb0 0068
.org 0xb9eb2
	bl 0x5500	@ 000b9eb2 4bf725fb
.org 0xb9eb6
	adds r3, r0, #0	@ 000b9eb6 031c
.org 0xb9eb8
	cmp r3, #0	@ 000b9eb8 002b
.org 0xb9eba
	beq.n 0xb9f12	@ 000b9eba 2ad0
.org 0xb9ebc
	adds r1, r3, #0	@ 000b9ebc 191c
.org 0xb9ebe
	adds r1, #37	@ 000b9ebe 2531
.org 0xb9ec0
	movs r2, #0	@ 000b9ec0 0022
.org 0xb9ec2
	movs r0, #24	@ 000b9ec2 1820
.org 0xb9ec4
	strb r0, [r1, #0]	@ 000b9ec4 0870
.org 0xb9ec6
	ldr r0, [pc, #88]	@ 000b9ec6 1648
.org 0xb9ec8
	movs r1, #109	@ 000b9ec8 6d21
.org 0xb9eca
	strb r1, [r3, #9]	@ 000b9eca 5972
.org 0xb9ecc
	movs r1, #218	@ 000b9ecc da21
.org 0xb9ece
	lsls r1, r1, #1	@ 000b9ece 4900
.org 0xb9ed0
	adds r0, r0, r1	@ 000b9ed0 4018
.org 0xb9ed2
	ldr r0, [r0, #0]	@ 000b9ed2 0068
.org 0xb9ed4
	ldr r0, [r0, #0]	@ 000b9ed4 0068
.org 0xb9ed6
	str r0, [r3, #20]	@ 000b9ed6 5861
.org 0xb9ed8
	movs r0, #0	@ 000b9ed8 0020
.org 0xb9eda
	strh r2, [r3, #32]	@ 000b9eda 1a84
.org 0xb9edc
	adds r1, r3, #0	@ 000b9edc 191c
.org 0xb9ede
	adds r1, #34	@ 000b9ede 2231
.org 0xb9ee0
	strb r0, [r1, #0]	@ 000b9ee0 0870
.org 0xb9ee2
	ldrb r1, [r3, #11]	@ 000b9ee2 d97a
.org 0xb9ee4
	movs r0, #16	@ 000b9ee4 1020
.org 0xb9ee6
	orrs r0, r1	@ 000b9ee6 0843
.org 0xb9ee8
	strb r0, [r3, #11]	@ 000b9ee8 d872
.org 0xb9eea
	ldrb r0, [r3, #28]	@ 000b9eea 187f
.org 0xb9eec
	strb r0, [r3, #29]	@ 000b9eec 5877
.org 0xb9eee
	str r4, [r3, #40]	@ 000b9eee 9c62
.org 0xb9ef0
	ldr r0, [r7, #0]	@ 000b9ef0 3868
.org 0xb9ef2
	ldr r1, [r7, #4]	@ 000b9ef2 7968
.org 0xb9ef4
	str r0, [r3, #84]	@ 000b9ef4 5865
.org 0xb9ef6
	str r1, [r3, #88]	@ 000b9ef6 9965
.org 0xb9ef8
	strb r6, [r3, #16]	@ 000b9ef8 1e74
.org 0xb9efa
	strb r5, [r3, #17]	@ 000b9efa 5d74
.org 0xb9efc
	adds r1, r4, #0	@ 000b9efc 211c
.org 0xb9efe
	adds r1, #204	@ 000b9efe cc31
.org 0xb9f00
	ldrh r0, [r1, #0]	@ 000b9f00 0888
.org 0xb9f02
	adds r0, #1	@ 000b9f02 0130
.org 0xb9f04
	strh r0, [r1, #0]	@ 000b9f04 0880
.org 0xb9f06
	adds r2, r4, #0	@ 000b9f06 221c
.org 0xb9f08
	adds r2, #191	@ 000b9f08 bf32
.org 0xb9f0a
	ldrb r1, [r2, #0]	@ 000b9f0a 1178
.org 0xb9f0c
	movs r0, #251	@ 000b9f0c fb20
.org 0xb9f0e
	ands r0, r1	@ 000b9f0e 0840
.org 0xb9f10
	strb r0, [r2, #0]	@ 000b9f10 1070
.org 0xb9f12
	adds r0, r3, #0	@ 000b9f12 181c
.org 0xb9f14
	pop {r4, r5, r6, r7}	@ 000b9f14 f0bc
.org 0xb9f16
	pop {r1}	@ 000b9f16 02bc
.org 0xb9f18
	bx r1	@ 000b9f18 0847
