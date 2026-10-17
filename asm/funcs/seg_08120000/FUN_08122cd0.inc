@ FUN_08122cd0  entry 0x08122cd0  size 64
.thumb
.org 0x122cd0
FUN_08122cd0:
	push {r4, r5, r6, r7, lr}	@ 00122cd0 f0b5
.org 0x122cd2
	ldr r1, [pc, #12]	@ 00122cd2 0349
.org 0x122cd4
	ldrb r0, [r1, #0]	@ 00122cd4 0878
.org 0x122cd6
	cmp r0, #1	@ 00122cd6 0128
.org 0x122cd8
	beq.n 0x122ce4	@ 00122cd8 04d0
.org 0x122cda
	ldrb r0, [r1, #30]	@ 00122cda 887f
.org 0x122cdc
	b.n 0x122ce6	@ 00122cdc 03e0
.org 0x122cde
	.byte 0x00	@ 00122cde data
.org 0x122cdf
	.byte 0x00	@ 00122cdf data
.org 0x122ce0
	.byte 0x90,0x07,0x00,0x02	@ 00122ce0 data
.org 0x122ce4
	movs r0, #0	@ 00122ce4 0020
.org 0x122ce6
	lsls r0, r0, #24	@ 00122ce6 0006
.org 0x122ce8
	asrs r7, r0, #24	@ 00122ce8 0716
.org 0x122cea
	cmp r7, #1	@ 00122cea 012f
.org 0x122cec
	bne.n 0x122d0e	@ 00122cec 0fd1
.org 0x122cee
	ldr r4, [pc, #40]	@ 00122cee 0a4c
.org 0x122cf0
	ldr r5, [pc, #40]	@ 00122cf0 0a4d
.org 0x122cf2
	movs r6, #160	@ 00122cf2 a026
.org 0x122cf4
	lsls r6, r6, #1	@ 00122cf4 7600
.org 0x122cf6
	adds r0, r4, #0	@ 00122cf6 201c
.org 0x122cf8
	adds r1, r5, #0	@ 00122cf8 291c
.org 0x122cfa
	movs r2, #80	@ 00122cfa 5022
.org 0x122cfc
	bl 0x128be0	@ 00122cfc 05f070ff
.org 0x122d00
	adds r4, r4, r6	@ 00122d00 a419
.org 0x122d02
	adds r5, r5, r6	@ 00122d02 ad19
.org 0x122d04
	ldr r2, [pc, #24]	@ 00122d04 064a
.org 0x122d06
	adds r0, r4, #0	@ 00122d06 201c
.org 0x122d08
	adds r1, r5, #0	@ 00122d08 291c
.org 0x122d0a
	bl 0x128be4	@ 00122d0a 05f06bff
.org 0x122d0e
	adds r0, r7, #0	@ 00122d0e 381c
