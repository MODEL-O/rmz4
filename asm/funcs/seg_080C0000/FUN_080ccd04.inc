@ FUN_080ccd04  entry 0x080ccd04  size 132
.thumb
.org 0xccd04
FUN_080ccd04:
	push {r4, r5, r6, r7, lr}	@ 000ccd04 f0b5
.org 0xccd06
	adds r7, r0, #0	@ 000ccd06 071c
.org 0xccd08
	lsls r1, r1, #24	@ 000ccd08 0906
.org 0xccd0a
	lsrs r6, r1, #24	@ 000ccd0a 0e0e
.org 0xccd0c
	lsls r2, r2, #24	@ 000ccd0c 1206
.org 0xccd0e
	lsrs r5, r2, #24	@ 000ccd0e 150e
.org 0xccd10
	ldr r0, [pc, #116]	@ 000ccd10 1d48
.org 0xccd12
	ldr r1, [pc, #120]	@ 000ccd12 1e49
.org 0xccd14
	movs r4, #189	@ 000ccd14 bd24
.org 0xccd16
	lsls r4, r4, #1	@ 000ccd16 6400
.org 0xccd18
	adds r1, r1, r4	@ 000ccd18 0919
.org 0xccd1a
	ldrh r1, [r1, #0]	@ 000ccd1a 0988
.org 0xccd1c
	ldrh r2, [r0, #6]	@ 000ccd1c c288
.org 0xccd1e
	lsrs r2, r2, #6	@ 000ccd1e 9209
.org 0xccd20
	subs r1, r1, r2	@ 000ccd20 891a
.org 0xccd22
	lsls r1, r1, #5	@ 000ccd22 4901
.org 0xccd24
	movs r2, #128	@ 000ccd24 8022
.org 0xccd26
	lsls r2, r2, #9	@ 000ccd26 5202
.org 0xccd28
	adds r1, r1, r2	@ 000ccd28 8918
.org 0xccd2a
	bl 0x1d30	@ 000ccd2a 35f701f8
.org 0xccd2e
	ldr r0, [pc, #96]	@ 000ccd2e 1848
.org 0xccd30
	ldr r1, [pc, #96]	@ 000ccd30 1849
.org 0xccd32
	adds r1, r1, r4	@ 000ccd32 0919
.org 0xccd34
	ldrh r1, [r1, #0]	@ 000ccd34 0988
.org 0xccd36
	ldrb r2, [r0, #7]	@ 000ccd36 c279
.org 0xccd38
	subs r1, r1, r2	@ 000ccd38 891a
.org 0xccd3a
	lsls r1, r1, #5	@ 000ccd3a 4901
.org 0xccd3c
	movs r2, #128	@ 000ccd3c 8022
.org 0xccd3e
	lsls r2, r2, #2	@ 000ccd3e 9200
.org 0xccd40
	adds r1, r1, r2	@ 000ccd40 8918
.org 0xccd42
	bl 0x2208	@ 000ccd42 35f761fa
.org 0xccd46
	ldr r0, [pc, #80]	@ 000ccd46 1448
.org 0xccd48
	ldr r0, [r0, #0]	@ 000ccd48 0068
.org 0xccd4a
	bl 0x5500	@ 000ccd4a 38f7d9fb
.org 0xccd4e
	adds r3, r0, #0	@ 000ccd4e 031c
.org 0xccd50
	cmp r3, #0	@ 000ccd50 002b
.org 0xccd52
	beq.n 0xccd82	@ 000ccd52 16d0
.org 0xccd54
	adds r1, r3, #0	@ 000ccd54 191c
.org 0xccd56
	adds r1, #37	@ 000ccd56 2531
.org 0xccd58
	movs r2, #0	@ 000ccd58 0022
.org 0xccd5a
	movs r0, #8	@ 000ccd5a 0820
.org 0xccd5c
	strb r0, [r1, #0]	@ 000ccd5c 0870
.org 0xccd5e
	ldr r0, [pc, #60]	@ 000ccd5e 0f48
.org 0xccd60
	movs r1, #44	@ 000ccd60 2c21
.org 0xccd62
	strb r1, [r3, #9]	@ 000ccd62 5972
.org 0xccd64
	adds r0, #176	@ 000ccd64 b030
.org 0xccd66
	ldr r0, [r0, #0]	@ 000ccd66 0068
.org 0xccd68
	ldr r0, [r0, #0]	@ 000ccd68 0068
.org 0xccd6a
	str r0, [r3, #20]	@ 000ccd6a 5861
.org 0xccd6c
	movs r0, #0	@ 000ccd6c 0020
.org 0xccd6e
	strh r2, [r3, #32]	@ 000ccd6e 1a84
.org 0xccd70
	adds r1, r3, #0	@ 000ccd70 191c
.org 0xccd72
	adds r1, #34	@ 000ccd72 2231
.org 0xccd74
	strb r0, [r1, #0]	@ 000ccd74 0870
.org 0xccd76
	ldr r0, [r7, #0]	@ 000ccd76 3868
.org 0xccd78
	ldr r1, [r7, #4]	@ 000ccd78 7968
.org 0xccd7a
	str r0, [r3, #84]	@ 000ccd7a 5865
.org 0xccd7c
	str r1, [r3, #88]	@ 000ccd7c 9965
.org 0xccd7e
	strb r6, [r3, #16]	@ 000ccd7e 1e74
.org 0xccd80
	strb r5, [r3, #17]	@ 000ccd80 5d74
.org 0xccd82
	pop {r4, r5, r6, r7}	@ 000ccd82 f0bc
.org 0xccd84
	pop {r0}	@ 000ccd84 01bc
.org 0xccd86
	bx r0	@ 000ccd86 0047
