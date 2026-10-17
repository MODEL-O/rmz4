@ FUN_0800cc20  entry 0x0800cc20  size 102
.thumb
.org 0xcc20
FUN_0800cc20:
	push {r4, r5, lr}	@ 0000cc20 30b5
.org 0xcc22
	adds r3, r0, #0	@ 0000cc22 031c
.org 0xcc24
	ldrb r4, [r3, #14]	@ 0000cc24 9c7b
.org 0xcc26
	ldr r5, [pc, #48]	@ 0000cc26 0c4d
.org 0xcc28
	cmp r4, #0	@ 0000cc28 002c
.org 0xcc2a
	bne.n 0xcc42	@ 0000cc2a 0ad1
.org 0xcc2c
	ldr r1, [pc, #44]	@ 0000cc2c 0b49
.org 0xcc2e
	movs r2, #0	@ 0000cc2e 0022
.org 0xcc30
	ldr r0, [pc, #44]	@ 0000cc30 0b48
.org 0xcc32
	strh r0, [r1, #0]	@ 0000cc32 0880
.org 0xcc34
	ldr r0, [pc, #44]	@ 0000cc34 0b48
.org 0xcc36
	strh r0, [r1, #2]	@ 0000cc36 4880
.org 0xcc38
	ldr r1, [pc, #44]	@ 0000cc38 0b49
.org 0xcc3a
	adds r0, r5, r1	@ 0000cc3a 6818
.org 0xcc3c
	strb r2, [r0, #0]	@ 0000cc3c 0270
.org 0xcc3e
	adds r0, r4, #1	@ 0000cc3e 601c
.org 0xcc40
	strb r0, [r3, #14]	@ 0000cc40 9873
.org 0xcc42
	ldr r2, [r3, #52]	@ 0000cc42 5a6b
.org 0xcc44
	ldr r0, [pc, #36]	@ 0000cc44 0948
.org 0xcc46
	adds r1, r2, r0	@ 0000cc46 1118
.org 0xcc48
	ldr r0, [pc, #36]	@ 0000cc48 0948
.org 0xcc4a
	cmp r1, r0	@ 0000cc4a 8142
.org 0xcc4c
	bhi.n 0xcc78	@ 0000cc4c 14d8
.org 0xcc4e
	ldr r0, [pc, #36]	@ 0000cc4e 0948
.org 0xcc50
	adds r1, r5, r0	@ 0000cc50 2918
.org 0xcc52
	movs r0, #208	@ 0000cc52 d020
.org 0xcc54
	lsls r0, r0, #9	@ 0000cc54 4002
.org 0xcc56
	b.n 0xcca0	@ 0000cc56 23e0
.org 0xcc58
	.byte 0xb0,0x0a,0x00,0x02	@ 0000cc58 data
.org 0xcc5c
	.byte 0x40,0x0a,0x00,0x02	@ 0000cc5c data
.org 0xcc60
	.byte 0x44,0x3b,0x00,0x00	@ 0000cc60 data
.org 0xcc64
	.byte 0x0a,0x0c,0x00,0x00	@ 0000cc64 data
.org 0xcc68
	.byte 0x29,0xd0,0x02,0x00	@ 0000cc68 data
.org 0xcc6c
	.byte 0x1f,0xf6,0xff,0xff	@ 0000cc6c data
.org 0xcc70
	.byte 0xef,0x03,0x00,0x00	@ 0000cc70 data
.org 0xcc74
	.byte 0x0c,0xc0,0x02,0x00	@ 0000cc74 data
.org 0xcc78
	ldr r0, [pc, #16]	@ 0000cc78 0448
.org 0xcc7a
	adds r1, r2, r0	@ 0000cc7a 1118
.org 0xcc7c
	ldr r0, [pc, #16]	@ 0000cc7c 0448
.org 0xcc7e
	cmp r1, r0	@ 0000cc7e 8142
.org 0xcc80
	bhi.n 0xcc98	@ 0000cc80 0ad8
.org 0xcc82
	ldr r0, [pc, #16]	@ 0000cc82 0448
.org 0xcc84
	adds r1, r5, r0	@ 0000cc84 2918
