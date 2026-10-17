@ FUN_080c7e38  entry 0x080c7e38  size 70
.thumb
.org 0xc7e38
FUN_080c7e38:
	push {r4, r5, lr}	@ 000c7e38 30b5
.org 0xc7e3a
	adds r4, r0, #0	@ 000c7e3a 041c
.org 0xc7e3c
	lsls r1, r1, #24	@ 000c7e3c 0906
.org 0xc7e3e
	lsrs r5, r1, #24	@ 000c7e3e 0d0e
.org 0xc7e40
	ldr r0, [pc, #60]	@ 000c7e40 0f48
.org 0xc7e42
	ldr r0, [r0, #0]	@ 000c7e42 0068
.org 0xc7e44
	bl 0x5500	@ 000c7e44 3df75cfb
.org 0xc7e48
	adds r3, r0, #0	@ 000c7e48 031c
.org 0xc7e4a
	cmp r3, #0	@ 000c7e4a 002b
.org 0xc7e4c
	beq.n 0xc7e76	@ 000c7e4c 13d0
.org 0xc7e4e
	adds r1, r3, #0	@ 000c7e4e 191c
.org 0xc7e50
	adds r1, #37	@ 000c7e50 2531
.org 0xc7e52
	movs r2, #0	@ 000c7e52 0022
.org 0xc7e54
	movs r0, #8	@ 000c7e54 0820
.org 0xc7e56
	strb r0, [r1, #0]	@ 000c7e56 0870
.org 0xc7e58
	ldr r1, [pc, #40]	@ 000c7e58 0a49
.org 0xc7e5a
	movs r0, #29	@ 000c7e5a 1d20
.org 0xc7e5c
	strb r0, [r3, #9]	@ 000c7e5c 5872
.org 0xc7e5e
	ldr r0, [r1, #116]	@ 000c7e5e 486f
.org 0xc7e60
	ldr r0, [r0, #0]	@ 000c7e60 0068
.org 0xc7e62
	str r0, [r3, #20]	@ 000c7e62 5861
.org 0xc7e64
	movs r0, #0	@ 000c7e64 0020
.org 0xc7e66
	strh r2, [r3, #32]	@ 000c7e66 1a84
.org 0xc7e68
	adds r1, r3, #0	@ 000c7e68 191c
.org 0xc7e6a
	adds r1, #34	@ 000c7e6a 2231
.org 0xc7e6c
	strb r0, [r1, #0]	@ 000c7e6c 0870
.org 0xc7e6e
	str r4, [r3, #40]	@ 000c7e6e 9c62
.org 0xc7e70
	movs r0, #1	@ 000c7e70 0120
.org 0xc7e72
	strb r0, [r3, #16]	@ 000c7e72 1874
.org 0xc7e74
	strb r5, [r3, #17]	@ 000c7e74 5d74
.org 0xc7e76
	adds r0, r3, #0	@ 000c7e76 181c
.org 0xc7e78
	pop {r4, r5}	@ 000c7e78 30bc
.org 0xc7e7a
	pop {r1}	@ 000c7e7a 02bc
.org 0xc7e7c
	bx r1	@ 000c7e7c 0847
