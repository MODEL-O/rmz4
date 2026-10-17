@ FUN_0809ded4  entry 0x0809ded4  size 92
.thumb
.org 0x9ded4
FUN_0809ded4:
	push {r4, r5, lr}	@ 0009ded4 30b5
.org 0x9ded6
	adds r4, r0, #0	@ 0009ded6 041c
.org 0x9ded8
	movs r5, #192	@ 0009ded8 c025
.org 0x9deda
	lsls r5, r5, #4	@ 0009deda 2d01
.org 0x9dedc
	ldr r0, [r4, #88]	@ 0009dedc a06d
.org 0x9dede
	movs r1, #128	@ 0009dede 8021
.org 0x9dee0
	lsls r1, r1, #4	@ 0009dee0 0901
.org 0x9dee2
	adds r2, r0, r1	@ 0009dee2 4218
.org 0x9dee4
	ldrb r1, [r4, #10]	@ 0009dee4 a17a
.org 0x9dee6
	movs r0, #16	@ 0009dee6 1020
.org 0x9dee8
	ands r0, r1	@ 0009dee8 0840
.org 0x9deea
	cmp r0, #0	@ 0009deea 0028
.org 0x9deec
	bne.n 0x9def6	@ 0009deec 03d1
.org 0x9deee
	lsls r0, r5, #8	@ 0009deee 2802
.org 0x9def0
	negs r0, r0	@ 0009def0 4042
.org 0x9def2
	adds r0, #255	@ 0009def2 ff30
.org 0x9def4
	asrs r5, r0, #8	@ 0009def4 0512
.org 0x9def6
	ldr r0, [r4, #84]	@ 0009def6 606d
.org 0x9def8
	adds r5, r5, r0	@ 0009def8 2d18
.org 0x9defa
	adds r0, r5, #0	@ 0009defa 281c
.org 0x9defc
	adds r1, r2, #0	@ 0009defc 111c
.org 0x9defe
	bl 0x7c7c	@ 0009defe 69f7bdfe
.org 0x9df02
	lsls r0, r0, #16	@ 0009df02 0004
.org 0x9df04
	lsrs r0, r0, #16	@ 0009df04 000c
.org 0x9df06
	cmp r0, #0	@ 0009df06 0028
.org 0x9df08
	beq.n 0x9df2c	@ 0009df08 10d0
.org 0x9df0a
	cmp r0, #15	@ 0009df0a 0f28
.org 0x9df0c
	beq.n 0x9df2c	@ 0009df0c 0ed0
.org 0x9df0e
	ldr r0, [r4, #88]	@ 0009df0e a06d
.org 0x9df10
	ldr r1, [pc, #20]	@ 0009df10 0549
.org 0x9df12
	adds r2, r0, r1	@ 0009df12 4218
.org 0x9df14
	adds r0, r5, #0	@ 0009df14 281c
.org 0x9df16
	adds r1, r2, #0	@ 0009df16 111c
.org 0x9df18
	bl 0x7c7c	@ 0009df18 69f7b0fe
.org 0x9df1c
	lsls r0, r0, #16	@ 0009df1c 0004
.org 0x9df1e
	lsrs r0, r0, #16	@ 0009df1e 000c
.org 0x9df20
	cmp r0, #1	@ 0009df20 0128
.org 0x9df22
	beq.n 0x9df2c	@ 0009df22 03d0
.org 0x9df24
	movs r0, #0	@ 0009df24 0020
.org 0x9df26
	b.n 0x9df2e	@ 0009df26 02e0
.org 0x9df28
	.byte 0x00,0xf8,0xff,0xff	@ 0009df28 data
.org 0x9df2c
	movs r0, #1	@ 0009df2c 0120
.org 0x9df2e
	pop {r4, r5}	@ 0009df2e 30bc
