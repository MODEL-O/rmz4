@ FUN_08002a50  entry 0x08002a50  size 42
.thumb
.org 0x2a50
FUN_08002a50:
	push {r4, r5, lr}	@ 00002a50 30b5
.org 0x2a52
	ldr r0, [pc, #40]	@ 00002a52 0a48
.org 0x2a54
	lsls r0, r0, #16	@ 00002a54 0004
.org 0x2a56
	lsrs r0, r0, #16	@ 00002a56 000c
.org 0x2a58
	cmp r0, #0	@ 00002a58 0028
.org 0x2a5a
	beq.n 0x2a74	@ 00002a5a 0bd0
.org 0x2a5c
	ldr r5, [pc, #32]	@ 00002a5c 084d
.org 0x2a5e
	adds r4, r0, #0	@ 00002a5e 041c
.org 0x2a60
	ldr r0, [r5, #0]	@ 00002a60 2868
.org 0x2a62
	ldr r1, [pc, #32]	@ 00002a62 0849
.org 0x2a64
	movs r2, #128	@ 00002a64 8022
.org 0x2a66
	lsls r2, r2, #1	@ 00002a66 5200
.org 0x2a68
	bl 0x128714	@ 00002a68 25f154fe
.org 0x2a6c
	adds r5, #12	@ 00002a6c 0c35
.org 0x2a6e
	subs r4, #1	@ 00002a6e 013c
.org 0x2a70
	cmp r4, #0	@ 00002a70 002c
.org 0x2a72
	bne.n 0x2a60	@ 00002a72 f5d1
.org 0x2a74
	pop {r4, r5}	@ 00002a74 30bc
.org 0x2a76
	pop {r0}	@ 00002a76 01bc
.org 0x2a78
	bx r0	@ 00002a78 0047
