@ FUN_080fad08  entry 0x080fad08  size 84
.thumb
.org 0xfad08
FUN_080fad08:
	push {r4, r5, lr}	@ 000fad08 30b5
.org 0xfad0a
	adds r4, r0, #0	@ 000fad0a 041c
.org 0xfad0c
	lsls r1, r1, #24	@ 000fad0c 0906
.org 0xfad0e
	lsrs r5, r1, #24	@ 000fad0e 0d0e
.org 0xfad10
	ldr r0, [pc, #72]	@ 000fad10 1248
.org 0xfad12
	ldr r0, [r0, #0]	@ 000fad12 0068
.org 0xfad14
	bl 0x5500	@ 000fad14 0af7f4fb
.org 0xfad18
	adds r3, r0, #0	@ 000fad18 031c
.org 0xfad1a
	cmp r3, #0	@ 000fad1a 002b
.org 0xfad1c
	beq.n 0xfad54	@ 000fad1c 1ad0
.org 0xfad1e
	adds r1, r3, #0	@ 000fad1e 191c
.org 0xfad20
	adds r1, #37	@ 000fad20 2531
.org 0xfad22
	movs r2, #0	@ 000fad22 0022
.org 0xfad24
	movs r0, #30	@ 000fad24 1e20
.org 0xfad26
	strb r0, [r1, #0]	@ 000fad26 0870
.org 0xfad28
	ldr r0, [pc, #52]	@ 000fad28 0d48
.org 0xfad2a
	movs r1, #36	@ 000fad2a 2421
.org 0xfad2c
	strb r1, [r3, #9]	@ 000fad2c 5972
.org 0xfad2e
	adds r0, #144	@ 000fad2e 9030
.org 0xfad30
	ldr r0, [r0, #0]	@ 000fad30 0068
.org 0xfad32
	ldr r0, [r0, #0]	@ 000fad32 0068
.org 0xfad34
	str r0, [r3, #20]	@ 000fad34 5861
.org 0xfad36
	movs r0, #0	@ 000fad36 0020
.org 0xfad38
	strh r2, [r3, #32]	@ 000fad38 1a84
.org 0xfad3a
	adds r1, r3, #0	@ 000fad3a 191c
.org 0xfad3c
	adds r1, #34	@ 000fad3c 2231
.org 0xfad3e
	strb r0, [r1, #0]	@ 000fad3e 0870
.org 0xfad40
	ldrb r1, [r3, #11]	@ 000fad40 d97a
.org 0xfad42
	movs r0, #16	@ 000fad42 1020
.org 0xfad44
	orrs r0, r1	@ 000fad44 0843
.org 0xfad46
	strb r0, [r3, #11]	@ 000fad46 d872
.org 0xfad48
	ldrb r0, [r3, #28]	@ 000fad48 187f
.org 0xfad4a
	strb r0, [r3, #29]	@ 000fad4a 5877
.org 0xfad4c
	str r4, [r3, #40]	@ 000fad4c 9c62
.org 0xfad4e
	movs r0, #1	@ 000fad4e 0120
.org 0xfad50
	strb r0, [r3, #16]	@ 000fad50 1874
.org 0xfad52
	strb r5, [r3, #17]	@ 000fad52 5d74
.org 0xfad54
	adds r0, r3, #0	@ 000fad54 181c
.org 0xfad56
	pop {r4, r5}	@ 000fad56 30bc
.org 0xfad58
	pop {r1}	@ 000fad58 02bc
.org 0xfad5a
	bx r1	@ 000fad5a 0847
