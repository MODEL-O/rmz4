@ FUN_080c87d4  entry 0x080c87d4  size 82
.thumb
.org 0xc87d4
FUN_080c87d4:
	push {r4, r5, r6, r7, lr}	@ 000c87d4 f0b5
.org 0xc87d6
	adds r7, r0, #0	@ 000c87d6 071c
.org 0xc87d8
	lsls r1, r1, #24	@ 000c87d8 0906
.org 0xc87da
	lsrs r6, r1, #24	@ 000c87da 0e0e
.org 0xc87dc
	lsls r2, r2, #24	@ 000c87dc 1206
.org 0xc87de
	lsrs r4, r2, #24	@ 000c87de 140e
.org 0xc87e0
	lsls r3, r3, #24	@ 000c87e0 1b06
.org 0xc87e2
	lsrs r5, r3, #24	@ 000c87e2 1d0e
.org 0xc87e4
	ldr r0, [pc, #64]	@ 000c87e4 1048
.org 0xc87e6
	ldr r0, [r0, #0]	@ 000c87e6 0068
.org 0xc87e8
	bl 0x5500	@ 000c87e8 3cf78afe
.org 0xc87ec
	adds r3, r0, #0	@ 000c87ec 031c
.org 0xc87ee
	cmp r3, #0	@ 000c87ee 002b
.org 0xc87f0
	beq.n 0xc881e	@ 000c87f0 15d0
.org 0xc87f2
	adds r1, r3, #0	@ 000c87f2 191c
.org 0xc87f4
	adds r1, #37	@ 000c87f4 2531
.org 0xc87f6
	movs r2, #0	@ 000c87f6 0022
.org 0xc87f8
	movs r0, #8	@ 000c87f8 0820
.org 0xc87fa
	strb r0, [r1, #0]	@ 000c87fa 0870
.org 0xc87fc
	ldr r1, [pc, #44]	@ 000c87fc 0b49
.org 0xc87fe
	movs r0, #31	@ 000c87fe 1f20
.org 0xc8800
	strb r0, [r3, #9]	@ 000c8800 5872
.org 0xc8802
	ldr r0, [r1, #124]	@ 000c8802 c86f
.org 0xc8804
	ldr r0, [r0, #0]	@ 000c8804 0068
.org 0xc8806
	str r0, [r3, #20]	@ 000c8806 5861
.org 0xc8808
	movs r0, #0	@ 000c8808 0020
.org 0xc880a
	strh r2, [r3, #32]	@ 000c880a 1a84
.org 0xc880c
	adds r1, r3, #0	@ 000c880c 191c
.org 0xc880e
	adds r1, #34	@ 000c880e 2231
.org 0xc8810
	strb r0, [r1, #0]	@ 000c8810 0870
.org 0xc8812
	str r7, [r3, #40]	@ 000c8812 9f62
.org 0xc8814
	strb r6, [r3, #16]	@ 000c8814 1e74
.org 0xc8816
	strb r4, [r3, #17]	@ 000c8816 5c74
.org 0xc8818
	adds r0, r3, #0	@ 000c8818 181c
.org 0xc881a
	adds r0, #188	@ 000c881a bc30
.org 0xc881c
	strb r5, [r0, #0]	@ 000c881c 0570
.org 0xc881e
	adds r0, r3, #0	@ 000c881e 181c
.org 0xc8820
	pop {r4, r5, r6, r7}	@ 000c8820 f0bc
.org 0xc8822
	pop {r1}	@ 000c8822 02bc
.org 0xc8824
	bx r1	@ 000c8824 0847
