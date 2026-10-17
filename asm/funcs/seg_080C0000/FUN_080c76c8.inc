@ FUN_080c76c8  entry 0x080c76c8  size 86
.thumb
.org 0xc76c8
FUN_080c76c8:
	push {r4, r5, r6, r7, lr}	@ 000c76c8 f0b5
.org 0xc76ca
	adds r6, r0, #0	@ 000c76ca 061c
.org 0xc76cc
	adds r7, r1, #0	@ 000c76cc 0f1c
.org 0xc76ce
	lsls r2, r2, #24	@ 000c76ce 1206
.org 0xc76d0
	lsrs r4, r2, #24	@ 000c76d0 140e
.org 0xc76d2
	lsls r3, r3, #24	@ 000c76d2 1b06
.org 0xc76d4
	lsrs r5, r3, #24	@ 000c76d4 1d0e
.org 0xc76d6
	ldr r0, [pc, #72]	@ 000c76d6 1248
.org 0xc76d8
	ldr r0, [r0, #0]	@ 000c76d8 0068
.org 0xc76da
	bl 0x5500	@ 000c76da 3df711ff
.org 0xc76de
	adds r3, r0, #0	@ 000c76de 031c
.org 0xc76e0
	cmp r3, #0	@ 000c76e0 002b
.org 0xc76e2
	beq.n 0xc7716	@ 000c76e2 18d0
.org 0xc76e4
	adds r1, r3, #0	@ 000c76e4 191c
.org 0xc76e6
	adds r1, #37	@ 000c76e6 2531
.org 0xc76e8
	movs r2, #0	@ 000c76e8 0022
.org 0xc76ea
	movs r0, #8	@ 000c76ea 0820
.org 0xc76ec
	strb r0, [r1, #0]	@ 000c76ec 0870
.org 0xc76ee
	ldr r1, [pc, #52]	@ 000c76ee 0d49
.org 0xc76f0
	movs r0, #28	@ 000c76f0 1c20
.org 0xc76f2
	strb r0, [r3, #9]	@ 000c76f2 5872
.org 0xc76f4
	ldr r0, [r1, #112]	@ 000c76f4 086f
.org 0xc76f6
	ldr r0, [r0, #0]	@ 000c76f6 0068
.org 0xc76f8
	str r0, [r3, #20]	@ 000c76f8 5861
.org 0xc76fa
	movs r0, #0	@ 000c76fa 0020
.org 0xc76fc
	strh r2, [r3, #32]	@ 000c76fc 1a84
.org 0xc76fe
	adds r1, r3, #0	@ 000c76fe 191c
.org 0xc7700
	adds r1, #34	@ 000c7700 2231
.org 0xc7702
	strb r0, [r1, #0]	@ 000c7702 0870
.org 0xc7704
	str r6, [r3, #40]	@ 000c7704 9e62
.org 0xc7706
	ldr r0, [r7, #0]	@ 000c7706 3868
.org 0xc7708
	ldr r1, [r7, #4]	@ 000c7708 7968
.org 0xc770a
	str r0, [r3, #84]	@ 000c770a 5865
.org 0xc770c
	str r1, [r3, #88]	@ 000c770c 9965
.org 0xc770e
	strb r4, [r3, #17]	@ 000c770e 5c74
.org 0xc7710
	adds r0, r3, #0	@ 000c7710 181c
.org 0xc7712
	adds r0, #180	@ 000c7712 b430
.org 0xc7714
	strb r5, [r0, #0]	@ 000c7714 0570
.org 0xc7716
	adds r0, r3, #0	@ 000c7716 181c
.org 0xc7718
	pop {r4, r5, r6, r7}	@ 000c7718 f0bc
.org 0xc771a
	pop {r1}	@ 000c771a 02bc
.org 0xc771c
	bx r1	@ 000c771c 0847
