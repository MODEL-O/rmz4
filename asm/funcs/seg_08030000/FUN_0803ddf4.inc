@ FUN_0803ddf4  entry 0x0803ddf4  size 162
.thumb
.org 0x3ddf4
FUN_0803ddf4:
	push {r4, r5, lr}	@ 0003ddf4 30b5
.org 0x3ddf6
	adds r5, r0, #0	@ 0003ddf6 051c
.org 0x3ddf8
	adds r0, #180	@ 0003ddf8 b430
.org 0x3ddfa
	ldr r4, [r0, #0]	@ 0003ddfa 0468
.org 0x3ddfc
	adds r2, r4, #0	@ 0003ddfc 221c
.org 0x3ddfe
	adds r2, #180	@ 0003ddfe b432
.org 0x3de00
	ldr r1, [pc, #60]	@ 0003de00 0f49
.org 0x3de02
	adds r0, r4, r1	@ 0003de02 6018
.org 0x3de04
	ldrh r1, [r0, #0]	@ 0003de04 0188
.org 0x3de06
	movs r0, #128	@ 0003de06 8020
.org 0x3de08
	lsls r0, r0, #8	@ 0003de08 0002
.org 0x3de0a
	ands r0, r1	@ 0003de0a 0840
.org 0x3de0c
	cmp r0, #0	@ 0003de0c 0028
.org 0x3de0e
	bne.n 0x3de98	@ 0003de0e 43d1
.org 0x3de10
	ldrh r1, [r2, #20]	@ 0003de10 918a
.org 0x3de12
	movs r0, #2	@ 0003de12 0220
.org 0x3de14
	ands r0, r1	@ 0003de14 0840
.org 0x3de16
	cmp r0, #0	@ 0003de16 0028
.org 0x3de18
	beq.n 0x3de98	@ 0003de18 3ed0
.org 0x3de1a
	ldrb r0, [r2, #12]	@ 0003de1a 107b
.org 0x3de1c
	cmp r0, #0	@ 0003de1c 0028
.org 0x3de1e
	bne.n 0x3de44	@ 0003de1e 11d1
.org 0x3de20
	movs r1, #150	@ 0003de20 9621
.org 0x3de22
	lsls r1, r1, #2	@ 0003de22 8900
.org 0x3de24
	adds r0, r4, r1	@ 0003de24 6018
.org 0x3de26
	ldr r0, [r0, #0]	@ 0003de26 0068
.org 0x3de28
	movs r1, #128	@ 0003de28 8021
.org 0x3de2a
	lsls r1, r1, #6	@ 0003de2a 8901
.org 0x3de2c
	ands r0, r1	@ 0003de2c 0840
.org 0x3de2e
	cmp r0, #0	@ 0003de2e 0028
.org 0x3de30
	beq.n 0x3de44	@ 0003de30 08d0
.org 0x3de32
	ldrb r0, [r5, #19]	@ 0003de32 e87c
.org 0x3de34
	cmp r0, #0	@ 0003de34 0028
.org 0x3de36
	bne.n 0x3de90	@ 0003de36 2bd1
.org 0x3de38
	adds r0, r4, #0	@ 0003de38 201c
.org 0x3de3a
	movs r1, #0	@ 0003de3a 0021
.org 0x3de3c
	b.n 0x3de6a	@ 0003de3c 15e0
.org 0x3de3e
	.byte 0x00	@ 0003de3e data
.org 0x3de3f
	.byte 0x00	@ 0003de3f data
.org 0x3de40
	.byte 0x52,0x02,0x00,0x00	@ 0003de40 data
.org 0x3de44
	adds r0, r4, #0	@ 0003de44 201c
.org 0x3de46
	adds r0, #180	@ 0003de46 b430
.org 0x3de48
	ldrb r0, [r0, #13]	@ 0003de48 407b
.org 0x3de4a
	cmp r0, #0	@ 0003de4a 0028
.org 0x3de4c
	bne.n 0x3de98	@ 0003de4c 24d1
.org 0x3de4e
	movs r1, #150	@ 0003de4e 9621
.org 0x3de50
	lsls r1, r1, #2	@ 0003de50 8900
.org 0x3de52
	adds r0, r4, r1	@ 0003de52 6018
.org 0x3de54
	ldr r0, [r0, #0]	@ 0003de54 0068
.org 0x3de56
	movs r1, #128	@ 0003de56 8021
.org 0x3de58
	lsls r1, r1, #8	@ 0003de58 0902
.org 0x3de5a
	ands r0, r1	@ 0003de5a 0840
.org 0x3de5c
	cmp r0, #0	@ 0003de5c 0028
.org 0x3de5e
	beq.n 0x3de98	@ 0003de5e 1bd0
.org 0x3de60
	ldrb r0, [r5, #19]	@ 0003de60 e87c
.org 0x3de62
	cmp r0, #0	@ 0003de62 0028
.org 0x3de64
	bne.n 0x3de90	@ 0003de64 14d1
.org 0x3de66
	adds r0, r4, #0	@ 0003de66 201c
.org 0x3de68
	movs r1, #1	@ 0003de68 0121
.org 0x3de6a
	bl 0x3a428	@ 0003de6a fcf7ddfa
.org 0x3de6e
	lsls r0, r0, #24	@ 0003de6e 0006
.org 0x3de70
	lsrs r0, r0, #24	@ 0003de70 000e
.org 0x3de72
	cmp r0, #2	@ 0003de72 0228
.org 0x3de74
	bne.n 0x3de90	@ 0003de74 0cd1
.org 0x3de76
	ldr r1, [pc, #28]	@ 0003de76 0749
.org 0x3de78
	adds r0, r4, r1	@ 0003de78 6018
.org 0x3de7a
	ldrb r0, [r0, #0]	@ 0003de7a 0078
.org 0x3de7c
	cmp r0, #0	@ 0003de7c 0028
.org 0x3de7e
	bne.n 0x3de90	@ 0003de7e 07d1
.org 0x3de80
	adds r0, r4, #0	@ 0003de80 201c
.org 0x3de82
	adds r1, r5, #0	@ 0003de82 291c
.org 0x3de84
	movs r2, #6	@ 0003de84 0622
.org 0x3de86
	bl 0x3b2a4	@ 0003de86 fdf70dfa
.org 0x3de8a
	ldrb r0, [r5, #19]	@ 0003de8a e87c
.org 0x3de8c
	adds r0, #1	@ 0003de8c 0130
.org 0x3de8e
	strb r0, [r5, #19]	@ 0003de8e e874
.org 0x3de90
	movs r0, #1	@ 0003de90 0120
.org 0x3de92
	b.n 0x3de9a	@ 0003de92 02e0
.org 0x3de94
	.byte 0x65,0x01,0x00,0x00	@ 0003de94 data
