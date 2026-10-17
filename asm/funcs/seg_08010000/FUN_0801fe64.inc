@ FUN_0801fe64  entry 0x0801fe64  size 82
.thumb
.org 0x1fe64
FUN_0801fe64:
	push {r4, r5, r6, lr}	@ 0001fe64 70b5
.org 0x1fe66
	adds r4, r1, #0	@ 0001fe66 0c1c
.org 0x1fe68
	lsls r0, r0, #24	@ 0001fe68 0006
.org 0x1fe6a
	lsrs r5, r0, #24	@ 0001fe6a 050e
.org 0x1fe6c
	cmp r5, #0	@ 0001fe6c 002d
.org 0x1fe6e
	beq.n 0x1feb0	@ 0001fe6e 1fd0
.org 0x1fe70
	ldr r0, [pc, #68]	@ 0001fe70 1148
.org 0x1fe72
	mov ip, r0	@ 0001fe72 8446
.org 0x1fe74
	movs r6, #206	@ 0001fe74 ce26
.org 0x1fe76
	lsls r6, r6, #1	@ 0001fe76 7600
.org 0x1fe78
	add r6, ip	@ 0001fe78 6644
.org 0x1fe7a
	ldrh r3, [r6, #0]	@ 0001fe7a 3388
.org 0x1fe7c
	cmp r3, #15	@ 0001fe7c 0f2b
.org 0x1fe7e
	bgt.n 0x1feb0	@ 0001fe7e 17dc
.org 0x1fe80
	lsls r1, r3, #1	@ 0001fe80 5900
.org 0x1fe82
	adds r1, r1, r3	@ 0001fe82 c918
.org 0x1fe84
	lsls r1, r1, #2	@ 0001fe84 8900
.org 0x1fe86
	adds r0, #8	@ 0001fe86 0830
.org 0x1fe88
	adds r0, r1, r0	@ 0001fe88 0818
.org 0x1fe8a
	ldr r2, [r4, #0]	@ 0001fe8a 2268
.org 0x1fe8c
	str r2, [r0, #0]	@ 0001fe8c 0260
.org 0x1fe8e
	mov r0, ip	@ 0001fe8e 6046
.org 0x1fe90
	adds r0, #12	@ 0001fe90 0c30
.org 0x1fe92
	adds r0, r1, r0	@ 0001fe92 0818
.org 0x1fe94
	ldr r2, [r4, #4]	@ 0001fe94 6268
.org 0x1fe96
	str r2, [r0, #0]	@ 0001fe96 0260
.org 0x1fe98
	mov r2, ip	@ 0001fe98 6246
.org 0x1fe9a
	adds r2, #4	@ 0001fe9a 0432
.org 0x1fe9c
	adds r1, r1, r2	@ 0001fe9c 8918
.org 0x1fe9e
	str r5, [r1, #0]	@ 0001fe9e 0d60
.org 0x1fea0
	adds r3, #1	@ 0001fea0 0133
.org 0x1fea2
	lsls r0, r3, #1	@ 0001fea2 5800
.org 0x1fea4
	adds r0, r0, r3	@ 0001fea4 c018
.org 0x1fea6
	lsls r0, r0, #2	@ 0001fea6 8000
.org 0x1fea8
	adds r0, r0, r2	@ 0001fea8 8018
.org 0x1feaa
	movs r1, #0	@ 0001feaa 0021
.org 0x1feac
	str r1, [r0, #0]	@ 0001feac 0160
.org 0x1feae
	strh r3, [r6, #0]	@ 0001feae 3380
.org 0x1feb0
	pop {r4, r5, r6}	@ 0001feb0 70bc
.org 0x1feb2
	pop {r0}	@ 0001feb2 01bc
.org 0x1feb4
	bx r0	@ 0001feb4 0047
