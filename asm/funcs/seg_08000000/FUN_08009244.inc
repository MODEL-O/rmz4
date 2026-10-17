@ FUN_08009244  entry 0x08009244  size 36
.thumb
.org 0x9244
FUN_08009244:
	push {lr}	@ 00009244 00b5
.org 0x9246
	adds r2, r0, #0	@ 00009246 021c
.org 0x9248
	ldr r0, [pc, #24]	@ 00009248 0648
.org 0x924a
	cmp r2, r0	@ 0000924a 8242
.org 0x924c
	ble.n 0x925e	@ 0000924c 07dd
.org 0x924e
	ldr r0, [pc, #24]	@ 0000924e 0648
.org 0x9250
	adds r1, r1, r0	@ 00009250 0918
.org 0x9252
	ldr r3, [pc, #24]	@ 00009252 064b
.org 0x9254
	adds r0, r2, r3	@ 00009254 d018
.org 0x9256
	lsls r0, r0, #2	@ 00009256 8000
.org 0x9258
	adds r0, r1, r0	@ 00009258 0818
.org 0x925a
	cmp r0, #0	@ 0000925a 0028
.org 0x925c
	bgt.n 0x9270	@ 0000925c 08dc
.org 0x925e
	movs r0, #0	@ 0000925e 0020
.org 0x9260
	b.n 0x9272	@ 00009260 07e0
.org 0x9262
	.byte 0x00	@ 00009262 data
.org 0x9263
	.byte 0x00	@ 00009263 data
.org 0x9264
	.byte 0xff,0x0b,0x00,0x00	@ 00009264 data
