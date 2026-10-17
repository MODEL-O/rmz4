@ FUN_0810d4a8  entry 0x0810d4a8  size 80
.thumb
.org 0x10d4a8
FUN_0810d4a8:
	push {r4, lr}	@ 0010d4a8 10b5
.org 0x10d4aa
	ldr r0, [pc, #76]	@ 0010d4aa 1348
.org 0x10d4ac
	ldr r1, [pc, #76]	@ 0010d4ac 1349
.org 0x10d4ae
	ldrh r2, [r1, #0]	@ 0010d4ae 0a88
.org 0x10d4b0
	movs r1, #12	@ 0010d4b0 0c21
.org 0x10d4b2
	ands r1, r2	@ 0010d4b2 1140
.org 0x10d4b4
	lsls r1, r1, #12	@ 0010d4b4 0903
.org 0x10d4b6
	ldr r2, [pc, #72]	@ 0010d4b6 124a
.org 0x10d4b8
	adds r1, r1, r2	@ 0010d4b8 8918
.org 0x10d4ba
	movs r2, #128	@ 0010d4ba 8022
.org 0x10d4bc
	lsls r2, r2, #2	@ 0010d4bc 9200
.org 0x10d4be
	bl 0x128be0	@ 0010d4be 1bf08ffb
.org 0x10d4c2
	movs r4, #0	@ 0010d4c2 0024
.org 0x10d4c4
	ldr r0, [pc, #60]	@ 0010d4c4 0f48
.org 0x10d4c6
	ldr r1, [pc, #64]	@ 0010d4c6 1049
.org 0x10d4c8
	movs r2, #8	@ 0010d4c8 0822
.org 0x10d4ca
	bl 0x128be0	@ 0010d4ca 1bf089fb
.org 0x10d4ce
	ldr r1, [pc, #60]	@ 0010d4ce 0f49
.org 0x10d4d0
	movs r2, #179	@ 0010d4d0 b322
.org 0x10d4d2
	lsls r2, r2, #3	@ 0010d4d2 d200
.org 0x10d4d4
	adds r0, r1, r2	@ 0010d4d4 8818
.org 0x10d4d6
	strb r4, [r0, #0]	@ 0010d4d6 0470
.org 0x10d4d8
	ldr r0, [pc, #52]	@ 0010d4d8 0d48
.org 0x10d4da
	adds r2, r1, r0	@ 0010d4da 0a18
.org 0x10d4dc
	movs r0, #30	@ 0010d4dc 1e20
.org 0x10d4de
	strb r0, [r2, #0]	@ 0010d4de 1070
.org 0x10d4e0
	ldr r2, [pc, #48]	@ 0010d4e0 0c4a
.org 0x10d4e2
	adds r0, r1, r2	@ 0010d4e2 8818
.org 0x10d4e4
	strb r4, [r0, #0]	@ 0010d4e4 0470
.org 0x10d4e6
	ldr r0, [pc, #48]	@ 0010d4e6 0c48
.org 0x10d4e8
	adds r1, r1, r0	@ 0010d4e8 0918
.org 0x10d4ea
	movs r0, #22	@ 0010d4ea 1620
.org 0x10d4ec
	strb r0, [r1, #0]	@ 0010d4ec 0870
.org 0x10d4ee
	bl 0x10d51c	@ 0010d4ee 00f015f8
.org 0x10d4f2
	pop {r4}	@ 0010d4f2 10bc
.org 0x10d4f4
	pop {r0}	@ 0010d4f4 01bc
.org 0x10d4f6
	bx r0	@ 0010d4f6 0047
