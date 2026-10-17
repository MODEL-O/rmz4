@ FUN_0811ebb0  entry 0x0811ebb0  size 120
.thumb
.org 0x11ebb0
FUN_0811ebb0:
	push {r4, r5, lr}	@ 0011ebb0 30b5
.org 0x11ebb2
	adds r2, r0, #0	@ 0011ebb2 021c
.org 0x11ebb4
	ldr r0, [pc, #40]	@ 0011ebb4 0a48
.org 0x11ebb6
	ldr r5, [r0, #4]	@ 0011ebb6 4568
.org 0x11ebb8
	ldr r0, [pc, #40]	@ 0011ebb8 0a48
.org 0x11ebba
	adds r1, r2, r0	@ 0011ebba 1118
.org 0x11ebbc
	ldrb r0, [r1, #6]	@ 0011ebbc 8879
.org 0x11ebbe
	cmp r0, #0	@ 0011ebbe 0028
.org 0x11ebc0
	beq.n 0x11ec2c	@ 0011ebc0 34d0
.org 0x11ebc2
	cmp r0, #41	@ 0011ebc2 2928
.org 0x11ebc4
	bne.n 0x11ec02	@ 0011ebc4 1dd1
.org 0x11ebc6
	ldrb r0, [r1, #8]	@ 0011ebc6 087a
.org 0x11ebc8
	adds r0, #1	@ 0011ebc8 0130
.org 0x11ebca
	strb r0, [r1, #8]	@ 0011ebca 0872
.org 0x11ebcc
	lsls r0, r0, #24	@ 0011ebcc 0006
.org 0x11ebce
	lsrs r0, r0, #24	@ 0011ebce 000e
.org 0x11ebd0
	cmp r0, #4	@ 0011ebd0 0428
.org 0x11ebd2
	bne.n 0x11ebe8	@ 0011ebd2 09d1
.org 0x11ebd4
	adds r0, r2, #0	@ 0011ebd4 101c
.org 0x11ebd6
	movs r1, #44	@ 0011ebd6 2c21
.org 0x11ebd8
	bl 0x11eb20	@ 0011ebd8 fff7a2ff
.org 0x11ebdc
	b.n 0x11ec02	@ 0011ebdc 11e0
.org 0x11ebde
	.byte 0x00	@ 0011ebde data
.org 0x11ebdf
	.byte 0x00	@ 0011ebdf data
.org 0x11ebe0
	.byte 0x80,0xf3,0x02,0x02	@ 0011ebe0 data
.org 0x11ebe4
	.byte 0xcc,0x0d,0x00,0x00	@ 0011ebe4 data
.org 0x11ebe8
	cmp r0, #8	@ 0011ebe8 0828
.org 0x11ebea
	bne.n 0x11ebf6	@ 0011ebea 04d1
.org 0x11ebec
	adds r0, r2, #0	@ 0011ebec 101c
.org 0x11ebee
	movs r1, #45	@ 0011ebee 2d21
.org 0x11ebf0
	bl 0x11eb20	@ 0011ebf0 fff796ff
.org 0x11ebf4
	b.n 0x11ec02	@ 0011ebf4 05e0
.org 0x11ebf6
	cmp r0, #12	@ 0011ebf6 0c28
.org 0x11ebf8
	bne.n 0x11ec02	@ 0011ebf8 03d1
.org 0x11ebfa
	adds r0, r2, #0	@ 0011ebfa 101c
.org 0x11ebfc
	movs r1, #41	@ 0011ebfc 2921
.org 0x11ebfe
	bl 0x11eb20	@ 0011ebfe fff78fff
.org 0x11ec02
	ldr r0, [pc, #48]	@ 0011ec02 0c48
.org 0x11ec04
	adds r5, r5, r0	@ 0011ec04 2d18
.org 0x11ec06
	movs r0, #0	@ 0011ec06 0020
.org 0x11ec08
	lsls r4, r0, #16	@ 0011ec08 0404
.org 0x11ec0a
	asrs r4, r4, #16	@ 0011ec0a 2414
.org 0x11ec0c
	lsls r0, r4, #1	@ 0011ec0c 6000
.org 0x11ec0e
	adds r0, r0, r4	@ 0011ec0e 0019
.org 0x11ec10
	lsls r0, r0, #2	@ 0011ec10 8000
.org 0x11ec12
	ldr r1, [pc, #36]	@ 0011ec12 0949
.org 0x11ec14
	adds r0, r0, r1	@ 0011ec14 4018
.org 0x11ec16
	adds r1, r5, #0	@ 0011ec16 291c
.org 0x11ec18
	movs r2, #12	@ 0011ec18 0c22
.org 0x11ec1a
	bl 0xb30	@ 0011ec1a e1f689ff
.org 0x11ec1e
	adds r4, #1	@ 0011ec1e 0134
.org 0x11ec20
	lsls r4, r4, #16	@ 0011ec20 2404
.org 0x11ec22
	adds r5, #64	@ 0011ec22 4035
.org 0x11ec24
	lsrs r0, r4, #16	@ 0011ec24 200c
.org 0x11ec26
	asrs r4, r4, #16	@ 0011ec26 2414
