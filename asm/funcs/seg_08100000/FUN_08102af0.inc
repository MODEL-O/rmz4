@ FUN_08102af0  entry 0x08102af0  size 74
.thumb
.org 0x102af0
FUN_08102af0:
	push {r4, r5, r6, r7, lr}	@ 00102af0 f0b5
.org 0x102af2
	adds r7, r0, #0	@ 00102af2 071c
.org 0x102af4
	adds r0, #190	@ 00102af4 be30
.org 0x102af6
	movs r6, #0	@ 00102af6 0026
.org 0x102af8
	movs r5, #0	@ 00102af8 0025
.org 0x102afa
	movs r1, #242	@ 00102afa f221
.org 0x102afc
	lsls r1, r1, #7	@ 00102afc c901
.org 0x102afe
	strh r1, [r0, #0]	@ 00102afe 0180
.org 0x102b00
	adds r0, #2	@ 00102b00 0230
.org 0x102b02
	strh r1, [r0, #0]	@ 00102b02 0180
.org 0x102b04
	adds r0, #2	@ 00102b04 0230
.org 0x102b06
	strh r1, [r0, #0]	@ 00102b06 0180
.org 0x102b08
	ldrb r1, [r7, #10]	@ 00102b08 b97a
.org 0x102b0a
	movs r0, #4	@ 00102b0a 0420
.org 0x102b0c
	orrs r0, r1	@ 00102b0c 0843
.org 0x102b0e
	strb r0, [r7, #10]	@ 00102b0e b872
.org 0x102b10
	adds r4, r7, #0	@ 00102b10 3c1c
.org 0x102b12
	adds r4, #116	@ 00102b12 7434
.org 0x102b14
	ldr r1, [pc, #36]	@ 00102b14 0949
.org 0x102b16
	adds r2, r7, #0	@ 00102b16 3a1c
.org 0x102b18
	adds r2, #84	@ 00102b18 5432
.org 0x102b1a
	adds r0, r4, #0	@ 00102b1a 201c
.org 0x102b1c
	movs r3, #1	@ 00102b1c 0123
.org 0x102b1e
	bl 0x5760	@ 00102b1e 02f71ffe
.org 0x102b22
	str r7, [r4, #44]	@ 00102b22 e762
.org 0x102b24
	str r5, [r4, #36]	@ 00102b24 6562
.org 0x102b26
	adds r1, r7, #0	@ 00102b26 391c
.org 0x102b28
	adds r1, #185	@ 00102b28 b931
.org 0x102b2a
	movs r0, #1	@ 00102b2a 0120
.org 0x102b2c
	strb r0, [r1, #0]	@ 00102b2c 0870
.org 0x102b2e
	str r5, [r7, #92]	@ 00102b2e fd65
.org 0x102b30
	strb r6, [r7, #13]	@ 00102b30 7e73
.org 0x102b32
	strb r6, [r7, #14]	@ 00102b32 be73
.org 0x102b34
	pop {r4, r5, r6, r7}	@ 00102b34 f0bc
.org 0x102b36
	pop {r0}	@ 00102b36 01bc
.org 0x102b38
	bx r0	@ 00102b38 0047
