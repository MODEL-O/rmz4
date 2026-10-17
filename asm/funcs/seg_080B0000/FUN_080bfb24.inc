@ FUN_080bfb24  entry 0x080bfb24  size 80
.thumb
.org 0xbfb24
FUN_080bfb24:
	push {r4, r5, r6, r7, lr}	@ 000bfb24 f0b5
.org 0xbfb26
	adds r6, r0, #0	@ 000bfb26 061c
.org 0xbfb28
	adds r7, r1, #0	@ 000bfb28 0f1c
.org 0xbfb2a
	lsls r2, r2, #24	@ 000bfb2a 1206
.org 0xbfb2c
	lsrs r5, r2, #24	@ 000bfb2c 150e
.org 0xbfb2e
	lsls r3, r3, #24	@ 000bfb2e 1b06
.org 0xbfb30
	lsrs r4, r3, #24	@ 000bfb30 1c0e
.org 0xbfb32
	ldr r0, [pc, #64]	@ 000bfb32 1048
.org 0xbfb34
	ldr r0, [r0, #0]	@ 000bfb34 0068
.org 0xbfb36
	bl 0x5500	@ 000bfb36 45f7e3fc
.org 0xbfb3a
	adds r3, r0, #0	@ 000bfb3a 031c
.org 0xbfb3c
	cmp r3, #0	@ 000bfb3c 002b
.org 0xbfb3e
	beq.n 0xbfb6c	@ 000bfb3e 15d0
.org 0xbfb40
	adds r1, r3, #0	@ 000bfb40 191c
.org 0xbfb42
	adds r1, #37	@ 000bfb42 2531
.org 0xbfb44
	movs r2, #0	@ 000bfb44 0022
.org 0xbfb46
	movs r0, #8	@ 000bfb46 0820
.org 0xbfb48
	strb r0, [r1, #0]	@ 000bfb48 0870
.org 0xbfb4a
	ldr r1, [pc, #44]	@ 000bfb4a 0b49
.org 0xbfb4c
	strb r0, [r3, #9]	@ 000bfb4c 5872
.org 0xbfb4e
	ldr r0, [r1, #32]	@ 000bfb4e 086a
.org 0xbfb50
	ldr r0, [r0, #0]	@ 000bfb50 0068
.org 0xbfb52
	str r0, [r3, #20]	@ 000bfb52 5861
.org 0xbfb54
	movs r0, #0	@ 000bfb54 0020
.org 0xbfb56
	strh r2, [r3, #32]	@ 000bfb56 1a84
.org 0xbfb58
	adds r1, r3, #0	@ 000bfb58 191c
.org 0xbfb5a
	adds r1, #34	@ 000bfb5a 2231
.org 0xbfb5c
	strb r0, [r1, #0]	@ 000bfb5c 0870
.org 0xbfb5e
	str r6, [r3, #40]	@ 000bfb5e 9e62
.org 0xbfb60
	ldr r0, [r7, #0]	@ 000bfb60 3868
.org 0xbfb62
	ldr r1, [r7, #4]	@ 000bfb62 7968
.org 0xbfb64
	str r0, [r3, #84]	@ 000bfb64 5865
.org 0xbfb66
	str r1, [r3, #88]	@ 000bfb66 9965
.org 0xbfb68
	strb r5, [r3, #16]	@ 000bfb68 1d74
.org 0xbfb6a
	strb r4, [r3, #17]	@ 000bfb6a 5c74
.org 0xbfb6c
	adds r0, r3, #0	@ 000bfb6c 181c
.org 0xbfb6e
	pop {r4, r5, r6, r7}	@ 000bfb6e f0bc
.org 0xbfb70
	pop {r1}	@ 000bfb70 02bc
.org 0xbfb72
	bx r1	@ 000bfb72 0847
