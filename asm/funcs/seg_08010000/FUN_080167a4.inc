@ FUN_080167a4  entry 0x080167a4  size 112
.thumb
.org 0x167a4
FUN_080167a4:
	push {r4, r5, lr}	@ 000167a4 30b5
.org 0x167a6
	adds r4, r0, #0	@ 000167a6 041c
.org 0x167a8
	ldrb r0, [r4, #14]	@ 000167a8 a07b
.org 0x167aa
	cmp r0, #0	@ 000167aa 0028
.org 0x167ac
	bne.n 0x1680e	@ 000167ac 2fd1
.org 0x167ae
	movs r0, #116	@ 000167ae 7420
.org 0x167b0
	bl 0x2b10	@ 000167b0 ecf7aef9
.org 0x167b4
	ldr r5, [pc, #92]	@ 000167b4 174d
.org 0x167b6
	adds r0, r5, #0	@ 000167b6 281c
.org 0x167b8
	movs r1, #0	@ 000167b8 0021
.org 0x167ba
	movs r2, #0	@ 000167ba 0022
.org 0x167bc
	bl 0xf83fc	@ 000167bc e1f01efe
.org 0x167c0
	str r0, [r4, #104]	@ 000167c0 a066
.org 0x167c2
	adds r0, r5, #0	@ 000167c2 281c
.org 0x167c4
	adds r0, #8	@ 000167c4 0830
.org 0x167c6
	movs r1, #0	@ 000167c6 0021
.org 0x167c8
	movs r2, #0	@ 000167c8 0022
.org 0x167ca
	bl 0xf83fc	@ 000167ca e1f017fe
.org 0x167ce
	str r0, [r4, #108]	@ 000167ce e066
.org 0x167d0
	adds r0, r5, #0	@ 000167d0 281c
.org 0x167d2
	adds r0, #16	@ 000167d2 1030
.org 0x167d4
	movs r1, #0	@ 000167d4 0021
.org 0x167d6
	movs r2, #0	@ 000167d6 0022
.org 0x167d8
	bl 0xf83fc	@ 000167d8 e1f010fe
.org 0x167dc
	str r0, [r4, #112]	@ 000167dc 2067
.org 0x167de
	adds r0, r5, #0	@ 000167de 281c
.org 0x167e0
	adds r0, #24	@ 000167e0 1830
.org 0x167e2
	movs r1, #2	@ 000167e2 0221
.org 0x167e4
	movs r2, #0	@ 000167e4 0022
.org 0x167e6
	bl 0xf5308	@ 000167e6 def08ffd
.org 0x167ea
	str r0, [r4, #116]	@ 000167ea 6067
.org 0x167ec
	adds r0, r5, #0	@ 000167ec 281c
.org 0x167ee
	adds r0, #32	@ 000167ee 2030
.org 0x167f0
	movs r1, #2	@ 000167f0 0221
.org 0x167f2
	movs r2, #0	@ 000167f2 0022
.org 0x167f4
	bl 0xf5308	@ 000167f4 def088fd
.org 0x167f8
	str r0, [r4, #120]	@ 000167f8 a067
.org 0x167fa
	adds r0, r5, #0	@ 000167fa 281c
.org 0x167fc
	adds r0, #40	@ 000167fc 2830
.org 0x167fe
	movs r1, #2	@ 000167fe 0221
.org 0x16800
	movs r2, #0	@ 00016800 0022
.org 0x16802
	bl 0xf5308	@ 00016802 def081fd
.org 0x16806
	str r0, [r4, #124]	@ 00016806 e067
.org 0x16808
	ldrb r0, [r4, #14]	@ 00016808 a07b
.org 0x1680a
	adds r0, #1	@ 0001680a 0130
.org 0x1680c
	strb r0, [r4, #14]	@ 0001680c a073
.org 0x1680e
	pop {r4, r5}	@ 0001680e 30bc
.org 0x16810
	pop {r0}	@ 00016810 01bc
.org 0x16812
	bx r0	@ 00016812 0047
