@ FUN_080abc00  entry 0x080abc00  size 116
.thumb
.org 0xabc00
FUN_080abc00:
	push {r4, lr}	@ 000abc00 10b5
.org 0xabc02
	adds r3, r0, #0	@ 000abc02 031c
.org 0xabc04
	ldrb r1, [r3, #15]	@ 000abc04 d97b
.org 0xabc06
	cmp r1, #0	@ 000abc06 0029
.org 0xabc08
	bne.n 0xabc12	@ 000abc08 03d1
.org 0xabc0a
	movs r0, #16	@ 000abc0a 1020
.org 0xabc0c
	strb r0, [r3, #18]	@ 000abc0c 9874
.org 0xabc0e
	adds r0, r1, #1	@ 000abc0e 481c
.org 0xabc10
	strb r0, [r3, #15]	@ 000abc10 d873
.org 0xabc12
	ldrb r1, [r3, #18]	@ 000abc12 997c
.org 0xabc14
	subs r1, #1	@ 000abc14 0139
.org 0xabc16
	strb r1, [r3, #18]	@ 000abc16 9974
.org 0xabc18
	movs r0, #16	@ 000abc18 1020
.org 0xabc1a
	subs r0, r0, r1	@ 000abc1a 401a
.org 0xabc1c
	ldr r1, [pc, #84]	@ 000abc1c 1549
.org 0xabc1e
	lsls r0, r0, #26	@ 000abc1e 8006
.org 0xabc20
	lsrs r0, r0, #23	@ 000abc20 c00d
.org 0xabc22
	adds r0, r0, r1	@ 000abc22 4018
.org 0xabc24
	movs r4, #0	@ 000abc24 0024
.org 0xabc26
	ldrsh r2, [r0, r4]	@ 000abc26 025f
.org 0xabc28
	adds r0, r2, #0	@ 000abc28 101c
.org 0xabc2a
	cmp r2, #0	@ 000abc2a 002a
.org 0xabc2c
	bge.n 0xabc30	@ 000abc2c 00da
.org 0xabc2e
	adds r0, r2, #3	@ 000abc2e d01c
.org 0xabc30
	asrs r2, r0, #2	@ 000abc30 8210
.org 0xabc32
	lsls r0, r2, #24	@ 000abc32 1006
.org 0xabc34
	lsrs r0, r0, #23	@ 000abc34 c00d
.org 0xabc36
	adds r0, r0, r1	@ 000abc36 4018
.org 0xabc38
	movs r1, #0	@ 000abc38 0021
.org 0xabc3a
	ldrsh r2, [r0, r1]	@ 000abc3a 425e
.org 0xabc3c
	lsls r0, r2, #1	@ 000abc3c 5000
.org 0xabc3e
	adds r0, r0, r2	@ 000abc3e 8018
.org 0xabc40
	movs r4, #128	@ 000abc40 8024
.org 0xabc42
	lsls r4, r4, #1	@ 000abc42 6400
.org 0xabc44
	adds r0, r0, r4	@ 000abc44 0019
.org 0xabc46
	adds r1, r3, #0	@ 000abc46 191c
.org 0xabc48
	adds r1, #192	@ 000abc48 c031
.org 0xabc4a
	movs r4, #0	@ 000abc4a 0024
.org 0xabc4c
	strh r0, [r1, #0]	@ 000abc4c 0880
.org 0xabc4e
	adds r1, #2	@ 000abc4e 0231
.org 0xabc50
	strh r0, [r1, #0]	@ 000abc50 0880
.org 0xabc52
	lsrs r0, r2, #31	@ 000abc52 d00f
.org 0xabc54
	adds r0, r2, r0	@ 000abc54 1018
.org 0xabc56
	asrs r0, r0, #1	@ 000abc56 4010
.org 0xabc58
	subs r0, #128	@ 000abc58 8038
.org 0xabc5a
	subs r1, #5	@ 000abc5a 0539
.org 0xabc5c
	strb r0, [r1, #0]	@ 000abc5c 0870
.org 0xabc5e
	ldrb r0, [r3, #18]	@ 000abc5e 987c
.org 0xabc60
	cmp r0, #0	@ 000abc60 0028
.org 0xabc62
	bne.n 0xabc6e	@ 000abc62 04d1
.org 0xabc64
	ldrb r0, [r3, #13]	@ 000abc64 587b
.org 0xabc66
	adds r0, #1	@ 000abc66 0130
.org 0xabc68
	strb r0, [r3, #13]	@ 000abc68 5873
.org 0xabc6a
	strb r4, [r3, #14]	@ 000abc6a 9c73
.org 0xabc6c
	strb r4, [r3, #15]	@ 000abc6c dc73
.org 0xabc6e
	pop {r4}	@ 000abc6e 10bc
.org 0xabc70
	pop {r0}	@ 000abc70 01bc
.org 0xabc72
	bx r0	@ 000abc72 0047
