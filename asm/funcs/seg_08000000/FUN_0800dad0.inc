@ FUN_0800dad0  entry 0x0800dad0  size 86
.thumb
.org 0xdad0
FUN_0800dad0:
	push {r4, r5, r6, lr}	@ 0000dad0 70b5
.org 0xdad2
	ldr r5, [pc, #84]	@ 0000dad2 154d
.org 0xdad4
	ldr r1, [pc, #84]	@ 0000dad4 1549
.org 0xdad6
	adds r0, r5, r1	@ 0000dad6 6818
.org 0xdad8
	ldrh r1, [r0, #0]	@ 0000dad8 0188
.org 0xdada
	lsrs r0, r1, #8	@ 0000dada 080a
.org 0xdadc
	cmp r0, #3	@ 0000dadc 0328
.org 0xdade
	bne.n 0xdb20	@ 0000dade 1fd1
.org 0xdae0
	movs r0, #255	@ 0000dae0 ff20
.org 0xdae2
	ands r0, r1	@ 0000dae2 0840
.org 0xdae4
	cmp r0, #3	@ 0000dae4 0328
.org 0xdae6
	bne.n 0xdb20	@ 0000dae6 1bd1
.org 0xdae8
	ldr r6, [pc, #68]	@ 0000dae8 114e
.org 0xdaea
	ldr r0, [pc, #72]	@ 0000daea 1248
.org 0xdaec
	adds r5, r5, r0	@ 0000daec 2d18
.org 0xdaee
	ldrb r0, [r5, #0]	@ 0000daee 2878
.org 0xdaf0
	lsrs r0, r0, #1	@ 0000daf0 4008
.org 0xdaf2
	lsls r1, r0, #2	@ 0000daf2 8100
.org 0xdaf4
	adds r1, r1, r0	@ 0000daf4 0918
.org 0xdaf6
	lsls r1, r1, #2	@ 0000daf6 8900
.org 0xdaf8
	ldr r4, [pc, #60]	@ 0000daf8 0f4c
.org 0xdafa
	adds r1, r1, r4	@ 0000dafa 0919
.org 0xdafc
	ldr r0, [r6, #0]	@ 0000dafc 3068
.org 0xdafe
	adds r0, r0, r1	@ 0000dafe 4018
.org 0xdb00
	movs r1, #128	@ 0000db00 8021
.org 0xdb02
	lsls r1, r1, #7	@ 0000db02 c901
.org 0xdb04
	bl 0x1ea4	@ 0000db04 f4f7cef9
.org 0xdb08
	ldrb r0, [r5, #0]	@ 0000db08 2878
.org 0xdb0a
	lsrs r0, r0, #1	@ 0000db0a 4008
.org 0xdb0c
	lsls r1, r0, #2	@ 0000db0c 8100
.org 0xdb0e
	adds r1, r1, r0	@ 0000db0e 0918
.org 0xdb10
	lsls r1, r1, #2	@ 0000db10 8900
.org 0xdb12
	adds r1, r1, r4	@ 0000db12 0919
.org 0xdb14
	ldr r0, [r6, #0]	@ 0000db14 3068
.org 0xdb16
	adds r0, r0, r1	@ 0000db16 4018
.org 0xdb18
	adds r0, #12	@ 0000db18 0c30
.org 0xdb1a
	movs r1, #0	@ 0000db1a 0021
.org 0xdb1c
	bl 0x2208	@ 0000db1c f4f774fb
.org 0xdb20
	pop {r4, r5, r6}	@ 0000db20 70bc
.org 0xdb22
	pop {r0}	@ 0000db22 01bc
.org 0xdb24
	bx r0	@ 0000db24 0047
